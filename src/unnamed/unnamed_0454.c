#include "protos.h"

void f_0045402c(void) /* sub_45402C */
{
    FN_ENTER(0x0045402c);
    /* 0045402c: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 00454031: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x454036u); f_006bb100();
    /* 00454036: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00454037: ret  */ FN_RET(0x0045402c); r_esp += 4; return;
}

void f_00454038(void) /* sub_454038 */
{
    FN_ENTER(0x00454038);
    /* 00454038: call 0x454040 */ r_esp -= 4; W32(r_esp, 0x45403du); f_00454040();
    /* 0045403d: ret  */ FN_RET(0x00454038); r_esp += 4; return;
}

void f_00454040(void) /* sub_454040 */
{
    FN_ENTER(0x00454040);
    /* 00454040: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 00454045: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x45404au); f_006bb254();
    /* 0045404a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045404c: mov eax, 0 */ r_eax = 0x0u;
    /* 00454051: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00454054: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00454055: ret  */ FN_RET(0x00454040); r_esp += 4; return;
}

void f_00454058(void) /* sub_454058 */
{
    FN_ENTER(0x00454058);
    /* 00454058: call 0x454040 */ r_esp -= 4; W32(r_esp, 0x45405du); f_00454040();
    /* 0045405d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045405f: je 0x454070 */ if (fZ) goto L_00454070;
L_00454061:; BB(0x00454061);
    /* 00454061: call 0x454074 */ r_esp -= 4; W32(r_esp, 0x454066u); f_00454074();
    /* 00454066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00454068: jne 0x454070 */ if (!fZ) goto L_00454070;
L_0045406a:; BB(0x0045406a);
    /* 0045406a: mov eax, 1 */ r_eax = 0x1u;
    /* 0045406f: ret  */ FN_RET(0x00454058); r_esp += 4; return;
L_00454070:; BB(0x00454070);
    /* 00454070: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00454072: ret  */ FN_RET(0x00454058); r_esp += 4; return;
}

void f_00454074(void) /* sub_454074 */
{
    FN_ENTER(0x00454074);
    /* 00454074: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 00454079: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x45407eu); f_006bb254();
    /* 0045407e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00454080: mov eax, 0 */ r_eax = 0x0u;
    /* 00454085: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00454088: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00454089: ret  */ FN_RET(0x00454074); r_esp += 4; return;
}

void f_0045408c(void) /* sub_45408C */
{
    FN_ENTER(0x0045408c);
    /* 0045408c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045408d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045408f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00454091: push 0x8cf280 */ { u32 v = 0x8cf280u; r_esp -= 4; W32(r_esp, v); }
    /* 00454096: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045409c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045409d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004540a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004540a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004540aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004540ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004540b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004540b3: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 004540b5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004540bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4540c1u); f_005caba4();
    /* 004540c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004540c2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004540c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004540c7: je 0x4540fd */ if (fZ) goto L_004540fd;
L_004540c9:; BB(0x004540c9);
    /* 004540c9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004540d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004540d7: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004540dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004540e0: call 0x454104 */ r_esp -= 4; W32(r_esp, 0x4540e5u); f_00454104();
    /* 004540e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004540e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004540ef:; BB(0x004540ef);
    /* 004540ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004540f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004540f9: mov esp, ebp */ r_esp = r_ebp;
    /* 004540fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004540fc: ret  */ FN_RET(0x0045408c); r_esp += 4; return;
L_004540fd:; BB(0x004540fd);
    /* 004540fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004540ff: jmp 0x4540ef */ goto L_004540ef;
}

void f_00454104(void) /* sub_454104 */
{
    FN_ENTER(0x00454104);
    /* 00454104: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454105: mov ebp, esp */ r_ebp = r_esp;
    /* 00454107: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00454109: push 0x8cf29c */ { u32 v = 0x8cf29cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045410e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00454114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454115: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045411c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045411f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00454122: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00454125: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00454128: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045412b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045412e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00454131: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x454136u); f_008193cc();
    /* 00454136: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045413d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454140: mov dword ptr [edx], 0xaf7508 */ W32((u32)(r_edx), 0xaf7508u);
    /* 00454146: mov eax, dword ptr [0x9a5d34] */ r_eax = R32((u32)(0x9a5d34u));
    /* 0045414b: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 00454151: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00454153: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00454156: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00454158: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45415du); f_005b8610();
    /* 0045415d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454160: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00454162: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00454165: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00454167: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45416cu); f_005b8624();
    /* 0045416c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045416f: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00454171: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00454174: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00454176: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45417bu); f_005b8638();
    /* 0045417b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045417e: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00454180: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00454183: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00454185: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45418au); f_005b8638();
    /* 0045418a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045418d: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00454190: call 0x4541e8 */ r_esp -= 4; W32(r_esp, 0x454195u); f_004541e8();
    /* 00454195: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00454198: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045419b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045419d: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004541a0: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 004541a7: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 004541aa: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 004541ad: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 004541b0: mov dword ptr [eax + 0x2c], 0x3f7d70a4 */ W32((u32)(r_eax+0x2cu), 0x3f7d70a4u);
    /* 004541b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004541ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004541c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004541c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004541c4: ret 4 */ FN_RET(0x00454104); r_esp += 8; return;
}

void f_004541c8(void) /* sub_4541C8 */
{
    FN_ENTER(0x004541c8);
    /* 004541c8: mov dword ptr [0xa451f4], 0x3f800000 */ W32((u32)(0xa451f4u), 0x3f800000u);
    /* 004541d2: mov dword ptr [0xa451f8], 0x41000000 */ W32((u32)(0xa451f8u), 0x41000000u);
    /* 004541dc: mov dword ptr [0xa451fc], 0x3fc00000 */ W32((u32)(0xa451fcu), 0x3fc00000u);
    /* 004541e6: ret  */ FN_RET(0x004541c8); r_esp += 4; return;
}

void f_004541e8(void) /* sub_4541E8 */
{
    FN_ENTER(0x004541e8);
    /* 004541e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004541ea: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 004541ed: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 004541f0: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 004541f3: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 004541f6: ret  */ FN_RET(0x004541e8); r_esp += 4; return;
}

