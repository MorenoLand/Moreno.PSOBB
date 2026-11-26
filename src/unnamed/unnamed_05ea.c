#include "protos.h"

void f_005ea000(void) /* sub_5EA000 */
{
    FN_ENTER(0x005ea000);
    /* 005ea000: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 005ea003: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea006: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005ea009: ret  */ FN_RET(0x005ea000); r_esp += 4; return;
}

void f_005ea00c(void) /* sub_5EA00C */
{
    FN_ENTER(0x005ea00c);
    /* 005ea00c: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea011: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ea016u); f_008581c5();
    /* 005ea016: mov dword ptr [0xa8dcf0], eax */ W32((u32)(0xa8dcf0u), r_eax);
    /* 005ea01b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea01d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ea022u); f_008581c5();
    /* 005ea022: mov dword ptr [0xa8dcf4], eax */ W32((u32)(0xa8dcf4u), r_eax);
    /* 005ea027: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ea029: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005ea02b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005ea02e: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005ea031: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005ea034: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 005ea037: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 005ea03a: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005ea03d: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 005ea040: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 005ea043: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 005ea046: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 005ea049: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005ea04c: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005ea04f: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 005ea052: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005ea055: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005ea058: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ea05b: ret  */ FN_RET(0x005ea00c); r_esp += 4; return;
}

void f_005ea05c(void) /* sub_5EA05C */
{
    FN_ENTER(0x005ea05c);
    /* 005ea05c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea05d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ea05f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ea061: call 0x5ea080 */ r_esp -= 4; W32(r_esp, 0x5ea066u); f_005ea080();
    /* 005ea066: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ea06a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea06c: jne 0x5ea072 */ if (!fZ) goto L_005ea072;
L_005ea06e:; BB(0x005ea06e);
    /* 005ea06e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea06f: ret 4 */ FN_RET(0x005ea05c); r_esp += 8; return;
L_005ea072:; BB(0x005ea072);
    /* 005ea072: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea073: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ea078u); f_005c2f74();
    /* 005ea078: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea079: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea07a: ret 4 */ FN_RET(0x005ea05c); r_esp += 8; return;
}

