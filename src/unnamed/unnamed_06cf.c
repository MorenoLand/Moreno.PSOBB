#include "protos.h"

void f_006cf01c(void) /* sub_6CF01C */
{
    FN_ENTER(0x006cf01c);
    /* 006cf01c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cf01d: mov ebp, esp */ r_ebp = r_esp;
    /* 006cf01f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cf021: push 0x8edca8 */ { u32 v = 0x8edca8u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf026: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cf02c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf02d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cf034: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cf037: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cf03a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006cf03d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006cf040: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006cf043: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006cf046: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf049: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006cf04c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006cf04f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006cf052: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006cf055: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6cf05au); f_006dc898();
    /* 006cf05a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cf061: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006cf064: mov dword ptr [esi], 0xb3bfb0 */ W32((u32)(r_esi), 0xb3bfb0u);
    /* 006cf06a: mov eax, dword ptr [0x9ced2c] */ r_eax = R32((u32)(0x9ced2cu));
    /* 006cf06f: mov edx, dword ptr [0xa96134] */ r_edx = R32((u32)(0xa96134u));
    /* 006cf075: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006cf078: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf07a: je 0x6cf091 */ if (fZ) goto L_006cf091;
L_006cf07c:; BB(0x006cf07c);
    /* 006cf07c: mov eax, esi */ r_eax = r_esi;
    /* 006cf07e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf081: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cf084: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cf08b: mov esp, ebp */ r_esp = r_ebp;
    /* 006cf08d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cf08e: ret 0xc */ FN_RET(0x006cf01c); r_esp += 16; return;
L_006cf091:; BB(0x006cf091);
    /* 006cf091: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cf094: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cf097: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006cf099: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 006cf09c: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 006cf09f: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 006cf0a2: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 006cf0a5: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 006cf0a8: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 006cf0ab: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 006cf0ae: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 006cf0b1: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
    /* 006cf0b4: mov dword ptr [esi + 0x48], ebx */ W32((u32)(r_esi+0x48u), r_ebx);
    /* 006cf0b7: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6cf0bcu); f_0078b1c4();
    /* 006cf0bc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf0bf: jne 0x6cf0f1 */ if (!fZ) goto L_006cf0f1;
L_006cf0c1:; BB(0x006cf0c1);
    /* 006cf0c1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006cf0c4: mov dword ptr [eax + 0x58], 0x96bb80 */ W32((u32)(r_eax+0x58u), 0x96bb80u);
    /* 006cf0cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cf0cd: mov dword ptr [eax + 0x50], 0xf */ W32((u32)(r_eax+0x50u), 0xfu);
    /* 006cf0d4: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x6cf0d9u); f_004da300();
    /* 006cf0d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cf0da: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006cf0dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cf0e0: mov edx, 9 */ r_edx = 0x9u;
    /* 006cf0e5: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cf0e8: jl 0x6cf0ec */ if ((fS!=fO)) goto L_006cf0ec;
L_006cf0ea:; BB(0x006cf0ea);
    /* 006cf0ea: mov eax, edx */ r_eax = r_edx;
L_006cf0ec:; BB(0x006cf0ec);
    /* 006cf0ec: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 006cf0ef: jmp 0x6cf10e */ goto L_006cf10e;
L_006cf0f1:; BB(0x006cf0f1);
    /* 006cf0f1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006cf0f4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cf0f7: jne 0x6cf10e */ if (!fZ) goto L_006cf10e;
L_006cf0f9:; BB(0x006cf0f9);
    /* 006cf0f9: mov dword ptr [ecx + 0x58], 0x96bc20 */ W32((u32)(r_ecx+0x58u), 0x96bc20u);
    /* 006cf100: mov dword ptr [ecx + 0x50], 0x10 */ W32((u32)(r_ecx+0x50u), 0x10u);
    /* 006cf107: mov dword ptr [ecx + 0x54], 6 */ W32((u32)(r_ecx+0x54u), 0x6u);
L_006cf10e:; BB(0x006cf10e);
    /* 006cf10e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf111: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006cf114: mov dword ptr [0xa96134], ecx */ W32((u32)(0xa96134u), r_ecx);
    /* 006cf11a: mov eax, ecx */ r_eax = r_ecx;
    /* 006cf11c: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 006cf123: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cf126: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cf12d: mov esp, ebp */ r_esp = r_ebp;
    /* 006cf12f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cf130: ret 0xc */ FN_RET(0x006cf01c); r_esp += 16; return;
}

void f_006cf134(void) /* sub_6CF134 */
{
    FN_ENTER(0x006cf134);
    /* 006cf134: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf136: mov dword ptr [0xa9613c], eax */ W32((u32)(0xa9613cu), r_eax);
    /* 006cf13b: mov dword ptr [0xa96138], eax */ W32((u32)(0xa96138u), r_eax);
    /* 006cf140: mov dword ptr [0xa96134], eax */ W32((u32)(0xa96134u), r_eax);
    /* 006cf145: ret  */ FN_RET(0x006cf134); r_esp += 4; return;
}

void f_006cf148(void) /* sub_6CF148 */
{
    FN_ENTER(0x006cf148);
    /* 006cf148: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006cf14b: call dword ptr [eax*4 + 0x9ced14] */ { u32 t = R32((u32)(r_eax*4+0x9ced14u)); r_esp -= 4; W32(r_esp, 0x6cf152u); call_ind(t); }
    /* 006cf152: ret  */ FN_RET(0x006cf148); r_esp += 4; return;
}