void f_004541f8(void) /* sub_4541F8 */
{
    FN_ENTER(0x004541f8);
    /* 004541f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004541f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004541fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004541fd: push 0x8cf2b8 */ { u32 v = 0x8cf2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00454202: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00454208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454209: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00454210: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454213: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00454216: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00454219: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0045421c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0045421f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00454222: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00454225: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045422c: mov eax, ecx */ r_eax = r_ecx;
    /* 0045422e: mov dword ptr [eax], 0xaf75a0 */ W32((u32)(r_eax), 0xaf75a0u);
    /* 00454234: lea ecx, [eax + 0x380] */ r_ecx = (u32)(r_eax+0x380u);
    /* 0045423a: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x45423fu); f_0048ead0();
    /* 0045423f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00454241:; BB(0x00454241);
    /* 00454241: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454244: mov eax, dword ptr [eax + esi*4 + 0x400] */ r_eax = R32((u32)(r_eax+r_esi*4+0x400u));
    /* 0045424b: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0045424e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454250: je 0x454267 */ if (fZ) goto L_00454267;
L_00454252:; BB(0x00454252);
    /* 00454252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454253: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x454258u); f_005cdcc0();
    /* 00454258: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00454259: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045425c: mov dword ptr [eax + ebx*2 + 0x400], 0 */ W32((u32)(r_eax+r_ebx*2+0x400u), 0x0u);
L_00454267:; BB(0x00454267);
    /* 00454267: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045426a: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045426d: jl 0x454241 */ if ((fS!=fO)) goto L_00454241;
L_0045426f:; BB(0x0045426f);
    /* 0045426f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00454271:; BB(0x00454271);
    /* 00454271: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454274: mov ecx, dword ptr [eax + esi*4 + 0x434] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x434u));
    /* 0045427b: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0045427e: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x454283u); f_005883f0();
    /* 00454283: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454286: mov dword ptr [eax + ebx*2 + 0x434], 0 */ W32((u32)(r_eax+r_ebx*2+0x434u), 0x0u);
    /* 00454291: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454294: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454297: jl 0x454271 */ if ((fS!=fO)) goto L_00454271;
L_00454299:; BB(0x00454299);
    /* 00454299: mov ecx, dword ptr [eax + 0x488] */ r_ecx = R32((u32)(r_eax+0x488u));
    /* 0045429f: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x4542a4u); f_005883f0();
    /* 004542a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004542a7: mov dword ptr [ecx + 0x488], 0 */ W32((u32)(r_ecx+0x488u), 0x0u);
    /* 004542b1: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4542b6u); f_007b9c8c();
    /* 004542b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004542b9: mov dword ptr [eax + 0x39c], 0 */ W32((u32)(r_eax+0x39cu), 0x0u);
    /* 004542c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004542ca: mov ecx, eax */ r_ecx = r_eax;
    /* 004542cc: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x4542d1u); f_0078638c();
    /* 004542d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004542d4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004542d6: jne 0x4542f1 */ if (!fZ) goto L_004542f1;
L_004542d8:; BB(0x004542d8);
    /* 004542d8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004542db: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004542de: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004542e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004542e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004542eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004542ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004542ee: ret 4 */ FN_RET(0x004541f8); r_esp += 8; return;
L_004542f1:; BB(0x004542f1);
    /* 004542f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004542f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004542f5: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4542fau); f_005c2f74();
    /* 004542fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004542fb: jmp 0x4542d8 */ goto L_004542d8;
}

void f_00454255(void)
{
    FN_ENTER(0x00454255);
    goto L_00454255;
L_00454241:; BB(0x00454241);
    /* 00454241: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454244: mov eax, dword ptr [eax + esi*4 + 0x400] */ r_eax = R32((u32)(r_eax+r_esi*4+0x400u));
    /* 0045424b: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0045424e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454250: je 0x454267 */ if (fZ) goto L_00454267;
L_00454252:; BB(0x00454252);
    /* 00454252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454253: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x454258u); f_005cdcc0();
L_00454255:; BB(0x00454255);
    /* 00454255: lcall 0xec45, 0x8b590017 */ UNSUP(0x00454255, "lcall 0xec45, 0x8b590017");
    /* 00454258: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00454259: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045425c: mov dword ptr [eax + ebx*2 + 0x400], 0 */ W32((u32)(r_eax+r_ebx*2+0x400u), 0x0u);
L_00454267:; BB(0x00454267);
    /* 00454267: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045426a: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045426d: jl 0x454241 */ if ((fS!=fO)) goto L_00454241;
L_0045426f:; BB(0x0045426f);
    /* 0045426f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00454271:; BB(0x00454271);
    /* 00454271: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454274: mov ecx, dword ptr [eax + esi*4 + 0x434] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x434u));
    /* 0045427b: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0045427e: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x454283u); f_005883f0();
    /* 00454283: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454286: mov dword ptr [eax + ebx*2 + 0x434], 0 */ W32((u32)(r_eax+r_ebx*2+0x434u), 0x0u);
    /* 00454291: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454294: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454297: jl 0x454271 */ if ((fS!=fO)) goto L_00454271;
L_00454299:; BB(0x00454299);
    /* 00454299: mov ecx, dword ptr [eax + 0x488] */ r_ecx = R32((u32)(r_eax+0x488u));
    /* 0045429f: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x4542a4u); f_005883f0();
    /* 004542a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004542a7: mov dword ptr [ecx + 0x488], 0 */ W32((u32)(r_ecx+0x488u), 0x0u);
    /* 004542b1: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4542b6u); f_007b9c8c();
    /* 004542b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004542b9: mov dword ptr [eax + 0x39c], 0 */ W32((u32)(r_eax+0x39cu), 0x0u);
    /* 004542c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004542ca: mov ecx, eax */ r_ecx = r_eax;
    /* 004542cc: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x4542d1u); f_0078638c();
    /* 004542d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004542d4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004542d6: jne 0x4542f1 */ if (!fZ) goto L_004542f1;
L_004542d8:; BB(0x004542d8);
    /* 004542d8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004542db: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004542de: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004542e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004542e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004542eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004542ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004542ee: ret 4 */ FN_RET(0x00454255); r_esp += 8; return;
L_004542f1:; BB(0x004542f1);
    /* 004542f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004542f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004542f5: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4542fau); f_005c2f74();
    /* 004542fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004542fb: jmp 0x4542d8 */ goto L_004542d8;
}

void f_00454300(void) /* sub_454300 */
{
    FN_ENTER(0x00454300);
    /* 00454300: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454303: fld dword ptr [0x8fff4c] */ FPUSH(R_F32((u32)(0x8fff4cu)));
    /* 00454309: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045430b: call 0x45431c */ r_esp -= 4; W32(r_esp, 0x454310u); f_0045431c();
    /* 00454310: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454313: ret  */ FN_RET(0x00454300); r_esp += 4; return;
}

void f_0045431c(void) /* sub_45431C */
{
    FN_ENTER(0x0045431c);
    /* 0045431c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045431d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045431e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045431f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00454320: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454323: mov ecx, dword ptr [0xa45220] */ r_ecx = R32((u32)(0xa45220u));
    /* 00454329: mov edx, dword ptr [0xa45224] */ r_edx = R32((u32)(0xa45224u));
    /* 0045432f: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00454333: mov edi, eax */ r_edi = r_eax;
    /* 00454335: mov esi, 0xa45280 */ r_esi = 0xa45280u;
    /* 0045433a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045433c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0045433e: mov eax, dword ptr [0xa45228] */ r_eax = R32((u32)(0xa45228u));
L_00454343:; BB(0x00454343);
    /* 00454343: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00454345: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00454348: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0045434b: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 0045434e: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 00454351: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00454354: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 00454357: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 0045435a: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0045435d: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 00454360: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00454363: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00454366: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454369: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045436c: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045436f: jl 0x454343 */ if ((fS!=fO)) goto L_00454343;
L_00454371:; BB(0x00454371);
    /* 00454371: mov edx, 0xa45280 */ r_edx = 0xa45280u;
    /* 00454376: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0045437a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00454380: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00454382: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00454384: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x454389u); f_0068d5a8();
    /* 00454389: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045438a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045438d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045438f: je 0x454396 */ if (fZ) goto L_00454396;
L_00454391:; BB(0x00454391);
    /* 00454391: mov esi, 1 */ r_esi = 0x1u;
L_00454396:; BB(0x00454396);
    /* 00454396: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00454398: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045439a: jle 0x454450 */ if ((fZ||fS!=fO)) goto L_00454450;
L_004543a0:; BB(0x004543a0);
    /* 004543a0: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 004543a4: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 004543a8: mov edx, esi */ r_edx = r_esi;
L_004543aa:; BB(0x004543aa);
    /* 004543aa: mov eax, dword ptr [esp + ecx*4] */ r_eax = R32((u32)(r_esp+r_ecx*4));
    /* 004543ad: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 004543b0: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 004543b2: mov eax, dword ptr [esp + ecx*4] */ r_eax = R32((u32)(r_esp+r_ecx*4));
    /* 004543b5: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004543b8: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 004543bb: movzx eax, byte ptr [0xa4522c] */ r_eax = (u32)R8((u32)(0xa4522cu));
    /* 004543c2: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004543c5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004543c8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004543ca: jne 0x4543e0 */ if (!fZ) goto L_004543e0;
L_004543cc:; BB(0x004543cc);
    /* 004543cc: mov dword ptr [0xa45230], 0x42200000 */ W32((u32)(0xa45230u), 0x42200000u);
    /* 004543d6: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004543db: mov byte ptr [0xa4522c], al */ W8((u32)(0xa4522cu), (u8)r_eax);
L_004543e0:; BB(0x004543e0);
    /* 004543e0: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 004543e4: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004543e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004543ea: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004543ec:; BB(0x004543ec);
    /* 004543ec: mov ecx, edi */ r_ecx = r_edi;
    /* 004543ee: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4543f3u); f_0082dcbc();
    /* 004543f3: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004543f7: mov edx, dword ptr [esp + eax*4] */ r_edx = R32((u32)(r_esp+r_eax*4));
    /* 004543fa: fld dword ptr [0xa45230] */ FPUSH(R_F32((u32)(0xa45230u)));
    /* 00454400: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00454402: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00454405: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 00454407: mov ecx, edi */ r_ecx = r_edi;
    /* 00454409: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45440eu); f_0082ddd8();
    /* 0045440e: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00454412: mov edx, dword ptr [esp + eax*4] */ r_edx = R32((u32)(r_esp+r_eax*4));
    /* 00454415: fld dword ptr [0xa45230] */ FPUSH(R_F32((u32)(0xa45230u)));
    /* 0045441b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045441d: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 00454420: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00454423: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00454426: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00454429: add edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045442f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454432: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454435: jl 0x4543ec */ if ((fS!=fO)) goto L_004543ec;
L_00454437:; BB(0x00454437);
    /* 00454437: mov ecx, eax */ r_ecx = r_eax;
    /* 00454439: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0045443d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454440: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454442: jl 0x4543aa */ if ((fS!=fO)) goto L_004543aa;
L_00454448:; BB(0x00454448);
    /* 00454448: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0045444c: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
L_00454450:; BB(0x00454450);
    /* 00454450: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00454452: mov ebx, edi */ r_ebx = r_edi;
L_00454454:; BB(0x00454454);
    /* 00454454: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454457: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045445a: jge 0x4545be */ if ((fS==fO)) goto L_004545be;
L_00454460:; BB(0x00454460);
    /* 00454460: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454465u); f_008587a5();
    /* 00454465: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00454469: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0045446d: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 00454473: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 00454479: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 0045447f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00454483: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454488u); f_008587a5();
    /* 00454488: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
    /* 0045448f: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00454497: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045449a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0045449e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004544a2: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 004544a8: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 004544ae: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 004544b4: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004544b8: jne 0x4544d5 */ if (!fZ) goto L_004544d5;
L_004544ba:; BB(0x004544ba);
    /* 004544ba: fld dword ptr [0x8fff34] */ FPUSH(R_F32((u32)(0x8fff34u)));
    /* 004544c0: mov dword ptr [0xa45234], 0x474ea400 */ W32((u32)(0xa45234u), 0x474ea400u);
    /* 004544ca: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004544cd: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
    /* 004544d3: jmp 0x4544db */ goto L_004544db;
L_004544d5:; BB(0x004544d5);
    /* 004544d5: fld dword ptr [0xa45234] */ FPUSH(R_F32((u32)(0xa45234u)));
L_004544db:; BB(0x004544db);
    /* 004544db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004544dd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544df: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004544e3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004544e7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004544e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004544eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004544ec: jae 0x4545b2 */ if (!fC) goto L_004545b2;
L_004544f2:; BB(0x004544f2);
    /* 004544f2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004544f4: je 0x45453c */ if (fZ) goto L_0045453c;
L_004544f6:; BB(0x004544f6);
    /* 004544f6: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004544fa: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004544fc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00454500: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00454503: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00454507: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0045450a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0045450e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454512: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x454517u); f_0082f9c4();
    /* 00454517: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0045451f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00454523: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x454528u); f_0083173c();
    /* 00454528: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 0045452c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045452e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045452f: jbe 0x4545b2 */ if ((fC||fZ)) goto L_004545b2;
L_00454535:; BB(0x00454535);
    /* 00454535: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
L_0045453c:; BB(0x0045453c);
    /* 0045453c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045453f: jne 0x45455f */ if (!fZ) goto L_0045455f;
L_00454541:; BB(0x00454541);
    /* 00454541: fld dword ptr [0x8fff30] */ FPUSH(R_F32((u32)(0x8fff30u)));
    /* 00454547: fmul dword ptr [0xa45580] */ ST(0) = ST(0) * R_F32((u32)(0xa45580u));
    /* 0045454d: fstp dword ptr [0xa45238] */ W_F32((u32)(0xa45238u), ST(0)); FPOP();
    /* 00454553: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00454559: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
L_0045455f:; BB(0x0045455f);
    /* 0045455f: mov eax, 0xa45280 */ r_eax = 0xa45280u;
    /* 00454564: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00454566: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00454568: jle 0x454597 */ if ((fZ||fS!=fO)) goto L_00454597;
L_0045456a:; BB(0x0045456a);
    /* 0045456a: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0045456e: mov ebx, eax */ r_ebx = r_eax;
L_00454570:; BB(0x00454570);
    /* 00454570: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00454575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454576: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45457bu); f_00836208();
    /* 0045457b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045457e: fcomp dword ptr [0xa45238] */ fx_compare(ST(0), R_F32((u32)(0xa45238u))); FPOP();
    /* 00454584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454587: jbe 0x4545c6 */ if ((fC||fZ)) goto L_004545c6;
L_00454589:; BB(0x00454589);
    /* 00454589: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045458c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045458f: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454591: jl 0x454570 */ if ((fS!=fO)) goto L_00454570;
L_00454593:; BB(0x00454593);
    /* 00454593: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_00454597:; BB(0x00454597);
    /* 00454597: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045459b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0045459f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004545a1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004545a5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004545a8: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004545ab: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004545af: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004545b2:; BB(0x004545b2);
    /* 004545b2: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004545b8: jl 0x454454 */ if ((fS!=fO)) goto L_00454454;
L_004545be:; BB(0x004545be);
    /* 004545be: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004545c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004545c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004545c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004545c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004545c5: ret  */ FN_RET(0x0045431c); r_esp += 4; return;
L_004545c6:; BB(0x004545c6);
    /* 004545c6: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004545ca: jmp 0x4545b2 */ goto L_004545b2;
}

void f_00454349(void)
{
    FN_ENTER(0x00454349);
    goto L_00454349;
L_00454343:; BB(0x00454343);
    /* 00454343: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00454345: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00454348: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
L_00454349:; BB(0x00454349);
    /* 00454349: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045434a: or byte ptr [ecx + 0x56890c4e], cl */ { u32 ad = (u32)(r_ecx+0x56890c4eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r); fC = 0; }
    /* 0045434b: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 0045434e: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 00454350: adc byte ptr [ecx + 0x4e891446], cl */ { u32 ad = (u32)(r_ecx+0x4e891446u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; W8(ad, r); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 00454351: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00454354: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 00454356: sbb byte ptr [ecx + 0x46891c56], cl */ { u32 ad = (u32)(r_ecx+0x46891c56u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 00454357: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 0045435a: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0045435c: and byte ptr [ecx + 0x5689244e], cl */ { u32 ad = (u32)(r_ecx+0x5689244eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0045435d: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 00454360: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00454362: sub byte ptr [ecx - 0x397cd3ba], cl */ { u32 ad = (u32)(r_ecx+0xc6832c46u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 00454363: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00454366: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454368: xor byte ptr [ebx - 0x27cfb3b], al */ { u32 ad = (u32)(r_ebx+0xfd8304c5u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00454369: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045436c: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045436e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0045436f: jl 0x454343 */ if ((fS!=fO)) goto L_00454343;
L_00454371:; BB(0x00454371);
    /* 00454371: mov edx, 0xa45280 */ r_edx = 0xa45280u;
    /* 00454376: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0045437a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00454380: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00454382: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00454384: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x454389u); f_0068d5a8();
    /* 00454389: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045438a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045438d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045438f: je 0x454396 */ if (fZ) goto L_00454396;
L_00454391:; BB(0x00454391);
    /* 00454391: mov esi, 1 */ r_esi = 0x1u;
L_00454396:; BB(0x00454396);
    /* 00454396: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00454398: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045439a: jle 0x454450 */ if ((fZ||fS!=fO)) goto L_00454450;
L_004543a0:; BB(0x004543a0);
    /* 004543a0: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 004543a4: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 004543a8: mov edx, esi */ r_edx = r_esi;
L_004543aa:; BB(0x004543aa);
    /* 004543aa: mov eax, dword ptr [esp + ecx*4] */ r_eax = R32((u32)(r_esp+r_ecx*4));
    /* 004543ad: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 004543b0: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 004543b2: mov eax, dword ptr [esp + ecx*4] */ r_eax = R32((u32)(r_esp+r_ecx*4));
    /* 004543b5: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004543b8: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 004543bb: movzx eax, byte ptr [0xa4522c] */ r_eax = (u32)R8((u32)(0xa4522cu));
    /* 004543c2: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004543c5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004543c8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004543ca: jne 0x4543e0 */ if (!fZ) goto L_004543e0;
L_004543cc:; BB(0x004543cc);
    /* 004543cc: mov dword ptr [0xa45230], 0x42200000 */ W32((u32)(0xa45230u), 0x42200000u);
    /* 004543d6: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004543db: mov byte ptr [0xa4522c], al */ W8((u32)(0xa4522cu), (u8)r_eax);
L_004543e0:; BB(0x004543e0);
    /* 004543e0: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 004543e4: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004543e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004543ea: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004543ec:; BB(0x004543ec);
    /* 004543ec: mov ecx, edi */ r_ecx = r_edi;
    /* 004543ee: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4543f3u); f_0082dcbc();
    /* 004543f3: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004543f7: mov edx, dword ptr [esp + eax*4] */ r_edx = R32((u32)(r_esp+r_eax*4));
    /* 004543fa: fld dword ptr [0xa45230] */ FPUSH(R_F32((u32)(0xa45230u)));
    /* 00454400: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00454402: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00454405: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 00454407: mov ecx, edi */ r_ecx = r_edi;
    /* 00454409: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45440eu); f_0082ddd8();
    /* 0045440e: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00454412: mov edx, dword ptr [esp + eax*4] */ r_edx = R32((u32)(r_esp+r_eax*4));
    /* 00454415: fld dword ptr [0xa45230] */ FPUSH(R_F32((u32)(0xa45230u)));
    /* 0045441b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045441d: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 00454420: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00454423: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00454426: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00454429: add edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045442f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454432: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454435: jl 0x4543ec */ if ((fS!=fO)) goto L_004543ec;
L_00454437:; BB(0x00454437);
    /* 00454437: mov ecx, eax */ r_ecx = r_eax;
    /* 00454439: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0045443d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454440: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454442: jl 0x4543aa */ if ((fS!=fO)) goto L_004543aa;
L_00454448:; BB(0x00454448);
    /* 00454448: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0045444c: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
L_00454450:; BB(0x00454450);
    /* 00454450: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00454452: mov ebx, edi */ r_ebx = r_edi;
L_00454454:; BB(0x00454454);
    /* 00454454: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454457: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045445a: jge 0x4545be */ if ((fS==fO)) goto L_004545be;
L_00454460:; BB(0x00454460);
    /* 00454460: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454465u); f_008587a5();
    /* 00454465: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00454469: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0045446d: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 00454473: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 00454479: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 0045447f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00454483: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454488u); f_008587a5();
    /* 00454488: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
    /* 0045448f: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00454497: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045449a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0045449e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004544a2: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 004544a8: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 004544ae: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 004544b4: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004544b8: jne 0x4544d5 */ if (!fZ) goto L_004544d5;
L_004544ba:; BB(0x004544ba);
    /* 004544ba: fld dword ptr [0x8fff34] */ FPUSH(R_F32((u32)(0x8fff34u)));
    /* 004544c0: mov dword ptr [0xa45234], 0x474ea400 */ W32((u32)(0xa45234u), 0x474ea400u);
    /* 004544ca: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004544cd: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
    /* 004544d3: jmp 0x4544db */ goto L_004544db;
L_004544d5:; BB(0x004544d5);
    /* 004544d5: fld dword ptr [0xa45234] */ FPUSH(R_F32((u32)(0xa45234u)));
L_004544db:; BB(0x004544db);
    /* 004544db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004544dd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544df: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004544e3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004544e7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004544e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004544eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004544ec: jae 0x4545b2 */ if (!fC) goto L_004545b2;
L_004544f2:; BB(0x004544f2);
    /* 004544f2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004544f4: je 0x45453c */ if (fZ) goto L_0045453c;
L_004544f6:; BB(0x004544f6);
    /* 004544f6: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004544fa: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004544fc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00454500: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00454503: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00454507: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0045450a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0045450e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454512: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x454517u); f_0082f9c4();
    /* 00454517: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0045451f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00454523: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x454528u); f_0083173c();
    /* 00454528: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 0045452c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045452e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045452f: jbe 0x4545b2 */ if ((fC||fZ)) goto L_004545b2;
L_00454535:; BB(0x00454535);
    /* 00454535: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
L_0045453c:; BB(0x0045453c);
    /* 0045453c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045453f: jne 0x45455f */ if (!fZ) goto L_0045455f;
L_00454541:; BB(0x00454541);
    /* 00454541: fld dword ptr [0x8fff30] */ FPUSH(R_F32((u32)(0x8fff30u)));
    /* 00454547: fmul dword ptr [0xa45580] */ ST(0) = ST(0) * R_F32((u32)(0xa45580u));
    /* 0045454d: fstp dword ptr [0xa45238] */ W_F32((u32)(0xa45238u), ST(0)); FPOP();
    /* 00454553: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00454559: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
L_0045455f:; BB(0x0045455f);
    /* 0045455f: mov eax, 0xa45280 */ r_eax = 0xa45280u;
    /* 00454564: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00454566: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00454568: jle 0x454597 */ if ((fZ||fS!=fO)) goto L_00454597;
L_0045456a:; BB(0x0045456a);
    /* 0045456a: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0045456e: mov ebx, eax */ r_ebx = r_eax;
L_00454570:; BB(0x00454570);
    /* 00454570: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00454575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454576: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45457bu); f_00836208();
    /* 0045457b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045457e: fcomp dword ptr [0xa45238] */ fx_compare(ST(0), R_F32((u32)(0xa45238u))); FPOP();
    /* 00454584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454587: jbe 0x4545c6 */ if ((fC||fZ)) goto L_004545c6;
L_00454589:; BB(0x00454589);
    /* 00454589: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045458c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045458f: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454591: jl 0x454570 */ if ((fS!=fO)) goto L_00454570;
L_00454593:; BB(0x00454593);
    /* 00454593: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_00454597:; BB(0x00454597);
    /* 00454597: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045459b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0045459f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004545a1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004545a5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004545a8: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004545ab: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004545af: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004545b2:; BB(0x004545b2);
    /* 004545b2: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004545b8: jl 0x454454 */ if ((fS!=fO)) goto L_00454454;
L_004545be:; BB(0x004545be);
    /* 004545be: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004545c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004545c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004545c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004545c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004545c5: ret  */ FN_RET(0x00454349); r_esp += 4; return;
L_004545c6:; BB(0x004545c6);
    /* 004545c6: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004545ca: jmp 0x4545b2 */ goto L_004545b2;
}

void f_0045434e(void)
{
    FN_ENTER(0x0045434e);
    goto L_0045434e;
L_00454343:; BB(0x00454343);
    /* 00454343: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00454345: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00454348: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0045434b: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
L_0045434e:; BB(0x0045434e);
    /* 0045434e: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 00454351: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00454354: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 00454357: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 0045435a: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0045435d: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 00454360: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00454363: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00454366: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454369: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045436c: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045436f: jl 0x454343 */ if ((fS!=fO)) goto L_00454343;
L_00454371:; BB(0x00454371);
    /* 00454371: mov edx, 0xa45280 */ r_edx = 0xa45280u;
    /* 00454376: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0045437a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00454380: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00454382: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00454384: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x454389u); f_0068d5a8();
    /* 00454389: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045438a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045438d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045438f: je 0x454396 */ if (fZ) goto L_00454396;
L_00454391:; BB(0x00454391);
    /* 00454391: mov esi, 1 */ r_esi = 0x1u;
L_00454396:; BB(0x00454396);
    /* 00454396: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00454398: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045439a: jle 0x454450 */ if ((fZ||fS!=fO)) goto L_00454450;
L_004543a0:; BB(0x004543a0);
    /* 004543a0: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 004543a4: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 004543a8: mov edx, esi */ r_edx = r_esi;
L_004543aa:; BB(0x004543aa);
    /* 004543aa: mov eax, dword ptr [esp + ecx*4] */ r_eax = R32((u32)(r_esp+r_ecx*4));
    /* 004543ad: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 004543b0: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 004543b2: mov eax, dword ptr [esp + ecx*4] */ r_eax = R32((u32)(r_esp+r_ecx*4));
    /* 004543b5: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004543b8: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 004543bb: movzx eax, byte ptr [0xa4522c] */ r_eax = (u32)R8((u32)(0xa4522cu));
    /* 004543c2: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004543c5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004543c8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004543ca: jne 0x4543e0 */ if (!fZ) goto L_004543e0;
L_004543cc:; BB(0x004543cc);
    /* 004543cc: mov dword ptr [0xa45230], 0x42200000 */ W32((u32)(0xa45230u), 0x42200000u);
    /* 004543d6: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004543db: mov byte ptr [0xa4522c], al */ W8((u32)(0xa4522cu), (u8)r_eax);
L_004543e0:; BB(0x004543e0);
    /* 004543e0: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 004543e4: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004543e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004543ea: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004543ec:; BB(0x004543ec);
    /* 004543ec: mov ecx, edi */ r_ecx = r_edi;
    /* 004543ee: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4543f3u); f_0082dcbc();
    /* 004543f3: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004543f7: mov edx, dword ptr [esp + eax*4] */ r_edx = R32((u32)(r_esp+r_eax*4));
    /* 004543fa: fld dword ptr [0xa45230] */ FPUSH(R_F32((u32)(0xa45230u)));
    /* 00454400: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00454402: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00454405: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 00454407: mov ecx, edi */ r_ecx = r_edi;
    /* 00454409: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45440eu); f_0082ddd8();
    /* 0045440e: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00454412: mov edx, dword ptr [esp + eax*4] */ r_edx = R32((u32)(r_esp+r_eax*4));
    /* 00454415: fld dword ptr [0xa45230] */ FPUSH(R_F32((u32)(0xa45230u)));
    /* 0045441b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045441d: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 00454420: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00454423: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00454426: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00454429: add edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045442f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454432: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454435: jl 0x4543ec */ if ((fS!=fO)) goto L_004543ec;
L_00454437:; BB(0x00454437);
    /* 00454437: mov ecx, eax */ r_ecx = r_eax;
    /* 00454439: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0045443d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454440: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454442: jl 0x4543aa */ if ((fS!=fO)) goto L_004543aa;
L_00454448:; BB(0x00454448);
    /* 00454448: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0045444c: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
L_00454450:; BB(0x00454450);
    /* 00454450: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00454452: mov ebx, edi */ r_ebx = r_edi;
L_00454454:; BB(0x00454454);
    /* 00454454: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454457: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045445a: jge 0x4545be */ if ((fS==fO)) goto L_004545be;
L_00454460:; BB(0x00454460);
    /* 00454460: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454465u); f_008587a5();
    /* 00454465: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00454469: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0045446d: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 00454473: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 00454479: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 0045447f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00454483: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454488u); f_008587a5();
    /* 00454488: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
    /* 0045448f: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00454497: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045449a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0045449e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004544a2: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 004544a8: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 004544ae: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 004544b4: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004544b8: jne 0x4544d5 */ if (!fZ) goto L_004544d5;
L_004544ba:; BB(0x004544ba);
    /* 004544ba: fld dword ptr [0x8fff34] */ FPUSH(R_F32((u32)(0x8fff34u)));
    /* 004544c0: mov dword ptr [0xa45234], 0x474ea400 */ W32((u32)(0xa45234u), 0x474ea400u);
    /* 004544ca: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004544cd: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
    /* 004544d3: jmp 0x4544db */ goto L_004544db;
L_004544d5:; BB(0x004544d5);
    /* 004544d5: fld dword ptr [0xa45234] */ FPUSH(R_F32((u32)(0xa45234u)));
L_004544db:; BB(0x004544db);
    /* 004544db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004544dd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544df: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004544e3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004544e7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004544e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004544eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004544ec: jae 0x4545b2 */ if (!fC) goto L_004545b2;
L_004544f2:; BB(0x004544f2);
    /* 004544f2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004544f4: je 0x45453c */ if (fZ) goto L_0045453c;
L_004544f6:; BB(0x004544f6);
    /* 004544f6: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004544fa: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004544fc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00454500: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00454503: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00454507: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0045450a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0045450e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454512: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x454517u); f_0082f9c4();
    /* 00454517: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0045451f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00454523: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x454528u); f_0083173c();
    /* 00454528: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 0045452c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045452e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045452f: jbe 0x4545b2 */ if ((fC||fZ)) goto L_004545b2;
L_00454535:; BB(0x00454535);
    /* 00454535: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
L_0045453c:; BB(0x0045453c);
    /* 0045453c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045453f: jne 0x45455f */ if (!fZ) goto L_0045455f;
L_00454541:; BB(0x00454541);
    /* 00454541: fld dword ptr [0x8fff30] */ FPUSH(R_F32((u32)(0x8fff30u)));
    /* 00454547: fmul dword ptr [0xa45580] */ ST(0) = ST(0) * R_F32((u32)(0xa45580u));
    /* 0045454d: fstp dword ptr [0xa45238] */ W_F32((u32)(0xa45238u), ST(0)); FPOP();
    /* 00454553: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00454559: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
L_0045455f:; BB(0x0045455f);
    /* 0045455f: mov eax, 0xa45280 */ r_eax = 0xa45280u;
    /* 00454564: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00454566: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00454568: jle 0x454597 */ if ((fZ||fS!=fO)) goto L_00454597;
L_0045456a:; BB(0x0045456a);
    /* 0045456a: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0045456e: mov ebx, eax */ r_ebx = r_eax;
L_00454570:; BB(0x00454570);
    /* 00454570: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00454575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454576: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45457bu); f_00836208();
    /* 0045457b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045457e: fcomp dword ptr [0xa45238] */ fx_compare(ST(0), R_F32((u32)(0xa45238u))); FPOP();
    /* 00454584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454587: jbe 0x4545c6 */ if ((fC||fZ)) goto L_004545c6;
L_00454589:; BB(0x00454589);
    /* 00454589: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045458c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045458f: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454591: jl 0x454570 */ if ((fS!=fO)) goto L_00454570;
L_00454593:; BB(0x00454593);
    /* 00454593: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_00454597:; BB(0x00454597);
    /* 00454597: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045459b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0045459f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004545a1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004545a5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004545a8: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004545ab: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004545af: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004545b2:; BB(0x004545b2);
    /* 004545b2: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004545b8: jl 0x454454 */ if ((fS!=fO)) goto L_00454454;
L_004545be:; BB(0x004545be);
    /* 004545be: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004545c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004545c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004545c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004545c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004545c5: ret  */ FN_RET(0x0045434e); r_esp += 4; return;
L_004545c6:; BB(0x004545c6);
    /* 004545c6: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004545ca: jmp 0x4545b2 */ goto L_004545b2;
}

void f_00454449(void)
{
    FN_ENTER(0x00454449);
    /* 00454449: jl 0x45446f */ if ((fS!=fO)) goto L_0045446f;
L_0045444b:; BB(0x0045444b);
    /* 0045444b: cmp al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a - b) & 0xffu;   }
    /* 0045444d: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 0045444e: and al, 0x48 */ {  u32 a = (u8)r_eax; u32 b = 0x48u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00454450: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00454452: mov ebx, edi */ r_ebx = r_edi;
L_00454454:; BB(0x00454454);
    /* 00454454: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454457: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045445a: jge 0x4545be */ if ((fS==fO)) goto L_004545be;
L_00454460:; BB(0x00454460);
    /* 00454460: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454465u); f_008587a5();
    /* 00454465: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00454469: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0045446d: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
L_0045446f:; BB(0x0045446f);
    /* 0045446f: cmp al, 0xff */ {  u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffu;   }
    /* 00454471: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 00454473: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 00454479: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 0045447f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00454483: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454488u); f_008587a5();
    /* 00454488: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
    /* 0045448f: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00454497: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045449a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0045449e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004544a2: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 004544a8: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 004544ae: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 004544b4: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004544b8: jne 0x4544d5 */ if (!fZ) goto L_004544d5;
L_004544ba:; BB(0x004544ba);
    /* 004544ba: fld dword ptr [0x8fff34] */ FPUSH(R_F32((u32)(0x8fff34u)));
    /* 004544c0: mov dword ptr [0xa45234], 0x474ea400 */ W32((u32)(0xa45234u), 0x474ea400u);
    /* 004544ca: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004544cd: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
    /* 004544d3: jmp 0x4544db */ goto L_004544db;
L_004544d5:; BB(0x004544d5);
    /* 004544d5: fld dword ptr [0xa45234] */ FPUSH(R_F32((u32)(0xa45234u)));
L_004544db:; BB(0x004544db);
    /* 004544db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004544dd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544df: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004544e3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004544e7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004544e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004544eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004544ec: jae 0x4545b2 */ if (!fC) goto L_004545b2;
L_004544f2:; BB(0x004544f2);
    /* 004544f2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004544f4: je 0x45453c */ if (fZ) goto L_0045453c;
L_004544f6:; BB(0x004544f6);
    /* 004544f6: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004544fa: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004544fc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00454500: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00454503: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00454507: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0045450a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0045450e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454512: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x454517u); f_0082f9c4();
    /* 00454517: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0045451f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00454523: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x454528u); f_0083173c();
    /* 00454528: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 0045452c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045452e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045452f: jbe 0x4545b2 */ if ((fC||fZ)) goto L_004545b2;
L_00454535:; BB(0x00454535);
    /* 00454535: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
L_0045453c:; BB(0x0045453c);
    /* 0045453c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045453f: jne 0x45455f */ if (!fZ) goto L_0045455f;
L_00454541:; BB(0x00454541);
    /* 00454541: fld dword ptr [0x8fff30] */ FPUSH(R_F32((u32)(0x8fff30u)));
    /* 00454547: fmul dword ptr [0xa45580] */ ST(0) = ST(0) * R_F32((u32)(0xa45580u));
    /* 0045454d: fstp dword ptr [0xa45238] */ W_F32((u32)(0xa45238u), ST(0)); FPOP();
    /* 00454553: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00454559: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
L_0045455f:; BB(0x0045455f);
    /* 0045455f: mov eax, 0xa45280 */ r_eax = 0xa45280u;
    /* 00454564: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00454566: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00454568: jle 0x454597 */ if ((fZ||fS!=fO)) goto L_00454597;
L_0045456a:; BB(0x0045456a);
    /* 0045456a: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0045456e: mov ebx, eax */ r_ebx = r_eax;
L_00454570:; BB(0x00454570);
    /* 00454570: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00454575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454576: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45457bu); f_00836208();
    /* 0045457b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045457e: fcomp dword ptr [0xa45238] */ fx_compare(ST(0), R_F32((u32)(0xa45238u))); FPOP();
    /* 00454584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454587: jbe 0x4545c6 */ if ((fC||fZ)) goto L_004545c6;
L_00454589:; BB(0x00454589);
    /* 00454589: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045458c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045458f: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454591: jl 0x454570 */ if ((fS!=fO)) goto L_00454570;
L_00454593:; BB(0x00454593);
    /* 00454593: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_00454597:; BB(0x00454597);
    /* 00454597: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045459b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0045459f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004545a1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004545a5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004545a8: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004545ab: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004545af: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004545b2:; BB(0x004545b2);
    /* 004545b2: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004545b8: jl 0x454454 */ if ((fS!=fO)) goto L_00454454;
L_004545be:; BB(0x004545be);
    /* 004545be: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004545c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004545c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004545c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004545c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004545c5: ret  */ FN_RET(0x00454449); r_esp += 4; return;
L_004545c6:; BB(0x004545c6);
    /* 004545c6: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004545ca: jmp 0x4545b2 */ goto L_004545b2;
}

void f_0045444e(void)
{
    FN_ENTER(0x0045444e);
    /* 0045444e: and al, 0x48 */ {  u32 a = (u8)r_eax; u32 b = 0x48u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00454450: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00454452: mov ebx, edi */ r_ebx = r_edi;
L_00454454:; BB(0x00454454);
    /* 00454454: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454457: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045445a: jge 0x4545be */ if ((fS==fO)) goto L_004545be;
L_00454460:; BB(0x00454460);
    /* 00454460: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454465u); f_008587a5();
    /* 00454465: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00454469: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0045446d: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 00454473: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 00454479: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 0045447f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00454483: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454488u); f_008587a5();
    /* 00454488: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
    /* 0045448f: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00454497: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045449a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0045449e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004544a2: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 004544a8: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 004544ae: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 004544b4: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004544b8: jne 0x4544d5 */ if (!fZ) goto L_004544d5;
L_004544ba:; BB(0x004544ba);
    /* 004544ba: fld dword ptr [0x8fff34] */ FPUSH(R_F32((u32)(0x8fff34u)));
    /* 004544c0: mov dword ptr [0xa45234], 0x474ea400 */ W32((u32)(0xa45234u), 0x474ea400u);
    /* 004544ca: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004544cd: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
    /* 004544d3: jmp 0x4544db */ goto L_004544db;
L_004544d5:; BB(0x004544d5);
    /* 004544d5: fld dword ptr [0xa45234] */ FPUSH(R_F32((u32)(0xa45234u)));
L_004544db:; BB(0x004544db);
    /* 004544db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004544dd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544df: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004544e3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004544e7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004544e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004544eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004544ec: jae 0x4545b2 */ if (!fC) goto L_004545b2;
L_004544f2:; BB(0x004544f2);
    /* 004544f2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004544f4: je 0x45453c */ if (fZ) goto L_0045453c;
L_004544f6:; BB(0x004544f6);
    /* 004544f6: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004544fa: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004544fc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00454500: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00454503: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00454507: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0045450a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0045450e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454512: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x454517u); f_0082f9c4();
    /* 00454517: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0045451f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00454523: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x454528u); f_0083173c();
    /* 00454528: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 0045452c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045452e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045452f: jbe 0x4545b2 */ if ((fC||fZ)) goto L_004545b2;
L_00454535:; BB(0x00454535);
    /* 00454535: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
L_0045453c:; BB(0x0045453c);
    /* 0045453c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045453f: jne 0x45455f */ if (!fZ) goto L_0045455f;
L_00454541:; BB(0x00454541);
    /* 00454541: fld dword ptr [0x8fff30] */ FPUSH(R_F32((u32)(0x8fff30u)));
    /* 00454547: fmul dword ptr [0xa45580] */ ST(0) = ST(0) * R_F32((u32)(0xa45580u));
    /* 0045454d: fstp dword ptr [0xa45238] */ W_F32((u32)(0xa45238u), ST(0)); FPOP();
    /* 00454553: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00454559: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
L_0045455f:; BB(0x0045455f);
    /* 0045455f: mov eax, 0xa45280 */ r_eax = 0xa45280u;
    /* 00454564: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00454566: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00454568: jle 0x454597 */ if ((fZ||fS!=fO)) goto L_00454597;
L_0045456a:; BB(0x0045456a);
    /* 0045456a: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0045456e: mov ebx, eax */ r_ebx = r_eax;
L_00454570:; BB(0x00454570);
    /* 00454570: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00454575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454576: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45457bu); f_00836208();
    /* 0045457b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045457e: fcomp dword ptr [0xa45238] */ fx_compare(ST(0), R_F32((u32)(0xa45238u))); FPOP();
    /* 00454584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454587: jbe 0x4545c6 */ if ((fC||fZ)) goto L_004545c6;
L_00454589:; BB(0x00454589);
    /* 00454589: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045458c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045458f: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454591: jl 0x454570 */ if ((fS!=fO)) goto L_00454570;
L_00454593:; BB(0x00454593);
    /* 00454593: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_00454597:; BB(0x00454597);
    /* 00454597: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045459b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0045459f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004545a1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004545a5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004545a8: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004545ab: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004545af: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004545b2:; BB(0x004545b2);
    /* 004545b2: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004545b8: jl 0x454454 */ if ((fS!=fO)) goto L_00454454;
L_004545be:; BB(0x004545be);
    /* 004545be: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004545c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004545c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004545c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004545c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004545c5: ret  */ FN_RET(0x0045444e); r_esp += 4; return;
L_004545c6:; BB(0x004545c6);
    /* 004545c6: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004545ca: jmp 0x4545b2 */ goto L_004545b2;
}

void f_0045444f(void)
{
    FN_ENTER(0x0045444f);
    /* 0045444f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00454450: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00454452: mov ebx, edi */ r_ebx = r_edi;
L_00454454:; BB(0x00454454);
    /* 00454454: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454457: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045445a: jge 0x4545be */ if ((fS==fO)) goto L_004545be;
L_00454460:; BB(0x00454460);
    /* 00454460: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454465u); f_008587a5();
    /* 00454465: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00454469: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0045446d: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 00454473: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 00454479: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 0045447f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00454483: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454488u); f_008587a5();
    /* 00454488: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
    /* 0045448f: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00454497: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045449a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0045449e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004544a2: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 004544a8: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 004544ae: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 004544b4: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004544b8: jne 0x4544d5 */ if (!fZ) goto L_004544d5;
L_004544ba:; BB(0x004544ba);
    /* 004544ba: fld dword ptr [0x8fff34] */ FPUSH(R_F32((u32)(0x8fff34u)));
    /* 004544c0: mov dword ptr [0xa45234], 0x474ea400 */ W32((u32)(0xa45234u), 0x474ea400u);
    /* 004544ca: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004544cd: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
    /* 004544d3: jmp 0x4544db */ goto L_004544db;
L_004544d5:; BB(0x004544d5);
    /* 004544d5: fld dword ptr [0xa45234] */ FPUSH(R_F32((u32)(0xa45234u)));
L_004544db:; BB(0x004544db);
    /* 004544db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004544dd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544df: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004544e3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004544e7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004544e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004544eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004544ec: jae 0x4545b2 */ if (!fC) goto L_004545b2;
L_004544f2:; BB(0x004544f2);
    /* 004544f2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004544f4: je 0x45453c */ if (fZ) goto L_0045453c;
L_004544f6:; BB(0x004544f6);
    /* 004544f6: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004544fa: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004544fc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00454500: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00454503: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00454507: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0045450a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0045450e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454512: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x454517u); f_0082f9c4();
    /* 00454517: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0045451f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00454523: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x454528u); f_0083173c();
    /* 00454528: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 0045452c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045452e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045452f: jbe 0x4545b2 */ if ((fC||fZ)) goto L_004545b2;
L_00454535:; BB(0x00454535);
    /* 00454535: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
L_0045453c:; BB(0x0045453c);
    /* 0045453c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045453f: jne 0x45455f */ if (!fZ) goto L_0045455f;
L_00454541:; BB(0x00454541);
    /* 00454541: fld dword ptr [0x8fff30] */ FPUSH(R_F32((u32)(0x8fff30u)));
    /* 00454547: fmul dword ptr [0xa45580] */ ST(0) = ST(0) * R_F32((u32)(0xa45580u));
    /* 0045454d: fstp dword ptr [0xa45238] */ W_F32((u32)(0xa45238u), ST(0)); FPOP();
    /* 00454553: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00454559: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
L_0045455f:; BB(0x0045455f);
    /* 0045455f: mov eax, 0xa45280 */ r_eax = 0xa45280u;
    /* 00454564: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00454566: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00454568: jle 0x454597 */ if ((fZ||fS!=fO)) goto L_00454597;
L_0045456a:; BB(0x0045456a);
    /* 0045456a: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0045456e: mov ebx, eax */ r_ebx = r_eax;
L_00454570:; BB(0x00454570);
    /* 00454570: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00454575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454576: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45457bu); f_00836208();
    /* 0045457b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045457e: fcomp dword ptr [0xa45238] */ fx_compare(ST(0), R_F32((u32)(0xa45238u))); FPOP();
    /* 00454584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454587: jbe 0x4545c6 */ if ((fC||fZ)) goto L_004545c6;
L_00454589:; BB(0x00454589);
    /* 00454589: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045458c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045458f: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454591: jl 0x454570 */ if ((fS!=fO)) goto L_00454570;
L_00454593:; BB(0x00454593);
    /* 00454593: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_00454597:; BB(0x00454597);
    /* 00454597: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045459b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0045459f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004545a1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004545a5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004545a8: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004545ab: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004545af: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004545b2:; BB(0x004545b2);
    /* 004545b2: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004545b8: jl 0x454454 */ if ((fS!=fO)) goto L_00454454;
L_004545be:; BB(0x004545be);
    /* 004545be: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004545c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004545c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004545c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004545c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004545c5: ret  */ FN_RET(0x0045444f); r_esp += 4; return;
L_004545c6:; BB(0x004545c6);
    /* 004545c6: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004545ca: jmp 0x4545b2 */ goto L_004545b2;
}

void f_00454456(void)
{
    FN_ENTER(0x00454456);
    goto L_00454456;
L_00454454:; BB(0x00454454);
    /* 00454454: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00454456:; BB(0x00454456);
    /* 00454456: add dword ptr [ebx - 0x72f0bf03], eax */ { u32 ad = (u32)(r_ebx+0x8d0f40fdu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00454457: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045445a: jge 0x4545be */ if ((fS==fO)) goto L_004545be;
    /* 0045445c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045445d: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0045445f: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00454460:; BB(0x00454460);
    /* 00454460: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454465u); f_008587a5();
    /* 00454461: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454462: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00454463: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454464: add byte ptr [ecx - 0x24d7dbbc], cl */ { u32 ad = (u32)(r_ecx+0xdb282444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454465: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00454469: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0045446a: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045446b: and al, 0x28 */ {  u32 a = (u8)r_eax; u32 b = 0x28u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045446d: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 00454473: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 00454479: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 0045447f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00454483: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x454488u); f_008587a5();
    /* 00454488: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
    /* 0045448f: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00454497: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045449a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0045449e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004544a2: fdiv dword ptr [0x8fff3c] */ ST(0) = ST(0) / R_F32((u32)(0x8fff3cu));
    /* 004544a8: fadd dword ptr [0x8fff40] */ ST(0) = ST(0) + R_F32((u32)(0x8fff40u));
    /* 004544ae: fmul dword ptr [0x8fff44] */ ST(0) = ST(0) * R_F32((u32)(0x8fff44u));
    /* 004544b4: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004544b8: jne 0x4544d5 */ if (!fZ) goto L_004544d5;
L_004544ba:; BB(0x004544ba);
    /* 004544ba: fld dword ptr [0x8fff34] */ FPUSH(R_F32((u32)(0x8fff34u)));
    /* 004544c0: mov dword ptr [0xa45234], 0x474ea400 */ W32((u32)(0xa45234u), 0x474ea400u);
    /* 004544ca: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004544cd: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
    /* 004544d3: jmp 0x4544db */ goto L_004544db;
L_004544d5:; BB(0x004544d5);
    /* 004544d5: fld dword ptr [0xa45234] */ FPUSH(R_F32((u32)(0xa45234u)));
L_004544db:; BB(0x004544db);
    /* 004544db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004544dd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544df: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004544e3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004544e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004544e7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004544e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004544eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004544ec: jae 0x4545b2 */ if (!fC) goto L_004545b2;
L_004544f2:; BB(0x004544f2);
    /* 004544f2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004544f4: je 0x45453c */ if (fZ) goto L_0045453c;
L_004544f6:; BB(0x004544f6);
    /* 004544f6: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004544fa: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004544fc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00454500: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00454503: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00454507: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0045450a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0045450e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454512: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x454517u); f_0082f9c4();
    /* 00454517: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0045451f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00454523: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x454528u); f_0083173c();
    /* 00454528: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 0045452c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045452e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045452f: jbe 0x4545b2 */ if ((fC||fZ)) goto L_004545b2;
L_00454535:; BB(0x00454535);
    /* 00454535: movzx edx, byte ptr [0xa4522c] */ r_edx = (u32)R8((u32)(0xa4522cu));
L_0045453c:; BB(0x0045453c);
    /* 0045453c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045453f: jne 0x45455f */ if (!fZ) goto L_0045455f;
L_00454541:; BB(0x00454541);
    /* 00454541: fld dword ptr [0x8fff30] */ FPUSH(R_F32((u32)(0x8fff30u)));
    /* 00454547: fmul dword ptr [0xa45580] */ ST(0) = ST(0) * R_F32((u32)(0xa45580u));
    /* 0045454d: fstp dword ptr [0xa45238] */ W_F32((u32)(0xa45238u), ST(0)); FPOP();
    /* 00454553: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00454559: mov byte ptr [0xa4522c], dl */ W8((u32)(0xa4522cu), (u8)r_edx);
L_0045455f:; BB(0x0045455f);
    /* 0045455f: mov eax, 0xa45280 */ r_eax = 0xa45280u;
    /* 00454564: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00454566: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00454568: jle 0x454597 */ if ((fZ||fS!=fO)) goto L_00454597;
L_0045456a:; BB(0x0045456a);
    /* 0045456a: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0045456e: mov ebx, eax */ r_ebx = r_eax;
L_00454570:; BB(0x00454570);
    /* 00454570: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00454574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00454575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454576: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45457bu); f_00836208();
    /* 0045457b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045457e: fcomp dword ptr [0xa45238] */ fx_compare(ST(0), R_F32((u32)(0xa45238u))); FPOP();
    /* 00454584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454587: jbe 0x4545c6 */ if ((fC||fZ)) goto L_004545c6;
L_00454589:; BB(0x00454589);
    /* 00454589: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045458c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045458f: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454591: jl 0x454570 */ if ((fS!=fO)) goto L_00454570;
L_00454593:; BB(0x00454593);
    /* 00454593: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_00454597:; BB(0x00454597);
    /* 00454597: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045459b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0045459f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004545a1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004545a5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004545a8: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004545ab: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004545af: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004545b2:; BB(0x004545b2);
    /* 004545b2: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004545b8: jl 0x454454 */ if ((fS!=fO)) goto L_00454454;
L_004545be:; BB(0x004545be);
    /* 004545be: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004545c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004545c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004545c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004545c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004545c5: ret  */ FN_RET(0x00454456); r_esp += 4; return;
L_004545c6:; BB(0x004545c6);
    /* 004545c6: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004545ca: jmp 0x4545b2 */ goto L_004545b2;
}

void f_004545cc(void) /* sub_4545CC */
{
    FN_ENTER(0x004545cc);
    /* 004545cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004545cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004545ce: mov edx, 0xa45280 */ r_edx = 0xa45280u;
    /* 004545d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004545d5: mov ebx, eax */ r_ebx = r_eax;
    /* 004545d7: mov esi, edx */ r_esi = r_edx;
L_004545d9:; BB(0x004545d9);
    /* 004545d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004545da: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004545de: call 0x4520c8 */ r_esp -= 4; W32(r_esp, 0x4545e3u); f_004520c8();
    /* 004545e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004545e6: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004545e9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004545ec: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004545ef: jl 0x4545d9 */ if ((fS!=fO)) goto L_004545d9;
L_004545f1:; BB(0x004545f1);
    /* 004545f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004545f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004545f3: ret  */ FN_RET(0x004545cc); r_esp += 4; return;
}

void f_004545f4(void) /* sub_4545F4 */
{
    FN_ENTER(0x004545f4);
    /* 004545f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004545f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004545f6: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004545f9: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004545fb: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x454600u); f_0077a6cc();
    /* 00454600: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00454601: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 00454604: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00454608: mov edx, 0xa45280 */ r_edx = 0xa45280u;
    /* 0045460d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045460f: mov ebp, eax */ r_ebp = r_eax;
    /* 00454611: mov edi, edx */ r_edi = r_edx;
L_00454613:; BB(0x00454613);
    /* 00454613: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00454615: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00454618: push dword ptr [ecx*4 + 0x9a6184] */ { u32 v = R32((u32)(r_ecx*4+0x9a6184u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045461f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00454620: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x454625u); f_0050b510();
    /* 00454625: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045462a: je 0x454635 */ if (fZ) goto L_00454635;
L_0045462c:; BB(0x0045462c);
    /* 0045462c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045462e: mov ecx, eax */ r_ecx = r_eax;
    /* 00454630: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x454635u); f_00508efc();
L_00454635:; BB(0x00454635);
    /* 00454635: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00454638: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045463b: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045463e: jl 0x454613 */ if ((fS!=fO)) goto L_00454613;
L_00454640:; BB(0x00454640);
    /* 00454640: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00454644: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0045464a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045464c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045464e: jle 0x45472c */ if ((fZ||fS!=fO)) goto L_0045472c;
L_00454654:; BB(0x00454654);
    /* 00454654: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00454658: mov ebp, eax */ r_ebp = r_eax;
    /* 0045465a: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0045465e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00454662: mov ebx, edx */ r_ebx = r_edx;
L_00454664:; BB(0x00454664);
    /* 00454664: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0045466b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045466d: je 0x4546ce */ if (fZ) goto L_004546ce;
L_0045466f:; BB(0x0045466f);
    /* 0045466f: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 00454673: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00454674: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x454679u); f_00453ab8();
    /* 00454679: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045467a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045467c: je 0x4546ce */ if (fZ) goto L_004546ce;
L_0045467e:; BB(0x0045467e);
    /* 0045467e: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 00454681: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00454685: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 00454688: mov eax, 0xa45280 */ r_eax = 0xa45280u;
    /* 0045468d: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00454691: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00454694: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00454698: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045469a: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004546a2: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004546a5: mov ebx, eax */ r_ebx = r_eax;
L_004546a7:; BB(0x004546a7);
    /* 004546a7: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004546ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004546ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004546ad: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4546b2u); f_00836208();
    /* 004546b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004546b5: fcomp dword ptr [0xa45580] */ fx_compare(ST(0), R_F32((u32)(0xa45580u))); FPOP();
    /* 004546bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004546bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004546be: jb 0x4546fe */ if (fC) goto L_004546fe;
L_004546c0:; BB(0x004546c0);
    /* 004546c0: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004546c3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004546c6: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004546c9: jl 0x4546a7 */ if ((fS!=fO)) goto L_004546a7;
L_004546cb:; BB(0x004546cb);
    /* 004546cb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_004546ce:; BB(0x004546ce);
    /* 004546ce: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004546d1: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004546d3: jl 0x454664 */ if ((fS!=fO)) goto L_00454664;
L_004546d5:; BB(0x004546d5);
    /* 004546d5: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004546d9: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_004546dd:; BB(0x004546dd);
    /* 004546dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004546df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004546e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004546e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004546e2: push 0x375 */ { u32 v = 0x375u; r_esp -= 4; W32(r_esp, v); }
    /* 004546e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4546ecu); f_00814298();
    /* 004546ec: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004546ee: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004546f3: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4546f8u); f_006ff5f8();
    /* 004546f8: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004546fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004546fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004546fd: ret  */ FN_RET(0x004545f4); r_esp += 4; return;
L_004546fe:; BB(0x004546fe);
    /* 004546fe: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00454701: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00454705: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00454707: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0045470b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045470d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00454711: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00454716: mov ecx, esi */ r_ecx = r_esi;
    /* 00454718: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00454719: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045471a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045471b: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045471f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00454721: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00454725: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x454728u); call_ind(t); }
    /* 00454728: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045472a: jmp 0x4546ce */ goto L_004546ce;
L_0045472c:; BB(0x0045472c);
    /* 0045472c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045472e: jmp 0x4546dd */ goto L_004546dd;
}

void f_00454730(void) /* sub_454730 */
{
    FN_ENTER(0x00454730);
    /* 00454730: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00454733: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00454738: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0045473b: mov edx, 1 */ r_edx = 0x1u;
    /* 00454740: mov dword ptr [ecx + 0x3e4], 0x3f800000 */ W32((u32)(r_ecx+0x3e4u), 0x3f800000u);
    /* 0045474a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045474b: mov dword ptr [ecx + 0x3dc], edx */ W32((u32)(r_ecx+0x3dcu), r_edx);
    /* 00454751: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00454753: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454756: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454757: push 0x37f */ { u32 v = 0x37fu; r_esp -= 4; W32(r_esp, v); }
    /* 0045475c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x454761u); f_00814298();
    /* 00454761: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454764: ret  */ FN_RET(0x00454730); r_esp += 4; return;
}

void f_00454741(void)
{
    FN_ENTER(0x00454741);
    /* 00454741: and esp, 3 */ {  u32 a = r_esp; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00454747: add byte ptr [eax - 0x6e76adc1], al */ { u32 ad = (u32)(r_eax+0x9189523fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045474d: fadd qword ptr [ebx] */ ST(0) = ST(0) + R_F64((u32)(r_ebx));
    /* 0045474f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454751: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00454753: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454756: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454757: push 0x37f */ { u32 v = 0x37fu; r_esp -= 4; W32(r_esp, v); }
    /* 0045475c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x454761u); f_00814298();
    /* 00454761: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454764: ret  */ FN_RET(0x00454741); r_esp += 4; return;
}

void f_0045474e(void)
{
    FN_ENTER(0x0045474e);
    /* 0045474e: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454750: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454753: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454756: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454757: push 0x37f */ { u32 v = 0x37fu; r_esp -= 4; W32(r_esp, v); }
    /* 0045475c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x454761u); f_00814298();
    /* 00454761: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454764: ret  */ FN_RET(0x0045474e); r_esp += 4; return;
}

void f_00454752(void)
{
    FN_ENTER(0x00454752);
    /* 00454752: add byte ptr [ebx + 0x685138c1], al */ { u32 ad = (u32)(r_ebx+0x685138c1u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00454758: jg 0x45475d */ if ((!fZ&&fS==fO)) goto L_0045475d;
L_0045475a:; BB(0x0045475a);
    /* 0045475a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045475c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x454761u); f_00814298();
L_0045475d:; BB(0x0045475d);
    /* 0045475d: aaa  */ UNSUP(0x0045475d, "aaa ");
    /* 0045475e: sti  */ UNSUP(0x0045475e, "sti ");
    /* 0045475f: cmp eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;   }
    /* 00454761: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454764: ret  */ FN_RET(0x00454752); r_esp += 4; return;
}

void f_00454768(void) /* sub_454768 */
{
    FN_ENTER(0x00454768);
    /* 00454768: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454769: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045476c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045476e: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00454774: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454777: je 0x4547fd */ if (fZ) goto L_004547fd;
L_0045477d:; BB(0x0045477d);
    /* 0045477d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454780: je 0x4547fd */ if (fZ) goto L_004547fd;
L_00454782:; BB(0x00454782);
    /* 00454782: mov dword ptr [ebp + 0x37c], 3 */ W32((u32)(r_ebp+0x37cu), 0x3u);
    /* 0045478c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0045478f: lea edx, [ebp + 0x420] */ r_edx = (u32)(r_ebp+0x420u);
    /* 00454795: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00454799: lea eax, [ebp + 0x434] */ r_eax = (u32)(r_ebp+0x434u);
    /* 0045479f: mov esi, eax */ r_esi = r_eax;
    /* 004547a1: mov edi, edx */ r_edi = r_edx;
L_004547a3:; BB(0x004547a3);
    /* 004547a3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004547a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004547a7: je 0x4547b6 */ if (fZ) goto L_004547b6;
L_004547a9:; BB(0x004547a9);
    /* 004547a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004547aa: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4547afu); f_005cdcc0();
    /* 004547af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004547b0: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_004547b6:; BB(0x004547b6);
    /* 004547b6: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004547b9: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004547bb: ja 0x4547a3 */ if ((!fC&&!fZ)) goto L_004547a3;
L_004547bd:; BB(0x004547bd);
    /* 004547bd: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004547c0: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004547c4: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 004547ca: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004547cd: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 004547d4: mov dword ptr [ebp + 0x3d8], 5 */ W32((u32)(r_ebp+0x3d8u), 0x5u);
    /* 004547de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004547e0: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x4547e5u); f_00454804();
    /* 004547e5: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 004547eb: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004547ee: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 004547f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004547f7: je 0x4547fd */ if (fZ) goto L_004547fd;
L_004547f9:; BB(0x004547f9);
    /* 004547f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004547fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4547fdu); call_ind(t); }
L_004547fd:; BB(0x004547fd);
    /* 004547fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454800: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454801: ret  */ FN_RET(0x00454768); r_esp += 4; return;
}

void f_00454804(void) /* sub_454804 */
{
    FN_ENTER(0x00454804);
    /* 00454804: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00454808: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045480b: je 0x454832 */ if (fZ) goto L_00454832;
L_0045480d:; BB(0x0045480d);
    /* 0045480d: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 00454817: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 0045481d: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00454820: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454822: mov edx, dword ptr [eax*8 + 0x9a5e20] */ r_edx = R32((u32)(r_eax*8+0x9a5e20u));
    /* 00454829: mov dword ptr [ecx + 0x3f8], edx */ W32((u32)(r_ecx+0x3f8u), r_edx);
    /* 0045482f: ret 4 */ FN_RET(0x00454804); r_esp += 8; return;
L_00454832:; BB(0x00454832);
    /* 00454832: ret 4 */ FN_RET(0x00454804); r_esp += 8; return;
}

void f_00454838(void) /* sub_454838 */
{
    FN_ENTER(0x00454838);
    /* 00454838: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00454839: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045483a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045483b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045483c: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045483f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00454841: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 00454847: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 0045484d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045484f: jne 0x45487b */ if (!fZ) goto L_0045487b;
L_00454851:; BB(0x00454851);
    /* 00454851: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00454857: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045485a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045485c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045485e: mov eax, dword ptr [edx + 0x9a600c] */ r_eax = R32((u32)(r_edx+0x9a600cu));
    /* 00454864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454866: je 0x454888 */ if (fZ) goto L_00454888;
L_00454868:; BB(0x00454868);
    /* 00454868: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045486a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45486cu); call_ind(t); }
    /* 0045486c: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00454872: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00454875: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454877: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454879: jmp 0x454888 */ goto L_00454888;
L_0045487b:; BB(0x0045487b);
    /* 0045487b: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00454881: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00454884: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454886: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00454888:; BB(0x00454888);
    /* 00454888: mov eax, dword ptr [edx + 0x9a6010] */ r_eax = R32((u32)(r_edx+0x9a6010u));
    /* 0045488e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454890: je 0x454896 */ if (fZ) goto L_00454896;
L_00454892:; BB(0x00454892);
    /* 00454892: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00454894: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x454896u); call_ind(t); }
L_00454896:; BB(0x00454896);
    /* 00454896: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00454898: call 0x454d58 */ r_esp -= 4; W32(r_esp, 0x45489du); f_00454d58();
    /* 0045489d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045489f: call 0x454ecc */ r_esp -= 4; W32(r_esp, 0x4548a4u); f_00454ecc();
    /* 004548a4: mov edx, dword ptr [ebp + 0x39c] */ r_edx = R32((u32)(r_ebp+0x39cu));
    /* 004548aa: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 004548ad: lea eax, [ebp + 0x440] */ r_eax = (u32)(r_ebp+0x440u);
    /* 004548b3: lea ecx, [ebp + 0x488] */ r_ecx = (u32)(r_ebp+0x488u);
    /* 004548b9: mov ebx, eax */ r_ebx = r_eax;
    /* 004548bb: mov edi, edx */ r_edi = r_edx;
    /* 004548bd: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
L_004548c1:; BB(0x004548c1);
    /* 004548c1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004548c3: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 004548c6: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004548c9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004548cc: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004548cf: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004548d3: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004548d7: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004548da: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 004548dd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004548e0: mov edx, esi */ r_edx = r_esi;
    /* 004548e2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4548e7u); f_0082f9c4();
    /* 004548e7: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004548ea: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004548ec: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4548f1u); f_0082dcbc();
    /* 004548f1: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004548f5: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004548f8: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004548fa: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4548ffu); f_0082ddd8();
    /* 004548ff: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00454901: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00454904: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00454906: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045490a: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0045490c: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045490f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00454913: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00454917: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00454919: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045491b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0045491d: fchs  */ ST(0) = -ST(0);
    /* 0045491f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00454921: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454923: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00454926: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454928: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045492a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045492e: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00454930: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00454934: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00454937: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045493b: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0045493e: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00454942: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454945: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454947: ja 0x4548c1 */ if ((!fC&&!fZ)) goto L_004548c1;
L_0045494d:; BB(0x0045494d);
    /* 0045494d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045494f: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x454954u); f_007b6880();
    /* 00454954: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00454956: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454957: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x45495cu); f_006946a8();
    /* 0045495c: mov eax, 1 */ r_eax = 0x1u;
    /* 00454961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454963: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454968: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045496d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045496e: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454973u); f_0080575c();
    /* 00454973: lea edx, [ebp + 0x440] */ r_edx = (u32)(r_ebp+0x440u);
    /* 00454979: mov eax, 1 */ r_eax = 0x1u;
    /* 0045497e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045497f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454980: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454985: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045498a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045498b: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454990u); f_0080575c();
    /* 00454990: lea edx, [ebp + 0x458] */ r_edx = (u32)(r_ebp+0x458u);
    /* 00454996: mov eax, 1 */ r_eax = 0x1u;
    /* 0045499b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045499c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045499d: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004549a2: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004549a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004549a8: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4549adu); f_0080575c();
    /* 004549ad: lea edx, [ebp + 0x470] */ r_edx = (u32)(r_ebp+0x470u);
    /* 004549b3: mov eax, 1 */ r_eax = 0x1u;
    /* 004549b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004549b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004549ba: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004549bf: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004549c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004549c5: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4549cau); f_0080575c();
    /* 004549ca: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004549cd: movzx eax, byte ptr [0xa45590] */ r_eax = (u32)R8((u32)(0xa45590u));
    /* 004549d4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004549d6: jne 0x4549ea */ if (!fZ) goto L_004549ea;
L_004549d8:; BB(0x004549d8);
    /* 004549d8: mov dword ptr [0xa45594], 0x43160000 */ W32((u32)(0xa45594u), 0x43160000u);
    /* 004549e2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004549e5: mov byte ptr [0xa45590], al */ W8((u32)(0xa45590u), (u8)r_eax);
L_004549ea:; BB(0x004549ea);
    /* 004549ea: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004549ec: jne 0x454a08 */ if (!fZ) goto L_00454a08;
L_004549ee:; BB(0x004549ee);
    /* 004549ee: fld dword ptr [0xa45594] */ FPUSH(R_F32((u32)(0xa45594u)));
    /* 004549f4: fdiv dword ptr [0x8fff14] */ ST(0) = ST(0) / R_F32((u32)(0x8fff14u));
    /* 004549fa: fstp dword ptr [0xa45598] */ W_F32((u32)(0xa45598u), ST(0)); FPOP();
    /* 00454a00: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454a03: mov byte ptr [0xa45590], al */ W8((u32)(0xa45590u), (u8)r_eax);
L_00454a08:; BB(0x00454a08);
    /* 00454a08: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454a0a: jne 0x454a22 */ if (!fZ) goto L_00454a22;
L_00454a0c:; BB(0x00454a0c);
    /* 00454a0c: mov edx, dword ptr [0xa45598] */ r_edx = R32((u32)(0xa45598u));
    /* 00454a12: mov dword ptr [0xa4559c], edx */ W32((u32)(0xa4559cu), r_edx);
    /* 00454a18: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454a1d: mov byte ptr [0xa45590], al */ W8((u32)(0xa45590u), (u8)r_eax);
L_00454a22:; BB(0x00454a22);
    /* 00454a22: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00454a25: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x454a2au); f_0082dcbc();
    /* 00454a2a: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00454a2e: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00454a31: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x454a36u); f_0082ddd8();
    /* 00454a36: fld dword ptr [0xa45598] */ FPUSH(R_F32((u32)(0xa45598u)));
    /* 00454a3c: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00454a40: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00454a45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454a4a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00454a4e: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00454a52: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00454a56: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00454a5a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00454a5e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00454a62: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454a64: mov edi, edx */ r_edi = r_edx;
L_00454a66:; BB(0x00454a66);
    /* 00454a66: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00454a6a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00454a6e: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454a71: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00454a74: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454a77: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00454a7b: mov edx, eax */ r_edx = r_eax;
    /* 00454a7d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00454a7f: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454a83: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454a87: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00454a8b: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454a8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454a91: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 00454a93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454a95: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00454a97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454a99: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00454a9d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00454a9f: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 00454aa3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00454aa5: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00454aa9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454aab: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 00454aaf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00454ab1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454ab3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00454ab7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454ab9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00454abd: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00454ac1: mov eax, 1 */ r_eax = 0x1u;
    /* 00454ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454ac8: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454acd: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454ad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ad3: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454ad8u); f_0080575c();
    /* 00454ad8: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00454adc: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 00454ae0: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00454ae4: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454ae7: fadd dword ptr [esp + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x68u));
    /* 00454aeb: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454aee: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454af1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454af3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00454af7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454af9: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 00454afd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454aff: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00454b03: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00454b07: mov eax, 1 */ r_eax = 0x1u;
    /* 00454b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b0e: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454b13: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454b18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b19: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454b1eu); f_0080575c();
    /* 00454b1e: fld dword ptr [esp + 0x84] */ FPUSH(R_F32((u32)(r_esp+0x84u)));
    /* 00454b25: fmul dword ptr [esp + 0x88] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x88u));
    /* 00454b2c: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454b2f: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00454b33: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454b36: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454b39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454b3b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00454b3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454b41: fst dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0));
    /* 00454b48: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454b4a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00454b4e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00454b52: mov eax, 1 */ r_eax = 0x1u;
    /* 00454b57: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00454b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b5d: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454b62: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454b67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b68: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454b6du); f_0080575c();
    /* 00454b6d: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454b70: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454b73: jge 0x454bb2 */ if ((fS==fO)) goto L_00454bb2;
L_00454b75:; BB(0x00454b75);
    /* 00454b75: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00454b79: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454b7c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 00454b80: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454b83: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454b86: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 00454b8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454b8c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00454b90: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00454b94: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00454b98: mov eax, 1 */ r_eax = 0x1u;
    /* 00454b9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b9f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454ba4: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454ba9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454baa: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454bafu); f_0080575c();
    /* 00454baf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454bb2:; BB(0x00454bb2);
    /* 00454bb2: fld dword ptr [0xa4559c] */ FPUSH(R_F32((u32)(0xa4559cu)));
    /* 00454bb8: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00454bbc: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00454bc0: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00454bc5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454bca: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00454bce: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00454bd2: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00454bd6: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00454bda: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454bdd: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00454be1: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454be4: jl 0x454a66 */ if ((fS!=fO)) goto L_00454a66;
L_00454bea:; BB(0x00454bea);
    /* 00454bea: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00454bf0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454bf3: je 0x454d07 */ if (fZ) goto L_00454d07;
L_00454bf9:; BB(0x00454bf9);
    /* 00454bf9: movzx eax, byte ptr [0xa455a0] */ r_eax = (u32)R8((u32)(0xa455a0u));
    /* 00454c00: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c02: jne 0x454c16 */ if (!fZ) goto L_00454c16;
L_00454c04:; BB(0x00454c04);
    /* 00454c04: mov dword ptr [0xa455a4], 0x42480000 */ W32((u32)(0xa455a4u), 0x42480000u);
    /* 00454c0e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c11: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c16:; BB(0x00454c16);
    /* 00454c16: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c18: jne 0x454c2c */ if (!fZ) goto L_00454c2c;
L_00454c1a:; BB(0x00454c1a);
    /* 00454c1a: mov dword ptr [0xa455a8], 0x41200000 */ W32((u32)(0xa455a8u), 0x41200000u);
    /* 00454c24: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c27: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c2c:; BB(0x00454c2c);
    /* 00454c2c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c2e: jne 0x454c7e */ if (!fZ) goto L_00454c7e;
L_00454c30:; BB(0x00454c30);
    /* 00454c30: fld dword ptr [0xa455a4] */ FPUSH(R_F32((u32)(0xa455a4u)));
    /* 00454c36: mov edx, dword ptr [0xa455a4] */ r_edx = R32((u32)(0xa455a4u));
    /* 00454c3c: mov ecx, dword ptr [0xa455a8] */ r_ecx = R32((u32)(0xa455a8u));
    /* 00454c42: mov dword ptr [0xa455ac], edx */ W32((u32)(0xa455acu), r_edx);
    /* 00454c48: fchs  */ ST(0) = -ST(0);
    /* 00454c4a: fst dword ptr [0xa455b8] */ W_F32((u32)(0xa455b8u), ST(0));
    /* 00454c50: fstp dword ptr [0xa455d8] */ W_F32((u32)(0xa455d8u), ST(0)); FPOP();
    /* 00454c56: mov dword ptr [0xa455b0], ecx */ W32((u32)(0xa455b0u), r_ecx);
    /* 00454c5c: mov dword ptr [0xa455bc], ecx */ W32((u32)(0xa455bcu), r_ecx);
    /* 00454c62: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c67: mov dword ptr [0xa455c8], ecx */ W32((u32)(0xa455c8u), r_ecx);
    /* 00454c6d: mov dword ptr [0xa455cc], edx */ W32((u32)(0xa455ccu), r_edx);
    /* 00454c73: mov dword ptr [0xa455d4], ecx */ W32((u32)(0xa455d4u), r_ecx);
    /* 00454c79: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c7e:; BB(0x00454c7e);
    /* 00454c7e: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00454c82: lea ecx, [ebp + 0x400] */ r_ecx = (u32)(r_ebp+0x400u);
    /* 00454c88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454c8a: lea eax, [ebp + 0x410] */ r_eax = (u32)(r_ebp+0x410u);
    /* 00454c90: mov ebx, eax */ r_ebx = r_eax;
    /* 00454c92: mov esi, edx */ r_esi = r_edx;
    /* 00454c94: mov edi, ecx */ r_edi = r_ecx;
L_00454c96:; BB(0x00454c96);
    /* 00454c96: lea edx, [esi + 0xa455ac] */ r_edx = (u32)(r_esi+0xa455acu);
    /* 00454c9c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00454ca0: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00454ca3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00454ca7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454caa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00454cae: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00454cb1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00454cb5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x454cbau); f_0082ebac();
    /* 00454cba: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00454cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cbe: je 0x454cca */ if (fZ) goto L_00454cca;
L_00454cc0:; BB(0x00454cc0);
    /* 00454cc0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cc5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454ccau); f_00508db8();
L_00454cca:; BB(0x00454cca);
    /* 00454cca: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00454ccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ccf: je 0x454cdb */ if (fZ) goto L_00454cdb;
L_00454cd1:; BB(0x00454cd1);
    /* 00454cd1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cd6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454cdbu); f_00508db8();
L_00454cdb:; BB(0x00454cdb);
    /* 00454cdb: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454cde: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454ce1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454ce3: ja 0x454c96 */ if ((!fC&&!fZ)) goto L_00454c96;
L_00454ce5:; BB(0x00454ce5);
    /* 00454ce5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00454ce9: lea ecx, [ebp + 0x380] */ r_ecx = (u32)(r_ebp+0x380u);
    /* 00454cef: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x454cf4u); f_0044d180();
    /* 00454cf4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454cfa: push 0x36b */ { u32 v = 0x36bu; r_esp -= 4; W32(r_esp, v); }
    /* 00454cff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x454d04u); f_008144b0();
    /* 00454d04: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454d07:; BB(0x00454d07);
    /* 00454d07: fld dword ptr [0x8ffca0] */ FPUSH(R_F32((u32)(0x8ffca0u)));
    /* 00454d0d: fadd dword ptr [ebp + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e4u));
    /* 00454d13: fld dword ptr [0x8fff0c] */ FPUSH(R_F32((u32)(0x8fff0cu)));
    /* 00454d19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00454d1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454d1d: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00454d24: movsx esi, word ptr [ebp + 0x346] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x346u));
    /* 00454d2b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454d2f: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d33: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00454d37: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d3b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00454d3d: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00454d43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454d44: jb 0x454d48 */ if (fC) goto L_00454d48;
L_00454d46:; BB(0x00454d46);
    /* 00454d46: fst st(1) */ ST(1) = ST(0);
L_00454d48:; BB(0x00454d48);
    /* 00454d48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454d4a: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
    /* 00454d50: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00454d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454838); r_esp += 4; return;
}

void f_00454843(void)
{
    FN_ENTER(0x00454843);
    /* 00454843: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 00454844: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454846: add byte ptr [ebx + 0x38090], cl */ { u32 ad = (u32)(r_ebx+0x38090u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045484c: add byte ptr [ebp - 0x74d58a2e], al */ { u32 ad = (u32)(r_ebp+0x8b2a75d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454852: test dword ptr [ebx + eax], edi */ {  u32 a = R32((u32)(r_ebx+r_eax)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;   }
    /* 00454856: add byte ptr [ebp - 0x2dfc7fec], cl */ { u32 ad = (u32)(r_ebp+0xd2038014u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045485c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045485e: mov eax, dword ptr [edx + 0x9a600c] */ r_eax = R32((u32)(r_edx+0x9a600cu));
    /* 00454864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454866: je 0x454888 */ if (fZ) goto L_00454888;
L_00454868:; BB(0x00454868);
    /* 00454868: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045486a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45486cu); call_ind(t); }
    /* 0045486c: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00454872: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00454875: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454877: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454879: jmp 0x454888 */ goto L_00454888;
L_00454888:; BB(0x00454888);
    /* 00454888: mov eax, dword ptr [edx + 0x9a6010] */ r_eax = R32((u32)(r_edx+0x9a6010u));
    /* 0045488e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454890: je 0x454896 */ if (fZ) goto L_00454896;
L_00454892:; BB(0x00454892);
    /* 00454892: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00454894: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x454896u); call_ind(t); }
L_00454896:; BB(0x00454896);
    /* 00454896: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00454898: call 0x454d58 */ r_esp -= 4; W32(r_esp, 0x45489du); f_00454d58();
    /* 0045489d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045489f: call 0x454ecc */ r_esp -= 4; W32(r_esp, 0x4548a4u); f_00454ecc();
    /* 004548a4: mov edx, dword ptr [ebp + 0x39c] */ r_edx = R32((u32)(r_ebp+0x39cu));
    /* 004548aa: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 004548ad: lea eax, [ebp + 0x440] */ r_eax = (u32)(r_ebp+0x440u);
    /* 004548b3: lea ecx, [ebp + 0x488] */ r_ecx = (u32)(r_ebp+0x488u);
    /* 004548b9: mov ebx, eax */ r_ebx = r_eax;
    /* 004548bb: mov edi, edx */ r_edi = r_edx;
    /* 004548bd: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
L_004548c1:; BB(0x004548c1);
    /* 004548c1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004548c3: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 004548c6: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004548c9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004548cc: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004548cf: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004548d3: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004548d7: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004548da: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 004548dd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004548e0: mov edx, esi */ r_edx = r_esi;
    /* 004548e2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4548e7u); f_0082f9c4();
    /* 004548e7: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004548ea: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004548ec: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4548f1u); f_0082dcbc();
    /* 004548f1: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004548f5: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004548f8: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004548fa: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4548ffu); f_0082ddd8();
    /* 004548ff: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00454901: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00454904: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00454906: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045490a: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0045490c: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045490f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00454913: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00454917: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00454919: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045491b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0045491d: fchs  */ ST(0) = -ST(0);
    /* 0045491f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00454921: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454923: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00454926: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454928: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045492a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045492e: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00454930: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00454934: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00454937: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045493b: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0045493e: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00454942: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454945: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454947: ja 0x4548c1 */ if ((!fC&&!fZ)) goto L_004548c1;
L_0045494d:; BB(0x0045494d);
    /* 0045494d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045494f: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x454954u); f_007b6880();
    /* 00454954: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00454956: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454957: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x45495cu); f_006946a8();
    /* 0045495c: mov eax, 1 */ r_eax = 0x1u;
    /* 00454961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454963: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454968: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045496d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045496e: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454973u); f_0080575c();
    /* 00454973: lea edx, [ebp + 0x440] */ r_edx = (u32)(r_ebp+0x440u);
    /* 00454979: mov eax, 1 */ r_eax = 0x1u;
    /* 0045497e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045497f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454980: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454985: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045498a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045498b: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454990u); f_0080575c();
    /* 00454990: lea edx, [ebp + 0x458] */ r_edx = (u32)(r_ebp+0x458u);
    /* 00454996: mov eax, 1 */ r_eax = 0x1u;
    /* 0045499b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045499c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045499d: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004549a2: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004549a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004549a8: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4549adu); f_0080575c();
    /* 004549ad: lea edx, [ebp + 0x470] */ r_edx = (u32)(r_ebp+0x470u);
    /* 004549b3: mov eax, 1 */ r_eax = 0x1u;
    /* 004549b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004549b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004549ba: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004549bf: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004549c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004549c5: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4549cau); f_0080575c();
    /* 004549ca: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004549cd: movzx eax, byte ptr [0xa45590] */ r_eax = (u32)R8((u32)(0xa45590u));
    /* 004549d4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004549d6: jne 0x4549ea */ if (!fZ) goto L_004549ea;
L_004549d8:; BB(0x004549d8);
    /* 004549d8: mov dword ptr [0xa45594], 0x43160000 */ W32((u32)(0xa45594u), 0x43160000u);
    /* 004549e2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004549e5: mov byte ptr [0xa45590], al */ W8((u32)(0xa45590u), (u8)r_eax);
L_004549ea:; BB(0x004549ea);
    /* 004549ea: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004549ec: jne 0x454a08 */ if (!fZ) goto L_00454a08;
L_004549ee:; BB(0x004549ee);
    /* 004549ee: fld dword ptr [0xa45594] */ FPUSH(R_F32((u32)(0xa45594u)));
    /* 004549f4: fdiv dword ptr [0x8fff14] */ ST(0) = ST(0) / R_F32((u32)(0x8fff14u));
    /* 004549fa: fstp dword ptr [0xa45598] */ W_F32((u32)(0xa45598u), ST(0)); FPOP();
    /* 00454a00: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454a03: mov byte ptr [0xa45590], al */ W8((u32)(0xa45590u), (u8)r_eax);
L_00454a08:; BB(0x00454a08);
    /* 00454a08: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454a0a: jne 0x454a22 */ if (!fZ) goto L_00454a22;
L_00454a0c:; BB(0x00454a0c);
    /* 00454a0c: mov edx, dword ptr [0xa45598] */ r_edx = R32((u32)(0xa45598u));
    /* 00454a12: mov dword ptr [0xa4559c], edx */ W32((u32)(0xa4559cu), r_edx);
    /* 00454a18: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454a1d: mov byte ptr [0xa45590], al */ W8((u32)(0xa45590u), (u8)r_eax);
L_00454a22:; BB(0x00454a22);
    /* 00454a22: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00454a25: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x454a2au); f_0082dcbc();
    /* 00454a2a: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00454a2e: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00454a31: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x454a36u); f_0082ddd8();
    /* 00454a36: fld dword ptr [0xa45598] */ FPUSH(R_F32((u32)(0xa45598u)));
    /* 00454a3c: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00454a40: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00454a45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454a4a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00454a4e: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00454a52: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00454a56: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00454a5a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00454a5e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00454a62: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454a64: mov edi, edx */ r_edi = r_edx;
L_00454a66:; BB(0x00454a66);
    /* 00454a66: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00454a6a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00454a6e: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454a71: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00454a74: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454a77: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00454a7b: mov edx, eax */ r_edx = r_eax;
    /* 00454a7d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00454a7f: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454a83: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454a87: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00454a8b: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454a8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454a91: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 00454a93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454a95: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00454a97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454a99: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00454a9d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00454a9f: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 00454aa3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00454aa5: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00454aa9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454aab: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 00454aaf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00454ab1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454ab3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00454ab7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454ab9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00454abd: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00454ac1: mov eax, 1 */ r_eax = 0x1u;
    /* 00454ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454ac8: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454acd: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454ad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ad3: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454ad8u); f_0080575c();
    /* 00454ad8: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00454adc: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 00454ae0: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00454ae4: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454ae7: fadd dword ptr [esp + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x68u));
    /* 00454aeb: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454aee: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454af1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454af3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00454af7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454af9: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 00454afd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454aff: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00454b03: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00454b07: mov eax, 1 */ r_eax = 0x1u;
    /* 00454b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b0e: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454b13: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454b18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b19: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454b1eu); f_0080575c();
    /* 00454b1e: fld dword ptr [esp + 0x84] */ FPUSH(R_F32((u32)(r_esp+0x84u)));
    /* 00454b25: fmul dword ptr [esp + 0x88] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x88u));
    /* 00454b2c: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454b2f: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00454b33: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454b36: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454b39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454b3b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00454b3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454b41: fst dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0));
    /* 00454b48: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454b4a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00454b4e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00454b52: mov eax, 1 */ r_eax = 0x1u;
    /* 00454b57: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00454b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b5d: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454b62: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454b67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b68: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454b6du); f_0080575c();
    /* 00454b6d: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454b70: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454b73: jge 0x454bb2 */ if ((fS==fO)) goto L_00454bb2;
L_00454b75:; BB(0x00454b75);
    /* 00454b75: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00454b79: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454b7c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 00454b80: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454b83: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454b86: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 00454b8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454b8c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00454b90: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00454b94: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00454b98: mov eax, 1 */ r_eax = 0x1u;
    /* 00454b9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b9f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454ba4: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454ba9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454baa: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454bafu); f_0080575c();
    /* 00454baf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454bb2:; BB(0x00454bb2);
    /* 00454bb2: fld dword ptr [0xa4559c] */ FPUSH(R_F32((u32)(0xa4559cu)));
    /* 00454bb8: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00454bbc: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00454bc0: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00454bc5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454bca: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00454bce: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00454bd2: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00454bd6: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00454bda: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454bdd: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00454be1: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454be4: jl 0x454a66 */ if ((fS!=fO)) goto L_00454a66;
L_00454bea:; BB(0x00454bea);
    /* 00454bea: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00454bf0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454bf3: je 0x454d07 */ if (fZ) goto L_00454d07;
L_00454bf9:; BB(0x00454bf9);
    /* 00454bf9: movzx eax, byte ptr [0xa455a0] */ r_eax = (u32)R8((u32)(0xa455a0u));
    /* 00454c00: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c02: jne 0x454c16 */ if (!fZ) goto L_00454c16;
L_00454c04:; BB(0x00454c04);
    /* 00454c04: mov dword ptr [0xa455a4], 0x42480000 */ W32((u32)(0xa455a4u), 0x42480000u);
    /* 00454c0e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c11: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c16:; BB(0x00454c16);
    /* 00454c16: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c18: jne 0x454c2c */ if (!fZ) goto L_00454c2c;
L_00454c1a:; BB(0x00454c1a);
    /* 00454c1a: mov dword ptr [0xa455a8], 0x41200000 */ W32((u32)(0xa455a8u), 0x41200000u);
    /* 00454c24: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c27: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c2c:; BB(0x00454c2c);
    /* 00454c2c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c2e: jne 0x454c7e */ if (!fZ) goto L_00454c7e;
L_00454c30:; BB(0x00454c30);
    /* 00454c30: fld dword ptr [0xa455a4] */ FPUSH(R_F32((u32)(0xa455a4u)));
    /* 00454c36: mov edx, dword ptr [0xa455a4] */ r_edx = R32((u32)(0xa455a4u));
    /* 00454c3c: mov ecx, dword ptr [0xa455a8] */ r_ecx = R32((u32)(0xa455a8u));
    /* 00454c42: mov dword ptr [0xa455ac], edx */ W32((u32)(0xa455acu), r_edx);
    /* 00454c48: fchs  */ ST(0) = -ST(0);
    /* 00454c4a: fst dword ptr [0xa455b8] */ W_F32((u32)(0xa455b8u), ST(0));
    /* 00454c50: fstp dword ptr [0xa455d8] */ W_F32((u32)(0xa455d8u), ST(0)); FPOP();
    /* 00454c56: mov dword ptr [0xa455b0], ecx */ W32((u32)(0xa455b0u), r_ecx);
    /* 00454c5c: mov dword ptr [0xa455bc], ecx */ W32((u32)(0xa455bcu), r_ecx);
    /* 00454c62: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c67: mov dword ptr [0xa455c8], ecx */ W32((u32)(0xa455c8u), r_ecx);
    /* 00454c6d: mov dword ptr [0xa455cc], edx */ W32((u32)(0xa455ccu), r_edx);
    /* 00454c73: mov dword ptr [0xa455d4], ecx */ W32((u32)(0xa455d4u), r_ecx);
    /* 00454c79: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c7e:; BB(0x00454c7e);
    /* 00454c7e: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00454c82: lea ecx, [ebp + 0x400] */ r_ecx = (u32)(r_ebp+0x400u);
    /* 00454c88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454c8a: lea eax, [ebp + 0x410] */ r_eax = (u32)(r_ebp+0x410u);
    /* 00454c90: mov ebx, eax */ r_ebx = r_eax;
    /* 00454c92: mov esi, edx */ r_esi = r_edx;
    /* 00454c94: mov edi, ecx */ r_edi = r_ecx;
L_00454c96:; BB(0x00454c96);
    /* 00454c96: lea edx, [esi + 0xa455ac] */ r_edx = (u32)(r_esi+0xa455acu);
    /* 00454c9c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00454ca0: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00454ca3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00454ca7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454caa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00454cae: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00454cb1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00454cb5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x454cbau); f_0082ebac();
    /* 00454cba: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00454cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cbe: je 0x454cca */ if (fZ) goto L_00454cca;
L_00454cc0:; BB(0x00454cc0);
    /* 00454cc0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cc5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454ccau); f_00508db8();
L_00454cca:; BB(0x00454cca);
    /* 00454cca: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00454ccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ccf: je 0x454cdb */ if (fZ) goto L_00454cdb;
L_00454cd1:; BB(0x00454cd1);
    /* 00454cd1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cd6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454cdbu); f_00508db8();
L_00454cdb:; BB(0x00454cdb);
    /* 00454cdb: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454cde: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454ce1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454ce3: ja 0x454c96 */ if ((!fC&&!fZ)) goto L_00454c96;
L_00454ce5:; BB(0x00454ce5);
    /* 00454ce5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00454ce9: lea ecx, [ebp + 0x380] */ r_ecx = (u32)(r_ebp+0x380u);
    /* 00454cef: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x454cf4u); f_0044d180();
    /* 00454cf4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454cfa: push 0x36b */ { u32 v = 0x36bu; r_esp -= 4; W32(r_esp, v); }
    /* 00454cff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x454d04u); f_008144b0();
    /* 00454d04: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454d07:; BB(0x00454d07);
    /* 00454d07: fld dword ptr [0x8ffca0] */ FPUSH(R_F32((u32)(0x8ffca0u)));
    /* 00454d0d: fadd dword ptr [ebp + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e4u));
    /* 00454d13: fld dword ptr [0x8fff0c] */ FPUSH(R_F32((u32)(0x8fff0cu)));
    /* 00454d19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00454d1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454d1d: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00454d24: movsx esi, word ptr [ebp + 0x346] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x346u));
    /* 00454d2b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454d2f: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d33: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00454d37: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d3b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00454d3d: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00454d43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454d44: jb 0x454d48 */ if (fC) goto L_00454d48;
L_00454d46:; BB(0x00454d46);
    /* 00454d46: fst st(1) */ ST(1) = ST(0);
L_00454d48:; BB(0x00454d48);
    /* 00454d48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454d4a: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
    /* 00454d50: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00454d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454843); r_esp += 4; return;
}

void f_00454b41(void)
{
    FN_ENTER(0x00454b41);
    goto L_00454b41;
L_00454a66:; BB(0x00454a66);
    /* 00454a66: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00454a6a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00454a6e: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454a71: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00454a74: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454a77: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00454a7b: mov edx, eax */ r_edx = r_eax;
    /* 00454a7d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00454a7f: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454a83: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454a87: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00454a8b: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454a8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454a91: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 00454a93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454a95: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00454a97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454a99: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00454a9d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00454a9f: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 00454aa3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00454aa5: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00454aa9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454aab: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 00454aaf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00454ab1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454ab3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00454ab7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454ab9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00454abd: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00454ac1: mov eax, 1 */ r_eax = 0x1u;
    /* 00454ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454ac8: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454acd: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454ad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ad3: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454ad8u); f_0080575c();
    /* 00454ad8: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00454adc: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 00454ae0: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00454ae4: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454ae7: fadd dword ptr [esp + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x68u));
    /* 00454aeb: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454aee: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454af1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454af3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00454af7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454af9: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 00454afd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454aff: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00454b03: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00454b07: mov eax, 1 */ r_eax = 0x1u;
    /* 00454b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b0e: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454b13: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454b18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b19: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454b1eu); f_0080575c();
    /* 00454b1e: fld dword ptr [esp + 0x84] */ FPUSH(R_F32((u32)(r_esp+0x84u)));
    /* 00454b25: fmul dword ptr [esp + 0x88] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x88u));
    /* 00454b2c: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454b2f: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00454b33: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454b36: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454b39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454b3b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00454b3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00454b41:; BB(0x00454b41);
    /* 00454b41: fst dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0));
    /* 00454b48: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00454b4a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00454b4e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00454b52: mov eax, 1 */ r_eax = 0x1u;
    /* 00454b57: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00454b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b5d: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454b62: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454b67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b68: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454b6du); f_0080575c();
    /* 00454b6d: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454b70: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454b73: jge 0x454bb2 */ if ((fS==fO)) goto L_00454bb2;
L_00454b75:; BB(0x00454b75);
    /* 00454b75: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00454b79: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00454b7c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 00454b80: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454b83: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00454b86: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 00454b8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454b8c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00454b90: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00454b94: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00454b98: mov eax, 1 */ r_eax = 0x1u;
    /* 00454b9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b9f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00454ba4: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454ba9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454baa: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x454bafu); f_0080575c();
    /* 00454baf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454bb2:; BB(0x00454bb2);
    /* 00454bb2: fld dword ptr [0xa4559c] */ FPUSH(R_F32((u32)(0xa4559cu)));
    /* 00454bb8: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00454bbc: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00454bc0: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00454bc5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454bca: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00454bce: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00454bd2: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00454bd6: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00454bda: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454bdd: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00454be1: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454be4: jl 0x454a66 */ if ((fS!=fO)) goto L_00454a66;
L_00454bea:; BB(0x00454bea);
    /* 00454bea: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00454bf0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454bf3: je 0x454d07 */ if (fZ) goto L_00454d07;
L_00454bf9:; BB(0x00454bf9);
    /* 00454bf9: movzx eax, byte ptr [0xa455a0] */ r_eax = (u32)R8((u32)(0xa455a0u));
    /* 00454c00: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c02: jne 0x454c16 */ if (!fZ) goto L_00454c16;
L_00454c04:; BB(0x00454c04);
    /* 00454c04: mov dword ptr [0xa455a4], 0x42480000 */ W32((u32)(0xa455a4u), 0x42480000u);
    /* 00454c0e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c11: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c16:; BB(0x00454c16);
    /* 00454c16: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c18: jne 0x454c2c */ if (!fZ) goto L_00454c2c;
L_00454c1a:; BB(0x00454c1a);
    /* 00454c1a: mov dword ptr [0xa455a8], 0x41200000 */ W32((u32)(0xa455a8u), 0x41200000u);
    /* 00454c24: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c27: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c2c:; BB(0x00454c2c);
    /* 00454c2c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c2e: jne 0x454c7e */ if (!fZ) goto L_00454c7e;
L_00454c30:; BB(0x00454c30);
    /* 00454c30: fld dword ptr [0xa455a4] */ FPUSH(R_F32((u32)(0xa455a4u)));
    /* 00454c36: mov edx, dword ptr [0xa455a4] */ r_edx = R32((u32)(0xa455a4u));
    /* 00454c3c: mov ecx, dword ptr [0xa455a8] */ r_ecx = R32((u32)(0xa455a8u));
    /* 00454c42: mov dword ptr [0xa455ac], edx */ W32((u32)(0xa455acu), r_edx);
    /* 00454c48: fchs  */ ST(0) = -ST(0);
    /* 00454c4a: fst dword ptr [0xa455b8] */ W_F32((u32)(0xa455b8u), ST(0));
    /* 00454c50: fstp dword ptr [0xa455d8] */ W_F32((u32)(0xa455d8u), ST(0)); FPOP();
    /* 00454c56: mov dword ptr [0xa455b0], ecx */ W32((u32)(0xa455b0u), r_ecx);
    /* 00454c5c: mov dword ptr [0xa455bc], ecx */ W32((u32)(0xa455bcu), r_ecx);
    /* 00454c62: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c67: mov dword ptr [0xa455c8], ecx */ W32((u32)(0xa455c8u), r_ecx);
    /* 00454c6d: mov dword ptr [0xa455cc], edx */ W32((u32)(0xa455ccu), r_edx);
    /* 00454c73: mov dword ptr [0xa455d4], ecx */ W32((u32)(0xa455d4u), r_ecx);
    /* 00454c79: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c7e:; BB(0x00454c7e);
    /* 00454c7e: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00454c82: lea ecx, [ebp + 0x400] */ r_ecx = (u32)(r_ebp+0x400u);
    /* 00454c88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454c8a: lea eax, [ebp + 0x410] */ r_eax = (u32)(r_ebp+0x410u);
    /* 00454c90: mov ebx, eax */ r_ebx = r_eax;
    /* 00454c92: mov esi, edx */ r_esi = r_edx;
    /* 00454c94: mov edi, ecx */ r_edi = r_ecx;
L_00454c96:; BB(0x00454c96);
    /* 00454c96: lea edx, [esi + 0xa455ac] */ r_edx = (u32)(r_esi+0xa455acu);
    /* 00454c9c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00454ca0: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00454ca3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00454ca7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454caa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00454cae: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00454cb1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00454cb5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x454cbau); f_0082ebac();
    /* 00454cba: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00454cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cbe: je 0x454cca */ if (fZ) goto L_00454cca;
L_00454cc0:; BB(0x00454cc0);
    /* 00454cc0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cc5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454ccau); f_00508db8();
L_00454cca:; BB(0x00454cca);
    /* 00454cca: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00454ccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ccf: je 0x454cdb */ if (fZ) goto L_00454cdb;
L_00454cd1:; BB(0x00454cd1);
    /* 00454cd1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cd6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454cdbu); f_00508db8();
L_00454cdb:; BB(0x00454cdb);
    /* 00454cdb: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454cde: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454ce1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454ce3: ja 0x454c96 */ if ((!fC&&!fZ)) goto L_00454c96;
L_00454ce5:; BB(0x00454ce5);
    /* 00454ce5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00454ce9: lea ecx, [ebp + 0x380] */ r_ecx = (u32)(r_ebp+0x380u);
    /* 00454cef: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x454cf4u); f_0044d180();
    /* 00454cf4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454cfa: push 0x36b */ { u32 v = 0x36bu; r_esp -= 4; W32(r_esp, v); }
    /* 00454cff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x454d04u); f_008144b0();
    /* 00454d04: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454d07:; BB(0x00454d07);
    /* 00454d07: fld dword ptr [0x8ffca0] */ FPUSH(R_F32((u32)(0x8ffca0u)));
    /* 00454d0d: fadd dword ptr [ebp + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e4u));
    /* 00454d13: fld dword ptr [0x8fff0c] */ FPUSH(R_F32((u32)(0x8fff0cu)));
    /* 00454d19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00454d1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454d1d: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00454d24: movsx esi, word ptr [ebp + 0x346] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x346u));
    /* 00454d2b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454d2f: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d33: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00454d37: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d3b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00454d3d: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00454d43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454d44: jb 0x454d48 */ if (fC) goto L_00454d48;
L_00454d46:; BB(0x00454d46);
    /* 00454d46: fst st(1) */ ST(1) = ST(0);
L_00454d48:; BB(0x00454d48);
    /* 00454d48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454d4a: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
    /* 00454d50: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00454d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454b41); r_esp += 4; return;
}

void f_00454c42(void)
{
    FN_ENTER(0x00454c42);
    /* 00454c42: mov dword ptr [0xa455ac], edx */ W32((u32)(0xa455acu), r_edx);
    /* 00454c48: fchs  */ ST(0) = -ST(0);
    /* 00454c4a: fst dword ptr [0xa455b8] */ W_F32((u32)(0xa455b8u), ST(0));
    /* 00454c50: fstp dword ptr [0xa455d8] */ W_F32((u32)(0xa455d8u), ST(0)); FPOP();
    /* 00454c56: mov dword ptr [0xa455b0], ecx */ W32((u32)(0xa455b0u), r_ecx);
    /* 00454c5c: mov dword ptr [0xa455bc], ecx */ W32((u32)(0xa455bcu), r_ecx);
    /* 00454c62: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c67: mov dword ptr [0xa455c8], ecx */ W32((u32)(0xa455c8u), r_ecx);
    /* 00454c6d: mov dword ptr [0xa455cc], edx */ W32((u32)(0xa455ccu), r_edx);
    /* 00454c73: mov dword ptr [0xa455d4], ecx */ W32((u32)(0xa455d4u), r_ecx);
    /* 00454c79: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
    /* 00454c7e: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00454c82: lea ecx, [ebp + 0x400] */ r_ecx = (u32)(r_ebp+0x400u);
    /* 00454c88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454c8a: lea eax, [ebp + 0x410] */ r_eax = (u32)(r_ebp+0x410u);
    /* 00454c90: mov ebx, eax */ r_ebx = r_eax;
    /* 00454c92: mov esi, edx */ r_esi = r_edx;
    /* 00454c94: mov edi, ecx */ r_edi = r_ecx;
L_00454c96:; BB(0x00454c96);
    /* 00454c96: lea edx, [esi + 0xa455ac] */ r_edx = (u32)(r_esi+0xa455acu);
    /* 00454c9c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00454ca0: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00454ca3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00454ca7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454caa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00454cae: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00454cb1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00454cb5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x454cbau); f_0082ebac();
    /* 00454cba: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00454cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cbe: je 0x454cca */ if (fZ) goto L_00454cca;
L_00454cc0:; BB(0x00454cc0);
    /* 00454cc0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cc5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454ccau); f_00508db8();
L_00454cca:; BB(0x00454cca);
    /* 00454cca: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00454ccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ccf: je 0x454cdb */ if (fZ) goto L_00454cdb;
L_00454cd1:; BB(0x00454cd1);
    /* 00454cd1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cd6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454cdbu); f_00508db8();
L_00454cdb:; BB(0x00454cdb);
    /* 00454cdb: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454cde: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454ce1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454ce3: ja 0x454c96 */ if ((!fC&&!fZ)) goto L_00454c96;
L_00454ce5:; BB(0x00454ce5);
    /* 00454ce5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00454ce9: lea ecx, [ebp + 0x380] */ r_ecx = (u32)(r_ebp+0x380u);
    /* 00454cef: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x454cf4u); f_0044d180();
    /* 00454cf4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454cfa: push 0x36b */ { u32 v = 0x36bu; r_esp -= 4; W32(r_esp, v); }
    /* 00454cff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x454d04u); f_008144b0();
    /* 00454d04: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454d07: fld dword ptr [0x8ffca0] */ FPUSH(R_F32((u32)(0x8ffca0u)));
    /* 00454d0d: fadd dword ptr [ebp + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e4u));
    /* 00454d13: fld dword ptr [0x8fff0c] */ FPUSH(R_F32((u32)(0x8fff0cu)));
    /* 00454d19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00454d1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454d1d: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00454d24: movsx esi, word ptr [ebp + 0x346] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x346u));
    /* 00454d2b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454d2f: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d33: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00454d37: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d3b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00454d3d: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00454d43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454d44: jb 0x454d48 */ if (fC) goto L_00454d48;
L_00454d46:; BB(0x00454d46);
    /* 00454d46: fst st(1) */ ST(1) = ST(0);
L_00454d48:; BB(0x00454d48);
    /* 00454d48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454d4a: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
    /* 00454d50: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00454d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454c42); r_esp += 4; return;
}

void f_00454c46(void)
{
    FN_ENTER(0x00454c46);
    goto L_00454c46;
L_00454c24:; BB(0x00454c24);
    /* 00454c24: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c27: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
    /* 00454c2c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c2e: jne 0x454c7e */ if (!fZ) goto L_00454c7e;
L_00454c30:; BB(0x00454c30);
    /* 00454c30: fld dword ptr [0xa455a4] */ FPUSH(R_F32((u32)(0xa455a4u)));
    /* 00454c36: mov edx, dword ptr [0xa455a4] */ r_edx = R32((u32)(0xa455a4u));
    /* 00454c3c: mov ecx, dword ptr [0xa455a8] */ r_ecx = R32((u32)(0xa455a8u));
    /* 00454c42: mov dword ptr [0xa455ac], edx */ W32((u32)(0xa455acu), r_edx);
L_00454c46:; BB(0x00454c46);
    /* 00454c46: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00454c47: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fC = (r < a); }
    /* 00454c48: fchs  */ ST(0) = -ST(0);
    /* 00454c49: loopne 0x454c24 */ r_ecx--; if (r_ecx && !fZ) goto L_00454c24;
    /* 00454c4a: fst dword ptr [0xa455b8] */ W_F32((u32)(0xa455b8u), ST(0));
    /* 00454c4b: adc eax, 0xa455b8 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa455b8u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00454c50: fstp dword ptr [0xa455d8] */ W_F32((u32)(0xa455d8u), ST(0)); FPOP();
    /* 00454c56: mov dword ptr [0xa455b0], ecx */ W32((u32)(0xa455b0u), r_ecx);
    /* 00454c5c: mov dword ptr [0xa455bc], ecx */ W32((u32)(0xa455bcu), r_ecx);
    /* 00454c62: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c67: mov dword ptr [0xa455c8], ecx */ W32((u32)(0xa455c8u), r_ecx);
    /* 00454c6d: mov dword ptr [0xa455cc], edx */ W32((u32)(0xa455ccu), r_edx);
    /* 00454c73: mov dword ptr [0xa455d4], ecx */ W32((u32)(0xa455d4u), r_ecx);
    /* 00454c79: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c7e:; BB(0x00454c7e);
    /* 00454c7e: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00454c82: lea ecx, [ebp + 0x400] */ r_ecx = (u32)(r_ebp+0x400u);
    /* 00454c88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454c8a: lea eax, [ebp + 0x410] */ r_eax = (u32)(r_ebp+0x410u);
    /* 00454c90: mov ebx, eax */ r_ebx = r_eax;
    /* 00454c92: mov esi, edx */ r_esi = r_edx;
    /* 00454c94: mov edi, ecx */ r_edi = r_ecx;
L_00454c96:; BB(0x00454c96);
    /* 00454c96: lea edx, [esi + 0xa455ac] */ r_edx = (u32)(r_esi+0xa455acu);
    /* 00454c9c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00454ca0: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00454ca3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00454ca7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454caa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00454cae: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00454cb1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00454cb5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x454cbau); f_0082ebac();
    /* 00454cba: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00454cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cbe: je 0x454cca */ if (fZ) goto L_00454cca;
L_00454cc0:; BB(0x00454cc0);
    /* 00454cc0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cc5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454ccau); f_00508db8();
L_00454cca:; BB(0x00454cca);
    /* 00454cca: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00454ccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ccf: je 0x454cdb */ if (fZ) goto L_00454cdb;
L_00454cd1:; BB(0x00454cd1);
    /* 00454cd1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cd6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454cdbu); f_00508db8();
L_00454cdb:; BB(0x00454cdb);
    /* 00454cdb: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454cde: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454ce1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454ce3: ja 0x454c96 */ if ((!fC&&!fZ)) goto L_00454c96;
L_00454ce5:; BB(0x00454ce5);
    /* 00454ce5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00454ce9: lea ecx, [ebp + 0x380] */ r_ecx = (u32)(r_ebp+0x380u);
    /* 00454cef: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x454cf4u); f_0044d180();
    /* 00454cf4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454cfa: push 0x36b */ { u32 v = 0x36bu; r_esp -= 4; W32(r_esp, v); }
    /* 00454cff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x454d04u); f_008144b0();
    /* 00454d04: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454d07: fld dword ptr [0x8ffca0] */ FPUSH(R_F32((u32)(0x8ffca0u)));
    /* 00454d0d: fadd dword ptr [ebp + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e4u));
    /* 00454d13: fld dword ptr [0x8fff0c] */ FPUSH(R_F32((u32)(0x8fff0cu)));
    /* 00454d19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00454d1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454d1d: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00454d24: movsx esi, word ptr [ebp + 0x346] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x346u));
    /* 00454d2b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454d2f: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d33: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00454d37: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d3b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00454d3d: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00454d43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454d44: jb 0x454d48 */ if (fC) goto L_00454d48;
L_00454d46:; BB(0x00454d46);
    /* 00454d46: fst st(1) */ ST(1) = ST(0);
L_00454d48:; BB(0x00454d48);
    /* 00454d48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454d4a: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
    /* 00454d50: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00454d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454c46); r_esp += 4; return;
}

void f_00454c49(void)
{
    FN_ENTER(0x00454c49);
    goto L_00454c49;
L_00454c24:; BB(0x00454c24);
    /* 00454c24: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c27: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
    /* 00454c2c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454c2e: jne 0x454c7e */ if (!fZ) goto L_00454c7e;
L_00454c30:; BB(0x00454c30);
    /* 00454c30: fld dword ptr [0xa455a4] */ FPUSH(R_F32((u32)(0xa455a4u)));
    /* 00454c36: mov edx, dword ptr [0xa455a4] */ r_edx = R32((u32)(0xa455a4u));
    /* 00454c3c: mov ecx, dword ptr [0xa455a8] */ r_ecx = R32((u32)(0xa455a8u));
    /* 00454c42: mov dword ptr [0xa455ac], edx */ W32((u32)(0xa455acu), r_edx);
    /* 00454c48: fchs  */ ST(0) = -ST(0);
L_00454c49:; BB(0x00454c49);
    /* 00454c49: loopne 0x454c24 */ r_ecx--; if (r_ecx && !fZ) goto L_00454c24;
    /* 00454c4a: fst dword ptr [0xa455b8] */ W_F32((u32)(0xa455b8u), ST(0));
    /* 00454c4b: adc eax, 0xa455b8 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa455b8u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00454c50: fstp dword ptr [0xa455d8] */ W_F32((u32)(0xa455d8u), ST(0)); FPOP();
    /* 00454c56: mov dword ptr [0xa455b0], ecx */ W32((u32)(0xa455b0u), r_ecx);
    /* 00454c5c: mov dword ptr [0xa455bc], ecx */ W32((u32)(0xa455bcu), r_ecx);
    /* 00454c62: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c67: mov dword ptr [0xa455c8], ecx */ W32((u32)(0xa455c8u), r_ecx);
    /* 00454c6d: mov dword ptr [0xa455cc], edx */ W32((u32)(0xa455ccu), r_edx);
    /* 00454c73: mov dword ptr [0xa455d4], ecx */ W32((u32)(0xa455d4u), r_ecx);
    /* 00454c79: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
L_00454c7e:; BB(0x00454c7e);
    /* 00454c7e: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00454c82: lea ecx, [ebp + 0x400] */ r_ecx = (u32)(r_ebp+0x400u);
    /* 00454c88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454c8a: lea eax, [ebp + 0x410] */ r_eax = (u32)(r_ebp+0x410u);
    /* 00454c90: mov ebx, eax */ r_ebx = r_eax;
    /* 00454c92: mov esi, edx */ r_esi = r_edx;
    /* 00454c94: mov edi, ecx */ r_edi = r_ecx;
L_00454c96:; BB(0x00454c96);
    /* 00454c96: lea edx, [esi + 0xa455ac] */ r_edx = (u32)(r_esi+0xa455acu);
    /* 00454c9c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00454ca0: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00454ca3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00454ca7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454caa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00454cae: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00454cb1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00454cb5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x454cbau); f_0082ebac();
    /* 00454cba: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00454cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cbe: je 0x454cca */ if (fZ) goto L_00454cca;
L_00454cc0:; BB(0x00454cc0);
    /* 00454cc0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cc5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454ccau); f_00508db8();
L_00454cca:; BB(0x00454cca);
    /* 00454cca: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00454ccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ccf: je 0x454cdb */ if (fZ) goto L_00454cdb;
L_00454cd1:; BB(0x00454cd1);
    /* 00454cd1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cd6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454cdbu); f_00508db8();
L_00454cdb:; BB(0x00454cdb);
    /* 00454cdb: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454cde: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454ce1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454ce3: ja 0x454c96 */ if ((!fC&&!fZ)) goto L_00454c96;
L_00454ce5:; BB(0x00454ce5);
    /* 00454ce5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00454ce9: lea ecx, [ebp + 0x380] */ r_ecx = (u32)(r_ebp+0x380u);
    /* 00454cef: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x454cf4u); f_0044d180();
    /* 00454cf4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454cfa: push 0x36b */ { u32 v = 0x36bu; r_esp -= 4; W32(r_esp, v); }
    /* 00454cff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x454d04u); f_008144b0();
    /* 00454d04: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454d07: fld dword ptr [0x8ffca0] */ FPUSH(R_F32((u32)(0x8ffca0u)));
    /* 00454d0d: fadd dword ptr [ebp + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e4u));
    /* 00454d13: fld dword ptr [0x8fff0c] */ FPUSH(R_F32((u32)(0x8fff0cu)));
    /* 00454d19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00454d1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454d1d: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00454d24: movsx esi, word ptr [ebp + 0x346] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x346u));
    /* 00454d2b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454d2f: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d33: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00454d37: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d3b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00454d3d: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00454d43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454d44: jb 0x454d48 */ if (fC) goto L_00454d48;
L_00454d46:; BB(0x00454d46);
    /* 00454d46: fst st(1) */ ST(1) = ST(0);
L_00454d48:; BB(0x00454d48);
    /* 00454d48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454d4a: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
    /* 00454d50: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00454d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454c49); r_esp += 4; return;
}

void f_00454c4b(void)
{
    FN_ENTER(0x00454c4b);
    /* 00454c4b: adc eax, 0xa455b8 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa455b8u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00454c50: fstp dword ptr [0xa455d8] */ W_F32((u32)(0xa455d8u), ST(0)); FPOP();
    /* 00454c56: mov dword ptr [0xa455b0], ecx */ W32((u32)(0xa455b0u), r_ecx);
    /* 00454c5c: mov dword ptr [0xa455bc], ecx */ W32((u32)(0xa455bcu), r_ecx);
    /* 00454c62: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454c67: mov dword ptr [0xa455c8], ecx */ W32((u32)(0xa455c8u), r_ecx);
    /* 00454c6d: mov dword ptr [0xa455cc], edx */ W32((u32)(0xa455ccu), r_edx);
    /* 00454c73: mov dword ptr [0xa455d4], ecx */ W32((u32)(0xa455d4u), r_ecx);
    /* 00454c79: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
    /* 00454c7e: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00454c82: lea ecx, [ebp + 0x400] */ r_ecx = (u32)(r_ebp+0x400u);
    /* 00454c88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454c8a: lea eax, [ebp + 0x410] */ r_eax = (u32)(r_ebp+0x410u);
    /* 00454c90: mov ebx, eax */ r_ebx = r_eax;
    /* 00454c92: mov esi, edx */ r_esi = r_edx;
    /* 00454c94: mov edi, ecx */ r_edi = r_ecx;
L_00454c96:; BB(0x00454c96);
    /* 00454c96: lea edx, [esi + 0xa455ac] */ r_edx = (u32)(r_esi+0xa455acu);
    /* 00454c9c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00454ca0: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00454ca3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00454ca7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454caa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00454cae: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00454cb1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00454cb5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x454cbau); f_0082ebac();
    /* 00454cba: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00454cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cbe: je 0x454cca */ if (fZ) goto L_00454cca;
L_00454cc0:; BB(0x00454cc0);
    /* 00454cc0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cc5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454ccau); f_00508db8();
L_00454cca:; BB(0x00454cca);
    /* 00454cca: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00454ccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ccf: je 0x454cdb */ if (fZ) goto L_00454cdb;
L_00454cd1:; BB(0x00454cd1);
    /* 00454cd1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cd6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454cdbu); f_00508db8();
L_00454cdb:; BB(0x00454cdb);
    /* 00454cdb: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454cde: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454ce1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454ce3: ja 0x454c96 */ if ((!fC&&!fZ)) goto L_00454c96;
L_00454ce5:; BB(0x00454ce5);
    /* 00454ce5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00454ce9: lea ecx, [ebp + 0x380] */ r_ecx = (u32)(r_ebp+0x380u);
    /* 00454cef: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x454cf4u); f_0044d180();
    /* 00454cf4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454cfa: push 0x36b */ { u32 v = 0x36bu; r_esp -= 4; W32(r_esp, v); }
    /* 00454cff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x454d04u); f_008144b0();
    /* 00454d04: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454d07: fld dword ptr [0x8ffca0] */ FPUSH(R_F32((u32)(0x8ffca0u)));
    /* 00454d0d: fadd dword ptr [ebp + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e4u));
    /* 00454d13: fld dword ptr [0x8fff0c] */ FPUSH(R_F32((u32)(0x8fff0cu)));
    /* 00454d19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00454d1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454d1d: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00454d24: movsx esi, word ptr [ebp + 0x346] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x346u));
    /* 00454d2b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454d2f: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d33: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00454d37: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d3b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00454d3d: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00454d43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454d44: jb 0x454d48 */ if (fC) goto L_00454d48;
L_00454d46:; BB(0x00454d46);
    /* 00454d46: fst st(1) */ ST(1) = ST(0);
L_00454d48:; BB(0x00454d48);
    /* 00454d48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454d4a: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
    /* 00454d50: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00454d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454c4b); r_esp += 4; return;
}

void f_00454c54(void)
{
    FN_ENTER(0x00454c54);
    /* 00454c54: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00454c55: add byte ptr [ecx - 0x5baa4ff3], cl */ { u32 ad = (u32)(r_ecx+0xa455b00du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454c5b: add byte ptr [ecx - 0x5baa43f3], cl */ { u32 ad = (u32)(r_ecx+0xa455bc0du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454c61: add byte ptr [0xffffff04], cl */ { u32 ad = (u32)(0xffffff04u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454c67: mov dword ptr [0xa455c8], ecx */ W32((u32)(0xa455c8u), r_ecx);
    /* 00454c6d: mov dword ptr [0xa455cc], edx */ W32((u32)(0xa455ccu), r_edx);
    /* 00454c73: mov dword ptr [0xa455d4], ecx */ W32((u32)(0xa455d4u), r_ecx);
    /* 00454c79: mov byte ptr [0xa455a0], al */ W8((u32)(0xa455a0u), (u8)r_eax);
    /* 00454c7e: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00454c82: lea ecx, [ebp + 0x400] */ r_ecx = (u32)(r_ebp+0x400u);
    /* 00454c88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454c8a: lea eax, [ebp + 0x410] */ r_eax = (u32)(r_ebp+0x410u);
    /* 00454c90: mov ebx, eax */ r_ebx = r_eax;
    /* 00454c92: mov esi, edx */ r_esi = r_edx;
    /* 00454c94: mov edi, ecx */ r_edi = r_ecx;
L_00454c96:; BB(0x00454c96);
    /* 00454c96: lea edx, [esi + 0xa455ac] */ r_edx = (u32)(r_esi+0xa455acu);
    /* 00454c9c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00454ca0: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00454ca3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00454ca7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00454caa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00454cae: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00454cb1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00454cb5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x454cbau); f_0082ebac();
    /* 00454cba: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00454cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cbe: je 0x454cca */ if (fZ) goto L_00454cca;
L_00454cc0:; BB(0x00454cc0);
    /* 00454cc0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cc5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454ccau); f_00508db8();
L_00454cca:; BB(0x00454cca);
    /* 00454cca: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00454ccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454ccf: je 0x454cdb */ if (fZ) goto L_00454cdb;
L_00454cd1:; BB(0x00454cd1);
    /* 00454cd1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00454cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454cd6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x454cdbu); f_00508db8();
L_00454cdb:; BB(0x00454cdb);
    /* 00454cdb: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454cde: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00454ce1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00454ce3: ja 0x454c96 */ if ((!fC&&!fZ)) goto L_00454c96;
L_00454ce5:; BB(0x00454ce5);
    /* 00454ce5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00454ce9: lea ecx, [ebp + 0x380] */ r_ecx = (u32)(r_ebp+0x380u);
    /* 00454cef: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x454cf4u); f_0044d180();
    /* 00454cf4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454cf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454cfa: push 0x36b */ { u32 v = 0x36bu; r_esp -= 4; W32(r_esp, v); }
    /* 00454cff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x454d04u); f_008144b0();
    /* 00454d04: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454d07: fld dword ptr [0x8ffca0] */ FPUSH(R_F32((u32)(0x8ffca0u)));
    /* 00454d0d: fadd dword ptr [ebp + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e4u));
    /* 00454d13: fld dword ptr [0x8fff0c] */ FPUSH(R_F32((u32)(0x8fff0cu)));
    /* 00454d19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00454d1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454d1d: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00454d24: movsx esi, word ptr [ebp + 0x346] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x346u));
    /* 00454d2b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00454d2f: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d33: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00454d37: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00454d3b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00454d3d: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00454d43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454d44: jb 0x454d48 */ if (fC) goto L_00454d48;
L_00454d46:; BB(0x00454d46);
    /* 00454d46: fst st(1) */ ST(1) = ST(0);
L_00454d48:; BB(0x00454d48);
    /* 00454d48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454d4a: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
    /* 00454d50: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00454d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454c54); r_esp += 4; return;
}

void f_00454d49(void)
{
    FN_ENTER(0x00454d49);
    /* 00454d49: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00454d4b: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 00454d4c: in al, 3 */ UNSUP(0x00454d4c, "in al, 3");
    /* 00454d4e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454d50: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00454d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454d49); r_esp += 4; return;
}

void f_00454d4f(void)
{
    FN_ENTER(0x00454d4f);
    /* 00454d4f: add byte ptr [ebx + 0x5d5b64c4], al */ { u32 ad = (u32)(r_ebx+0x5d5b64c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00454d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00454d57: ret  */ FN_RET(0x00454d4f); r_esp += 4; return;
}

void f_00454d58(void) /* sub_454D58 */
{
    FN_ENTER(0x00454d58);
    /* 00454d58: movzx eax, byte ptr [0xa45240] */ r_eax = (u32)R8((u32)(0xa45240u));
    /* 00454d5f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454d61: jne 0x454d77 */ if (!fZ) goto L_00454d77;
L_00454d63:; BB(0x00454d63);
    /* 00454d63: mov dword ptr [0xa45244], 0x41e80000 */ W32((u32)(0xa45244u), 0x41e80000u);
    /* 00454d6d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454d72: mov byte ptr [0xa45240], al */ W8((u32)(0xa45240u), (u8)r_eax);
L_00454d77:; BB(0x00454d77);
    /* 00454d77: fld dword ptr [ecx + 0x3f0] */ FPUSH(R_F32((u32)(r_ecx+0x3f0u)));
    /* 00454d7d: fadd dword ptr [ecx + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3f4u));
    /* 00454d83: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00454d85: mov eax, dword ptr [ecx + 0x3f8] */ r_eax = R32((u32)(r_ecx+0x3f8u));
    /* 00454d8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00454d8d: je 0x454e67 */ if (fZ) goto L_00454e67;
L_00454d93:; BB(0x00454d93);
    /* 00454d93: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454d96: jne 0x454ddd */ if (!fZ) goto L_00454ddd;
L_00454d98:; BB(0x00454d98);
    /* 00454d98: fld dword ptr [0xa45244] */ FPUSH(R_F32((u32)(0xa45244u)));
    /* 00454d9e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00454da0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454da2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454da3: ja 0x454dc6 */ if ((!fC&&!fZ)) goto L_00454dc6;
L_00454da5:; BB(0x00454da5);
    /* 00454da5: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00454da7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454da9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00454dab: fld dword ptr [0x8fff00] */ FPUSH(R_F32((u32)(0x8fff00u)));
    /* 00454db1: mov dword ptr [ecx + 0x3fc], 1 */ W32((u32)(r_ecx+0x3fcu), 0x1u);
    /* 00454dbb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454dbd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454dbf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454dc1: jmp 0x454ea0 */ goto L_00454ea0;
L_00454dc6:; BB(0x00454dc6);
    /* 00454dc6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454dc8: fld dword ptr [0x8fff00] */ FPUSH(R_F32((u32)(0x8fff00u)));
    /* 00454dce: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 00454dd8: jmp 0x454ea0 */ goto L_00454ea0;
L_00454ddd:; BB(0x00454ddd);
    /* 00454ddd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454de0: jne 0x454e55 */ if (!fZ) goto L_00454e55;
L_00454de2:; BB(0x00454de2);
    /* 00454de2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454de4: fcom dword ptr [0xa45244] */ fx_compare(ST(0), R_F32((u32)(0xa45244u))); 
    /* 00454dea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454dec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454ded: jb 0x454e3d */ if (fC) goto L_00454e3d;
L_00454def:; BB(0x00454def);
    /* 00454def: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454df1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454df3: fld dword ptr [0x8fff00] */ FPUSH(R_F32((u32)(0x8fff00u)));
    /* 00454df9: fld dword ptr [0x8fff00] */ FPUSH(R_F32((u32)(0x8fff00u)));
    /* 00454dff: fld dword ptr [0x8fff00] */ FPUSH(R_F32((u32)(0x8fff00u)));
    /* 00454e05: mov eax, dword ptr [ecx + 0x3ec] */ r_eax = R32((u32)(r_ecx+0x3ecu));
    /* 00454e0b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454e0d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454e0f: mov edx, dword ptr [eax*8 + 0x9a5e24] */ r_edx = R32((u32)(r_eax*8+0x9a5e24u));
    /* 00454e16: mov dword ptr [ecx + 0x3fc], 1 */ W32((u32)(r_ecx+0x3fcu), 0x1u);
    /* 00454e20: mov dword ptr [ecx + 0x3ec], edx */ W32((u32)(r_ecx+0x3ecu), r_edx);
    /* 00454e26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454e28: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00454e2a: mov eax, dword ptr [edx*8 + 0x9a5e20] */ r_eax = R32((u32)(r_edx*8+0x9a5e20u));
    /* 00454e31: mov dword ptr [ecx + 0x3f8], eax */ W32((u32)(r_ecx+0x3f8u), r_eax);
    /* 00454e37: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454e39: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454e3b: jmp 0x454ea0 */ goto L_00454ea0;
L_00454e3d:; BB(0x00454e3d);
    /* 00454e3d: fld dword ptr [0x8fff00] */ FPUSH(R_F32((u32)(0x8fff00u)));
    /* 00454e43: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 00454e4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454e4f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454e51: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454e53: jmp 0x454ea0 */ goto L_00454ea0;
L_00454e55:; BB(0x00454e55);
    /* 00454e55: fld dword ptr [0x8fff00] */ FPUSH(R_F32((u32)(0x8fff00u)));
    /* 00454e5b: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 00454e65: jmp 0x454ea0 */ goto L_00454ea0;
L_00454e67:; BB(0x00454e67);
    /* 00454e67: fld dword ptr [0x8ffefc] */ FPUSH(R_F32((u32)(0x8ffefcu)));
    /* 00454e6d: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00454e6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454e71: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454e72: ja 0x454e8e */ if ((!fC&&!fZ)) goto L_00454e8e;
L_00454e74:; BB(0x00454e74);
    /* 00454e74: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454e76: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00454e78: fld dword ptr [0x8fff00] */ FPUSH(R_F32((u32)(0x8fff00u)));
    /* 00454e7e: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00454e80: mov dword ptr [ecx + 0x3fc], 1 */ W32((u32)(r_ecx+0x3fcu), 0x1u);
    /* 00454e8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454e8c: jmp 0x454ea0 */ goto L_00454ea0;
L_00454e8e:; BB(0x00454e8e);
    /* 00454e8e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454e90: fld dword ptr [0x8fff00] */ FPUSH(R_F32((u32)(0x8fff00u)));
    /* 00454e96: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
L_00454ea0:; BB(0x00454ea0);
    /* 00454ea0: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00454ea2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454ea4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454ea5: ja 0x454eb6 */ if ((!fC&&!fZ)) goto L_00454eb6;
L_00454ea7:; BB(0x00454ea7);
    /* 00454ea7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454ea9: fcom dword ptr [0x8ffefc] */ fx_compare(ST(0), R_F32((u32)(0x8ffefcu))); 
    /* 00454eaf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454eb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454eb2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454eb4: jb 0x454ec1 */ if (fC) goto L_00454ec1;
L_00454eb6:; BB(0x00454eb6);
    /* 00454eb6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454eb8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454eba: fstp dword ptr [ecx + 0x3f0] */ W_F32((u32)(r_ecx+0x3f0u), ST(0)); FPOP();
    /* 00454ec0: ret  */ FN_RET(0x00454d58); r_esp += 4; return;
L_00454ec1:; BB(0x00454ec1);
    /* 00454ec1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454ec3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454ec5: fstp dword ptr [ecx + 0x3f0] */ W_F32((u32)(r_ecx+0x3f0u), ST(0)); FPOP();
    /* 00454ecb: ret  */ FN_RET(0x00454d58); r_esp += 4; return;
}

void f_00454e49(void)
{
    FN_ENTER(0x00454e49);
    /* 00454e49: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00454e4b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00454e4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454e4f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454e51: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454e53: jmp 0x454ea0 */ goto L_00454ea0;
L_00454ea0:; BB(0x00454ea0);
    /* 00454ea0: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00454ea2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454ea4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454ea5: ja 0x454eb6 */ if ((!fC&&!fZ)) goto L_00454eb6;
L_00454ea7:; BB(0x00454ea7);
    /* 00454ea7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454ea9: fcom dword ptr [0x8ffefc] */ fx_compare(ST(0), R_F32((u32)(0x8ffefcu))); 
    /* 00454eaf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454eb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454eb2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454eb4: jb 0x454ec1 */ if (fC) goto L_00454ec1;
L_00454eb6:; BB(0x00454eb6);
    /* 00454eb6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454eb8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454eba: fstp dword ptr [ecx + 0x3f0] */ W_F32((u32)(r_ecx+0x3f0u), ST(0)); FPOP();
    /* 00454ec0: ret  */ FN_RET(0x00454e49); r_esp += 4; return;
L_00454ec1:; BB(0x00454ec1);
    /* 00454ec1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454ec3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454ec5: fstp dword ptr [ecx + 0x3f0] */ W_F32((u32)(r_ecx+0x3f0u), ST(0)); FPOP();
    /* 00454ecb: ret  */ FN_RET(0x00454e49); r_esp += 4; return;
}

void f_00454e4f(void)
{
    FN_ENTER(0x00454e4f);
    /* 00454e4f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454e51: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00454e53: jmp 0x454ea0 */ goto L_00454ea0;
L_00454ea0:; BB(0x00454ea0);
    /* 00454ea0: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00454ea2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454ea4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454ea5: ja 0x454eb6 */ if ((!fC&&!fZ)) goto L_00454eb6;
L_00454ea7:; BB(0x00454ea7);
    /* 00454ea7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454ea9: fcom dword ptr [0x8ffefc] */ fx_compare(ST(0), R_F32((u32)(0x8ffefcu))); 
    /* 00454eaf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00454eb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00454eb2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454eb4: jb 0x454ec1 */ if (fC) goto L_00454ec1;
L_00454eb6:; BB(0x00454eb6);
    /* 00454eb6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454eb8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454eba: fstp dword ptr [ecx + 0x3f0] */ W_F32((u32)(r_ecx+0x3f0u), ST(0)); FPOP();
    /* 00454ec0: ret  */ FN_RET(0x00454e4f); r_esp += 4; return;
L_00454ec1:; BB(0x00454ec1);
    /* 00454ec1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00454ec3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00454ec5: fstp dword ptr [ecx + 0x3f0] */ W_F32((u32)(r_ecx+0x3f0u), ST(0)); FPOP();
    /* 00454ecb: ret  */ FN_RET(0x00454e4f); r_esp += 4; return;
}

void f_00454ecc(void) /* sub_454ECC */
{
    FN_ENTER(0x00454ecc);
    /* 00454ecc: fld dword ptr [0x8ffef8] */ FPUSH(R_F32((u32)(0x8ffef8u)));
    /* 00454ed2: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00454ed5: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00454ed8: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00454edb: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 00454ee1: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00454ee7: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 00454eed: ret  */ FN_RET(0x00454ecc); r_esp += 4; return;
}

void f_00454ef0(void) /* sub_454EF0 */
{
    FN_ENTER(0x00454ef0);
    /* 00454ef0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454ef1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ef2: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454ef5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00454ef7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00454ef9: call 0x4551f4 */ r_esp -= 4; W32(r_esp, 0x454efeu); f_004551f4();
    /* 00454efe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00454f00: call 0x455568 */ r_esp -= 4; W32(r_esp, 0x454f05u); f_00455568();
    /* 00454f05: fld dword ptr [0x8ffef4] */ FPUSH(R_F32((u32)(0x8ffef4u)));
    /* 00454f0b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00454f0e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x454f13u); f_0082d7b0();
    /* 00454f13: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00454f15: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x454f1au); f_00830cd8();
    /* 00454f1a: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00454f1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00454f1f: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x454f24u); f_008316b4();
    /* 00454f24: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00454f27: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00454f29: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x454f2eu); f_0082d8bc();
    /* 00454f2e: mov edx, dword ptr [ebx + 0x3d8] */ r_edx = R32((u32)(r_ebx+0x3d8u));
    /* 00454f34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00454f36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00454f38: jle 0x454f85 */ if ((fZ||fS!=fO)) goto L_00454f85;
L_00454f3a:; BB(0x00454f3a);
    /* 00454f3a: mov esi, eax */ r_esi = r_eax;
L_00454f3c:; BB(0x00454f3c);
    /* 00454f3c: mov edx, dword ptr [esi*8 + 0xa456c4] */ r_edx = R32((u32)(r_esi*8+0xa456c4u));
    /* 00454f43: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00454f4b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00454f4d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00454f51: mov edx, dword ptr [esi*8 + 0xa456c8] */ r_edx = R32((u32)(r_esi*8+0xa456c8u));
    /* 00454f58: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00454f5c: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00454f60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454f61: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00454f65: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x454f6au); f_00830aa0();
    /* 00454f6a: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00454f6e: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00454f72: mov dword ptr [esp + esi*8 + 0x28], edx */ W32((u32)(r_esp+r_esi*8+0x28u), r_edx);
    /* 00454f76: mov dword ptr [esp + esi*8 + 0x2c], ecx */ W32((u32)(r_esp+r_esi*8+0x2cu), r_ecx);
    /* 00454f7a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00454f7d: cmp esi, dword ptr [ebx + 0x3d8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454f83: jl 0x454f3c */ if ((fS!=fO)) goto L_00454f3c;
L_00454f85:; BB(0x00454f85);
    /* 00454f85: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x454f8au); f_0082da80();
    /* 00454f8a: movzx eax, byte ptr [0xa455dc] */ r_eax = (u32)R8((u32)(0xa455dcu));
    /* 00454f91: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00454f93: jne 0x454fa7 */ if (!fZ) goto L_00454fa7;
L_00454f95:; BB(0x00454f95);
    /* 00454f95: mov dword ptr [0xa455e0], 0x42480000 */ W32((u32)(0xa455e0u), 0x42480000u);
    /* 00454f9f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00454fa2: mov byte ptr [0xa455dc], al */ W8((u32)(0xa455dcu), (u8)r_eax);
L_00454fa7:; BB(0x00454fa7);
    /* 00454fa7: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00454fad: fld dword ptr [edx + 0x178] */ FPUSH(R_F32((u32)(r_edx+0x178u)));
    /* 00454fb3: fld dword ptr [edx + 0x180] */ FPUSH(R_F32((u32)(r_edx+0x180u)));
    /* 00454fb9: mov ecx, dword ptr [ebx + 0x3d8] */ r_ecx = R32((u32)(r_ebx+0x3d8u));
    /* 00454fbf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00454fc1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00454fc3: jle 0x4551e9 */ if ((fZ||fS!=fO)) goto L_004551e9;
L_00454fc9:; BB(0x00454fc9);
    /* 00454fc9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00454fcd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00454fd1: mov esi, ebx */ r_esi = r_ebx;
    /* 00454fd3: mov ebx, edx */ r_ebx = r_edx;
L_00454fd5:; BB(0x00454fd5);
    /* 00454fd5: fld dword ptr [0xa455e0] */ FPUSH(R_F32((u32)(0xa455e0u)));
    /* 00454fdb: fadd dword ptr [ebx*4 + 0xa456f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0xa456f4u));
    /* 00454fe2: fld dword ptr [esp + ebx*8 + 0x28] */ FPUSH(R_F32((u32)(r_esp+r_ebx*8+0x28u)));
    /* 00454fe6: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 00454fea: fld dword ptr [esp + ebx*8 + 0x2c] */ FPUSH(R_F32((u32)(r_esp+r_ebx*8+0x2cu)));
    /* 00454fee: fsubr dword ptr [esp + 4] */ ST(0) = R_F32((u32)(r_esp+0x4u)) - ST(0);
    /* 00454ff2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00454ff4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00454ff8: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00454ffc: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00455000: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 00455004: mov dword ptr [esp + 0x5c], 0 */ W32((u32)(r_esp+0x5cu), 0x0u);
    /* 0045500c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455011u); f_0083173c();
    /* 00455011: fcom dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); 
    /* 00455015: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455017: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455018: jae 0x455033 */ if (!fC) goto L_00455033;
L_0045501a:; BB(0x0045501a);
    /* 0045501a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0045501e: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00455020: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00455023: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00455025: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455027: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455028: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045502a: jae 0x45502e */ if (!fC) goto L_0045502e;
L_0045502c:; BB(0x0045502c);
    /* 0045502c: fst st(1) */ ST(1) = ST(0);
L_0045502e:; BB(0x0045502e);
    /* 0045502e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455030: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
L_00455033:; BB(0x00455033);
    /* 00455033: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455035: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455038: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045503e: jl 0x454fd5 */ if ((fS!=fO)) goto L_00454fd5;
L_00455040:; BB(0x00455040);
    /* 00455040: movzx eax, byte ptr [0xa455dc] */ r_eax = (u32)R8((u32)(0xa455dcu));
L_00455047:; BB(0x00455047);
    /* 00455047: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455049: jne 0x455065 */ if (!fZ) goto L_00455065;
L_0045504b:; BB(0x0045504b);
    /* 0045504b: fld dword ptr [0x8ffeec] */ FPUSH(R_F32((u32)(0x8ffeecu)));
    /* 00455051: mov dword ptr [0xa455e4], 0x414ee148 */ W32((u32)(0xa455e4u), 0x414ee148u);
    /* 0045505b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045505e: mov byte ptr [0xa455dc], al */ W8((u32)(0xa455dcu), (u8)r_eax);
    /* 00455063: jmp 0x45506b */ goto L_0045506b;
L_00455065:; BB(0x00455065);
    /* 00455065: fld dword ptr [0xa455e4] */ FPUSH(R_F32((u32)(0xa455e4u)));
L_0045506b:; BB(0x0045506b);
    /* 0045506b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045506d: jne 0x45508c */ if (!fZ) goto L_0045508c;
L_0045506f:; BB(0x0045506f);
    /* 0045506f: fld dword ptr [0x8ffee8] */ FPUSH(R_F32((u32)(0x8ffee8u)));
    /* 00455075: mov dword ptr [0xa455e8], 0x425dae14 */ W32((u32)(0xa455e8u), 0x425dae14u);
    /* 0045507f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00455082: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455085: mov byte ptr [0xa455dc], al */ W8((u32)(0xa455dcu), (u8)r_eax);
    /* 0045508a: jmp 0x455092 */ goto L_00455092;
L_0045508c:; BB(0x0045508c);
    /* 0045508c: fld dword ptr [0xa455e8] */ FPUSH(R_F32((u32)(0xa455e8u)));
L_00455092:; BB(0x00455092);
    /* 00455092: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455094: jne 0x4550ab */ if (!fZ) goto L_004550ab;
L_00455096:; BB(0x00455096);
    /* 00455096: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455098: fst dword ptr [0xa455ec] */ W_F32((u32)(0xa455ecu), ST(0));
    /* 0045509e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004550a1: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004550a4: mov byte ptr [0xa455dc], al */ W8((u32)(0xa455dcu), (u8)r_eax);
    /* 004550a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004550ab:; BB(0x004550ab);
    /* 004550ab: fld dword ptr [0x8ffcc0] */ FPUSH(R_F32((u32)(0x8ffcc0u)));
    /* 004550b1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004550b3: jne 0x4550cb */ if (!fZ) goto L_004550cb;
L_004550b5:; BB(0x004550b5);
    /* 004550b5: mov edx, 0xc0a00000 */ r_edx = 0xc0a00000u;
    /* 004550ba: mov dword ptr [0xa455f0], edx */ W32((u32)(0xa455f0u), r_edx);
    /* 004550c0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004550c3: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004550c6: mov byte ptr [0xa455dc], al */ W8((u32)(0xa455dcu), (u8)r_eax);
L_004550cb:; BB(0x004550cb);
    /* 004550cb: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004550cd: jne 0x4550e4 */ if (!fZ) goto L_004550e4;
L_004550cf:; BB(0x004550cf);
    /* 004550cf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004550d1: fst dword ptr [0xa455f4] */ W_F32((u32)(0xa455f4u), ST(0));
    /* 004550d7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004550da: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004550dd: mov byte ptr [0xa455dc], al */ W8((u32)(0xa455dcu), (u8)r_eax);
    /* 004550e2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_004550e4:; BB(0x004550e4);
    /* 004550e4: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004550e6: jne 0x4550fd */ if (!fZ) goto L_004550fd;
L_004550e8:; BB(0x004550e8);
    /* 004550e8: mov dword ptr [0xa455f8], 0x41700000 */ W32((u32)(0xa455f8u), 0x41700000u);
    /* 004550f2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004550f5: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004550f8: mov byte ptr [0xa455dc], al */ W8((u32)(0xa455dcu), (u8)r_eax);
L_004550fd:; BB(0x004550fd);
    /* 004550fd: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455102: jne 0x45511c */ if (!fZ) goto L_0045511c;
L_00455104:; BB(0x00455104);
    /* 00455104: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00455106: fsub dword ptr [0xa455f8] */ ST(0) = ST(0) - R_F32((u32)(0xa455f8u));
    /* 0045510c: fst dword ptr [0xa455fc] */ W_F32((u32)(0xa455fcu), ST(0));
    /* 00455112: or eax, 0xffffff80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455115: mov byte ptr [0xa455dc], al */ W8((u32)(0xa455dcu), (u8)r_eax);
    /* 0045511a: jmp 0x455122 */ goto L_00455122;
L_0045511c:; BB(0x0045511c);
    /* 0045511c: fld dword ptr [0xa455fc] */ FPUSH(R_F32((u32)(0xa455fcu)));
L_00455122:; BB(0x00455122);
    /* 00455122: fld dword ptr [0x8ffcb0] */ FPUSH(R_F32((u32)(0x8ffcb0u)));
    /* 00455128: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045512b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0045512d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045512f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455130: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00455132: jbe 0x455136 */ if ((fC||fZ)) goto L_00455136;
L_00455134:; BB(0x00455134);
    /* 00455134: fst st(2) */ ST(2) = ST(0);
L_00455136:; BB(0x00455136);
    /* 00455136: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00455138: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045513a: fcom dword ptr [0x8ffef4] */ fx_compare(ST(0), R_F32((u32)(0x8ffef4u))); 
    /* 00455140: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455142: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00455145: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 0045514d: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 00455155: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455156: jbe 0x4551a7 */ if ((fC||fZ)) goto L_004551a7;
L_00455158:; BB(0x00455158);
    /* 00455158: fld dword ptr [0xa455ec] */ FPUSH(R_F32((u32)(0xa455ecu)));
    /* 0045515e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00455160: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00455163: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455165: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00455167: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00455169: fld dword ptr [0xa455f0] */ FPUSH(R_F32((u32)(0xa455f0u)));
    /* 0045516f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455171: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455175: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00455177: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00455179: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0045517b: fld dword ptr [0xa455f4] */ FPUSH(R_F32((u32)(0xa455f4u)));
    /* 00455181: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00455183: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00455187: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455189: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0045518b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045518d: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0045518f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00455191: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00455195: fld dword ptr [0xa455f8] */ FPUSH(R_F32((u32)(0xa455f8u)));
    /* 0045519b: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0045519d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0045519f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004551a1: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 004551a5: jmp 0x4551c5 */ goto L_004551c5;
L_004551a7:; BB(0x004551a7);
    /* 004551a7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004551a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004551ab: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 004551af: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004551b3: mov edx, 0x419e6666 */ r_edx = 0x419e6666u;
    /* 004551b8: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 004551bc: mov eax, 0xc0a00000 */ r_eax = 0xc0a00000u;
    /* 004551c1: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
L_004551c5:; BB(0x004551c5);
    /* 004551c5: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x4551cau); f_007bb6d0();
    /* 004551ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004551cb: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x4551d0u); f_004d30cc();
    /* 004551d0: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 004551d4: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 004551d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004551d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004551da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004551db: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x4551e0u); f_004d85bc();
    /* 004551e0: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004551e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004551e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004551e8: ret  */ FN_RET(0x00454ef0); r_esp += 4; return;
L_004551e9:; BB(0x004551e9);
    /* 004551e9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004551eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004551ed: jmp 0x455047 */ goto L_00455047;
}