void f_005ea080(void) /* sub_5EA080 */
{
    FN_ENTER(0x005ea080);
    /* 005ea080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea081: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea083: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea085: push 0x8dbc68 */ { u32 v = 0x8dbc68u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea08a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea091: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea098: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea09b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea09e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea0a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea0a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea0a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ea0aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea0ad: mov dword ptr [ecx], 0xb103a0 */ W32((u32)(r_ecx), 0xb103a0u);
    /* 005ea0b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ea0ba: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ea0bfu); f_005e61c8();
    /* 005ea0bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea0c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea0c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea0cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea0cc: ret  */ FN_RET(0x005ea080); r_esp += 4; return;
}

void f_005ea0d0(void) /* sub_5EA0D0 */
{
    FN_ENTER(0x005ea0d0);
    /* 005ea0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea0d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0d5: push 0x8dbc90 */ { u32 v = 0x8dbc90u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea0e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea0eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea0ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea0f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea0f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea0f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea0fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea0fc: je 0x5ea153 */ if (fZ) goto L_005ea153;
L_005ea0fe:; BB(0x005ea0fe);
    /* 005ea0fe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ea105: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea10a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ea10fu); f_005caba4();
    /* 005ea10f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea110: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ea113: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea115: je 0x5ea14f */ if (fZ) goto L_005ea14f;
L_005ea117:; BB(0x005ea117);
    /* 005ea117: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ea11e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea125: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea128: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea12b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea12c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea132: call 0x5ea164 */ r_esp -= 4; W32(r_esp, 0x5ea137u); f_005ea164();
    /* 005ea137: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea13a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ea141:; BB(0x005ea141);
    /* 005ea141: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea144: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea14b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea14d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea14e: ret  */ FN_RET(0x005ea0d0); r_esp += 4; return;
L_005ea14f:; BB(0x005ea14f);
    /* 005ea14f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea151: jmp 0x5ea141 */ goto L_005ea141;
L_005ea153:; BB(0x005ea153);
    /* 005ea153: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea155: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea158: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea15f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea161: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea162: ret  */ FN_RET(0x005ea0d0); r_esp += 4; return;
}

void f_005ea164(void) /* sub_5EA164 */
{
    FN_ENTER(0x005ea164);
    /* 005ea164: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea165: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ea167: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea16b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea16f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ea171: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ea176u); f_005e959c();
    /* 005ea176: mov dword ptr [ebp], 0xb103a0 */ W32((u32)(r_ebp), 0xb103a0u);
    /* 005ea17d: mov eax, ebp */ r_eax = r_ebp;
    /* 005ea17f: mov dword ptr [ebp + 0x238], 0x5e4884 */ W32((u32)(r_ebp+0x238u), 0x5e4884u);
    /* 005ea189: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea18a: ret 8 */ FN_RET(0x005ea164); r_esp += 12; return;
}

void f_005ea190(void) /* sub_5EA190 */
{
    FN_ENTER(0x005ea190);
    /* 005ea190: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea191: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ea193: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ea195: call 0x5ea1b4 */ r_esp -= 4; W32(r_esp, 0x5ea19au); f_005ea1b4();
    /* 005ea19a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ea19e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea1a0: jne 0x5ea1a6 */ if (!fZ) goto L_005ea1a6;
L_005ea1a2:; BB(0x005ea1a2);
    /* 005ea1a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea1a3: ret 4 */ FN_RET(0x005ea190); r_esp += 8; return;
L_005ea1a6:; BB(0x005ea1a6);
    /* 005ea1a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea1a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ea1acu); f_005c2f74();
    /* 005ea1ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea1ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea1ae: ret 4 */ FN_RET(0x005ea190); r_esp += 8; return;
}

void f_005ea1b4(void) /* sub_5EA1B4 */
{
    FN_ENTER(0x005ea1b4);
    /* 005ea1b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea1b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea1b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea1b9: push 0x8dbcac */ { u32 v = 0x8dbcacu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea1be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea1c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea1c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea1cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea1cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea1d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea1d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea1d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea1db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ea1de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea1e1: mov dword ptr [ecx], 0xb10500 */ W32((u32)(r_ecx), 0xb10500u);
    /* 005ea1e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ea1ee: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ea1f3u); f_005e61c8();
    /* 005ea1f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea1f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea1fd: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea1ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea200: ret  */ FN_RET(0x005ea1b4); r_esp += 4; return;
}

void f_005ea204(void) /* sub_5EA204 */
{
    FN_ENTER(0x005ea204);
    /* 005ea204: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea205: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea208: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ea20a: movzx eax, byte ptr [ebp + 0xf3] */ r_eax = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005ea211: cmp eax, 0x42 */ {  u32 a = r_eax; u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea214: jl 0x5ea259 */ if ((fS!=fO)) goto L_005ea259;
L_005ea216:; BB(0x005ea216);
    /* 005ea216: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea219: jg 0x5ea259 */ if ((!fZ&&fS==fO)) goto L_005ea259;
L_005ea21b:; BB(0x005ea21b);
    /* 005ea21b: movzx eax, byte ptr [ebp + 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+0xf4u));
    /* 005ea222: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea225: jne 0x5ea259 */ if (!fZ) goto L_005ea259;
L_005ea227:; BB(0x005ea227);
    /* 005ea227: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ea22a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea22b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ea22d: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5ea232u); f_005e7534();
    /* 005ea232: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea234: je 0x5ea259 */ if (fZ) goto L_005ea259;
L_005ea236:; BB(0x005ea236);
    /* 005ea236: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005ea239: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea23b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005ea23e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ea240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea241: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea242: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea243: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ea245: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5ea24bu); call_ind(t); }
    /* 005ea24b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ea24e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea251: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ea256u); f_0050b510();
    /* 005ea256: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ea259:; BB(0x005ea259);
    /* 005ea259: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ea25c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea25d: ret  */ FN_RET(0x005ea204); r_esp += 4; return;
}

void f_005ea260(void) /* sub_5EA260 */
{
    FN_ENTER(0x005ea260);
    /* 005ea260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea261: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea263: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea265: push 0x8dbcd4 */ { u32 v = 0x8dbcd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea26a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea271: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea278: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea27b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea27e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea281: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea284: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea287: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea28a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea28c: je 0x5ea2e3 */ if (fZ) goto L_005ea2e3;
L_005ea28e:; BB(0x005ea28e);
    /* 005ea28e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ea295: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea29a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ea29fu); f_005caba4();
    /* 005ea29f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea2a0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ea2a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea2a5: je 0x5ea2df */ if (fZ) goto L_005ea2df;
L_005ea2a7:; BB(0x005ea2a7);
    /* 005ea2a7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ea2ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea2b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea2b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea2bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2bc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea2c2: call 0x5ea2f4 */ r_esp -= 4; W32(r_esp, 0x5ea2c7u); f_005ea2f4();
    /* 005ea2c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea2ca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ea2d1:; BB(0x005ea2d1);
    /* 005ea2d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea2d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea2db: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea2dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea2de: ret  */ FN_RET(0x005ea260); r_esp += 4; return;
L_005ea2df:; BB(0x005ea2df);
    /* 005ea2df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea2e1: jmp 0x5ea2d1 */ goto L_005ea2d1;
L_005ea2e3:; BB(0x005ea2e3);
    /* 005ea2e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea2e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea2e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea2ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea2f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea2f2: ret  */ FN_RET(0x005ea260); r_esp += 4; return;
}

void f_005ea2f4(void) /* sub_5EA2F4 */
{
    FN_ENTER(0x005ea2f4);
    /* 005ea2f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2f5: mov edi, ecx */ r_edi = r_ecx;
    /* 005ea2f7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea2fb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea2ff: mov ecx, edi */ r_ecx = r_edi;
    /* 005ea301: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ea306u); f_005e959c();
    /* 005ea306: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005ea30d: mov dword ptr [edi], 0xb10500 */ W32((u32)(r_edi), 0xb10500u);
    /* 005ea313: cmp eax, 0x42 */ {  u32 a = r_eax; u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ea316: mov dword ptr [edi + 0x234], 0x5cf288 */ W32((u32)(r_edi+0x234u), 0x5cf288u);
    /* 005ea320: jl 0x5ea349 */ if ((fS!=fO)) goto L_005ea349;
L_005ea322:; BB(0x005ea322);
    /* 005ea322: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ea325: jg 0x5ea349 */ if ((!fZ&&fS==fO)) goto L_005ea349;
L_005ea327:; BB(0x005ea327);
    /* 005ea327: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005ea32e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ea331: jne 0x5ea349 */ if (!fZ) goto L_005ea349;
L_005ea333:; BB(0x005ea333);
    /* 005ea333: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005ea339: mov byte ptr [edi + 0x1f4], 3 */ W8((u32)(r_edi+0x1f4u), 0x3u);
    /* 005ea340: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea343: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
L_005ea349:; BB(0x005ea349);
    /* 005ea349: mov eax, edi */ r_eax = r_edi;
    /* 005ea34b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ea34c: ret 8 */ FN_RET(0x005ea2f4); r_esp += 12; return;
}

void f_005ea350(void) /* sub_5EA350 */
{
    FN_ENTER(0x005ea350);
    /* 005ea350: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea351: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ea353: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ea355: call 0x5ea374 */ r_esp -= 4; W32(r_esp, 0x5ea35au); f_005ea374();
    /* 005ea35a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ea35e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea360: jne 0x5ea366 */ if (!fZ) goto L_005ea366;
L_005ea362:; BB(0x005ea362);
    /* 005ea362: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea363: ret 4 */ FN_RET(0x005ea350); r_esp += 8; return;
L_005ea366:; BB(0x005ea366);
    /* 005ea366: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea367: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ea36cu); f_005c2f74();
    /* 005ea36c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea36d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea36e: ret 4 */ FN_RET(0x005ea350); r_esp += 8; return;
}

void f_005ea374(void) /* sub_5EA374 */
{
    FN_ENTER(0x005ea374);
    /* 005ea374: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea375: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea377: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea379: push 0x8dbcf0 */ { u32 v = 0x8dbcf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea37e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea385: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea38c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea38f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea392: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea395: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea398: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea39b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ea39e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea3a1: mov dword ptr [ecx], 0xb10660 */ W32((u32)(r_ecx), 0xb10660u);
    /* 005ea3a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ea3ae: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ea3b3u); f_005e61c8();
    /* 005ea3b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea3b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea3bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea3bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea3c0: ret  */ FN_RET(0x005ea374); r_esp += 4; return;
}

void f_005ea3c4(void) /* sub_5EA3C4 */
{
    FN_ENTER(0x005ea3c4);
    /* 005ea3c4: mov edx, ecx */ r_edx = r_ecx;
    /* 005ea3c6: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ea3cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ea3ce: jne 0x5ea3dd */ if (!fZ) goto L_005ea3dd;
L_005ea3d0:; BB(0x005ea3d0);
    /* 005ea3d0: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005ea3d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea3d8: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5ea3ddu); f_00830c04();
L_005ea3dd:; BB(0x005ea3dd);
    /* 005ea3dd: ret  */ FN_RET(0x005ea3c4); r_esp += 4; return;
}

void f_005ea3e0(void) /* sub_5EA3E0 */
{
    FN_ENTER(0x005ea3e0);
    /* 005ea3e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea3e2: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea3e8: push 0xffffee39 */ { u32 v = 0xffffee39u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea3ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea3ee: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5ea3f3u); f_005dd6f8();
    /* 005ea3f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ea3f6: ret  */ FN_RET(0x005ea3e0); r_esp += 4; return;
}

void f_005ea3f8(void) /* sub_5EA3F8 */
{
    FN_ENTER(0x005ea3f8);
    /* 005ea3f8: push 0x3555 */ { u32 v = 0x3555u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea3fd: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea403: push 0x71c */ { u32 v = 0x71cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea408: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea409: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5ea40eu); f_005dd6f8();
    /* 005ea40e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ea411: ret  */ FN_RET(0x005ea3f8); r_esp += 4; return;
}

void f_005ea414(void) /* sub_5EA414 */
{
    FN_ENTER(0x005ea414);
    /* 005ea414: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea417: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ea41a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea41b: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005ea421: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea423: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ea425: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5ea42bu); call_ind(t); }
    /* 005ea42b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ea42e: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea433: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea434: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ea439u); f_0050b510();
    /* 005ea439: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ea43c: ret  */ FN_RET(0x005ea414); r_esp += 4; return;
}

void f_005ea440(void) /* sub_5EA440 */
{
    FN_ENTER(0x005ea440);
    /* 005ea440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea441: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea445: push 0x8dbd18 */ { u32 v = 0x8dbd18u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea44a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea451: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea458: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea45b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea45e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea461: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea464: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea467: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea46a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea46c: je 0x5ea4c3 */ if (fZ) goto L_005ea4c3;
L_005ea46e:; BB(0x005ea46e);
    /* 005ea46e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ea475: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea47a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ea47fu); f_005caba4();
    /* 005ea47f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea480: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ea483: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea485: je 0x5ea4bf */ if (fZ) goto L_005ea4bf;
L_005ea487:; BB(0x005ea487);
    /* 005ea487: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ea48e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea495: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea498: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea49b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea49c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea4a2: call 0x5ea4d4 */ r_esp -= 4; W32(r_esp, 0x5ea4a7u); f_005ea4d4();
    /* 005ea4a7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea4aa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ea4b1:; BB(0x005ea4b1);
    /* 005ea4b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea4b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea4bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea4bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea4be: ret  */ FN_RET(0x005ea440); r_esp += 4; return;
L_005ea4bf:; BB(0x005ea4bf);
    /* 005ea4bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea4c1: jmp 0x5ea4b1 */ goto L_005ea4b1;
L_005ea4c3:; BB(0x005ea4c3);
    /* 005ea4c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea4c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea4c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea4cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea4d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea4d2: ret  */ FN_RET(0x005ea440); r_esp += 4; return;
}

void f_005ea4d4(void) /* sub_5EA4D4 */
{
    FN_ENTER(0x005ea4d4);
    /* 005ea4d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea4d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ea4d7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea4db: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea4df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ea4e1: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ea4e6u); f_005e959c();
    /* 005ea4e6: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005ea4ec: mov dword ptr [ebx], 0xb10660 */ W32((u32)(r_ebx), 0xb10660u);
    /* 005ea4f2: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea4f5: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005ea4fb: mov dword ptr [ebx + 0x240], 0x3555 */ W32((u32)(r_ebx+0x240u), 0x3555u);
    /* 005ea505: mov eax, ebx */ r_eax = r_ebx;
    /* 005ea507: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea508: ret 8 */ FN_RET(0x005ea4d4); r_esp += 12; return;
}

void f_005ea50c(void) /* sub_5EA50C */
{
    FN_ENTER(0x005ea50c);
    /* 005ea50c: mov dword ptr [0xa8dcfc], 0x3f800000 */ W32((u32)(0xa8dcfcu), 0x3f800000u);
    /* 005ea516: mov dword ptr [0xa8dd00], 0x41000000 */ W32((u32)(0xa8dd00u), 0x41000000u);
    /* 005ea520: mov dword ptr [0xa8dd04], 0x3fc00000 */ W32((u32)(0xa8dd04u), 0x3fc00000u);
    /* 005ea52a: ret  */ FN_RET(0x005ea50c); r_esp += 4; return;
}

void f_005ea52c(void) /* sub_5EA52C */
{
    FN_ENTER(0x005ea52c);
    /* 005ea52c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea52d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ea52f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ea531: call 0x5ea550 */ r_esp -= 4; W32(r_esp, 0x5ea536u); f_005ea550();
    /* 005ea536: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ea53a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea53c: jne 0x5ea542 */ if (!fZ) goto L_005ea542;
L_005ea53e:; BB(0x005ea53e);
    /* 005ea53e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea53f: ret 4 */ FN_RET(0x005ea52c); r_esp += 8; return;
L_005ea542:; BB(0x005ea542);
    /* 005ea542: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea543: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ea548u); f_005c2f74();
    /* 005ea548: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea549: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea54a: ret 4 */ FN_RET(0x005ea52c); r_esp += 8; return;
}

void f_005ea550(void) /* sub_5EA550 */
{
    FN_ENTER(0x005ea550);
    /* 005ea550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea551: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea553: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea555: push 0x8dbd34 */ { u32 v = 0x8dbd34u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea55a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea560: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea561: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea568: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea56b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea56e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea571: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea574: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea577: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ea57a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea57d: mov dword ptr [ecx], 0xb107e0 */ W32((u32)(r_ecx), 0xb107e0u);
    /* 005ea583: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ea58a: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ea58fu); f_005e61c8();
    /* 005ea58f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea592: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea599: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea59b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea59c: ret  */ FN_RET(0x005ea550); r_esp += 4; return;
}

void f_005ea5a0(void) /* sub_5EA5A0 */
{
    FN_ENTER(0x005ea5a0);
    /* 005ea5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5a1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea5a4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ea5a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ea5a8: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ea5adu); f_005e90b0();
    /* 005ea5ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea5af: je 0x5ea5cf */ if (fZ) goto L_005ea5cf;
L_005ea5b1:; BB(0x005ea5b1);
    /* 005ea5b1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ea5b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5b5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ea5b9: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ea5beu); f_005e83c8();
    /* 005ea5be: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ea5c1: push 0x1be */ { u32 v = 0x1beu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5c7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ea5ccu); f_0050b510();
    /* 005ea5cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ea5cf:; BB(0x005ea5cf);
    /* 005ea5cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ea5d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea5d3: ret  */ FN_RET(0x005ea5a0); r_esp += 4; return;
}

void f_005ea5d4(void) /* sub_5EA5D4 */
{
    FN_ENTER(0x005ea5d4);
    /* 005ea5d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea5d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5d9: push 0x8dbd5c */ { u32 v = 0x8dbd5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea5e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea5ec: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea5ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea5f2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005ea5f5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005ea5f8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005ea5fb: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005ea601: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ea604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea606: je 0x5ea65b */ if (fZ) goto L_005ea65b;
L_005ea608:; BB(0x005ea608);
    /* 005ea608: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005ea60f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea611: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ea616u); f_005caba4();
    /* 005ea616: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ea619: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea61c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ea61f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea621: je 0x5ea65b */ if (fZ) goto L_005ea65b;
L_005ea623:; BB(0x005ea623);
    /* 005ea623: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005ea62a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea631: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea634: mov ecx, eax */ r_ecx = r_eax;
    /* 005ea636: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005ea638: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005ea63f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea640: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea646: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5ea64bu); f_005e5cac();
    /* 005ea64b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ea64e: mov dword ptr [eax], 0xb0f2d8 */ W32((u32)(r_eax), 0xb0f2d8u);
    /* 005ea654: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005ea65b:; BB(0x005ea65b);
    /* 005ea65b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea65e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea665: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea667: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea668: ret  */ FN_RET(0x005ea5d4); r_esp += 4; return;
}

void f_005ea66c(void) /* sub_5EA66C */
{
    FN_ENTER(0x005ea66c);
    /* 005ea66c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea66d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea66f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea671: push 0x8dbd84 */ { u32 v = 0x8dbd84u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea676: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea67c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea67d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea684: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea687: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea68a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea68d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea690: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea693: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea696: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea698: je 0x5ea6ef */ if (fZ) goto L_005ea6ef;
L_005ea69a:; BB(0x005ea69a);
    /* 005ea69a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ea6a1: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6a6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ea6abu); f_005caba4();
    /* 005ea6ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea6ac: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ea6af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea6b1: je 0x5ea6eb */ if (fZ) goto L_005ea6eb;
L_005ea6b3:; BB(0x005ea6b3);
    /* 005ea6b3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ea6ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea6c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea6c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea6c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6c8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea6ce: call 0x5ea700 */ r_esp -= 4; W32(r_esp, 0x5ea6d3u); f_005ea700();
    /* 005ea6d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea6d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ea6dd:; BB(0x005ea6dd);
    /* 005ea6dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea6e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea6e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea6e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea6ea: ret  */ FN_RET(0x005ea66c); r_esp += 4; return;
L_005ea6eb:; BB(0x005ea6eb);
    /* 005ea6eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea6ed: jmp 0x5ea6dd */ goto L_005ea6dd;
L_005ea6ef:; BB(0x005ea6ef);
    /* 005ea6ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea6f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea6f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea6fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea6fe: ret  */ FN_RET(0x005ea66c); r_esp += 4; return;
}

void f_005ea700(void) /* sub_5EA700 */
{
    FN_ENTER(0x005ea700);
    /* 005ea700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea701: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ea703: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea707: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea70b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ea70d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ea712u); f_005e959c();
    /* 005ea712: mov dword ptr [ebp], 0xb107e0 */ W32((u32)(r_ebp), 0xb107e0u);
    /* 005ea719: mov eax, ebp */ r_eax = r_ebp;
    /* 005ea71b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea71c: ret 8 */ FN_RET(0x005ea700); r_esp += 12; return;
}

void f_005ea720(void) /* sub_5EA720 */
{
    FN_ENTER(0x005ea720);
    /* 005ea720: mov dword ptr [0xa8dd08], 0x3f800000 */ W32((u32)(0xa8dd08u), 0x3f800000u);
    /* 005ea72a: mov dword ptr [0xa8dd0c], 0x41000000 */ W32((u32)(0xa8dd0cu), 0x41000000u);
    /* 005ea734: mov dword ptr [0xa8dd10], 0x3fc00000 */ W32((u32)(0xa8dd10u), 0x3fc00000u);
    /* 005ea73e: ret  */ FN_RET(0x005ea720); r_esp += 4; return;
}

void f_005ea740(void) /* sub_5EA740 */
{
    FN_ENTER(0x005ea740);
    /* 005ea740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea741: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea743: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea745: push 0x8dbda0 */ { u32 v = 0x8dbda0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea74a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea751: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea758: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea75b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea75e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ea761: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ea764: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ea767: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ea76a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ea76d: mov eax, ecx */ r_eax = r_ecx;
    /* 005ea76f: mov dword ptr [eax], 0xb10940 */ W32((u32)(r_eax), 0xb10940u);
    /* 005ea775: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ea77c: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ea781u); f_005e61c8();
    /* 005ea781: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea784: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea786: jne 0x5ea798 */ if (!fZ) goto L_005ea798;
L_005ea788:; BB(0x005ea788);
    /* 005ea788: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea78b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea792: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea794: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea795: ret 4 */ FN_RET(0x005ea740); r_esp += 8; return;
L_005ea798:; BB(0x005ea798);
    /* 005ea798: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ea79b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea79c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ea7a1u); f_005c2f74();
    /* 005ea7a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea7a2: jmp 0x5ea788 */ goto L_005ea788;
}

void f_005ea7a4(void) /* sub_5EA7A4 */
{
    FN_ENTER(0x005ea7a4);
    /* 005ea7a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7a5: mov esi, ecx */ r_esi = r_ecx;
    /* 005ea7a7: mov ecx, esi */ r_ecx = r_esi;
    /* 005ea7a9: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7ab: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5ea7b0u); f_005e6334();
    /* 005ea7b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7b2: mov ecx, esi */ r_ecx = r_esi;
    /* 005ea7b4: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5ea7b9u); f_005e6254();
    /* 005ea7b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7bb: mov ecx, esi */ r_ecx = r_esi;
    /* 005ea7bd: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5ea7c2u); f_005e6254();
    /* 005ea7c2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7c4: mov ecx, esi */ r_ecx = r_esi;
    /* 005ea7c6: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5ea7cbu); f_005e6254();
    /* 005ea7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ea7cc: ret  */ FN_RET(0x005ea7a4); r_esp += 4; return;
}

void f_005ea7d0(void) /* sub_5EA7D0 */
{
    FN_ENTER(0x005ea7d0);
    /* 005ea7d0: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5ea7d5u); f_005c42f4();
    /* 005ea7d5: ret  */ FN_RET(0x005ea7d0); r_esp += 4; return;
}

void f_005ea7d8(void) /* sub_5EA7D8 */
{
    FN_ENTER(0x005ea7d8);
    /* 005ea7d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea7db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7dd: push 0x8dbdc8 */ { u32 v = 0x8dbdc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea7e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea7f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea7f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea7f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea7f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea7fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea7ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea802: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea804: je 0x5ea85b */ if (fZ) goto L_005ea85b;
L_005ea806:; BB(0x005ea806);
    /* 005ea806: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ea80d: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea812: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ea817u); f_005caba4();
    /* 005ea817: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea818: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ea81b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea81d: je 0x5ea857 */ if (fZ) goto L_005ea857;
L_005ea81f:; BB(0x005ea81f);
    /* 005ea81f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ea826: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea82d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea830: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea834: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea83a: call 0x5ea86c */ r_esp -= 4; W32(r_esp, 0x5ea83fu); f_005ea86c();
    /* 005ea83f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea842: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ea849:; BB(0x005ea849);
    /* 005ea849: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea84c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea853: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea855: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea856: ret  */ FN_RET(0x005ea7d8); r_esp += 4; return;
L_005ea857:; BB(0x005ea857);
    /* 005ea857: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea859: jmp 0x5ea849 */ goto L_005ea849;
L_005ea85b:; BB(0x005ea85b);
    /* 005ea85b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea85d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea860: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea867: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea869: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea86a: ret  */ FN_RET(0x005ea7d8); r_esp += 4; return;
}

void f_005ea86c(void) /* sub_5EA86C */
{
    FN_ENTER(0x005ea86c);
    /* 005ea86c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea86d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ea86f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea873: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea877: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ea879: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ea87eu); f_005e959c();
    /* 005ea87e: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005ea884: mov dword ptr [ebx], 0xb10940 */ W32((u32)(r_ebx), 0xb10940u);
    /* 005ea88a: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea88d: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005ea893: mov byte ptr [ebx + 0x1c2], 6 */ W8((u32)(r_ebx+0x1c2u), 0x6u);
    /* 005ea89a: mov eax, ebx */ r_eax = r_ebx;
    /* 005ea89c: mov byte ptr [ebx + 0x1c6], 5 */ W8((u32)(r_ebx+0x1c6u), 0x5u);
    /* 005ea8a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea8a4: ret 8 */ FN_RET(0x005ea86c); r_esp += 12; return;
}

void f_005ea8a8(void) /* sub_5EA8A8 */
{
    FN_ENTER(0x005ea8a8);
    /* 005ea8a8: mov dword ptr [0xa8dd14], 0x3f800000 */ W32((u32)(0xa8dd14u), 0x3f800000u);
    /* 005ea8b2: mov dword ptr [0xa8dd18], 0x41000000 */ W32((u32)(0xa8dd18u), 0x41000000u);
    /* 005ea8bc: mov dword ptr [0xa8dd1c], 0x3fc00000 */ W32((u32)(0xa8dd1cu), 0x3fc00000u);
    /* 005ea8c6: ret  */ FN_RET(0x005ea8a8); r_esp += 4; return;
}

void f_005ea8c8(void) /* sub_5EA8C8 */
{
    FN_ENTER(0x005ea8c8);
    /* 005ea8c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ea8cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ea8cd: call 0x5ea8ec */ r_esp -= 4; W32(r_esp, 0x5ea8d2u); f_005ea8ec();
    /* 005ea8d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ea8d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ea8d8: jne 0x5ea8de */ if (!fZ) goto L_005ea8de;
L_005ea8da:; BB(0x005ea8da);
    /* 005ea8da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea8db: ret 4 */ FN_RET(0x005ea8c8); r_esp += 8; return;
L_005ea8de:; BB(0x005ea8de);
    /* 005ea8de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ea8e4u); f_005c2f74();
    /* 005ea8e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea8e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ea8e6: ret 4 */ FN_RET(0x005ea8c8); r_esp += 8; return;
}

void f_005ea8ec(void) /* sub_5EA8EC */
{
    FN_ENTER(0x005ea8ec);
    /* 005ea8ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea8ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8f1: push 0x8dbde4 */ { u32 v = 0x8dbde4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea904: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea907: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea90a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea90d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea910: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea913: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ea916: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea919: mov dword ptr [ecx], 0xb10aa0 */ W32((u32)(r_ecx), 0xb10aa0u);
    /* 005ea91f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ea926: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ea92bu); f_005e61c8();
    /* 005ea92b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea92e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea935: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea937: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea938: ret  */ FN_RET(0x005ea8ec); r_esp += 4; return;
}

void f_005ea93c(void) /* sub_5EA93C */
{
    FN_ENTER(0x005ea93c);
    /* 005ea93c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ea93d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea940: mov esi, ecx */ r_esi = r_ecx;
    /* 005ea942: mov ecx, esi */ r_ecx = r_esi;
    /* 005ea944: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ea949u); f_005e90b0();
    /* 005ea949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea94b: je 0x5ea971 */ if (fZ) goto L_005ea971;
L_005ea94d:; BB(0x005ea94d);
    /* 005ea94d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ea950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea951: mov ecx, esi */ r_ecx = r_esi;
    /* 005ea953: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5ea958u); f_005e7534();
    /* 005ea958: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005ea95b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea95d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ea95f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ea961: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea962: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea964: mov ecx, esi */ r_ecx = r_esi;
    /* 005ea966: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5ea96cu); call_ind(t); }
    /* 005ea96c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ea96f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ea970: ret  */ FN_RET(0x005ea93c); r_esp += 4; return;
L_005ea971:; BB(0x005ea971);
    /* 005ea971: mov ecx, esi */ r_ecx = r_esi;
    /* 005ea973: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ea978u); f_005e90e8();
    /* 005ea978: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ea97b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ea97c: ret  */ FN_RET(0x005ea93c); r_esp += 4; return;
}

void f_005ea980(void) /* sub_5EA980 */
{
    FN_ENTER(0x005ea980);
    /* 005ea980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea981: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea985: push 0x8dbe0c */ { u32 v = 0x8dbe0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea98a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea991: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ea998: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea99b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ea99e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ea9a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ea9a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ea9a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea9aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea9ac: je 0x5eaa03 */ if (fZ) goto L_005eaa03;
L_005ea9ae:; BB(0x005ea9ae);
    /* 005ea9ae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ea9b5: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9ba: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ea9bfu); f_005caba4();
    /* 005ea9bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea9c0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ea9c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea9c5: je 0x5ea9ff */ if (fZ) goto L_005ea9ff;
L_005ea9c7:; BB(0x005ea9c7);
    /* 005ea9c7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ea9ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea9d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea9d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea9db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9dc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ea9e2: call 0x5eaa14 */ r_esp -= 4; W32(r_esp, 0x5ea9e7u); f_005eaa14();
    /* 005ea9e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea9ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ea9f1:; BB(0x005ea9f1);
    /* 005ea9f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea9f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea9fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea9fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea9fe: ret  */ FN_RET(0x005ea980); r_esp += 4; return;
L_005ea9ff:; BB(0x005ea9ff);
    /* 005ea9ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eaa01: jmp 0x5ea9f1 */ goto L_005ea9f1;
L_005eaa03:; BB(0x005eaa03);
    /* 005eaa03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eaa05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eaa08: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eaa0f: mov esp, ebp */ r_esp = r_ebp;
    /* 005eaa11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eaa12: ret  */ FN_RET(0x005ea980); r_esp += 4; return;
}

void f_005eaa14(void) /* sub_5EAA14 */
{
    FN_ENTER(0x005eaa14);
    /* 005eaa14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eaa17: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eaa1b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eaa1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eaa21: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eaa26u); f_005e959c();
    /* 005eaa26: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005eaa2c: mov dword ptr [ebx], 0xb10aa0 */ W32((u32)(r_ebx), 0xb10aa0u);
    /* 005eaa32: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eaa35: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005eaa3b: mov dword ptr [ebx + 0x238], 0x5eac64 */ W32((u32)(r_ebx+0x238u), 0x5eac64u);
    /* 005eaa45: mov eax, ebx */ r_eax = r_ebx;
    /* 005eaa47: mov dword ptr [ebx + 0x208], 0x41200000 */ W32((u32)(r_ebx+0x208u), 0x41200000u);
    /* 005eaa51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eaa52: ret 8 */ FN_RET(0x005eaa14); r_esp += 12; return;
}

void f_005eaa58(void) /* sub_5EAA58 */
{
    FN_ENTER(0x005eaa58);
    /* 005eaa58: mov dword ptr [0xa8dd20], 0x3f800000 */ W32((u32)(0xa8dd20u), 0x3f800000u);
    /* 005eaa62: mov dword ptr [0xa8dd24], 0x41000000 */ W32((u32)(0xa8dd24u), 0x41000000u);
    /* 005eaa6c: mov dword ptr [0xa8dd28], 0x3fc00000 */ W32((u32)(0xa8dd28u), 0x3fc00000u);
    /* 005eaa76: ret  */ FN_RET(0x005eaa58); r_esp += 4; return;
}

void f_005eaa78(void) /* sub_5EAA78 */
{
    FN_ENTER(0x005eaa78);
    /* 005eaa78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa79: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eaa7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eaa7d: call 0x5eaa9c */ r_esp -= 4; W32(r_esp, 0x5eaa82u); f_005eaa9c();
    /* 005eaa82: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005eaa86: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eaa88: jne 0x5eaa8e */ if (!fZ) goto L_005eaa8e;
L_005eaa8a:; BB(0x005eaa8a);
    /* 005eaa8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eaa8b: ret 4 */ FN_RET(0x005eaa78); r_esp += 8; return;
L_005eaa8e:; BB(0x005eaa8e);
    /* 005eaa8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa8f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eaa94u); f_005c2f74();
    /* 005eaa94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eaa95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eaa96: ret 4 */ FN_RET(0x005eaa78); r_esp += 8; return;
}

void f_005eaa9c(void) /* sub_5EAA9C */
{
    FN_ENTER(0x005eaa9c);
    /* 005eaa9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa9d: mov ebp, esp */ r_ebp = r_esp;
    /* 005eaa9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaa1: push 0x8dbe28 */ { u32 v = 0x8dbe28u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eaaac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eaab4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eaab7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eaaba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eaabd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eaac0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eaac3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eaac6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eaac9: mov dword ptr [ecx], 0xb10c60 */ W32((u32)(r_ecx), 0xb10c60u);
    /* 005eaacf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eaad6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eaadbu); f_005e61c8();
    /* 005eaadb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eaade: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eaae5: mov esp, ebp */ r_esp = r_ebp;
    /* 005eaae7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eaae8: ret  */ FN_RET(0x005eaa9c); r_esp += 4; return;
}

void f_005eaaec(void) /* sub_5EAAEC */
{
    FN_ENTER(0x005eaaec);
    /* 005eaaec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaed: mov ebp, esp */ r_ebp = r_esp;
    /* 005eaaef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaf1: push 0x8dbe5c */ { u32 v = 0x8dbe5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eaafc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaafd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eab04: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eab07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eab0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005eab0d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005eab10: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005eab13: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005eab16: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005eab19: mov eax, ecx */ r_eax = r_ecx;
    /* 005eab1b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005eab1e: mov dword ptr [eax], 0xb0cd38 */ W32((u32)(r_eax), 0xb0cd38u);
    /* 005eab24: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eab2b: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5eab30u); f_005e3e40();
    /* 005eab30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eab33: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eab35: jne 0x5eab47 */ if (!fZ) goto L_005eab47;
L_005eab37:; BB(0x005eab37);
    /* 005eab37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eab3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eab41: mov esp, ebp */ r_esp = r_ebp;
    /* 005eab43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eab44: ret 4 */ FN_RET(0x005eaaec); r_esp += 8; return;
L_005eab47:; BB(0x005eab47);
    /* 005eab47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eab4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eab4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eab50u); f_005c2f74();
    /* 005eab50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eab51: jmp 0x5eab37 */ goto L_005eab37;
}

void f_005eab54(void) /* sub_5EAB54 */
{
    FN_ENTER(0x005eab54);
    /* 005eab54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005eab55: mov esi, ecx */ r_esi = r_ecx;
    /* 005eab57: mov ecx, esi */ r_ecx = r_esi;
    /* 005eab59: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5eab5eu); f_005e90b0();
    /* 005eab5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eab60: je 0x5eab74 */ if (fZ) goto L_005eab74;
L_005eab62:; BB(0x005eab62);
    /* 005eab62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005eab64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eab66: mov ecx, esi */ r_ecx = r_esi;
    /* 005eab68: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eab6d: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x5eab72u); f_005e6a88();
    /* 005eab72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eab73: ret  */ FN_RET(0x005eab54); r_esp += 4; return;
L_005eab74:; BB(0x005eab74);
    /* 005eab74: mov ecx, esi */ r_ecx = r_esi;
    /* 005eab76: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5eab7bu); f_005e90e8();
    /* 005eab7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eab7c: ret  */ FN_RET(0x005eab54); r_esp += 4; return;
}

void f_005eab80(void) /* sub_5EAB80 */
{
    FN_ENTER(0x005eab80);
    /* 005eab80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eab81: mov ebp, esp */ r_ebp = r_esp;
    /* 005eab83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eab85: push 0x8dbe84 */ { u32 v = 0x8dbe84u; r_esp -= 4; W32(r_esp, v); }
    /* 005eab8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eab90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eab91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eab98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eab9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eab9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eaba1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eaba4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eaba7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eabaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eabac: je 0x5eac03 */ if (fZ) goto L_005eac03;
L_005eabae:; BB(0x005eabae);
    /* 005eabae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eabb5: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eabba: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eabbfu); f_005caba4();
    /* 005eabbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eabc0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eabc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eabc5: je 0x5eabff */ if (fZ) goto L_005eabff;
L_005eabc7:; BB(0x005eabc7);
    /* 005eabc7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eabce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eabd5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eabd8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eabdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eabdc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eabe2: call 0x5eac14 */ r_esp -= 4; W32(r_esp, 0x5eabe7u); f_005eac14();
    /* 005eabe7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eabea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eabf1:; BB(0x005eabf1);
    /* 005eabf1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eabf4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eabfb: mov esp, ebp */ r_esp = r_ebp;
    /* 005eabfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eabfe: ret  */ FN_RET(0x005eab80); r_esp += 4; return;
L_005eabff:; BB(0x005eabff);
    /* 005eabff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eac01: jmp 0x5eabf1 */ goto L_005eabf1;
L_005eac03:; BB(0x005eac03);
    /* 005eac03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eac05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eac08: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eac0f: mov esp, ebp */ r_esp = r_ebp;
    /* 005eac11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eac12: ret  */ FN_RET(0x005eab80); r_esp += 4; return;
}

void f_005eac14(void) /* sub_5EAC14 */
{
    FN_ENTER(0x005eac14);
    /* 005eac14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eac15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eac17: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eac1b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eac1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eac21: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eac26u); f_005e959c();
    /* 005eac26: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005eac2c: mov dword ptr [ebx], 0xb10c60 */ W32((u32)(r_ebx), 0xb10c60u);
    /* 005eac32: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eac35: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005eac3b: mov dword ptr [ebx + 0x238], 0x5eac64 */ W32((u32)(r_ebx+0x238u), 0x5eac64u);
    /* 005eac45: mov eax, ebx */ r_eax = r_ebx;
    /* 005eac47: mov dword ptr [ebx + 0x208], 0x41200000 */ W32((u32)(r_ebx+0x208u), 0x41200000u);
    /* 005eac51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eac52: ret 8 */ FN_RET(0x005eac14); r_esp += 12; return;
}

void f_005eac58(void) /* sub_5EAC58 */
{
    FN_ENTER(0x005eac58);
    /* 005eac58: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005eac5b: add eax, 0x3333 */ {  u32 a = r_eax; u32 b = 0x3333u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eac60: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005eac63: ret  */ FN_RET(0x005eac58); r_esp += 4; return;
}

void f_005eac64(void) /* sub_5EAC64 */
{
    FN_ENTER(0x005eac64);
    /* 005eac64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eac65: mov ebp, esp */ r_ebp = r_esp;
    /* 005eac67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eac69: push 0x8dbeac */ { u32 v = 0x8dbeacu; r_esp -= 4; W32(r_esp, v); }
    /* 005eac6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eac74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eac75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eac7c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eac7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eac82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eac85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eac88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eac8b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005eac8d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eac90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eac92: je 0x5eacd7 */ if (fZ) goto L_005eacd7;
L_005eac94:; BB(0x005eac94);
    /* 005eac94: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eac9b: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eac9d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eaca2u); f_005caba4();
    /* 005eaca2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eaca3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eaca6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaca8: je 0x5eace7 */ if (fZ) goto L_005eace7;
L_005eacaa:; BB(0x005eacaa);
    /* 005eacaa: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eacb1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eacb8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eacbb: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eacbe: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eacc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eacc4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eacc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eacc8: call 0x5eacec */ r_esp -= 4; W32(r_esp, 0x5eaccdu); f_005eacec();
    /* 005eaccd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eacd0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eacd7:; BB(0x005eacd7);
    /* 005eacd7: mov eax, edx */ r_eax = r_edx;
    /* 005eacd9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eacdc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eace3: mov esp, ebp */ r_esp = r_ebp;
    /* 005eace5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eace6: ret  */ FN_RET(0x005eac64); r_esp += 4; return;
L_005eace7:; BB(0x005eace7);
    /* 005eace7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eace9: jmp 0x5eacd7 */ goto L_005eacd7;
}

void f_005eacec(void) /* sub_5EACEC */
{
    FN_ENTER(0x005eacec);
    /* 005eacec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eaced: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005eacef: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eacf3: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eacf7: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eacfb: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eacff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ead01: call 0x5e43e8 */ r_esp -= 4; W32(r_esp, 0x5ead06u); f_005e43e8();
    /* 005ead06: mov dword ptr [ebp], 0xb10c48 */ W32((u32)(r_ebp), 0xb10c48u);
    /* 005ead0d: mov eax, ebp */ r_eax = r_ebp;
    /* 005ead0f: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 005ead16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ead17: ret 0x10 */ FN_RET(0x005eacec); r_esp += 20; return;
}

void f_005ead1c(void) /* sub_5EAD1C */
{
    FN_ENTER(0x005ead1c);
    /* 005ead1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ead1d: mov esi, ecx */ r_esi = r_ecx;
    /* 005ead1f: mov ecx, esi */ r_ecx = r_esi;
    /* 005ead21: call 0x5e45c0 */ r_esp -= 4; W32(r_esp, 0x5ead26u); f_005e45c0();
    /* 005ead26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ead28: je 0x5ead72 */ if (fZ) goto L_005ead72;
L_005ead2a:; BB(0x005ead2a);
    /* 005ead2a: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 005ead2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ead2f: je 0x5ead72 */ if (fZ) goto L_005ead72;
L_005ead31:; BB(0x005ead31);
    /* 005ead31: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 005ead34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ead36: je 0x5ead72 */ if (fZ) goto L_005ead72;
L_005ead38:; BB(0x005ead38);
    /* 005ead38: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5ead3du); f_0082d7b0();
    /* 005ead3d: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5ead42u); f_0082dbac();
    /* 005ead42: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ead45: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5ead4au); f_0081a9b8();
    /* 005ead4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ead4b: lea ecx, [esi + 0x1c] */ r_ecx = (u32)(r_esi+0x1cu);
    /* 005ead4e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5ead53u); f_0082d838();
    /* 005ead53: lea ecx, [esi + 0x28] */ r_ecx = (u32)(r_esi+0x28u);
    /* 005ead56: mov edx, 1 */ r_edx = 0x1u;
    /* 005ead5b: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5ead60u); f_00830df8();
    /* 005ead60: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 005ead63: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5ead68u); f_00831758();
    /* 005ead68: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5ead6du); f_0082dab0();
    /* 005ead6d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ead72u); f_0082da80();
L_005ead72:; BB(0x005ead72);
    /* 005ead72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ead73: ret  */ FN_RET(0x005ead1c); r_esp += 4; return;
}

void f_005ead74(void) /* sub_5EAD74 */
{
    FN_ENTER(0x005ead74);
    /* 005ead74: mov dword ptr [0xa8dd2c], 0x3f800000 */ W32((u32)(0xa8dd2cu), 0x3f800000u);
    /* 005ead7e: mov dword ptr [0xa8dd30], 0x41000000 */ W32((u32)(0xa8dd30u), 0x41000000u);
    /* 005ead88: mov dword ptr [0xa8dd34], 0x3fc00000 */ W32((u32)(0xa8dd34u), 0x3fc00000u);
    /* 005ead92: ret  */ FN_RET(0x005ead74); r_esp += 4; return;
}

void f_005ead94(void) /* sub_5EAD94 */
{
    FN_ENTER(0x005ead94);
    /* 005ead94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ead95: mov ebp, esp */ r_ebp = r_esp;
    /* 005ead97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ead99: push 0x8dbec8 */ { u32 v = 0x8dbec8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eada4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eada5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eadac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eadaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eadb2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005eadb5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005eadb8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005eadbb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005eadbe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005eadc1: mov eax, ecx */ r_eax = r_ecx;
    /* 005eadc3: mov dword ptr [eax], 0xb10de0 */ W32((u32)(r_eax), 0xb10de0u);
    /* 005eadc9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eadd0: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eadd5u); f_005e61c8();
    /* 005eadd5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eadd8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eadda: jne 0x5eadec */ if (!fZ) goto L_005eadec;
L_005eaddc:; BB(0x005eaddc);
    /* 005eaddc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eaddf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eade6: mov esp, ebp */ r_esp = r_ebp;
    /* 005eade8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eade9: ret 4 */ FN_RET(0x005ead94); r_esp += 8; return;
L_005eadec:; BB(0x005eadec);
    /* 005eadec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eadef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eadf0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eadf5u); f_005c2f74();
    /* 005eadf5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eadf6: jmp 0x5eaddc */ goto L_005eaddc;
}

void f_005eadf8(void) /* sub_5EADF8 */
{
    FN_ENTER(0x005eadf8);
    /* 005eadf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005eadf9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eadfc: mov esi, ecx */ r_esi = r_ecx;
    /* 005eadfe: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005eae05: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eae08: jne 0x5eae41 */ if (!fZ) goto L_005eae41;
L_005eae0a:; BB(0x005eae0a);
    /* 005eae0a: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005eae0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae0f: mov ecx, esi */ r_ecx = r_esi;
    /* 005eae11: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5eae16u); f_005e7534();
    /* 005eae16: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005eae1a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005eae1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae1d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5eae22u); f_0050b510();
    /* 005eae22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eae25: mov ecx, esi */ r_ecx = r_esi;
    /* 005eae27: call 0x5e69c8 */ r_esp -= 4; W32(r_esp, 0x5eae2cu); f_005e69c8();
    /* 005eae2c: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005eae30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005eae32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae33: mov ecx, esi */ r_ecx = r_esi;
    /* 005eae35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae37: call 0x5e7014 */ r_esp -= 4; W32(r_esp, 0x5eae3cu); f_005e7014();
    /* 005eae3c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eae3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eae40: ret  */ FN_RET(0x005eadf8); r_esp += 4; return;
L_005eae41:; BB(0x005eae41);
    /* 005eae41: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eae44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae45: mov ecx, esi */ r_ecx = r_esi;
    /* 005eae47: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5eae4cu); f_005e7534();
    /* 005eae4c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eae4f: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005eae51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae52: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5eae57u); f_0050b510();
    /* 005eae57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eae5a: mov ecx, esi */ r_ecx = r_esi;
    /* 005eae5c: call 0x5e69c8 */ r_esp -= 4; W32(r_esp, 0x5eae61u); f_005e69c8();
    /* 005eae61: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005eae64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005eae66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae67: mov ecx, esi */ r_ecx = r_esi;
    /* 005eae69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae6b: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5eae70u); f_005e6df8();
    /* 005eae70: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eae73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eae74: ret  */ FN_RET(0x005eadf8); r_esp += 4; return;
}

void f_005eae78(void) /* sub_5EAE78 */
{
    FN_ENTER(0x005eae78);
    /* 005eae78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005eae79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae7a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eae7d: mov edi, ecx */ r_edi = r_ecx;
    /* 005eae7f: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 005eae83: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005eae8a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eae8d: jne 0x5eaee2 */ if (!fZ) goto L_005eaee2;
L_005eae8f:; BB(0x005eae8f);
    /* 005eae8f: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005eae93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae94: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005eae97: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005eae9c: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005eae9f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005eaea1: mov ecx, edi */ r_ecx = r_edi;
    /* 005eaea3: call dword ptr [eax + 0xec] */ { u32 t = R32((u32)(r_eax+0xecu)); r_esp -= 4; W32(r_esp, 0x5eaea9u); call_ind(t); }
    /* 005eaea9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005eaead: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005eaeb1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005eaeb5: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 005eaeb9: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005eaebc: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 005eaebf: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 005eaec6: mov dword ptr [ebx + 0x68], ecx */ W32((u32)(r_ebx+0x68u), r_ecx);
    /* 005eaec9: mov dword ptr [ebx + 0x6c], edi */ W32((u32)(r_ebx+0x6cu), r_edi);
    /* 005eaecc: mov dword ptr [ebx + 0x10], 0xa */ W32((u32)(r_ebx+0x10u), 0xau);
    /* 005eaed3: mov dword ptr [ebx + 0x4c], 0x40000000 */ W32((u32)(r_ebx+0x4cu), 0x40000000u);
    /* 005eaeda: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eaedd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eaede: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005eaedf: ret 4 */ FN_RET(0x005eae78); r_esp += 8; return;
L_005eaee2:; BB(0x005eaee2);
    /* 005eaee2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005eaee5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaee6: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005eaee9: or eax, 0x11c */ {  u32 a = r_eax; u32 b = 0x11cu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005eaeee: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005eaef1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005eaef3: mov ecx, edi */ r_ecx = r_edi;
    /* 005eaef5: call dword ptr [eax + 0xec] */ { u32 t = R32((u32)(r_eax+0xecu)); r_esp -= 4; W32(r_esp, 0x5eaefbu); call_ind(t); }
    /* 005eaefb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005eaefe: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005eaf02: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005eaf05: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005eaf09: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 005eaf0c: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 005eaf0f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005eaf13: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 005eaf16: mov ecx, dword ptr [edi + 0x1ac] */ r_ecx = R32((u32)(r_edi+0x1acu));
    /* 005eaf1c: mov dword ptr [ebx + 0x44], ecx */ W32((u32)(r_ebx+0x44u), r_ecx);
    /* 005eaf1f: mov dword ptr [ebx + 0x10], 4 */ W32((u32)(r_ebx+0x10u), 0x4u);
    /* 005eaf26: mov dword ptr [ebx + 0x4c], 0x40000000 */ W32((u32)(r_ebx+0x4cu), 0x40000000u);
    /* 005eaf2d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eaf30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eaf31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005eaf32: ret 4 */ FN_RET(0x005eae78); r_esp += 8; return;
}

void f_005eaf38(void) /* sub_5EAF38 */
{
    FN_ENTER(0x005eaf38);
    /* 005eaf38: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005eaf3f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaf42: jne 0x5eaf5f */ if (!fZ) goto L_005eaf5f;
L_005eaf44:; BB(0x005eaf44);
    /* 005eaf44: movsx eax, word ptr [ecx + 0x1f2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x1f2u));
    /* 005eaf4b: cmp eax, dword ptr [0xa8d84c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8d84cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005eaf51: jne 0x5eaf7a */ if (!fZ) goto L_005eaf7a;
L_005eaf53:; BB(0x005eaf53);
    /* 005eaf53: mov ecx, dword ptr [ecx + 0x230] */ r_ecx = R32((u32)(r_ecx+0x230u));
    /* 005eaf59: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5eaf5eu); f_00831650();
    /* 005eaf5e: ret  */ FN_RET(0x005eaf38); r_esp += 4; return;
L_005eaf5f:; BB(0x005eaf5f);
    /* 005eaf5f: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005eaf64: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005eaf67: jne 0x5eaf7a */ if (!fZ) goto L_005eaf7a;
L_005eaf69:; BB(0x005eaf69);
    /* 005eaf69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf6b: push dword ptr [ecx + 0x240] */ { u32 v = R32((u32)(r_ecx+0x240u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eaf71: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005eaf73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf75: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5eaf7au); f_00830b74();
L_005eaf7a:; BB(0x005eaf7a);
    /* 005eaf7a: ret  */ FN_RET(0x005eaf38); r_esp += 4; return;
}

void f_005eaf7c(void) /* sub_5EAF7C */
{
    FN_ENTER(0x005eaf7c);
    /* 005eaf7c: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005eaf83: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005eaf86: je 0x5eaf9e */ if (fZ) goto L_005eaf9e;
L_005eaf88:; BB(0x005eaf88);
    /* 005eaf88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf8a: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf8f: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eaf95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf96: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5eaf9bu); f_005dd728();
    /* 005eaf9b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005eaf9e:; BB(0x005eaf9e);
    /* 005eaf9e: ret  */ FN_RET(0x005eaf7c); r_esp += 4; return;
}

void f_005eafa0(void) /* sub_5EAFA0 */
{
    FN_ENTER(0x005eafa0);
    /* 005eafa0: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005eafa7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005eafaa: je 0x5eafc5 */ if (fZ) goto L_005eafc5;
L_005eafac:; BB(0x005eafac);
    /* 005eafac: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eafb1: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eafb6: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eafbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eafbd: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5eafc2u); f_005dd728();
    /* 005eafc2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005eafc5:; BB(0x005eafc5);
    /* 005eafc5: ret  */ FN_RET(0x005eafa0); r_esp += 4; return;
}

void f_005eafc8(void) /* sub_5EAFC8 */
{
    FN_ENTER(0x005eafc8);
    /* 005eafc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eafc9: mov ebp, esp */ r_ebp = r_esp;
    /* 005eafcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eafcd: push 0x8dbef0 */ { u32 v = 0x8dbef0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eafd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eafd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eafd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eafe0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eafe3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eafe6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eafe9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eafec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eafef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eaff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaff4: je 0x5eb04b */ if (fZ) goto L_005eb04b;
L_005eaff6:; BB(0x005eaff6);
    /* 005eaff6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eaffd: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb002: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eb007u); f_005caba4();
    /* 005eb007: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb008: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eb00b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb00d: je 0x5eb047 */ if (fZ) goto L_005eb047;
L_005eb00f:; BB(0x005eb00f);
    /* 005eb00f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eb016: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eb01d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb020: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb024: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb02a: call 0x5eb05c */ r_esp -= 4; W32(r_esp, 0x5eb02fu); f_005eb05c();
    /* 005eb02f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb032: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eb039:; BB(0x005eb039);
    /* 005eb039: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb03c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb043: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb046: ret  */ FN_RET(0x005eafc8); r_esp += 4; return;
L_005eb047:; BB(0x005eb047);
    /* 005eb047: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb049: jmp 0x5eb039 */ goto L_005eb039;
L_005eb04b:; BB(0x005eb04b);
    /* 005eb04b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb04d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb050: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb057: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb05a: ret  */ FN_RET(0x005eafc8); r_esp += 4; return;
}