void f_006cf154(void) /* sub_6CF154 */
{
    FN_ENTER(0x006cf154);
    /* 006cf154: mov eax, dword ptr [0xa96134] */ r_eax = R32((u32)(0xa96134u));
    /* 006cf159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf15b: je 0x6cf183 */ if (fZ) goto L_006cf183;
L_006cf15d:; BB(0x006cf15d);
    /* 006cf15d: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006cf160: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf162: je 0x6cf183 */ if (fZ) goto L_006cf183;
L_006cf164:; BB(0x006cf164);
    /* 006cf164: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6cf169u); f_00737d90();
    /* 006cf169: mov ecx, dword ptr [0xa96134] */ r_ecx = R32((u32)(0xa96134u));
    /* 006cf16f: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006cf172: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cf174: push dword ptr [edx + eax*8] */ { u32 v = R32((u32)(r_edx+r_eax*8)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf177: push dword ptr [ecx + 0x50] */ { u32 v = R32((u32)(r_ecx+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf17a: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cf17fu); f_006dbde4();
    /* 006cf17f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cf182: ret  */ FN_RET(0x006cf154); r_esp += 4; return;
L_006cf183:; BB(0x006cf183);
    /* 006cf183: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf185: ret  */ FN_RET(0x006cf154); r_esp += 4; return;
}

void f_006cf188(void) /* sub_6CF188 */
{
    FN_ENTER(0x006cf188);
    /* 006cf188: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf189: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cf18a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cf18d: mov esi, ecx */ r_esi = r_ecx;
    /* 006cf18f: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006cf192: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf194: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cf197u); call_ind(t); }
    /* 006cf197: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf199: je 0x6cf240 */ if (fZ) goto L_006cf240;
L_006cf19f:; BB(0x006cf19f);
    /* 006cf19f: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 006cf1a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf1a4: je 0x6cf200 */ if (fZ) goto L_006cf200;
L_006cf1a6:; BB(0x006cf1a6);
    /* 006cf1a6: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006cf1a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf1ab: je 0x6cf200 */ if (fZ) goto L_006cf200;
L_006cf1ad:; BB(0x006cf1ad);
    /* 006cf1ad: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6cf1b2u); f_00737d90();
    /* 006cf1b2: mov ebp, eax */ r_ebp = r_eax;
    /* 006cf1b4: cmp ebp, dword ptr [esi + 0x4c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf1b7: jne 0x6cf1be */ if (!fZ) goto L_006cf1be;
L_006cf1b9:; BB(0x006cf1b9);
    /* 006cf1b9: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 006cf1bc: jmp 0x6cf200 */ goto L_006cf200;
L_006cf1be:; BB(0x006cf1be);
    /* 006cf1be: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 006cf1c1: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 006cf1c5: push dword ptr [edx + eax*8 + 4] */ { u32 v = R32((u32)(r_edx+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf1c9: push dword ptr [esi + 0x50] */ { u32 v = R32((u32)(r_esi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf1cc: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cf1d1u); f_006dbde4();
    /* 006cf1d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cf1d4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf1d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf1da: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 006cf1dd: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6cf1e2u); f_0073ae38();
    /* 006cf1e2: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 006cf1e5: mov dword ptr [esi + 0x4c], ebp */ W32((u32)(r_esi+0x4cu), r_ebp);
    /* 006cf1e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf1ea: je 0x6cf1fd */ if (fZ) goto L_006cf1fd;
L_006cf1ec:; BB(0x006cf1ec);
    /* 006cf1ec: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf1f1u); f_007127b0();
    /* 006cf1f1: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 006cf1f4: mov dword ptr [esi + 0x40], 0 */ W32((u32)(r_esi+0x40u), 0x0u);
    /* 006cf1fb: jmp 0x6cf200 */ goto L_006cf200;
L_006cf1fd:; BB(0x006cf1fd);
    /* 006cf1fd: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
L_006cf200:; BB(0x006cf200);
    /* 006cf200: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf202: je 0x6cf21c */ if (fZ) goto L_006cf21c;
L_006cf204:; BB(0x006cf204);
    /* 006cf204: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cf20b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cf20d: je 0x6cf21c */ if (fZ) goto L_006cf21c;
L_006cf20f:; BB(0x006cf20f);
    /* 006cf20f: mov dword ptr [esi + 0x20], 4 */ W32((u32)(r_esi+0x20u), 0x4u);
    /* 006cf216: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cf219: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cf21a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cf21b: ret  */ FN_RET(0x006cf188); r_esp += 4; return;
L_006cf21c:; BB(0x006cf21c);
    /* 006cf21c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf21e: je 0x6cf240 */ if (fZ) goto L_006cf240;
L_006cf220:; BB(0x006cf220);
    /* 006cf220: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cf227: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cf229: je 0x6cf240 */ if (fZ) goto L_006cf240;
L_006cf22b:; BB(0x006cf22b);
    /* 006cf22b: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6cf230u); f_00737d90();
    /* 006cf230: mov ebp, eax */ r_ebp = r_eax;
    /* 006cf232: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 006cf235: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf237: je 0x6cf2a9 */ if (fZ) goto L_006cf2a9;
L_006cf239:; BB(0x006cf239);
    /* 006cf239: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006cf23c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf23e: je 0x6cf246 */ if (fZ) goto L_006cf246;
L_006cf240:; BB(0x006cf240);
    /* 006cf240: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cf243: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cf244: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cf245: ret  */ FN_RET(0x006cf188); r_esp += 4; return;
L_006cf246:; BB(0x006cf246);
    /* 006cf246: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006cf248: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cf24du); f_0073ec50();
    /* 006cf24d: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006cf250: movzx ebp, word ptr [edx + 0x1c] */ r_ebp = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cf254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cf255: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf256: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6cf25bu); f_00735884();
    /* 006cf25b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cf25e: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006cf261: mov ecx, esi */ r_ecx = r_esi;
    /* 006cf263: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cf268u); f_006dc8d8();
    /* 006cf268: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006cf26c: mov ecx, esi */ r_ecx = r_esi;
    /* 006cf26e: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cf273u); f_006dc8d8();
    /* 006cf273: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006cf276: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cf279: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006cf27d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cf280: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006cf284: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cf289u); f_0070f5a4();
    /* 006cf289: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006cf28c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf28e: je 0x6cf29c */ if (fZ) goto L_006cf29c;
L_006cf290:; BB(0x006cf290);
    /* 006cf290: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf295: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf297: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf299: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cf29cu); call_ind(t); }
L_006cf29c:; BB(0x006cf29c);
    /* 006cf29c: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
    /* 006cf2a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cf2a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cf2a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cf2a8: ret  */ FN_RET(0x006cf188); r_esp += 4; return;
L_006cf2a9:; BB(0x006cf2a9);
    /* 006cf2a9: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006cf2b0: mov dword ptr [esp + 4], 0x43520000 */ W32((u32)(r_esp+0x4u), 0x43520000u);
    /* 006cf2b8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf2ba: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cf2bfu); f_0073ec50();
    /* 006cf2bf: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006cf2c3: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006cf2c6: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cf2ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cf2cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf2cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cf2ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf2cf: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6cf2d4u); f_0073aa40();
    /* 006cf2d4: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 006cf2d7: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 006cf2da: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006cf2dc: push dword ptr [edx + ebp*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ebp*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf2e0: push dword ptr [esi + 0x50] */ { u32 v = R32((u32)(r_esi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf2e3: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cf2e8u); f_006dbde4();
    /* 006cf2e8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cf2eb: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf2f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf2f1: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 006cf2f4: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6cf2f9u); f_0073ae38();
    /* 006cf2f9: push 0x47108800 */ { u32 v = 0x47108800u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf2fe: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 006cf301: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6cf306u); f_00712624();
    /* 006cf306: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 006cf30b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cf30e: jl 0x6cf239 */ if ((fS!=fO)) goto L_006cf239;
L_006cf314:; BB(0x006cf314);
    /* 006cf314: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf319: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf31e: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 006cf321: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cf326u); f_0070f5a4();
    /* 006cf326: jmp 0x6cf239 */ goto L_006cf239;
}

void f_006cf32c(void) /* sub_6CF32C */
{
    FN_ENTER(0x006cf32c);
    /* 006cf32c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf32d: mov edi, ecx */ r_edi = r_ecx;
    /* 006cf32f: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006cf332: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf334: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cf337u); call_ind(t); }
    /* 006cf337: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf339: je 0x6cf3b2 */ if (fZ) goto L_006cf3b2;
L_006cf33b:; BB(0x006cf33b);
    /* 006cf33b: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006cf33e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf340: je 0x6cf380 */ if (fZ) goto L_006cf380;
L_006cf342:; BB(0x006cf342);
    /* 006cf342: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cf349: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cf34b: je 0x6cf380 */ if (fZ) goto L_006cf380;
L_006cf34d:; BB(0x006cf34d);
    /* 006cf34d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6cf352u); f_007365f4();
    /* 006cf352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf354: je 0x6cf360 */ if (fZ) goto L_006cf360;
L_006cf356:; BB(0x006cf356);
    /* 006cf356: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf359: je 0x6cf3b4 */ if (fZ) goto L_006cf3b4;
L_006cf35b:; BB(0x006cf35b);
    /* 006cf35b: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006cf35e: jmp 0x6cf380 */ goto L_006cf380;
L_006cf360:; BB(0x006cf360);
    /* 006cf360: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cf363: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6cf368u); f_00737d90();
    /* 006cf368: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 006cf36b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cf36d: push dword ptr [edx + eax*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_eax*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf371: call 0x6b9a54 */ r_esp -= 4; W32(r_esp, 0x6cf376u); f_006b9a54();
    /* 006cf376: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 006cf37d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cf37e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf37f: ret  */ FN_RET(0x006cf32c); r_esp += 4; return;
L_006cf380:; BB(0x006cf380);
    /* 006cf380: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf382: je 0x6cf3b2 */ if (fZ) goto L_006cf3b2;
L_006cf384:; BB(0x006cf384);
    /* 006cf384: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cf38b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf38d: je 0x6cf3b2 */ if (fZ) goto L_006cf3b2;
L_006cf38f:; BB(0x006cf38f);
    /* 006cf38f: mov ecx, edi */ r_ecx = r_edi;
    /* 006cf391: call 0x6cf3d8 */ r_esp -= 4; W32(r_esp, 0x6cf396u); f_006cf3d8();
    /* 006cf396: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006cf399: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf39b: je 0x6cf3a9 */ if (fZ) goto L_006cf3a9;
L_006cf39d:; BB(0x006cf39d);
    /* 006cf39d: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf3a2: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf3a4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf3a6: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cf3a9u); call_ind(t); }
L_006cf3a9:; BB(0x006cf3a9);
    /* 006cf3a9: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 006cf3b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf3b1: ret  */ FN_RET(0x006cf32c); r_esp += 4; return;
L_006cf3b2:; BB(0x006cf3b2);
    /* 006cf3b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf3b3: ret  */ FN_RET(0x006cf32c); r_esp += 4; return;
L_006cf3b4:; BB(0x006cf3b4);
    /* 006cf3b4: mov ecx, edi */ r_ecx = r_edi;
    /* 006cf3b6: call 0x6cf3d8 */ r_esp -= 4; W32(r_esp, 0x6cf3bbu); f_006cf3d8();
    /* 006cf3bb: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006cf3be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf3c0: je 0x6cf3ce */ if (fZ) goto L_006cf3ce;
L_006cf3c2:; BB(0x006cf3c2);
    /* 006cf3c2: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf3c7: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf3c9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf3cb: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cf3ceu); call_ind(t); }
L_006cf3ce:; BB(0x006cf3ce);
    /* 006cf3ce: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 006cf3d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf3d6: ret  */ FN_RET(0x006cf32c); r_esp += 4; return;
}

void f_006cf3d8(void) /* sub_6CF3D8 */
{
    FN_ENTER(0x006cf3d8);
    /* 006cf3d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf3d9: mov edi, ecx */ r_edi = r_ecx;
    /* 006cf3db: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006cf3de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf3e0: je 0x6cf3ee */ if (fZ) goto L_006cf3ee;
L_006cf3e2:; BB(0x006cf3e2);
    /* 006cf3e2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf3e7u); f_007127b0();
    /* 006cf3e7: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_006cf3ee:; BB(0x006cf3ee);
    /* 006cf3ee: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cf3f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf3f3: je 0x6cf401 */ if (fZ) goto L_006cf401;
L_006cf3f5:; BB(0x006cf3f5);
    /* 006cf3f5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf3fau); f_007127b0();
    /* 006cf3fa: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_006cf401:; BB(0x006cf401);
    /* 006cf401: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006cf404: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf406: je 0x6cf414 */ if (fZ) goto L_006cf414;
L_006cf408:; BB(0x006cf408);
    /* 006cf408: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf40du); f_007127b0();
    /* 006cf40d: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
L_006cf414:; BB(0x006cf414);
    /* 006cf414: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 006cf417: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf419: je 0x6cf427 */ if (fZ) goto L_006cf427;
L_006cf41b:; BB(0x006cf41b);
    /* 006cf41b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf420u); f_007127b0();
    /* 006cf420: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_006cf427:; BB(0x006cf427);
    /* 006cf427: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf428: ret  */ FN_RET(0x006cf3d8); r_esp += 4; return;
}

void f_006cf42c(void) /* sub_6CF42C */
{
    FN_ENTER(0x006cf42c);
    /* 006cf42c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cf42d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cf42f: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 006cf432: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf434: je 0x6cf43c */ if (fZ) goto L_006cf43c;
L_006cf436:; BB(0x006cf436);
    /* 006cf436: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf439: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6cf43bu); call_ind(t); }
    /* 006cf43b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006cf43c:; BB(0x006cf43c);
    /* 006cf43c: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006cf440: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf445: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006cf449: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cf44a: ret  */ FN_RET(0x006cf42c); r_esp += 4; return;
}

void f_006cf44c(void) /* sub_6CF44C */
{
    FN_ENTER(0x006cf44c);
    /* 006cf44c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cf44d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cf44f: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 006cf452: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf454: je 0x6cf45c */ if (fZ) goto L_006cf45c;
L_006cf456:; BB(0x006cf456);
    /* 006cf456: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf459: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6cf45bu); call_ind(t); }
    /* 006cf45b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006cf45c:; BB(0x006cf45c);
    /* 006cf45c: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006cf460: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf465: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006cf469: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cf46a: ret  */ FN_RET(0x006cf44c); r_esp += 4; return;
}

void f_006cf46c(void) /* sub_6CF46C */
{
    FN_ENTER(0x006cf46c);
    /* 006cf46c: mov dword ptr [0xa96128], 0x3f800000 */ W32((u32)(0xa96128u), 0x3f800000u);
    /* 006cf476: mov dword ptr [0xa9612c], 0x41000000 */ W32((u32)(0xa9612cu), 0x41000000u);
    /* 006cf480: mov dword ptr [0xa96130], 0x3fc00000 */ W32((u32)(0xa96130u), 0x3fc00000u);
    /* 006cf48a: ret  */ FN_RET(0x006cf46c); r_esp += 4; return;
}

void f_006cf48c(void) /* sub_6CF48C */
{
    FN_ENTER(0x006cf48c);
    /* 006cf48c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf48d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cf490: mov esi, ecx */ r_esi = r_ecx;
    /* 006cf492: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006cf495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf497: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cf49au); call_ind(t); }
    /* 006cf49a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf49c: je 0x6cf4a5 */ if (fZ) goto L_006cf4a5;
L_006cf49e:; BB(0x006cf49e);
    /* 006cf49e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006cf4a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf4a3: je 0x6cf4aa */ if (fZ) goto L_006cf4aa;
L_006cf4a5:; BB(0x006cf4a5);
    /* 006cf4a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cf4a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cf4a9: ret  */ FN_RET(0x006cf48c); r_esp += 4; return;
L_006cf4aa:; BB(0x006cf4aa);
    /* 006cf4aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf4ac: call 0x6dbe50 */ r_esp -= 4; W32(r_esp, 0x6cf4b1u); f_006dbe50();
    /* 006cf4b1: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006cf4b4: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cf4b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cf4b9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf4bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf4bc: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6cf4c1u); f_0073ff34();
    /* 006cf4c1: mov ecx, eax */ r_ecx = r_eax;
    /* 006cf4c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cf4c6: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 006cf4c9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 006cf4cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cf4ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006cf4d0: jle 0x6cf518 */ if ((fZ||fS!=fO)) goto L_006cf518;
L_006cf4d2:; BB(0x006cf4d2);
    /* 006cf4d2: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006cf4d6: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006cf4d9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006cf4dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006cf4de: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006cf4e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006cf4e2: mov edi, eax */ r_edi = r_eax;
    /* 006cf4e4: mov ebx, edx */ r_ebx = r_edx;
L_006cf4e6:; BB(0x006cf4e6);
    /* 006cf4e6: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 006cf4e9: push dword ptr [ebx + ecx] */ { u32 v = R32((u32)(r_ebx+r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf4ec: push dword ptr [esi + 0x50] */ { u32 v = R32((u32)(r_esi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf4ef: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cf4f4u); f_006dbde4();
    /* 006cf4f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cf4f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf4f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf4f9: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 006cf4fc: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf4fe: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6cf503u); f_00740084();
    /* 006cf503: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cf506: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006cf509: cmp edi, dword ptr [esi + 0x54] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cf50c: jl 0x6cf4e6 */ if ((fS!=fO)) goto L_006cf4e6;
L_006cf50e:; BB(0x006cf50e);
    /* 006cf50e: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006cf512: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006cf515: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
L_006cf518:; BB(0x006cf518);
    /* 006cf518: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6cf51du); f_00737cdc();
    /* 006cf51d: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 006cf524: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cf527: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cf528: ret  */ FN_RET(0x006cf48c); r_esp += 4; return;
}

void f_006cf52c(void) /* sub_6CF52C */
{
    FN_ENTER(0x006cf52c);
    /* 006cf52c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cf52d: mov ebp, esp */ r_ebp = r_esp;
    /* 006cf52f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cf531: push 0x8edcd0 */ { u32 v = 0x8edcd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf536: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cf53c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf53d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cf544: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cf547: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cf54a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cf54d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cf550: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cf553: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006cf55a: push 0x14768 */ { u32 v = 0x14768u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf55f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cf564u); f_005caba4();
    /* 006cf564: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cf565: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006cf568: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf56a: je 0x6cf5ab */ if (fZ) goto L_006cf5ab;
L_006cf56c:; BB(0x006cf56c);
    /* 006cf56c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006cf573: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006cf57a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf57d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf580: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf586: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf589: call 0x6d1af8 */ r_esp -= 4; W32(r_esp, 0x6cf58eu); f_006d1af8();
    /* 006cf58e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf591: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006cf598:; BB(0x006cf598);
    /* 006cf598: mov dword ptr [0xa96144], eax */ W32((u32)(0xa96144u), r_eax);
    /* 006cf59d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cf5a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cf5a7: mov esp, ebp */ r_esp = r_ebp;
    /* 006cf5a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cf5aa: ret  */ FN_RET(0x006cf52c); r_esp += 4; return;
L_006cf5ab:; BB(0x006cf5ab);
    /* 006cf5ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf5ad: jmp 0x6cf598 */ goto L_006cf598;
}

void f_006cf5b0(void) /* sub_6CF5B0 */
{
    FN_ENTER(0x006cf5b0);
    /* 006cf5b0: mov eax, dword ptr [0xa961a4] */ r_eax = R32((u32)(0xa961a4u));
    /* 006cf5b5: ret  */ FN_RET(0x006cf5b0); r_esp += 4; return;
}

void f_006cf5b8(void) /* sub_6CF5B8 */
{
    FN_ENTER(0x006cf5b8);
    /* 006cf5b8: mov eax, dword ptr [0xa9619c] */ r_eax = R32((u32)(0xa9619cu));
    /* 006cf5bd: ret  */ FN_RET(0x006cf5b8); r_esp += 4; return;
}

void f_006cf5c0(void) /* sub_6CF5C0 */
{
    FN_ENTER(0x006cf5c0);
    /* 006cf5c0: mov eax, dword ptr [0xa961a0] */ r_eax = R32((u32)(0xa961a0u));
    /* 006cf5c5: ret  */ FN_RET(0x006cf5c0); r_esp += 4; return;
}

void f_006cf5c8(void) /* sub_6CF5C8 */
{
    FN_ENTER(0x006cf5c8);
    /* 006cf5c8: call 0x6d1c2c */ r_esp -= 4; W32(r_esp, 0x6cf5cdu); f_006d1c2c();
    /* 006cf5cd: ret  */ FN_RET(0x006cf5c8); r_esp += 4; return;
}

void f_006cf5d0(void) /* sub_6CF5D0 */
{
    FN_ENTER(0x006cf5d0);
    /* 006cf5d0: mov dword ptr [0xa95624], 1 */ W32((u32)(0xa95624u), 0x1u);
    /* 006cf5da: mov dword ptr [0xa955e0], 3 */ W32((u32)(0xa955e0u), 0x3u);
    /* 006cf5e4: call 0x7a6160 */ r_esp -= 4; W32(r_esp, 0x6cf5e9u); f_007a6160();
    /* 006cf5e9: ret  */ FN_RET(0x006cf5d0); r_esp += 4; return;
}

void f_006cf5ec(void) /* sub_6CF5EC */
{
    FN_ENTER(0x006cf5ec);
    /* 006cf5ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cf5ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cf5ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cf5f1: call 0x6cf610 */ r_esp -= 4; W32(r_esp, 0x6cf5f6u); f_006cf610();
    /* 006cf5f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cf5fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf5fc: jne 0x6cf602 */ if (!fZ) goto L_006cf602;
L_006cf5fe:; BB(0x006cf5fe);
    /* 006cf5fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cf5ff: ret 4 */ FN_RET(0x006cf5ec); r_esp += 8; return;
L_006cf602:; BB(0x006cf602);
    /* 006cf602: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cf603: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6cf608u); f_005c2f74();
    /* 006cf608: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cf609: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cf60a: ret 4 */ FN_RET(0x006cf5ec); r_esp += 8; return;
}

void f_006cf610(void) /* sub_6CF610 */
{
    FN_ENTER(0x006cf610);
    /* 006cf610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cf611: mov ebp, esp */ r_ebp = r_esp;
    /* 006cf613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cf615: push 0x8edcec */ { u32 v = 0x8edcecu; r_esp -= 4; W32(r_esp, v); }
    /* 006cf61a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cf620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf621: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cf628: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cf62b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cf62e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cf631: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cf634: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cf637: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cf63a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cf641: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf644: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006cf647: mov dword ptr [eax], 0xb3c030 */ W32((u32)(r_eax), 0xb3c030u);
    /* 006cf64d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf64f: je 0x6cf660 */ if (fZ) goto L_006cf660;
L_006cf651:; BB(0x006cf651);
    /* 006cf651: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf656u); f_007127b0();
    /* 006cf656: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf659: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006cf660:; BB(0x006cf660);
    /* 006cf660: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006cf663: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf665: je 0x6cf676 */ if (fZ) goto L_006cf676;
L_006cf667:; BB(0x006cf667);
    /* 006cf667: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf66cu); f_007127b0();
    /* 006cf66c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf66f: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006cf676:; BB(0x006cf676);
    /* 006cf676: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006cf679: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf67b: je 0x6cf68c */ if (fZ) goto L_006cf68c;
L_006cf67d:; BB(0x006cf67d);
    /* 006cf67d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf682u); f_007127b0();
    /* 006cf682: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf685: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_006cf68c:; BB(0x006cf68c);
    /* 006cf68c: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006cf68f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf691: je 0x6cf6a2 */ if (fZ) goto L_006cf6a2;
L_006cf693:; BB(0x006cf693);
    /* 006cf693: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf698u); f_007127b0();
    /* 006cf698: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf69b: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006cf6a2:; BB(0x006cf6a2);
    /* 006cf6a2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cf6a9: mov ecx, eax */ r_ecx = r_eax;
    /* 006cf6ab: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6cf6b0u); f_006dc848();
    /* 006cf6b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cf6b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cf6ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006cf6bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cf6bd: ret  */ FN_RET(0x006cf610); r_esp += 4; return;
}

void f_006cf6c0(void) /* sub_6CF6C0 */
{
    FN_ENTER(0x006cf6c0);
    /* 006cf6c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf6c1: mov edi, ecx */ r_edi = r_ecx;
    /* 006cf6c3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf6c7: mov ecx, edi */ r_ecx = r_edi;
    /* 006cf6c9: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6cf6ceu); f_006dc898();
    /* 006cf6ce: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006cf6d2: mov dword ptr [edi], 0xb3c030 */ W32((u32)(r_edi), 0xb3c030u);
    /* 006cf6d8: mov eax, dword ptr [0x9cf034] */ r_eax = R32((u32)(0x9cf034u));
    /* 006cf6dd: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006cf6e0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006cf6e4: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 006cf6e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006cf6e9: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 006cf6ec: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 006cf6ef: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 006cf6f2: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 006cf6f5: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 006cf6f8: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 006cf6fd: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 006cf700: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 006cf703: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 006cf706: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 006cf709: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 006cf70c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf70e: jne 0x6cf719 */ if (!fZ) goto L_006cf719;
L_006cf710:; BB(0x006cf710);
    /* 006cf710: mov dword ptr [edi + 0x54], 0x9ced40 */ W32((u32)(r_edi+0x54u), 0x9ced40u);
    /* 006cf717: jmp 0x6cf720 */ goto L_006cf720;
L_006cf719:; BB(0x006cf719);
    /* 006cf719: mov dword ptr [edi + 0x54], 0x9cf038 */ W32((u32)(r_edi+0x54u), 0x9cf038u);
L_006cf720:; BB(0x006cf720);
    /* 006cf720: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 006cf727: mov eax, edi */ r_eax = r_edi;
    /* 006cf729: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf72a: ret 0xc */ FN_RET(0x006cf6c0); r_esp += 16; return;
}

void f_006cf730(void) /* sub_6CF730 */
{
    FN_ENTER(0x006cf730);
    /* 006cf730: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf731: mov edi, ecx */ r_edi = r_ecx;
    /* 006cf733: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 006cf736: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf738: je 0x6cf7bd */ if (fZ) goto L_006cf7bd;
L_006cf73e:; BB(0x006cf73e);
    /* 006cf73e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf741: je 0x6cf7b4 */ if (fZ) goto L_006cf7b4;
L_006cf743:; BB(0x006cf743);
    /* 006cf743: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf746: je 0x6cf7ab */ if (fZ) goto L_006cf7ab;
L_006cf748:; BB(0x006cf748);
    /* 006cf748: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf74b: je 0x6cf78f */ if (fZ) goto L_006cf78f;
L_006cf74d:; BB(0x006cf74d);
    /* 006cf74d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf750: je 0x6cf773 */ if (fZ) goto L_006cf773;
L_006cf752:; BB(0x006cf752);
    /* 006cf752: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cf755: jne 0x6cf78d */ if (!fZ) goto L_006cf78d;
L_006cf757:; BB(0x006cf757);
    /* 006cf757: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006cf75a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf75c: je 0x6cf764 */ if (fZ) goto L_006cf764;
L_006cf75e:; BB(0x006cf75e);
    /* 006cf75e: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf761: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6cf763u); call_ind(t); }
    /* 006cf763: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006cf764:; BB(0x006cf764);
    /* 006cf764: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006cf768: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf76d: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006cf771: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf772: ret  */ FN_RET(0x006cf730); r_esp += 4; return;
L_006cf773:; BB(0x006cf773);
    /* 006cf773: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 006cf776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf778: je 0x6cf780 */ if (fZ) goto L_006cf780;
L_006cf77a:; BB(0x006cf77a);
    /* 006cf77a: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf77d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6cf77fu); call_ind(t); }
    /* 006cf77f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006cf780:; BB(0x006cf780);
    /* 006cf780: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006cf784: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf789: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_006cf78d:; BB(0x006cf78d);
    /* 006cf78d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf78e: ret  */ FN_RET(0x006cf730); r_esp += 4; return;
L_006cf78f:; BB(0x006cf78f);
    /* 006cf78f: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 006cf792: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf794: je 0x6cf79c */ if (fZ) goto L_006cf79c;
L_006cf796:; BB(0x006cf796);
    /* 006cf796: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf799: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6cf79bu); call_ind(t); }
    /* 006cf79b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006cf79c:; BB(0x006cf79c);
    /* 006cf79c: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006cf7a0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf7a5: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006cf7a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf7aa: ret  */ FN_RET(0x006cf730); r_esp += 4; return;
L_006cf7ab:; BB(0x006cf7ab);
    /* 006cf7ab: mov ecx, edi */ r_ecx = r_edi;
    /* 006cf7ad: call 0x6cf7c8 */ r_esp -= 4; W32(r_esp, 0x6cf7b2u); f_006cf7c8();
    /* 006cf7b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf7b3: ret  */ FN_RET(0x006cf730); r_esp += 4; return;
L_006cf7b4:; BB(0x006cf7b4);
    /* 006cf7b4: mov ecx, edi */ r_ecx = r_edi;
    /* 006cf7b6: call 0x6cf8d0 */ r_esp -= 4; W32(r_esp, 0x6cf7bbu); f_006cf8d0();
    /* 006cf7bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf7bc: ret  */ FN_RET(0x006cf730); r_esp += 4; return;
L_006cf7bd:; BB(0x006cf7bd);
    /* 006cf7bd: mov ecx, edi */ r_ecx = r_edi;
    /* 006cf7bf: call 0x6cfadc */ r_esp -= 4; W32(r_esp, 0x6cf7c4u); f_006cfadc();
    /* 006cf7c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf7c5: ret  */ FN_RET(0x006cf730); r_esp += 4; return;
}

void f_006cf7c8(void) /* sub_6CF7C8 */
{
    FN_ENTER(0x006cf7c8);
    /* 006cf7c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf7c9: mov edi, ecx */ r_edi = r_ecx;
    /* 006cf7cb: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006cf7ce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf7d0: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cf7d3u); call_ind(t); }
    /* 006cf7d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf7d5: je 0x6cf85a */ if (fZ) goto L_006cf85a;
L_006cf7db:; BB(0x006cf7db);
    /* 006cf7db: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cf7de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf7e0: je 0x6cf82b */ if (fZ) goto L_006cf82b;
L_006cf7e2:; BB(0x006cf7e2);
    /* 006cf7e2: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cf7e9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cf7eb: je 0x6cf82b */ if (fZ) goto L_006cf82b;
L_006cf7ed:; BB(0x006cf7ed);
    /* 006cf7ed: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6cf7f2u); f_007365f4();
    /* 006cf7f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf7f4: je 0x6cf800 */ if (fZ) goto L_006cf800;
L_006cf7f6:; BB(0x006cf7f6);
    /* 006cf7f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf7f9: je 0x6cf85c */ if (fZ) goto L_006cf85c;
L_006cf7fb:; BB(0x006cf7fb);
    /* 006cf7fb: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cf7fe: jmp 0x6cf82b */ goto L_006cf82b;
L_006cf800:; BB(0x006cf800);
    /* 006cf800: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006cf803: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6cf808u); f_00737d90();
    /* 006cf808: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cf80a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cf80c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006cf80f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006cf811: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006cf813: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006cf815: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 006cf818: push dword ptr [eax + edx + 0x18] */ { u32 v = R32((u32)(r_eax+r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf81c: call 0x6b9a54 */ r_esp -= 4; W32(r_esp, 0x6cf821u); f_006b9a54();
    /* 006cf821: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 006cf828: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cf829: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf82a: ret  */ FN_RET(0x006cf7c8); r_esp += 4; return;
L_006cf82b:; BB(0x006cf82b);
    /* 006cf82b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf82d: je 0x6cf85a */ if (fZ) goto L_006cf85a;
L_006cf82f:; BB(0x006cf82f);
    /* 006cf82f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cf836: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf838: je 0x6cf85a */ if (fZ) goto L_006cf85a;
L_006cf83a:; BB(0x006cf83a);
    /* 006cf83a: mov ecx, edi */ r_ecx = r_edi;
    /* 006cf83c: call 0x6cf87c */ r_esp -= 4; W32(r_esp, 0x6cf841u); f_006cf87c();
    /* 006cf841: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006cf844: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf846: je 0x6cf851 */ if (fZ) goto L_006cf851;
L_006cf848:; BB(0x006cf848);
    /* 006cf848: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf84a: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf84c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf84e: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cf851u); call_ind(t); }
L_006cf851:; BB(0x006cf851);
    /* 006cf851: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 006cf858: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf859: ret  */ FN_RET(0x006cf7c8); r_esp += 4; return;
L_006cf85a:; BB(0x006cf85a);
    /* 006cf85a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf85b: ret  */ FN_RET(0x006cf7c8); r_esp += 4; return;
L_006cf85c:; BB(0x006cf85c);
    /* 006cf85c: mov ecx, edi */ r_ecx = r_edi;
    /* 006cf85e: call 0x6cf87c */ r_esp -= 4; W32(r_esp, 0x6cf863u); f_006cf87c();
    /* 006cf863: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006cf866: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf868: je 0x6cf873 */ if (fZ) goto L_006cf873;
L_006cf86a:; BB(0x006cf86a);
    /* 006cf86a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf86c: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf86e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf870: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cf873u); call_ind(t); }
L_006cf873:; BB(0x006cf873);
    /* 006cf873: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 006cf87a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf87b: ret  */ FN_RET(0x006cf7c8); r_esp += 4; return;
}

void f_006cf87c(void) /* sub_6CF87C */
{
    FN_ENTER(0x006cf87c);
    /* 006cf87c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf87d: mov edi, ecx */ r_edi = r_ecx;
    /* 006cf87f: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006cf882: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf884: je 0x6cf892 */ if (fZ) goto L_006cf892;
L_006cf886:; BB(0x006cf886);
    /* 006cf886: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf88bu); f_007127b0();
    /* 006cf88b: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_006cf892:; BB(0x006cf892);
    /* 006cf892: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 006cf895: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf897: je 0x6cf8a5 */ if (fZ) goto L_006cf8a5;
L_006cf899:; BB(0x006cf899);
    /* 006cf899: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf89eu); f_007127b0();
    /* 006cf89e: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
L_006cf8a5:; BB(0x006cf8a5);
    /* 006cf8a5: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 006cf8a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf8aa: je 0x6cf8b8 */ if (fZ) goto L_006cf8b8;
L_006cf8ac:; BB(0x006cf8ac);
    /* 006cf8ac: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf8b1u); f_007127b0();
    /* 006cf8b1: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_006cf8b8:; BB(0x006cf8b8);
    /* 006cf8b8: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006cf8bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cf8bd: je 0x6cf8cb */ if (fZ) goto L_006cf8cb;
L_006cf8bf:; BB(0x006cf8bf);
    /* 006cf8bf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf8c4u); f_007127b0();
    /* 006cf8c4: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
L_006cf8cb:; BB(0x006cf8cb);
    /* 006cf8cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cf8cc: ret  */ FN_RET(0x006cf87c); r_esp += 4; return;
}

void f_006cf8d0(void) /* sub_6CF8D0 */
{
    FN_ENTER(0x006cf8d0);
    /* 006cf8d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cf8d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cf8d2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cf8d5: mov esi, ecx */ r_esi = r_ecx;
    /* 006cf8d7: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006cf8da: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cf8dc: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cf8dfu); call_ind(t); }
    /* 006cf8df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf8e1: je 0x6cf9ac */ if (fZ) goto L_006cf9ac;
L_006cf8e7:; BB(0x006cf8e7);
    /* 006cf8e7: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 006cf8ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf8ec: je 0x6cf951 */ if (fZ) goto L_006cf951;
L_006cf8ee:; BB(0x006cf8ee);
    /* 006cf8ee: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006cf8f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf8f3: je 0x6cf951 */ if (fZ) goto L_006cf951;
L_006cf8f5:; BB(0x006cf8f5);
    /* 006cf8f5: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6cf8fau); f_00737d90();
    /* 006cf8fa: mov ebx, eax */ r_ebx = r_eax;
    /* 006cf8fc: cmp ebx, dword ptr [esi + 0x50] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x50u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf8ff: jne 0x6cf906 */ if (!fZ) goto L_006cf906;
L_006cf901:; BB(0x006cf901);
    /* 006cf901: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 006cf904: jmp 0x6cf951 */ goto L_006cf951;
L_006cf906:; BB(0x006cf906);
    /* 006cf906: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006cf909: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006cf90b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006cf90e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cf910: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cf912: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006cf914: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 006cf917: push dword ptr [edx + eax + 8] */ { u32 v = R32((u32)(r_edx+r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cf91b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006cf91d: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cf922u); f_006dbde4();
    /* 006cf922: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cf925: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf92a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf92b: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 006cf92e: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6cf933u); f_0073ae38();
    /* 006cf933: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 006cf936: mov dword ptr [esi + 0x50], ebx */ W32((u32)(r_esi+0x50u), r_ebx);
    /* 006cf939: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf93b: je 0x6cf94e */ if (fZ) goto L_006cf94e;
L_006cf93d:; BB(0x006cf93d);
    /* 006cf93d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cf942u); f_007127b0();
    /* 006cf942: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 006cf945: mov dword ptr [esi + 0x44], 0 */ W32((u32)(r_esi+0x44u), 0x0u);
    /* 006cf94c: jmp 0x6cf951 */ goto L_006cf951;
L_006cf94e:; BB(0x006cf94e);
    /* 006cf94e: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
L_006cf951:; BB(0x006cf951);
    /* 006cf951: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf953: je 0x6cf96d */ if (fZ) goto L_006cf96d;
L_006cf955:; BB(0x006cf955);
    /* 006cf955: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cf95c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cf95e: je 0x6cf96d */ if (fZ) goto L_006cf96d;
L_006cf960:; BB(0x006cf960);
    /* 006cf960: mov dword ptr [esi + 0x20], 5 */ W32((u32)(r_esi+0x20u), 0x5u);
    /* 006cf967: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cf96a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cf96b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cf96c: ret  */ FN_RET(0x006cf8d0); r_esp += 4; return;
L_006cf96d:; BB(0x006cf96d);
    /* 006cf96d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf96f: je 0x6cf9ac */ if (fZ) goto L_006cf9ac;
L_006cf971:; BB(0x006cf971);
    /* 006cf971: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cf978: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cf97a: je 0x6cf9ac */ if (fZ) goto L_006cf9ac;
L_006cf97c:; BB(0x006cf97c);
    /* 006cf97c: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6cf981u); f_00737d90();
    /* 006cf981: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cf983: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cf985: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006cf988: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cf98a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cf98c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006cf98e: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 006cf991: mov edx, dword ptr [eax + ebx + 0x14] */ r_edx = R32((u32)(r_eax+r_ebx+0x14u));
    /* 006cf995: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cf998: jne 0x6cfa91 */ if (!fZ) goto L_006cfa91;
L_006cf99e:; BB(0x006cf99e);
    /* 006cf99e: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 006cf9a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf9a3: je 0x6cfa12 */ if (fZ) goto L_006cfa12;
L_006cf9a5:; BB(0x006cf9a5);
    /* 006cf9a5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006cf9a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf9aa: je 0x6cf9b2 */ if (fZ) goto L_006cf9b2;
L_006cf9ac:; BB(0x006cf9ac);
    /* 006cf9ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cf9af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cf9b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cf9b1: ret  */ FN_RET(0x006cf8d0); r_esp += 4; return;
L_006cf9b2:; BB(0x006cf9b2);
    /* 006cf9b2: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006cf9b4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cf9b9u); f_0073ec50();
    /* 006cf9b9: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006cf9bc: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cf9c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cf9c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cf9c2: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6cf9c7u); f_00735884();
    /* 006cf9c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cf9ca: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 006cf9cd: mov ecx, esi */ r_ecx = r_esi;
    /* 006cf9cf: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cf9d4u); f_006dc8d8();
    /* 006cf9d4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006cf9d8: mov ecx, esi */ r_ecx = r_esi;
    /* 006cf9da: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cf9dfu); f_006dc8d8();
    /* 006cf9df: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 006cf9e2: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cf9e5: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006cf9e9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cf9ec: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006cf9f0: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cf9f5u); f_0070f5a4();
    /* 006cf9f5: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006cf9f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cf9fa: je 0x6cfa05 */ if (fZ) goto L_006cfa05;
L_006cf9fc:; BB(0x006cf9fc);
    /* 006cf9fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cf9fe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa00: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cfa02: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cfa05u); call_ind(t); }
L_006cfa05:; BB(0x006cfa05);
    /* 006cfa05: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
    /* 006cfa0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cfa0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cfa10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cfa11: ret  */ FN_RET(0x006cf8d0); r_esp += 4; return;
L_006cfa12:; BB(0x006cfa12);
    /* 006cfa12: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006cfa19: mov dword ptr [esp + 4], 0x43520000 */ W32((u32)(r_esp+0x4u), 0x43520000u);
    /* 006cfa21: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa23: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cfa28u); f_0073ec50();
    /* 006cfa28: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006cfa2c: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006cfa2f: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cfa33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa38: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6cfa3du); f_0073aa40();
    /* 006cfa3d: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 006cfa40: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 006cfa43: push dword ptr [eax + ebx + 0xc] */ { u32 v = R32((u32)(r_eax+r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cfa47: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa49: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cfa4eu); f_006dbde4();
    /* 006cfa4e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cfa51: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa57: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 006cfa5a: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6cfa5fu); f_0073ae38();
    /* 006cfa5f: push 0xc64b2000 */ { u32 v = 0xc64b2000u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa64: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 006cfa67: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6cfa6cu); f_00712624();
    /* 006cfa6c: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 006cfa71: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cfa74: jl 0x6cf9a5 */ if ((fS!=fO)) goto L_006cf9a5;
L_006cfa7a:; BB(0x006cfa7a);
    /* 006cfa7a: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa7f: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfa84: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 006cfa87: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cfa8cu); f_0070f5a4();
    /* 006cfa8c: jmp 0x6cf9a5 */ goto L_006cf9a5;
L_006cfa91:; BB(0x006cfa91);
    /* 006cfa91: mov dword ptr [esi + 0x20], 4 */ W32((u32)(r_esi+0x20u), 0x4u);
    /* 006cfa98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cfa9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cfa9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cfa9d: ret  */ FN_RET(0x006cf8d0); r_esp += 4; return;
}

void f_006cfaa0(void) /* sub_6CFAA0 */
{
    FN_ENTER(0x006cfaa0);
    /* 006cfaa0: mov eax, dword ptr [0xa96154] */ r_eax = R32((u32)(0xa96154u));
    /* 006cfaa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cfaa7: je 0x6cfaba */ if (fZ) goto L_006cfaba;
L_006cfaa9:; BB(0x006cfaa9);
    /* 006cfaa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfaaa: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x6cfaafu); f_005b9bac();
    /* 006cfaaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cfab0: mov dword ptr [0xa96154], 0 */ W32((u32)(0xa96154u), 0x0u);
L_006cfaba:; BB(0x006cfaba);
    /* 006cfaba: ret  */ FN_RET(0x006cfaa0); r_esp += 4; return;
}

void f_006cfabc(void) /* sub_6CFABC */
{
    FN_ENTER(0x006cfabc);
    /* 006cfabc: mov dword ptr [0xa96148], 0x3f800000 */ W32((u32)(0xa96148u), 0x3f800000u);
    /* 006cfac6: mov dword ptr [0xa9614c], 0x41000000 */ W32((u32)(0xa9614cu), 0x41000000u);
    /* 006cfad0: mov dword ptr [0xa96150], 0x3fc00000 */ W32((u32)(0xa96150u), 0x3fc00000u);
    /* 006cfada: ret  */ FN_RET(0x006cfabc); r_esp += 4; return;
}

void f_006cfadc(void) /* sub_6CFADC */
{
    FN_ENTER(0x006cfadc);
    /* 006cfadc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cfadd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cfae0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006cfae2: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 006cfae5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cfae7: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cfaeau); call_ind(t); }
    /* 006cfaea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfaec: jne 0x6cfaf3 */ if (!fZ) goto L_006cfaf3;
L_006cfaee:; BB(0x006cfaee);
    /* 006cfaee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cfaf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cfaf2: ret  */ FN_RET(0x006cfadc); r_esp += 4; return;
L_006cfaf3:; BB(0x006cfaf3);
    /* 006cfaf3: push dword ptr [0xa96154] */ { u32 v = R32((u32)(0xa96154u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cfaf9: call 0x6d2e44 */ r_esp -= 4; W32(r_esp, 0x6cfafeu); f_006d2e44();
    /* 006cfafe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cfaff: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 006cfb02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfb04: je 0x6cfb12 */ if (fZ) goto L_006cfb12;
L_006cfb06:; BB(0x006cfb06);
    /* 006cfb06: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006cfb0d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cfb10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cfb11: ret  */ FN_RET(0x006cfadc); r_esp += 4; return;
L_006cfb12:; BB(0x006cfb12);
    /* 006cfb12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb14: call 0x6dbe50 */ r_esp -= 4; W32(r_esp, 0x6cfb19u); f_006dbe50();
    /* 006cfb19: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006cfb1c: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cfb20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb21: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb24: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6cfb29u); f_0073ff34();
    /* 006cfb29: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cfb2c: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 006cfb2f: call 0x6d2dc0 */ r_esp -= 4; W32(r_esp, 0x6cfb34u); f_006d2dc0();
    /* 006cfb34: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfb37: je 0x6cfc73 */ if (fZ) goto L_006cfc73;
L_006cfb3d:; BB(0x006cfb3d);
    /* 006cfb3d: mov ecx, dword ptr [ebp + 0x54] */ r_ecx = R32((u32)(r_ebp+0x54u));
    /* 006cfb40: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006cfb43: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006cfb45: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfb48: je 0x6cfbcd */ if (fZ) goto L_006cfbcd;
L_006cfb4e:; BB(0x006cfb4e);
    /* 006cfb4e: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006cfb52: mov ebx, edx */ r_ebx = r_edx;
    /* 006cfb54: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006cfb57: mov esi, ecx */ r_esi = r_ecx;
L_006cfb59:; BB(0x006cfb59);
    /* 006cfb59: movsx edx, word ptr [esi + 0x12] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x12u));
    /* 006cfb5d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfb60: je 0x6cfc57 */ if (fZ) goto L_006cfc57;
L_006cfb66:; BB(0x006cfb66);
    /* 006cfb66: movsx eax, word ptr [esi + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x10u));
    /* 006cfb6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb6b: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6cfb70u); f_006bb254();
    /* 006cfb70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cfb71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfb73: je 0x6cfbb8 */ if (fZ) goto L_006cfbb8;
L_006cfb75:; BB(0x006cfb75);
    /* 006cfb75: movsx eax, word ptr [esi + 0x12] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x12u));
    /* 006cfb79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb7a: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6cfb7fu); f_006bb254();
    /* 006cfb7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cfb80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfb82: je 0x6cfb9f */ if (fZ) goto L_006cfb9f;
L_006cfb84:; BB(0x006cfb84);
    /* 006cfb84: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cfb87: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb89: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cfb8eu); f_006dbde4();
    /* 006cfb8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cfb91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb93: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006cfb96: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfb98: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6cfb9du); f_00740084();
    /* 006cfb9d: jmp 0x6cfbb8 */ goto L_006cfbb8;
L_006cfb9f:; BB(0x006cfb9f);
    /* 006cfb9f: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cfba2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfba4: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cfba9u); f_006dbde4();
    /* 006cfba9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cfbac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfbad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfbae: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006cfbb1: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfbb3: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6cfbb8u); f_00740084();
L_006cfbb8:; BB(0x006cfbb8);
    /* 006cfbb8: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006cfbbb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cfbbe: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cfbc1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfbc4: jne 0x6cfb59 */ if (!fZ) goto L_006cfb59;
L_006cfbc6:; BB(0x006cfbc6);
    /* 006cfbc6: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006cfbca: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006cfbcd:; BB(0x006cfbcd);
    /* 006cfbcd: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006cfbd0: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6cfbd5u); f_00737cdc();
    /* 006cfbd5: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 006cfbd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfbda: je 0x6cfc06 */ if (fZ) goto L_006cfc06;
L_006cfbdc:; BB(0x006cfbdc);
    /* 006cfbdc: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 006cfbdf: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cfbe2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfbe4: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cfbe9u); f_006dbde4();
    /* 006cfbe9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cfbec: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfbf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfbf2: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 006cfbf5: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6cfbfau); f_0073ae38();
    /* 006cfbfa: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 006cfc01: jmp 0x6cfb06 */ goto L_006cfb06;
L_006cfc06:; BB(0x006cfc06);
    /* 006cfc06: mov dword ptr [esp + 8], 0x43640000 */ W32((u32)(r_esp+0x8u), 0x43640000u);
    /* 006cfc0e: mov dword ptr [esp + 0xc], 0x43380000 */ W32((u32)(r_esp+0xcu), 0x43380000u);
    /* 006cfc16: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc18: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cfc1du); f_0073ec50();
    /* 006cfc1d: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 006cfc21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc25: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x6cfc2au); f_0073a8dc();
    /* 006cfc2a: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 006cfc2d: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 006cfc30: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cfc33: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc35: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cfc3au); f_006dbde4();
    /* 006cfc3a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cfc3d: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc43: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 006cfc46: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6cfc4bu); f_0073ae38();
    /* 006cfc4b: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 006cfc52: jmp 0x6cfb06 */ goto L_006cfb06;
L_006cfc57:; BB(0x006cfc57);
    /* 006cfc57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc58: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc5a: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cfc5fu); f_006dbde4();
    /* 006cfc5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cfc62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc64: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006cfc67: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc69: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6cfc6eu); f_00740084();
    /* 006cfc6e: jmp 0x6cfbb8 */ goto L_006cfbb8;
L_006cfc73:; BB(0x006cfc73);
    /* 006cfc73: mov ecx, dword ptr [ebp + 0x54] */ r_ecx = R32((u32)(r_ebp+0x54u));
    /* 006cfc76: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006cfc79: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006cfc7b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfc7e: je 0x6cfbcd */ if (fZ) goto L_006cfbcd;
L_006cfc84:; BB(0x006cfc84);
    /* 006cfc84: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006cfc88: mov ebx, edx */ r_ebx = r_edx;
    /* 006cfc8a: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006cfc8d: mov esi, ecx */ r_esi = r_ecx;
L_006cfc8f:; BB(0x006cfc8f);
    /* 006cfc8f: movsx edx, word ptr [esi + 0x12] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x12u));
    /* 006cfc93: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfc96: je 0x6cfcda */ if (fZ) goto L_006cfcda;
L_006cfc98:; BB(0x006cfc98);
    /* 006cfc98: movsx eax, word ptr [esi + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x10u));
    /* 006cfc9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfc9d: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6cfca2u); f_006bb254();
    /* 006cfca2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cfca3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfca5: je 0x6cfcc0 */ if (fZ) goto L_006cfcc0;
L_006cfca7:; BB(0x006cfca7);
    /* 006cfca7: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cfcaa: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfcac: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cfcb1u); f_006dbde4();
    /* 006cfcb1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cfcb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfcb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfcb6: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006cfcb9: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfcbb: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6cfcc0u); f_00740084();
L_006cfcc0:; BB(0x006cfcc0);
    /* 006cfcc0: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006cfcc3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cfcc6: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cfcc9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfccc: jne 0x6cfc8f */ if (!fZ) goto L_006cfc8f;
L_006cfcce:; BB(0x006cfcce);
    /* 006cfcce: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006cfcd2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006cfcd5: jmp 0x6cfbcd */ goto L_006cfbcd;
L_006cfcda:; BB(0x006cfcda);
    /* 006cfcda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfcdb: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfcdd: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6cfce2u); f_006dbde4();
    /* 006cfce2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cfce5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfce7: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006cfcea: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfcec: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6cfcf1u); f_00740084();
    /* 006cfcf1: jmp 0x6cfcc0 */ goto L_006cfcc0;
}

void f_006cfcf4(void) /* sub_6CFCF4 */
{
    FN_ENTER(0x006cfcf4);
    /* 006cfcf4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6cfcf9u); f_006dc358();
    /* 006cfcf9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cfcfc: je 0x6cfd09 */ if (fZ) goto L_006cfd09;
L_006cfcfe:; BB(0x006cfcfe);
    /* 006cfcfe: mov dword ptr [0xa96154], 0 */ W32((u32)(0xa96154u), 0x0u);
    /* 006cfd08: ret  */ FN_RET(0x006cfcf4); r_esp += 4; return;
L_006cfd09:; BB(0x006cfd09);
    /* 006cfd09: ret  */ FN_RET(0x006cfcf4); r_esp += 4; return;
}

void f_006cfd0c(void) /* sub_6CFD0C */
{
    FN_ENTER(0x006cfd0c);
    /* 006cfd0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfd0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cfd0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cfd11: call 0x6cfd30 */ r_esp -= 4; W32(r_esp, 0x6cfd16u); f_006cfd30();
    /* 006cfd16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cfd1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cfd1c: jne 0x6cfd22 */ if (!fZ) goto L_006cfd22;
L_006cfd1e:; BB(0x006cfd1e);
    /* 006cfd1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cfd1f: ret 4 */ FN_RET(0x006cfd0c); r_esp += 8; return;
L_006cfd22:; BB(0x006cfd22);
    /* 006cfd22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfd23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6cfd28u); f_005c2f74();
    /* 006cfd28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cfd29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cfd2a: ret 4 */ FN_RET(0x006cfd0c); r_esp += 8; return;
}

void f_006cfd30(void) /* sub_6CFD30 */
{
    FN_ENTER(0x006cfd30);
    /* 006cfd30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cfd31: mov ebp, esp */ r_ebp = r_esp;
    /* 006cfd33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cfd35: push 0x8edd08 */ { u32 v = 0x8edd08u; r_esp -= 4; W32(r_esp, v); }
    /* 006cfd3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cfd40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cfd41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cfd48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cfd4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cfd4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cfd51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cfd54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cfd57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cfd5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cfd61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cfd64: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006cfd67: mov dword ptr [eax], 0xb3c080 */ W32((u32)(r_eax), 0xb3c080u);
    /* 006cfd6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfd6f: je 0x6cfd80 */ if (fZ) goto L_006cfd80;
L_006cfd71:; BB(0x006cfd71);
    /* 006cfd71: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cfd76u); f_007127b0();
    /* 006cfd76: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cfd79: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006cfd80:; BB(0x006cfd80);
    /* 006cfd80: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006cfd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfd85: je 0x6cfd96 */ if (fZ) goto L_006cfd96;
L_006cfd87:; BB(0x006cfd87);
    /* 006cfd87: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cfd8cu); f_007127b0();
    /* 006cfd8c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cfd8f: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006cfd96:; BB(0x006cfd96);
    /* 006cfd96: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006cfd99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfd9b: je 0x6cfdac */ if (fZ) goto L_006cfdac;
L_006cfd9d:; BB(0x006cfd9d);
    /* 006cfd9d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cfda2u); f_007127b0();
    /* 006cfda2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cfda5: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_006cfdac:; BB(0x006cfdac);
    /* 006cfdac: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006cfdaf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfdb1: je 0x6cfdc2 */ if (fZ) goto L_006cfdc2;
L_006cfdb3:; BB(0x006cfdb3);
    /* 006cfdb3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cfdb8u); f_007127b0();
    /* 006cfdb8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cfdbb: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006cfdc2:; BB(0x006cfdc2);
    /* 006cfdc2: mov dword ptr [0xa96180], 0 */ W32((u32)(0xa96180u), 0x0u);
    /* 006cfdcc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cfdd3: mov ecx, eax */ r_ecx = r_eax;
    /* 006cfdd5: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6cfddau); f_006dc848();
    /* 006cfdda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cfddd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cfde4: mov esp, ebp */ r_esp = r_ebp;
    /* 006cfde6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cfde7: ret  */ FN_RET(0x006cfd30); r_esp += 4; return;
}

void f_006cfde8(void) /* sub_6CFDE8 */
{
    FN_ENTER(0x006cfde8);
    /* 006cfde8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfde9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cfdeb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cfdef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cfdf1: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6cfdf6u); f_006dc898();
    /* 006cfdf6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006cfdfa: mov dword ptr [ebx], 0xb3c080 */ W32((u32)(r_ebx), 0xb3c080u);
    /* 006cfe00: mov eax, dword ptr [0x9cf080] */ r_eax = R32((u32)(0x9cf080u));
    /* 006cfe05: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006cfe08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cfe0a: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 006cfe0d: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 006cfe10: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 006cfe13: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 006cfe16: mov dword ptr [ebx + 0x7c], edx */ W32((u32)(r_ebx+0x7cu), r_edx);
    /* 006cfe19: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 006cfe1c: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 006cfe1f: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 006cfe22: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 006cfe25: mov dword ptr [ebx + 0x78], eax */ W32((u32)(r_ebx+0x78u), r_eax);
    /* 006cfe28: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006cfe2c: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 006cfe2f: lea edx, [ebx + 0x4c] */ r_edx = (u32)(r_ebx+0x4cu);
    /* 006cfe32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cfe34: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006cfe36: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006cfe39: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006cfe3c: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006cfe3f: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006cfe42: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006cfe45: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006cfe48: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006cfe4b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006cfe4e: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006cfe51: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006cfe54: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006cfe58: mov dword ptr [0xa96180], ebx */ W32((u32)(0xa96180u), r_ebx);
    /* 006cfe5e: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 006cfe65: mov dword ptr [ebx + 0x80], edx */ W32((u32)(r_ebx+0x80u), r_edx);
    /* 006cfe6b: mov eax, ebx */ r_eax = r_ebx;
    /* 006cfe6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cfe6e: ret 0x10 */ FN_RET(0x006cfde8); r_esp += 20; return;
}

void f_006cfe74(void) /* sub_6CFE74 */
{
    FN_ENTER(0x006cfe74);
    /* 006cfe74: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006cfe77: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cfe7a: ja 0x6cfed7 */ if ((!fC&&!fZ)) goto L_006cfed7;
L_006cfe7c:; BB(0x006cfe7c);
    /* 006cfe7c: mov eax, dword ptr [eax*4 + 0x96bea0] */ r_eax = R32((u32)(r_eax*4+0x96bea0u));
    /* 006cfe83: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfe74); r_esp += 4; return;
}

void f_006cfe85(void)
{
    FN_ENTER(0x006cfe85);
    /* 006cfe85: call 0x6d05e8 */ r_esp -= 4; W32(r_esp, 0x6cfe8au); f_006d05e8();
    /* 006cfe8a: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfe85); r_esp += 4; return;
}

void f_006cfe8c(void)
{
    FN_ENTER(0x006cfe8c);
    /* 006cfe8c: call 0x6cfed8 */ r_esp -= 4; W32(r_esp, 0x6cfe91u); f_006cfed8();
    /* 006cfe91: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfe8c); r_esp += 4; return;
}

void f_006cfe93(void)
{
    FN_ENTER(0x006cfe93);
    /* 006cfe93: call 0x6cfef4 */ r_esp -= 4; W32(r_esp, 0x6cfe98u); f_006cfef4();
    /* 006cfe98: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfe93); r_esp += 4; return;
}

void f_006cfe9a(void)
{
    FN_ENTER(0x006cfe9a);
    /* 006cfe9a: call 0x6cff10 */ r_esp -= 4; W32(r_esp, 0x6cfe9fu); f_006cff10();
    /* 006cfe9f: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfe9a); r_esp += 4; return;
}

void f_006cfea1(void)
{
    FN_ENTER(0x006cfea1);
    /* 006cfea1: call 0x6d0158 */ r_esp -= 4; W32(r_esp, 0x6cfea6u); f_006d0158();
    /* 006cfea6: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfea1); r_esp += 4; return;
}

void f_006cfea8(void)
{
    FN_ENTER(0x006cfea8);
    /* 006cfea8: call 0x6d0174 */ r_esp -= 4; W32(r_esp, 0x6cfeadu); f_006d0174();
    /* 006cfead: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfea8); r_esp += 4; return;
}

void f_006cfeaf(void)
{
    FN_ENTER(0x006cfeaf);
    /* 006cfeaf: call 0x6d01cc */ r_esp -= 4; W32(r_esp, 0x6cfeb4u); f_006d01cc();
    /* 006cfeb4: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfeaf); r_esp += 4; return;
}

void f_006cfeb6(void)
{
    FN_ENTER(0x006cfeb6);
    /* 006cfeb6: call 0x4393f4 */ r_esp -= 4; W32(r_esp, 0x6cfebbu); f_004393f4();
    /* 006cfebb: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfeb6); r_esp += 4; return;
}

void f_006cfebd(void)
{
    FN_ENTER(0x006cfebd);
    /* 006cfebd: call 0x6d01f4 */ r_esp -= 4; W32(r_esp, 0x6cfec2u); f_006d01f4();
    /* 006cfec2: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfebd); r_esp += 4; return;
}

void f_006cfec4(void)
{
    FN_ENTER(0x006cfec4);
    /* 006cfec4: call 0x6d0604 */ r_esp -= 4; W32(r_esp, 0x6cfec9u); f_006d0604();
    /* 006cfec9: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfec4); r_esp += 4; return;
}

void f_006cfecb(void)
{
    FN_ENTER(0x006cfecb);
    /* 006cfecb: call 0x6d0698 */ r_esp -= 4; W32(r_esp, 0x6cfed0u); f_006d0698();
    /* 006cfed0: jmp 0x6cfed7 */ goto L_006cfed7;
L_006cfed7:; BB(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfecb); r_esp += 4; return;
}

void f_006cfed2(void)
{
    FN_ENTER(0x006cfed2);
    /* 006cfed2: call 0x6d086c */ r_esp -= 4; W32(r_esp, 0x6cfed7u); f_006d086c();
    /* 006cfed7: ret  */ FN_RET(0x006cfed2); r_esp += 4; return;
}

void f_006cfed7(void)
{
    FN_ENTER(0x006cfed7);
    /* 006cfed7: ret  */ FN_RET(0x006cfed7); r_esp += 4; return;
}

void f_006cfed8(void) /* sub_6CFED8 */
{
    FN_ENTER(0x006cfed8);
    /* 006cfed8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfed9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cfedb: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 006cfede: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfee0: je 0x6cfee4 */ if (fZ) goto L_006cfee4;
L_006cfee2:; BB(0x006cfee2);
    /* 006cfee2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6cfee4u); call_ind(t); }
L_006cfee4:; BB(0x006cfee4);
    /* 006cfee4: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006cfee8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cfeed: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006cfef1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cfef2: ret  */ FN_RET(0x006cfed8); r_esp += 4; return;
}

void f_006cfef4(void) /* sub_6CFEF4 */
{
    FN_ENTER(0x006cfef4);
    /* 006cfef4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cfef5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cfef7: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 006cfefa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cfefc: je 0x6cff00 */ if (fZ) goto L_006cff00;
L_006cfefe:; BB(0x006cfefe);
    /* 006cfefe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6cff00u); call_ind(t); }
L_006cff00:; BB(0x006cff00);
    /* 006cff00: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006cff04: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cff09: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006cff0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cff0e: ret  */ FN_RET(0x006cfef4); r_esp += 4; return;
}

void f_006cff10(void) /* sub_6CFF10 */
{
    FN_ENTER(0x006cff10);
    /* 006cff10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cff11: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006cff13: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006cff16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cff18: je 0x6cff80 */ if (fZ) goto L_006cff80;
L_006cff1a:; BB(0x006cff1a);
    /* 006cff1a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cff21: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cff23: je 0x6cff80 */ if (fZ) goto L_006cff80;
L_006cff25:; BB(0x006cff25);
    /* 006cff25: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6cff2au); f_007365f4();
    /* 006cff2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cff2c: je 0x6cff3c */ if (fZ) goto L_006cff3c;
L_006cff2e:; BB(0x006cff2e);
    /* 006cff2e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cff31: je 0x6cfffa */ if (fZ) goto L_006cfffa;
L_006cff37:; BB(0x006cff37);
    /* 006cff37: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006cff3a: jmp 0x6cff80 */ goto L_006cff80;
L_006cff3c:; BB(0x006cff3c);
    /* 006cff3c: call 0x6cba04 */ r_esp -= 4; W32(r_esp, 0x6cff41u); f_006cba04();
    /* 006cff41: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cff44: je 0x6d0068 */ if (fZ) goto L_006d0068;
L_006cff4a:; BB(0x006cff4a);
    /* 006cff4a: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006cff4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cff4f: je 0x6cff5a */ if (fZ) goto L_006cff5a;
L_006cff51:; BB(0x006cff51);
    /* 006cff51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cff53: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006cff55: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cff57: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cff5au); call_ind(t); }
L_006cff5a:; BB(0x006cff5a);
    /* 006cff5a: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006cff5d: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006cff64: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006cff69: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006cff6c: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006cff73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cff75: je 0x6cff7e */ if (fZ) goto L_006cff7e;
L_006cff77:; BB(0x006cff77);
    /* 006cff77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cff79: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6cff7eu); f_00760acc();
L_006cff7e:; BB(0x006cff7e);
    /* 006cff7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cff7f: ret  */ FN_RET(0x006cff10); r_esp += 4; return;
L_006cff80:; BB(0x006cff80);
    /* 006cff80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cff82: je 0x6cff7e */ if (fZ) goto L_006cff7e;
L_006cff84:; BB(0x006cff84);
    /* 006cff84: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cff8b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cff8d: je 0x6cff7e */ if (fZ) goto L_006cff7e;
L_006cff8f:; BB(0x006cff8f);
    /* 006cff8f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cff94u); f_007127b0();
    /* 006cff94: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 006cff97: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006cff9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cffa0: je 0x6cffae */ if (fZ) goto L_006cffae;
L_006cffa2:; BB(0x006cffa2);
    /* 006cffa2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cffa7u); f_007127b0();
    /* 006cffa7: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006cffae:; BB(0x006cffae);
    /* 006cffae: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006cffb1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cffb3: je 0x6cffd6 */ if (fZ) goto L_006cffd6;
L_006cffb5:; BB(0x006cffb5);
    /* 006cffb5: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006cffbc: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006cffc1: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006cffc4: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006cffcb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cffcd: je 0x6cffd6 */ if (fZ) goto L_006cffd6;
L_006cffcf:; BB(0x006cffcf);
    /* 006cffcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cffd1: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6cffd6u); f_00760acc();
L_006cffd6:; BB(0x006cffd6);
    /* 006cffd6: add dword ptr [ebp + 0x78], -1 */ { u32 ad = (u32)(r_ebp+0x78u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006cffda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cffdc: call 0x6d0104 */ r_esp -= 4; W32(r_esp, 0x6cffe1u); f_006d0104();
    /* 006cffe1: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006cffe4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cffe6: je 0x6cfff1 */ if (fZ) goto L_006cfff1;
L_006cffe8:; BB(0x006cffe8);
    /* 006cffe8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cffea: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006cffec: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cffee: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cfff1u); call_ind(t); }
L_006cfff1:; BB(0x006cfff1);
    /* 006cfff1: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006cfff8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cfff9: ret  */ FN_RET(0x006cff10); r_esp += 4; return;
L_006cfffa:; BB(0x006cfffa);
    /* 006cfffa: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006cfffd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d0002u); f_007127b0();
    /* 006d0002: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 006d0005: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006d000c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d000e: je 0x6d001c */ if (fZ) goto L_006d001c;
L_006d0010:; BB(0x006d0010);
    /* 006d0010: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d0015u); f_007127b0();
    /* 006d0015: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006d001c:; BB(0x006d001c);
    /* 006d001c: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d001f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d0021: je 0x6d0044 */ if (fZ) goto L_006d0044;
L_006d0023:; BB(0x006d0023);
    /* 006d0023: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d002a: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d002f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d0032: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d0039: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d003b: je 0x6d0044 */ if (fZ) goto L_006d0044;
L_006d003d:; BB(0x006d003d);
    /* 006d003d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d003f: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d0044u); f_00760acc();
L_006d0044:; BB(0x006d0044);
    /* 006d0044: add dword ptr [ebp + 0x78], -1 */ { u32 ad = (u32)(r_ebp+0x78u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006d0048: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d004a: call 0x6d0104 */ r_esp -= 4; W32(r_esp, 0x6d004fu); f_006d0104();
    /* 006d004f: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d0052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d0054: je 0x6d005f */ if (fZ) goto L_006d005f;
L_006d0056:; BB(0x006d0056);
    /* 006d0056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0058: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d005a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d005c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d005fu); call_ind(t); }
L_006d005f:; BB(0x006d005f);
    /* 006d005f: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006d0066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0067: ret  */ FN_RET(0x006cff10); r_esp += 4; return;
L_006d0068:; BB(0x006d0068);
    /* 006d0068: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 006d006b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d006d: je 0x6d0078 */ if (fZ) goto L_006d0078;
L_006d006f:; BB(0x006d006f);
    /* 006d006f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0071: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006d0073: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d0075: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d0078u); call_ind(t); }
L_006d0078:; BB(0x006d0078);
    /* 006d0078: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006d007e: lea edx, [ebp + 0x4c] */ r_edx = (u32)(r_ebp+0x4cu);
    /* 006d0081: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 006d0086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d0088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d008a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d008b: call 0x7d3d08 */ r_esp -= 4; W32(r_esp, 0x6d0090u); f_007d3d08();
    /* 006d0090: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006d0093: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d0097: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d009c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00a0: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006d00a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00a5: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 006d00ac: je 0x6d00c2 */ if (fZ) goto L_006d00c2;
L_006d00ae:; BB(0x006d00ae);
    /* 006d00ae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00b2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00b7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00bb: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_006d00c2:; BB(0x006d00c2);
    /* 006d00c2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006d00c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d00c7: je 0x6d00dd */ if (fZ) goto L_006d00dd;
L_006d00c9:; BB(0x006d00c9);
    /* 006d00c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d00d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00d6: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
L_006d00dd:; BB(0x006d00dd);
    /* 006d00dd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006d00e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00e2: je 0x6d00f8 */ if (fZ) goto L_006d00f8;
L_006d00e4:; BB(0x006d00e4);
    /* 006d00e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d00e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d00ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d00f1: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_006d00f8:; BB(0x006d00f8);
    /* 006d00f8: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 006d00ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d0100: ret  */ FN_RET(0x006cff10); r_esp += 4; return;
}

