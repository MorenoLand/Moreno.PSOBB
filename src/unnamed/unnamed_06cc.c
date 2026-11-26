#include "protos.h"

void f_006cc080(void) /* sub_6CC080 */
{
    FN_ENTER(0x006cc080);
    /* 006cc080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cc081: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cc082: mov edi, ecx */ r_edi = r_ecx;
    /* 006cc084: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006cc086: mov ecx, edi */ r_ecx = r_edi;
    /* 006cc088: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cc08bu); call_ind(t); }
    /* 006cc08b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc08d: jne 0x6cc092 */ if (!fZ) goto L_006cc092;
L_006cc08f:; BB(0x006cc08f);
    /* 006cc08f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cc091: ret  */ FN_RET(0x006cc080); r_esp += 4; return;
L_006cc092:; BB(0x006cc092);
    /* 006cc092: mov ecx, edi */ r_ecx = r_edi;
    /* 006cc094: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cc099u); f_006dc988();
    /* 006cc099: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc09b: je 0x6cc0fa */ if (fZ) goto L_006cc0fa;
L_006cc09d:; BB(0x006cc09d);
    /* 006cc09d: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006cc09f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cc0a4u); f_0073ec50();
    /* 006cc0a4: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006cc0a7: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cc0ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc0ad: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6cc0b2u); f_00735884();
    /* 006cc0b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cc0b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc0b7: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006cc0ba: mov ecx, eax */ r_ecx = r_eax;
    /* 006cc0bc: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x6cc0c1u); f_00736510();
    /* 006cc0c1: mov ecx, edi */ r_ecx = r_edi;
    /* 006cc0c3: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cc0c8u); f_006dc8d8();
    /* 006cc0c8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cc0cb: mov ecx, edi */ r_ecx = r_edi;
    /* 006cc0cd: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cc0d2u); f_006dc8d8();
    /* 006cc0d2: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006cc0d5: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cc0d8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006cc0dc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cc0df: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006cc0e3: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cc0e8u); f_0070f5a4();
    /* 006cc0e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc0ea: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc0ec: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006cc0ee: mov ecx, edi */ r_ecx = r_edi;
    /* 006cc0f0: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc0f3u); call_ind(t); }
    /* 006cc0f3: mov dword ptr [edi + 0x20], 6 */ W32((u32)(r_edi+0x20u), 0x6u);
L_006cc0fa:; BB(0x006cc0fa);
    /* 006cc0fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc0fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cc0fc: ret  */ FN_RET(0x006cc080); r_esp += 4; return;
}

void f_006cc100(void) /* sub_6CC100 */
{
    FN_ENTER(0x006cc100);
    /* 006cc100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cc101: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006cc103: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cc106: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cc108: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cc10bu); call_ind(t); }
    /* 006cc10b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc10d: jne 0x6cc111 */ if (!fZ) goto L_006cc111;
L_006cc10f:; BB(0x006cc10f);
    /* 006cc10f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc110: ret  */ FN_RET(0x006cc100); r_esp += 4; return;
L_006cc111:; BB(0x006cc111);
    /* 006cc111: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cc113: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cc118u); f_006dc988();
    /* 006cc118: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc11a: je 0x6cc139 */ if (fZ) goto L_006cc139;
L_006cc11c:; BB(0x006cc11c);
    /* 006cc11c: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006cc121: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc124: je 0x6cc13b */ if (fZ) goto L_006cc13b;
L_006cc126:; BB(0x006cc126);
    /* 006cc126: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc128: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc12a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cc12d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cc12f: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc132u); call_ind(t); }
    /* 006cc132: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
L_006cc139:; BB(0x006cc139);
    /* 006cc139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc13a: ret  */ FN_RET(0x006cc100); r_esp += 4; return;
L_006cc13b:; BB(0x006cc13b);
    /* 006cc13b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc140: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc146: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x6cc14bu); f_006bc260();
    /* 006cc14b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cc14e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc151: je 0x6cc1a9 */ if (fZ) goto L_006cc1a9;
L_006cc153:; BB(0x006cc153);
    /* 006cc153: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc158: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc15e: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x6cc163u); f_006bc260();
    /* 006cc163: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cc166: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc169: je 0x6cc180 */ if (fZ) goto L_006cc180;
L_006cc16b:; BB(0x006cc16b);
    /* 006cc16b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc16d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc16f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cc172: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cc174: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc177u); call_ind(t); }
    /* 006cc177: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
    /* 006cc17e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc17f: ret  */ FN_RET(0x006cc100); r_esp += 4; return;
L_006cc180:; BB(0x006cc180);
    /* 006cc180: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc182: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc184: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cc187: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cc189: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc18cu); call_ind(t); }
    /* 006cc18c: mov eax, dword ptr [0xa95f64] */ r_eax = R32((u32)(0xa95f64u));
    /* 006cc191: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cc194: je 0x6cc1a0 */ if (fZ) goto L_006cc1a0;
L_006cc196:; BB(0x006cc196);
    /* 006cc196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc197: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6cc19cu); f_006bc76c();
    /* 006cc19c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc19d: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
L_006cc1a0:; BB(0x006cc1a0);
    /* 006cc1a0: mov dword ptr [ebp + 0x20], 8 */ W32((u32)(r_ebp+0x20u), 0x8u);
    /* 006cc1a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc1a8: ret  */ FN_RET(0x006cc100); r_esp += 4; return;
L_006cc1a9:; BB(0x006cc1a9);
    /* 006cc1a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc1ab: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc1ad: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cc1b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cc1b2: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc1b5u); call_ind(t); }
    /* 006cc1b5: mov eax, dword ptr [0xa95f68] */ r_eax = R32((u32)(0xa95f68u));
    /* 006cc1ba: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cc1bd: je 0x6cc1c9 */ if (fZ) goto L_006cc1c9;
L_006cc1bf:; BB(0x006cc1bf);
    /* 006cc1bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc1c0: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6cc1c5u); f_006bc76c();
    /* 006cc1c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc1c6: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
L_006cc1c9:; BB(0x006cc1c9);
    /* 006cc1c9: mov dword ptr [ebp + 0x20], 7 */ W32((u32)(r_ebp+0x20u), 0x7u);
    /* 006cc1d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc1d1: ret  */ FN_RET(0x006cc100); r_esp += 4; return;
}

void f_006cc1d4(void) /* sub_6CC1D4 */
{
    FN_ENTER(0x006cc1d4);
    /* 006cc1d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc1d6: mov dword ptr [0xa95f54], eax */ W32((u32)(0xa95f54u), r_eax);
    /* 006cc1db: mov dword ptr [0xa95f58], eax */ W32((u32)(0xa95f58u), r_eax);
    /* 006cc1e0: mov dword ptr [0xa95f5c], eax */ W32((u32)(0xa95f5cu), r_eax);
    /* 006cc1e5: mov dword ptr [0xa95f60], eax */ W32((u32)(0xa95f60u), r_eax);
    /* 006cc1ea: ret  */ FN_RET(0x006cc1d4); r_esp += 4; return;
}

void f_006cc1ec(void)
{
    FN_ENTER(0x006cc1ec);
    /* 006cc1ec: mov ecx, dword ptr [0xa95f50] */ r_ecx = R32((u32)(0xa95f50u));
    /* 006cc1f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc1f4: je 0x6cc212 */ if (fZ) goto L_006cc212;
L_006cc1f6:; BB(0x006cc1f6);
    /* 006cc1f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc1f8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc1fa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cc1fc: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc1ffu); call_ind(t); }
    /* 006cc1ff: mov eax, dword ptr [0xa95f50] */ r_eax = R32((u32)(0xa95f50u));
    /* 006cc204: mov dword ptr [eax + 0x38], 2 */ W32((u32)(r_eax+0x38u), 0x2u);
    /* 006cc20b: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
L_006cc212:; BB(0x006cc212);
    /* 006cc212: ret  */ FN_RET(0x006cc1ec); r_esp += 4; return;
}

void f_006cc214(void)
{
    FN_ENTER(0x006cc214);
    /* 006cc214: mov ecx, dword ptr [0xa95f50] */ r_ecx = R32((u32)(0xa95f50u));
    /* 006cc21a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc21c: je 0x6cc23a */ if (fZ) goto L_006cc23a;
L_006cc21e:; BB(0x006cc21e);
    /* 006cc21e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc220: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc222: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cc224: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc227u); call_ind(t); }
    /* 006cc227: mov eax, dword ptr [0xa95f50] */ r_eax = R32((u32)(0xa95f50u));
    /* 006cc22c: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 006cc233: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
L_006cc23a:; BB(0x006cc23a);
    /* 006cc23a: ret  */ FN_RET(0x006cc214); r_esp += 4; return;
}

void f_006cc23c(void)
{
    FN_ENTER(0x006cc23c);
    /* 006cc23c: mov eax, dword ptr [0xa95f50] */ r_eax = R32((u32)(0xa95f50u));
    /* 006cc241: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc245: call 0x6cf52c */ r_esp -= 4; W32(r_esp, 0x6cc24au); f_006cf52c();
    /* 006cc24a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cc24d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc24f: je 0x6cc266 */ if (fZ) goto L_006cc266;
L_006cc251:; BB(0x006cc251);
    /* 006cc251: mov dword ptr [eax + 0x28], 0x6cc290 */ W32((u32)(r_eax+0x28u), 0x6cc290u);
    /* 006cc258: mov dword ptr [eax + 0x2c], 0x6cc6bc */ W32((u32)(r_eax+0x2cu), 0x6cc6bcu);
    /* 006cc25f: mov dword ptr [eax + 0x30], 0x6cc268 */ W32((u32)(r_eax+0x30u), 0x6cc268u);
L_006cc266:; BB(0x006cc266);
    /* 006cc266: ret  */ FN_RET(0x006cc23c); r_esp += 4; return;
}

void f_006cc2b0(void) /* sub_6CC2B0 */
{
    FN_ENTER(0x006cc2b0);
    /* 006cc2b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cc2b2: mov dword ptr [0xa95624], eax */ W32((u32)(0xa95624u), r_eax);
    /* 006cc2b7: mov dword ptr [0xa955e0], eax */ W32((u32)(0xa955e0u), r_eax);
    /* 006cc2bc: call 0x7a6160 */ r_esp -= 4; W32(r_esp, 0x6cc2c1u); f_007a6160();
    /* 006cc2c1: ret  */ FN_RET(0x006cc2b0); r_esp += 4; return;
}

void f_006cc2c4(void) /* sub_6CC2C4 */
{
    FN_ENTER(0x006cc2c4);
    /* 006cc2c4: mov eax, 1 */ r_eax = 0x1u;
    /* 006cc2c9: mov dword ptr [0xa95624], eax */ W32((u32)(0xa95624u), r_eax);
    /* 006cc2ce: mov dword ptr [0xa955e0], eax */ W32((u32)(0xa955e0u), r_eax);
    /* 006cc2d3: call 0x7a6160 */ r_esp -= 4; W32(r_esp, 0x6cc2d8u); f_007a6160();
    /* 006cc2d8: ret  */ FN_RET(0x006cc2c4); r_esp += 4; return;
}

void f_006cc2dc(void) /* sub_6CC2DC */
{
    FN_ENTER(0x006cc2dc);
    /* 006cc2dc: mov dword ptr [0xa95624], 1 */ W32((u32)(0xa95624u), 0x1u);
    /* 006cc2e6: mov dword ptr [0xa955e0], 5 */ W32((u32)(0xa955e0u), 0x5u);
    /* 006cc2f0: call 0x7a6160 */ r_esp -= 4; W32(r_esp, 0x6cc2f5u); f_007a6160();
    /* 006cc2f5: ret  */ FN_RET(0x006cc2dc); r_esp += 4; return;
}

void f_006cc2f8(void)
{
    FN_ENTER(0x006cc2f8);
    /* 006cc2f8: mov ecx, dword ptr [0xa95f50] */ r_ecx = R32((u32)(0xa95f50u));
    /* 006cc2fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc300: je 0x6cc31e */ if (fZ) goto L_006cc31e;
L_006cc302:; BB(0x006cc302);
    /* 006cc302: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc304: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc306: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cc308: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc30bu); call_ind(t); }
    /* 006cc30b: mov eax, dword ptr [0xa95f50] */ r_eax = R32((u32)(0xa95f50u));
    /* 006cc310: mov dword ptr [eax + 0x38], 4 */ W32((u32)(r_eax+0x38u), 0x4u);
    /* 006cc317: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
L_006cc31e:; BB(0x006cc31e);
    /* 006cc31e: ret  */ FN_RET(0x006cc2f8); r_esp += 4; return;
}

void f_006cc320(void) /* sub_6CC320 */
{
    FN_ENTER(0x006cc320);
    /* 006cc320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cc321: mov ebp, esp */ r_ebp = r_esp;
    /* 006cc323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc325: push 0x8ed98c */ { u32 v = 0x8ed98cu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc32a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cc330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc331: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cc338: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cc33b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cc33e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cc341: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cc344: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cc347: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006cc34a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc34d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006cc350: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cc353: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6cc358u); f_006dc410();
    /* 006cc358: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cc35f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cc362: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc365: mov dword ptr [ecx], 0xb3bb78 */ W32((u32)(r_ecx), 0xb3bb78u);
    /* 006cc36b: mov eax, dword ptr [0x9cecf4] */ r_eax = R32((u32)(0x9cecf4u));
    /* 006cc370: mov dword ptr [0xa95f50], ecx */ W32((u32)(0xa95f50u), r_ecx);
    /* 006cc376: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006cc379: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006cc37b: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006cc37e: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006cc381: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006cc384: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006cc387: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006cc38a: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 006cc38d: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6cc392u); f_006dc9fc();
    /* 006cc392: mov dword ptr [eax*4 + 0xa95f54], 1 */ W32((u32)(r_eax*4+0xa95f54u), 0x1u);
    /* 006cc39d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6cc3a4u); f_00791748();
    /* 006cc3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc3a5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cc3a8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cc3ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cc3ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cc3b5: mov esp, ebp */ r_esp = r_ebp;
    /* 006cc3b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc3b8: ret 8 */ FN_RET(0x006cc320); r_esp += 12; return;
}

void f_006cc3bc(void) /* sub_6CC3BC */
{
    FN_ENTER(0x006cc3bc);
    /* 006cc3bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cc3bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006cc3bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc3c1: push 0x8eda04 */ { u32 v = 0x8eda04u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc3c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cc3cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc3cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cc3d4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cc3d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cc3da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cc3dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cc3e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cc3e3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006cc3e6: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 006cc3e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc3eb: je 0x6cc405 */ if (fZ) goto L_006cc405;
L_006cc3ed:; BB(0x006cc3ed);
    /* 006cc3ed: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6cc3f2u); f_008173b4();
    /* 006cc3f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cc3f5: je 0x6cc58b */ if (fZ) goto L_006cc58b;
L_006cc3fb:; BB(0x006cc3fb);
    /* 006cc3fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc3fe: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006cc405:; BB(0x006cc405);
    /* 006cc405: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc408: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cc40a: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cc40du); call_ind(t); }
    /* 006cc40d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc40f: jne 0x6cc41f */ if (!fZ) goto L_006cc41f;
L_006cc411:; BB(0x006cc411);
    /* 006cc411: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cc414: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cc41b: mov esp, ebp */ r_esp = r_ebp;
    /* 006cc41d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc41e: ret  */ FN_RET(0x006cc3bc); r_esp += 4; return;
L_006cc41f:; BB(0x006cc41f);
    /* 006cc41f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc422: call 0x6dc8fc */ r_esp -= 4; W32(r_esp, 0x6cc427u); f_006dc8fc();
    /* 006cc427: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc429: je 0x6cc58b */ if (fZ) goto L_006cc58b;
L_006cc42f:; BB(0x006cc42f);
    /* 006cc42f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc432: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 006cc435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc437: je 0x6cc566 */ if (fZ) goto L_006cc566;
L_006cc43d:; BB(0x006cc43d);
    /* 006cc43d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc440: je 0x6cc599 */ if (fZ) goto L_006cc599;
L_006cc446:; BB(0x006cc446);
    /* 006cc446: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc449: je 0x6cc510 */ if (fZ) goto L_006cc510;
L_006cc44f:; BB(0x006cc44f);
    /* 006cc44f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc452: jne 0x6cc4af */ if (!fZ) goto L_006cc4af;
L_006cc454:; BB(0x006cc454);
    /* 006cc454: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006cc45b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc45d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cc462u); f_005caba4();
    /* 006cc462: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc463: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006cc466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc468: je 0x6cc492 */ if (fZ) goto L_006cc492;
L_006cc46a:; BB(0x006cc46a);
    /* 006cc46a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006cc471: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006cc478: push 0x6cf5d0 */ { u32 v = 0x6cf5d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc47d: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc483: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006cc486: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6cc48bu); f_00788938();
    /* 006cc48b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006cc492:; BB(0x006cc492);
    /* 006cc492: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cc499: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc49c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006cc49f: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cc4a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc4a4: call 0x6d7338 */ r_esp -= 4; W32(r_esp, 0x6cc4a9u); f_006d7338();
    /* 006cc4a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc4aa: jmp 0x6cc566 */ goto L_006cc566;
L_006cc4af:; BB(0x006cc4af);
    /* 006cc4af: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc4b2: jne 0x6cc566 */ if (!fZ) goto L_006cc566;
L_006cc4b8:; BB(0x006cc4b8);
    /* 006cc4b8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006cc4bf: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc4c1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cc4c6u); f_005caba4();
    /* 006cc4c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc4c7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006cc4ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc4cc: je 0x6cc4f6 */ if (fZ) goto L_006cc4f6;
L_006cc4ce:; BB(0x006cc4ce);
    /* 006cc4ce: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006cc4d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cc4dc: push 0x6cc2dc */ { u32 v = 0x6cc2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc4e1: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc4e7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006cc4ea: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6cc4efu); f_00788938();
    /* 006cc4ef: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006cc4f6:; BB(0x006cc4f6);
    /* 006cc4f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cc4fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc500: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006cc503: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cc507: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc508: call 0x6d7338 */ r_esp -= 4; W32(r_esp, 0x6cc50du); f_006d7338();
    /* 006cc50d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc50e: jmp 0x6cc566 */ goto L_006cc566;
L_006cc510:; BB(0x006cc510);
    /* 006cc510: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006cc517: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc519: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cc51eu); f_005caba4();
    /* 006cc51e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc51f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006cc522: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc524: je 0x6cc54e */ if (fZ) goto L_006cc54e;
L_006cc526:; BB(0x006cc526);
    /* 006cc526: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006cc52d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006cc534: push 0x6cc2c4 */ { u32 v = 0x6cc2c4u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc539: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc53f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006cc542: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6cc547u); f_00788938();
    /* 006cc547: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006cc54e:; BB(0x006cc54e);
    /* 006cc54e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cc555: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc558: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006cc55b: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cc55f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc560: call 0x6d7338 */ r_esp -= 4; W32(r_esp, 0x6cc565u); f_006d7338();
    /* 006cc565: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006cc566:; BB(0x006cc566);
    /* 006cc566: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc569: call 0x6dc4b0 */ r_esp -= 4; W32(r_esp, 0x6cc56eu); f_006dc4b0();
    /* 006cc56e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc571: call 0x6dc6f4 */ r_esp -= 4; W32(r_esp, 0x6cc576u); f_006dc6f4();
    /* 006cc576: call 0x6cb6d8 */ r_esp -= 4; W32(r_esp, 0x6cc57bu); f_006cb6d8();
    /* 006cc57b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc57e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cc582: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc587: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006cc58b:; BB(0x006cc58b);
    /* 006cc58b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cc58e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cc595: mov esp, ebp */ r_esp = r_ebp;
    /* 006cc597: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc598: ret  */ FN_RET(0x006cc3bc); r_esp += 4; return;
L_006cc599:; BB(0x006cc599);
    /* 006cc599: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006cc5a0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc5a2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cc5a7u); f_005caba4();
    /* 006cc5a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc5a8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006cc5ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc5ad: je 0x6cc5d7 */ if (fZ) goto L_006cc5d7;
L_006cc5af:; BB(0x006cc5af);
    /* 006cc5af: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006cc5b6: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006cc5bd: push 0x6cc2b0 */ { u32 v = 0x6cc2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc5c2: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc5c8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006cc5cb: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6cc5d0u); f_00788938();
    /* 006cc5d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006cc5d7:; BB(0x006cc5d7);
    /* 006cc5d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cc5de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc5e1: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006cc5e4: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cc5e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc5e9: call 0x6d7338 */ r_esp -= 4; W32(r_esp, 0x6cc5eeu); f_006d7338();
    /* 006cc5ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc5ef: jmp 0x6cc566 */ goto L_006cc566;
}

void f_006cc5f4(void) /* sub_6CC5F4 */
{
    FN_ENTER(0x006cc5f4);
    /* 006cc5f4: mov dword ptr [0xa95f44], 0x3f800000 */ W32((u32)(0xa95f44u), 0x3f800000u);
    /* 006cc5fe: mov dword ptr [0xa95f48], 0x41000000 */ W32((u32)(0xa95f48u), 0x41000000u);
    /* 006cc608: mov dword ptr [0xa95f4c], 0x3fc00000 */ W32((u32)(0xa95f4cu), 0x3fc00000u);
    /* 006cc612: ret  */ FN_RET(0x006cc5f4); r_esp += 4; return;
}

void f_006cc614(void) /* sub_6CC614 */
{
    FN_ENTER(0x006cc614);
    /* 006cc614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cc615: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006cc617: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cc61a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cc61c: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cc61fu); call_ind(t); }
    /* 006cc61f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc621: jne 0x6cc625 */ if (!fZ) goto L_006cc625;
L_006cc623:; BB(0x006cc623);
    /* 006cc623: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc624: ret  */ FN_RET(0x006cc614); r_esp += 4; return;
L_006cc625:; BB(0x006cc625);
    /* 006cc625: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cc627: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cc62cu); f_006dc988();
    /* 006cc62c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc62e: je 0x6cc643 */ if (fZ) goto L_006cc643;
L_006cc630:; BB(0x006cc630);
    /* 006cc630: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc632: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc634: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cc637: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cc639: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc63cu); call_ind(t); }
    /* 006cc63c: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
L_006cc643:; BB(0x006cc643);
    /* 006cc643: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc644: ret  */ FN_RET(0x006cc614); r_esp += 4; return;
}

void f_006cc648(void) /* sub_6CC648 */
{
    FN_ENTER(0x006cc648);
    /* 006cc648: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cc649: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cc64c: mov esi, ecx */ r_esi = r_ecx;
    /* 006cc64e: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006cc655: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006cc65d: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc65f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cc664u); f_0073ec50();
    /* 006cc664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc665: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006cc668: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc66a: mov ecx, esi */ r_ecx = r_esi;
    /* 006cc66c: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6cc671u); f_006dc794();
    /* 006cc671: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006cc673: mov eax, 1 */ r_eax = 0x1u;
    /* 006cc678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc679: mov ecx, esi */ r_ecx = r_esi;
    /* 006cc67b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc67c: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cc67fu); call_ind(t); }
    /* 006cc67f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc681: mov ecx, esi */ r_ecx = r_esi;
    /* 006cc683: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6cc688u); f_006dc62c();
    /* 006cc688: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
    /* 006cc68f: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 006cc692: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cc695: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cc696: ret  */ FN_RET(0x006cc648); r_esp += 4; return;
}

void f_006cc698(void) /* sub_6CC698 */
{
    FN_ENTER(0x006cc698);
    /* 006cc698: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc699: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cc69b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cc69d: call 0x6dc7d4 */ r_esp -= 4; W32(r_esp, 0x6cc6a2u); f_006dc7d4();
    /* 006cc6a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cc6a4: call 0x6dc670 */ r_esp -= 4; W32(r_esp, 0x6cc6a9u); f_006dc670();
    /* 006cc6a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc6ab: call 0x6cb714 */ r_esp -= 4; W32(r_esp, 0x6cc6b0u); f_006cb714();
    /* 006cc6b0: mov dword ptr [ebx + 0x20], 1 */ W32((u32)(r_ebx+0x20u), 0x1u);
    /* 006cc6b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc6b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cc6b9: ret  */ FN_RET(0x006cc698); r_esp += 4; return;
}

void f_006cc6bc(void) /* sub_6CC6BC */
{
    FN_ENTER(0x006cc6bc);
    /* 006cc6bc: mov eax, dword ptr [0xa95f50] */ r_eax = R32((u32)(0xa95f50u));
    /* 006cc6c1: mov dword ptr [eax + 0x20], 9 */ W32((u32)(r_eax+0x20u), 0x9u);
    /* 006cc6c8: ret  */ FN_RET(0x006cc6bc); r_esp += 4; return;
}

void f_006cc6cc(void) /* sub_6CC6CC */
{
    FN_ENTER(0x006cc6cc);
    /* 006cc6cc: mov eax, dword ptr [0xa95f70] */ r_eax = R32((u32)(0xa95f70u));
    /* 006cc6d1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cc6d4: je 0x6cc6e8 */ if (fZ) goto L_006cc6e8;
L_006cc6d6:; BB(0x006cc6d6);
    /* 006cc6d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc6d7: call 0x6bc86c */ r_esp -= 4; W32(r_esp, 0x6cc6dcu); f_006bc86c();
    /* 006cc6dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc6dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc6df: je 0x6cc6e8 */ if (fZ) goto L_006cc6e8;
L_006cc6e1:; BB(0x006cc6e1);
    /* 006cc6e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006cc6e3: mov ecx, eax */ r_ecx = r_eax;
    /* 006cc6e5: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x6cc6e8u); call_ind(t); }
L_006cc6e8:; BB(0x006cc6e8);
    /* 006cc6e8: ret  */ FN_RET(0x006cc6cc); r_esp += 4; return;
}

void f_006cc6ec(void) /* sub_6CC6EC */
{
    FN_ENTER(0x006cc6ec);
    /* 006cc6ec: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006cc6f1: mov dword ptr [0xa95f64], eax */ W32((u32)(0xa95f64u), r_eax);
    /* 006cc6f6: mov dword ptr [0xa95f68], eax */ W32((u32)(0xa95f68u), r_eax);
    /* 006cc6fb: mov dword ptr [0xa95f6c], eax */ W32((u32)(0xa95f6cu), r_eax);
    /* 006cc700: mov dword ptr [0xa95f70], eax */ W32((u32)(0xa95f70u), r_eax);
    /* 006cc705: ret  */ FN_RET(0x006cc6ec); r_esp += 4; return;
}

void f_006cc708(void) /* sub_6CC708 */
{
    FN_ENTER(0x006cc708);
    /* 006cc708: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc709: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cc70b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cc70d: call 0x6cc72c */ r_esp -= 4; W32(r_esp, 0x6cc712u); f_006cc72c();
    /* 006cc712: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cc716: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc718: jne 0x6cc71e */ if (!fZ) goto L_006cc71e;
L_006cc71a:; BB(0x006cc71a);
    /* 006cc71a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cc71b: ret 4 */ FN_RET(0x006cc708); r_esp += 8; return;
L_006cc71e:; BB(0x006cc71e);
    /* 006cc71e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc71f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6cc724u); f_005c2f74();
    /* 006cc724: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc725: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cc726: ret 4 */ FN_RET(0x006cc708); r_esp += 8; return;
}

void f_006cc72c(void) /* sub_6CC72C */
{
    FN_ENTER(0x006cc72c);
    /* 006cc72c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cc72d: mov ebp, esp */ r_ebp = r_esp;
    /* 006cc72f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc731: push 0x8eda20 */ { u32 v = 0x8eda20u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc736: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cc73c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc73d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cc744: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cc747: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cc74a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cc74d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cc750: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cc753: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cc756: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc759: mov dword ptr [ecx], 0xb3bda0 */ W32((u32)(r_ecx), 0xb3bda0u);
    /* 006cc75f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cc766: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6cc76bu); f_008171e8();
    /* 006cc76b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cc76e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cc775: mov esp, ebp */ r_esp = r_ebp;
    /* 006cc777: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc778: ret  */ FN_RET(0x006cc72c); r_esp += 4; return;
}

void f_006cc77c(void) /* sub_6CC77C */
{
    FN_ENTER(0x006cc77c);
    /* 006cc77c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc77d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cc77f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cc781: call 0x6cc7a0 */ r_esp -= 4; W32(r_esp, 0x6cc786u); f_006cc7a0();
    /* 006cc786: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cc78a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc78c: jne 0x6cc792 */ if (!fZ) goto L_006cc792;
L_006cc78e:; BB(0x006cc78e);
    /* 006cc78e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cc78f: ret 4 */ FN_RET(0x006cc77c); r_esp += 8; return;
L_006cc792:; BB(0x006cc792);
    /* 006cc792: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc793: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6cc798u); f_005c2f74();
    /* 006cc798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cc79a: ret 4 */ FN_RET(0x006cc77c); r_esp += 8; return;
}

void f_006cc7a0(void) /* sub_6CC7A0 */
{
    FN_ENTER(0x006cc7a0);
    /* 006cc7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cc7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006cc7a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc7a5: push 0x8eda3c */ { u32 v = 0x8eda3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc7aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cc7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc7b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cc7b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cc7bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cc7be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cc7c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cc7c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cc7c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cc7ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cc7d1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc7d4: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 006cc7d7: mov dword ptr [ecx], 0xb3bd40 */ W32((u32)(r_ecx), 0xb3bd40u);
    /* 006cc7dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc7df: je 0x6cc7f8 */ if (fZ) goto L_006cc7f8;
L_006cc7e1:; BB(0x006cc7e1);
    /* 006cc7e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc7e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cc7e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006cc7ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006cc7f1: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_006cc7f8:; BB(0x006cc7f8);
    /* 006cc7f8: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6cc7fdu); f_006dc514();
    /* 006cc7fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc800: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006cc803: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc805: je 0x6cc816 */ if (fZ) goto L_006cc816;
L_006cc807:; BB(0x006cc807);
    /* 006cc807: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cc80cu); f_007127b0();
    /* 006cc80c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc80f: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006cc816:; BB(0x006cc816);
    /* 006cc816: mov ecx, eax */ r_ecx = r_eax;
    /* 006cc818: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6cc81du); f_006dc9fc();
    /* 006cc81d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc81f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006cc821: mov dword ptr [0xa9604c], edx */ W32((u32)(0xa9604cu), r_edx);
    /* 006cc827: mov dword ptr [eax*4 + 0xa96050], edx */ W32((u32)(r_eax*4+0xa96050u), r_edx);
    /* 006cc82e: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6cc833u); f_00791748();
    /* 006cc833: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc834: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cc83b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc83e: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6cc843u); f_006dc3a0();
    /* 006cc843: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cc846: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cc84d: mov esp, ebp */ r_esp = r_ebp;
    /* 006cc84f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc850: ret  */ FN_RET(0x006cc7a0); r_esp += 4; return;
}

void f_006cc854(void) /* sub_6CC854 */
{
    FN_ENTER(0x006cc854);
    /* 006cc854: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc855: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cc857: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cc859: call 0x6cc878 */ r_esp -= 4; W32(r_esp, 0x6cc85eu); f_006cc878();
    /* 006cc85e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cc862: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc864: jne 0x6cc86a */ if (!fZ) goto L_006cc86a;
L_006cc866:; BB(0x006cc866);
    /* 006cc866: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cc867: ret 4 */ FN_RET(0x006cc854); r_esp += 8; return;
L_006cc86a:; BB(0x006cc86a);
    /* 006cc86a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cc86b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6cc870u); f_005c2f74();
    /* 006cc870: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc871: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cc872: ret 4 */ FN_RET(0x006cc854); r_esp += 8; return;
}

void f_006cc878(void) /* sub_6CC878 */
{
    FN_ENTER(0x006cc878);
    /* 006cc878: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cc879: mov ebp, esp */ r_ebp = r_esp;
    /* 006cc87b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cc87d: push 0x8eda58 */ { u32 v = 0x8eda58u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc882: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cc888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc889: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cc890: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cc893: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cc896: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cc899: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cc89c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cc89f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cc8a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cc8a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc8ac: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 006cc8af: mov dword ptr [ecx], 0xb3bd70 */ W32((u32)(r_ecx), 0xb3bd70u);
    /* 006cc8b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc8b7: je 0x6cc8d0 */ if (fZ) goto L_006cc8d0;
L_006cc8b9:; BB(0x006cc8b9);
    /* 006cc8b9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc8bc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cc8c0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006cc8c5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006cc8c9: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_006cc8d0:; BB(0x006cc8d0);
    /* 006cc8d0: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6cc8d5u); f_006dc514();
    /* 006cc8d5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc8d8: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006cc8db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc8dd: je 0x6cc8ee */ if (fZ) goto L_006cc8ee;
L_006cc8df:; BB(0x006cc8df);
    /* 006cc8df: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cc8e4u); f_007127b0();
    /* 006cc8e4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc8e7: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_006cc8ee:; BB(0x006cc8ee);
    /* 006cc8ee: mov ecx, eax */ r_ecx = r_eax;
    /* 006cc8f0: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6cc8f5u); f_006dc9fc();
    /* 006cc8f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cc8f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006cc8f9: mov dword ptr [0xa96038], edx */ W32((u32)(0xa96038u), r_edx);
    /* 006cc8ff: mov dword ptr [eax*4 + 0xa9603c], edx */ W32((u32)(r_eax*4+0xa9603cu), r_edx);
    /* 006cc906: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6cc90bu); f_00791748();
    /* 006cc90b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc90c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cc913: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cc916: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6cc91bu); f_006dc3a0();
    /* 006cc91b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cc91e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cc925: mov esp, ebp */ r_esp = r_ebp;
    /* 006cc927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc928: ret  */ FN_RET(0x006cc878); r_esp += 4; return;
}

void f_006cc92c(void) /* sub_6CC92C */
{
    FN_ENTER(0x006cc92c);
    /* 006cc92c: mov eax, dword ptr [0xa95fc8] */ r_eax = R32((u32)(0xa95fc8u));
    /* 006cc931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc933: je 0x6cc946 */ if (fZ) goto L_006cc946;
L_006cc935:; BB(0x006cc935);
    /* 006cc935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc936: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6cc93bu); f_00857e98();
    /* 006cc93b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc93c: mov dword ptr [0xa95fc8], 0 */ W32((u32)(0xa95fc8u), 0x0u);
L_006cc946:; BB(0x006cc946);
    /* 006cc946: mov eax, dword ptr [0xa96028] */ r_eax = R32((u32)(0xa96028u));
    /* 006cc94b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc94d: je 0x6cc960 */ if (fZ) goto L_006cc960;
L_006cc94f:; BB(0x006cc94f);
    /* 006cc94f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc950: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6cc955u); f_00857e98();
    /* 006cc955: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc956: mov dword ptr [0xa96028], 0 */ W32((u32)(0xa96028u), 0x0u);
L_006cc960:; BB(0x006cc960);
    /* 006cc960: mov eax, dword ptr [0xa96080] */ r_eax = R32((u32)(0xa96080u));
    /* 006cc965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc967: je 0x6cc97a */ if (fZ) goto L_006cc97a;
L_006cc969:; BB(0x006cc969);
    /* 006cc969: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc96a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6cc96fu); f_0082e960();
    /* 006cc96f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc970: mov dword ptr [0xa96080], 0 */ W32((u32)(0xa96080u), 0x0u);
L_006cc97a:; BB(0x006cc97a);
    /* 006cc97a: mov eax, dword ptr [0xa96084] */ r_eax = R32((u32)(0xa96084u));
    /* 006cc97f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc981: je 0x6cc994 */ if (fZ) goto L_006cc994;
L_006cc983:; BB(0x006cc983);
    /* 006cc983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc984: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6cc989u); f_0082e960();
    /* 006cc989: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cc98a: mov dword ptr [0xa96084], 0 */ W32((u32)(0xa96084u), 0x0u);
L_006cc994:; BB(0x006cc994);
    /* 006cc994: mov ecx, dword ptr [0xa96074] */ r_ecx = R32((u32)(0xa96074u));
    /* 006cc99a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc99c: je 0x6cc9ad */ if (fZ) goto L_006cc9ad;
L_006cc99e:; BB(0x006cc99e);
    /* 006cc99e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cc9a3u); f_007127b0();
    /* 006cc9a3: mov dword ptr [0xa96074], 0 */ W32((u32)(0xa96074u), 0x0u);
L_006cc9ad:; BB(0x006cc9ad);
    /* 006cc9ad: mov ecx, dword ptr [0xa96070] */ r_ecx = R32((u32)(0xa96070u));
    /* 006cc9b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc9b5: je 0x6cc9c6 */ if (fZ) goto L_006cc9c6;
L_006cc9b7:; BB(0x006cc9b7);
    /* 006cc9b7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cc9bcu); f_007127b0();
    /* 006cc9bc: mov dword ptr [0xa96070], 0 */ W32((u32)(0xa96070u), 0x0u);
L_006cc9c6:; BB(0x006cc9c6);
    /* 006cc9c6: mov ecx, dword ptr [0xa9606c] */ r_ecx = R32((u32)(0xa9606cu));
    /* 006cc9cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc9ce: je 0x6cc9df */ if (fZ) goto L_006cc9df;
L_006cc9d0:; BB(0x006cc9d0);
    /* 006cc9d0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cc9d5u); f_007127b0();
    /* 006cc9d5: mov dword ptr [0xa9606c], 0 */ W32((u32)(0xa9606cu), 0x0u);
L_006cc9df:; BB(0x006cc9df);
    /* 006cc9df: mov dword ptr [0xa96060], 0 */ W32((u32)(0xa96060u), 0x0u);
    /* 006cc9e9: mov edx, 0xa95fe0 */ r_edx = 0xa95fe0u;
    /* 006cc9ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cc9f0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006cc9f2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006cc9f5: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006cc9f8: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006cc9fb: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006cc9fe: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006cca01: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006cca04: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006cca07: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006cca0a: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006cca0d: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006cca10: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006cca13: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006cca16: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006cca19: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006cca1c: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006cca1f: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006cca22: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006cca25: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006cca28: mov edx, 0xa95f80 */ r_edx = 0xa95f80u;
    /* 006cca2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cca2f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006cca31: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006cca34: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006cca37: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006cca3a: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006cca3d: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006cca40: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006cca43: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006cca46: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006cca49: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006cca4c: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006cca4f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006cca52: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006cca55: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006cca58: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006cca5b: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006cca5e: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006cca61: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006cca64: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006cca67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cca69: mov dword ptr [0xa9607c], eax */ W32((u32)(0xa9607cu), r_eax);
    /* 006cca6e: mov dword ptr [0xa96078], eax */ W32((u32)(0xa96078u), r_eax);
    /* 006cca73: mov dword ptr [0xa96180], eax */ W32((u32)(0xa96180u), r_eax);
    /* 006cca78: ret  */ FN_RET(0x006cc92c); r_esp += 4; return;
}

void f_006cca7c(void)
{
    FN_ENTER(0x006cca7c);
    /* 006cca7c: mov eax, dword ptr [0xa96084] */ r_eax = R32((u32)(0xa96084u));
    /* 006cca81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cca83: je 0x6ccaa7 */ if (fZ) goto L_006ccaa7;
L_006cca85:; BB(0x006cca85);
    /* 006cca85: push 0x2510 */ { u32 v = 0x2510u; r_esp -= 4; W32(r_esp, v); }
    /* 006cca8a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cca8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cca8f: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6cca94u); f_0086b6b8();
    /* 006cca94: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cca97: mov eax, dword ptr [0xa96180] */ r_eax = R32((u32)(0xa96180u));
    /* 006cca9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cca9e: je 0x6ccaa7 */ if (fZ) goto L_006ccaa7;
L_006ccaa0:; BB(0x006ccaa0);
    /* 006ccaa0: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
L_006ccaa7:; BB(0x006ccaa7);
    /* 006ccaa7: ret  */ FN_RET(0x006cca7c); r_esp += 4; return;
}

void f_006ccaa8(void) /* sub_6CCAA8 */
{
    FN_ENTER(0x006ccaa8);
    /* 006ccaa8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ccaab: mov eax, dword ptr [0xa96080] */ r_eax = R32((u32)(0xa96080u));
    /* 006ccab0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccab2: je 0x6ccb81 */ if (fZ) goto L_006ccb81;
L_006ccab8:; BB(0x006ccab8);
    /* 006ccab8: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccabd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ccac1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccac2: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6ccac7u); f_0086b6b8();
    /* 006ccac7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccaca: mov eax, dword ptr [0xa96180] */ r_eax = R32((u32)(0xa96180u));
    /* 006ccacf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccad1: je 0x6ccada */ if (fZ) goto L_006ccada;
L_006ccad3:; BB(0x006ccad3);
    /* 006ccad3: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
L_006ccada:; BB(0x006ccada);
    /* 006ccada: call 0x6cbad8 */ r_esp -= 4; W32(r_esp, 0x6ccadfu); f_006cbad8();
    /* 006ccadf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccae1: je 0x6ccb81 */ if (fZ) goto L_006ccb81;
L_006ccae7:; BB(0x006ccae7);
    /* 006ccae7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ccaed: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6ccaf2u); f_00717f08();
    /* 006ccaf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ccaf3: mov ecx, dword ptr [0xa96070] */ r_ecx = R32((u32)(0xa96070u));
    /* 006ccaf9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccafb: je 0x6ccb0c */ if (fZ) goto L_006ccb0c;
L_006ccafd:; BB(0x006ccafd);
    /* 006ccafd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ccb02u); f_007127b0();
    /* 006ccb02: mov dword ptr [0xa96070], 0 */ W32((u32)(0xa96070u), 0x0u);
L_006ccb0c:; BB(0x006ccb0c);
    /* 006ccb0c: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006ccb13: mov dword ptr [esp + 4], 0x43520000 */ W32((u32)(r_esp+0x4u), 0x43520000u);
    /* 006ccb1b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb1d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ccb22u); f_0073ec50();
    /* 006ccb22: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006ccb26: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ccb2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb30: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6ccb35u); f_0073aa40();
    /* 006ccb35: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccb38: push 0x47108800 */ { u32 v = 0x47108800u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb3d: mov ecx, eax */ r_ecx = r_eax;
    /* 006ccb3f: mov dword ptr [0xa96070], eax */ W32((u32)(0xa96070u), r_eax);
    /* 006ccb44: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6ccb49u); f_00712624();
    /* 006ccb49: mov eax, dword ptr [0xa96080] */ r_eax = R32((u32)(0xa96080u));
    /* 006ccb4e: mov ecx, dword ptr [0xa96070] */ r_ecx = R32((u32)(0xa96070u));
    /* 006ccb54: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb59: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ccb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb5d: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6ccb62u); f_0073ae38();
    /* 006ccb62: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 006ccb67: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ccb6a: jl 0x6ccb81 */ if ((fS!=fO)) goto L_006ccb81;
L_006ccb6c:; BB(0x006ccb6c);
    /* 006ccb6c: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb71: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb76: mov ecx, dword ptr [0xa96070] */ r_ecx = R32((u32)(0xa96070u));
    /* 006ccb7c: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6ccb81u); f_0070f5a4();
L_006ccb81:; BB(0x006ccb81);
    /* 006ccb81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ccb84: ret  */ FN_RET(0x006ccaa8); r_esp += 4; return;
}

void f_006ccb88(void) /* sub_6CCB88 */
{
    FN_ENTER(0x006ccb88);
    /* 006ccb88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ccb8b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ccb8e: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 006ccb92: mov eax, dword ptr [0xa96074] */ r_eax = R32((u32)(0xa96074u));
    /* 006ccb97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccb99: je 0x6ccce5 */ if (fZ) goto L_006ccce5;
L_006ccb9f:; BB(0x006ccb9f);
    /* 006ccb9f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccba1: je 0x6ccc3a */ if (fZ) goto L_006ccc3a;
L_006ccba7:; BB(0x006ccba7);
    /* 006ccba7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ccba9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006ccbad: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006ccbb1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006ccbb5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006ccbb9: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006ccbbd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccbbf: lea esi, [edi + 0x2c] */ r_esi = (u32)(r_edi+0x2cu);
    /* 006ccbc2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ccbc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccbc4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6ccbc9u); f_00858900();
    /* 006ccbc9: movsx eax, byte ptr [edi + 0x2b] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x2bu));
    /* 006ccbcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccbce: call 0x6cb318 */ r_esp -= 4; W32(r_esp, 0x6ccbd3u); f_006cb318();
    /* 006ccbd3: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006ccbd7: push 0x96b740 */ { u32 v = 0x96b740u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccbdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccbdd: call 0x859c78 */ r_esp -= 4; W32(r_esp, 0x6ccbe2u); f_00859c78();
    /* 006ccbe2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccbe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccbe7: je 0x6ccc3a */ if (fZ) goto L_006ccc3a;
L_006ccbe9:; BB(0x006ccbe9);
    /* 006ccbe9: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccbee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccbf0: call 0x859c78 */ r_esp -= 4; W32(r_esp, 0x6ccbf5u); f_00859c78();
    /* 006ccbf5: mov ebp, eax */ r_ebp = r_eax;
    /* 006ccbf7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccbfa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccbfc: je 0x6ccc3a */ if (fZ) goto L_006ccc3a;
L_006ccbfe:; BB(0x006ccbfe);
    /* 006ccbfe: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc00: push 0x96b750 */ { u32 v = 0x96b750u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc06: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6ccc0bu); f_008598c0();
    /* 006ccc0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccc0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccc10: jne 0x6ccc1d */ if (!fZ) goto L_006ccc1d;
L_006ccc12:; BB(0x006ccc12);
    /* 006ccc12: mov eax, dword ptr [0xa96028] */ r_eax = R32((u32)(0xa96028u));
    /* 006ccc17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccc19: jne 0x6ccc3a */ if (!fZ) goto L_006ccc3a;
L_006ccc1b:; BB(0x006ccc1b);
    /* 006ccc1b: jmp 0x6ccc41 */ goto L_006ccc41;
L_006ccc1d:; BB(0x006ccc1d);
    /* 006ccc1d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc1f: push 0x96b74c */ { u32 v = 0x96b74cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc25: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6ccc2au); f_008598c0();
    /* 006ccc2a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccc2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccc2f: jne 0x6ccc3a */ if (!fZ) goto L_006ccc3a;
L_006ccc31:; BB(0x006ccc31);
    /* 006ccc31: mov eax, dword ptr [0xa95fc8] */ r_eax = R32((u32)(0xa95fc8u));
    /* 006ccc36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccc38: je 0x6ccc8b */ if (fZ) goto L_006ccc8b;
L_006ccc3a:; BB(0x006ccc3a);
    /* 006ccc3a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ccc3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ccc3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ccc3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ccc40: ret  */ FN_RET(0x006ccb88); r_esp += 4; return;
L_006ccc41:; BB(0x006ccc41);
    /* 006ccc41: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc44: push 0xa95fe0 */ { u32 v = 0xa95fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc49: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6ccc4eu); f_00858900();
    /* 006ccc4e: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 006ccc51: mov dword ptr [0xa96024], eax */ W32((u32)(0xa96024u), r_eax);
    /* 006ccc56: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ccc59: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ccc5eu); f_008581c5();
    /* 006ccc5e: mov dword ptr [0xa96028], eax */ W32((u32)(0xa96028u), r_eax);
    /* 006ccc63: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ccc66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc69: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6ccc6eu); f_0086b688();
    /* 006ccc6e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccc71: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 006ccc74: mov dword ptr [0xa96078], 0 */ W32((u32)(0xa96078u), 0x0u);
    /* 006ccc7e: add dword ptr [0xa96068], eax */ { u32 ad = (u32)(0xa96068u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006ccc84: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ccc87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ccc88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ccc89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ccc8a: ret  */ FN_RET(0x006ccb88); r_esp += 4; return;
L_006ccc8b:; BB(0x006ccc8b);
    /* 006ccc8b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc8e: push 0xa95f80 */ { u32 v = 0xa95f80u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccc93: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6ccc98u); f_00858900();
    /* 006ccc98: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 006ccc9b: mov dword ptr [0xa95fc4], eax */ W32((u32)(0xa95fc4u), r_eax);
    /* 006ccca0: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ccca3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ccca8u); f_008581c5();
    /* 006ccca8: mov dword ptr [0xa95fc8], eax */ W32((u32)(0xa95fc8u), r_eax);
    /* 006cccad: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cccb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cccb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cccb3: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6cccb8u); f_0086b688();
    /* 006cccb8: mov eax, dword ptr [0xa96068] */ r_eax = R32((u32)(0xa96068u));
    /* 006cccbd: add eax, dword ptr [edi + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cccc0: mov dword ptr [0xa96068], eax */ W32((u32)(0xa96068u), r_eax);
    /* 006cccc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cccc6: push dword ptr [0xa96064] */ { u32 v = R32((u32)(0xa96064u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ccccc: mov dword ptr [0xa9607c], 0 */ W32((u32)(0xa9607cu), 0x0u);
    /* 006cccd6: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6cccdbu); f_007836b0();
    /* 006cccdb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cccde: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ccce1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ccce2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ccce3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ccce4: ret  */ FN_RET(0x006ccb88); r_esp += 4; return;
L_006ccce5:; BB(0x006ccce5);
    /* 006ccce5: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006cccec: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006cccf4: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006cccf6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cccfbu); f_0073ec50();
    /* 006cccfb: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006cccff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ccd00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccd01: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x6ccd06u); f_0073a888();
    /* 006ccd06: mov dword ptr [0xa96074], eax */ W32((u32)(0xa96074u), r_eax);
    /* 006ccd0b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccd0d: call 0x6dbe50 */ r_esp -= 4; W32(r_esp, 0x6ccd12u); f_006dbe50();
    /* 006ccd12: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccd15: mov ecx, dword ptr [0xa96074] */ r_ecx = R32((u32)(0xa96074u));
    /* 006ccd1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccd1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccd1e: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6ccd23u); f_0073ae38();
    /* 006ccd23: mov ecx, dword ptr [0xa96074] */ r_ecx = R32((u32)(0xa96074u));
    /* 006ccd29: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x6ccd2eu); f_0073b0f0();
    /* 006ccd2e: push 0x47108800 */ { u32 v = 0x47108800u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccd33: mov ecx, dword ptr [0xa96074] */ r_ecx = R32((u32)(0xa96074u));
    /* 006ccd39: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6ccd3eu); f_00712624();
    /* 006ccd3e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccd43: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ccd48u); f_0061cdb0();
    /* 006ccd48: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccd4d: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6ccd52u); f_0081888c();
    /* 006ccd52: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccd57: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6ccd5cu); f_00817604();
    /* 006ccd5c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccd61: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6ccd66u); f_00818f80();
    /* 006ccd66: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6ccd6bu); f_0080030c();
    /* 006ccd6b: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccd70: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ccd75u); f_0061cdb0();
    /* 006ccd75: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccd7a: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6ccd7fu); f_0081888c();
    /* 006ccd7f: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccd84: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6ccd89u); f_00817604();
    /* 006ccd89: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccd8e: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6ccd93u); f_00818f80();
    /* 006ccd93: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6ccd98u); f_0080030c();
    /* 006ccd98: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccd9d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ccda2u); f_0061cdb0();
    /* 006ccda2: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccda7: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6ccdacu); f_0081888c();
    /* 006ccdac: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccdb1: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6ccdb6u); f_00817604();
    /* 006ccdb6: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccdbb: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6ccdc0u); f_00818f80();
    /* 006ccdc0: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6ccdc5u); f_0080030c();
    /* 006ccdc5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ccdcb: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6ccdd0u); f_00717f08();
    /* 006ccdd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ccdd1: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccdd6: call 0x8183b4 */ r_esp -= 4; W32(r_esp, 0x6ccddbu); f_008183b4();
    /* 006ccddb: mov dword ptr [0xa96060], 1 */ W32((u32)(0xa96060u), 0x1u);
    /* 006ccde5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ccde7: mov dword ptr [0xa96068], eax */ W32((u32)(0xa96068u), r_eax);
    /* 006ccdec: mov dword ptr [0xa96064], eax */ W32((u32)(0xa96064u), r_eax);
    /* 006ccdf1: jmp 0x6ccb9f */ goto L_006ccb9f;
}

void f_006ccdf8(void) /* sub_6CCDF8 */
{
    FN_ENTER(0x006ccdf8);
    /* 006ccdf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ccdf9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ccdfa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ccdfd: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006cce01: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cce03: je 0x6cce9e */ if (fZ) goto L_006cce9e;
L_006cce09:; BB(0x006cce09);
    /* 006cce09: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006cce0b: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 006cce0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cce0f: push 0xa95fe0 */ { u32 v = 0xa95fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cce14: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6cce19u); f_008598c0();
    /* 006cce19: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cce1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cce1e: jne 0x6cce2d */ if (!fZ) goto L_006cce2d;
L_006cce20:; BB(0x006cce20);
    /* 006cce20: mov ecx, dword ptr [0xa96028] */ r_ecx = R32((u32)(0xa96028u));
    /* 006cce26: mov esi, 0xa96078 */ r_esi = 0xa96078u;
    /* 006cce2b: jmp 0x6cce50 */ goto L_006cce50;
L_006cce2d:; BB(0x006cce2d);
    /* 006cce2d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006cce2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cce30: push 0xa95f80 */ { u32 v = 0xa95f80u; r_esp -= 4; W32(r_esp, v); }
    /* 006cce35: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6cce3au); f_008598c0();
    /* 006cce3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cce3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cce3f: jne 0x6ccec4 */ if (!fZ) goto L_006ccec4;
L_006cce45:; BB(0x006cce45);
    /* 006cce45: mov ecx, dword ptr [0xa95fc8] */ r_ecx = R32((u32)(0xa95fc8u));
    /* 006cce4b: mov esi, 0xa9607c */ r_esi = 0xa9607cu;
L_006cce50:; BB(0x006cce50);
    /* 006cce50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cce52: je 0x6ccec4 */ if (fZ) goto L_006ccec4;
L_006cce54:; BB(0x006cce54);
    /* 006cce54: push dword ptr [ebx + 0x418] */ { u32 v = R32((u32)(r_ebx+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cce5a: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006cce5d: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006cce60: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006cce62: lea edx, [ebx + 0x18] */ r_edx = (u32)(r_ebx+0x18u);
    /* 006cce65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cce66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cce67: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6cce6cu); f_0086b6b8();
    /* 006cce6c: push dword ptr [0xa96068] */ { u32 v = R32((u32)(0xa96068u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cce72: mov eax, dword ptr [0xa96064] */ r_eax = R32((u32)(0xa96064u));
    /* 006cce77: add eax, dword ptr [ebx + 0x418] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x418u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cce7d: mov dword ptr [0xa96064], eax */ W32((u32)(0xa96064u), r_eax);
    /* 006cce82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cce83: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6cce88u); f_007836b0();
    /* 006cce88: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cce8b: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 006cce91: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006cce96: jae 0x6cce9e */ if (!fC) goto L_006cce9e;
L_006cce98:; BB(0x006cce98);
    /* 006cce98: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
L_006cce9e:; BB(0x006cce9e);
    /* 006cce9e: mov eax, dword ptr [0xa9607c] */ r_eax = R32((u32)(0xa9607cu));
    /* 006ccea3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccea5: je 0x6ccec4 */ if (fZ) goto L_006ccec4;
L_006ccea7:; BB(0x006ccea7);
    /* 006ccea7: mov eax, dword ptr [0xa96078] */ r_eax = R32((u32)(0xa96078u));
    /* 006cceac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cceae: je 0x6ccec4 */ if (fZ) goto L_006ccec4;
L_006cceb0:; BB(0x006cceb0);
    /* 006cceb0: mov eax, dword ptr [0xa9606c] */ r_eax = R32((u32)(0xa9606cu));
    /* 006cceb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cceb7: je 0x6cceca */ if (fZ) goto L_006cceca;
L_006cceb9:; BB(0x006cceb9);
    /* 006cceb9: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006ccebf: call 0x7ebd20 */ r_esp -= 4; W32(r_esp, 0x6ccec4u); f_007ebd20();
L_006ccec4:; BB(0x006ccec4);
    /* 006ccec4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ccec7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ccec8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ccec9: ret  */ FN_RET(0x006ccdf8); r_esp += 4; return;
L_006cceca:; BB(0x006cceca);
    /* 006cceca: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006cced1: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006cced9: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccede: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ccee3u); f_0073ec50();
    /* 006ccee3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006ccee7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ccee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccee9: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x6cceeeu); f_0073a888();
    /* 006cceee: mov dword ptr [0xa9606c], eax */ W32((u32)(0xa9606cu), r_eax);
    /* 006ccef3: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccef5: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6ccefau); f_007930dc();
    /* 006ccefa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccefd: mov ecx, dword ptr [0xa9606c] */ r_ecx = R32((u32)(0xa9606cu));
    /* 006ccf03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccf05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccf06: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6ccf0bu); f_0073ae38();
    /* 006ccf0b: push 0x470ca000 */ { u32 v = 0x470ca000u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccf10: mov ecx, dword ptr [0xa9606c] */ r_ecx = R32((u32)(0xa9606cu));
    /* 006ccf16: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6ccf1bu); f_00712624();
    /* 006ccf1b: mov ecx, dword ptr [0xa9606c] */ r_ecx = R32((u32)(0xa9606cu));
    /* 006ccf21: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x6ccf26u); f_0073b0f0();
    /* 006ccf26: jmp 0x6cceb9 */ goto L_006cceb9;
}

void f_006cce20(void)
{
    FN_ENTER(0x006cce20);
    /* 006cce20: mov ecx, dword ptr [0xa96028] */ r_ecx = R32((u32)(0xa96028u));
    /* 006cce26: mov esi, 0xa96078 */ r_esi = 0xa96078u;
    /* 006cce2b: jmp 0x6cce50 */ goto L_006cce50;
L_006cce50:; BB(0x006cce50);
    /* 006cce50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cce52: je 0x6ccec4 */ if (fZ) goto L_006ccec4;
L_006cce54:; BB(0x006cce54);
    /* 006cce54: push dword ptr [ebx + 0x418] */ { u32 v = R32((u32)(r_ebx+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cce5a: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006cce5d: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006cce60: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006cce62: lea edx, [ebx + 0x18] */ r_edx = (u32)(r_ebx+0x18u);
    /* 006cce65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cce66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cce67: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6cce6cu); f_0086b6b8();
    /* 006cce6c: push dword ptr [0xa96068] */ { u32 v = R32((u32)(0xa96068u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cce72: mov eax, dword ptr [0xa96064] */ r_eax = R32((u32)(0xa96064u));
    /* 006cce77: add eax, dword ptr [ebx + 0x418] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x418u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cce7d: mov dword ptr [0xa96064], eax */ W32((u32)(0xa96064u), r_eax);
    /* 006cce82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cce83: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6cce88u); f_007836b0();
    /* 006cce88: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cce8b: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 006cce91: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006cce96: jae 0x6cce9e */ if (!fC) goto L_006cce9e;
L_006cce98:; BB(0x006cce98);
    /* 006cce98: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
L_006cce9e:; BB(0x006cce9e);
    /* 006cce9e: mov eax, dword ptr [0xa9607c] */ r_eax = R32((u32)(0xa9607cu));
    /* 006ccea3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccea5: je 0x6ccec4 */ if (fZ) goto L_006ccec4;
L_006ccea7:; BB(0x006ccea7);
    /* 006ccea7: mov eax, dword ptr [0xa96078] */ r_eax = R32((u32)(0xa96078u));
    /* 006cceac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cceae: je 0x6ccec4 */ if (fZ) goto L_006ccec4;
L_006cceb0:; BB(0x006cceb0);
    /* 006cceb0: mov eax, dword ptr [0xa9606c] */ r_eax = R32((u32)(0xa9606cu));
    /* 006cceb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cceb7: je 0x6cceca */ if (fZ) goto L_006cceca;
L_006cceb9:; BB(0x006cceb9);
    /* 006cceb9: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006ccebf: call 0x7ebd20 */ r_esp -= 4; W32(r_esp, 0x6ccec4u); f_007ebd20();
L_006ccec4:; BB(0x006ccec4);
    /* 006ccec4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ccec7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ccec8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ccec9: ret  */ FN_RET(0x006cce20); r_esp += 4; return;
L_006cceca:; BB(0x006cceca);
    /* 006cceca: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006cced1: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006cced9: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccede: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ccee3u); f_0073ec50();
    /* 006ccee3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006ccee7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ccee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccee9: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x6cceeeu); f_0073a888();
    /* 006cceee: mov dword ptr [0xa9606c], eax */ W32((u32)(0xa9606cu), r_eax);
    /* 006ccef3: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccef5: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6ccefau); f_007930dc();
    /* 006ccefa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ccefd: mov ecx, dword ptr [0xa9606c] */ r_ecx = R32((u32)(0xa9606cu));
    /* 006ccf03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccf05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccf06: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6ccf0bu); f_0073ae38();
    /* 006ccf0b: push 0x470ca000 */ { u32 v = 0x470ca000u; r_esp -= 4; W32(r_esp, v); }
    /* 006ccf10: mov ecx, dword ptr [0xa9606c] */ r_ecx = R32((u32)(0xa9606cu));
    /* 006ccf16: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6ccf1bu); f_00712624();
    /* 006ccf1b: mov ecx, dword ptr [0xa9606c] */ r_ecx = R32((u32)(0xa9606cu));
    /* 006ccf21: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x6ccf26u); f_0073b0f0();
    /* 006ccf26: jmp 0x6cceb9 */ goto L_006cceb9;
}

void f_006ccf28(void) /* sub_6CCF28 */
{
    FN_ENTER(0x006ccf28);
    /* 006ccf28: call 0x7a616c */ r_esp -= 4; W32(r_esp, 0x6ccf2du); f_007a616c();
    /* 006ccf2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ccf2f: je 0x6ccf32 */ if (fZ) goto L_006ccf32;
L_006ccf31:; BB(0x006ccf31);
    /* 006ccf31: ret  */ FN_RET(0x006ccf28); r_esp += 4; return;
L_006ccf32:; BB(0x006ccf32);
    /* 006ccf32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ccf34: mov dword ptr [0xa95624], eax */ W32((u32)(0xa95624u), r_eax);
    /* 006ccf39: mov dword ptr [0xa955e0], eax */ W32((u32)(0xa955e0u), r_eax);
    /* 006ccf3e: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x6ccf43u); f_007a6154();
    /* 006ccf43: mov eax, dword ptr [0xa95fc8] */ r_eax = R32((u32)(0xa95fc8u));
    /* 006ccf48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccf4a: je 0x6ccf5d */ if (fZ) goto L_006ccf5d;
L_006ccf4c:; BB(0x006ccf4c);
    /* 006ccf4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccf4d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ccf52u); f_00857e98();
    /* 006ccf52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ccf53: mov dword ptr [0xa95fc8], 0 */ W32((u32)(0xa95fc8u), 0x0u);
L_006ccf5d:; BB(0x006ccf5d);
    /* 006ccf5d: mov eax, dword ptr [0xa96028] */ r_eax = R32((u32)(0xa96028u));
    /* 006ccf62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccf64: je 0x6ccf77 */ if (fZ) goto L_006ccf77;
L_006ccf66:; BB(0x006ccf66);
    /* 006ccf66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccf67: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ccf6cu); f_00857e98();
    /* 006ccf6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ccf6d: mov dword ptr [0xa96028], 0 */ W32((u32)(0xa96028u), 0x0u);
L_006ccf77:; BB(0x006ccf77);
    /* 006ccf77: mov ecx, dword ptr [0xa96074] */ r_ecx = R32((u32)(0xa96074u));
    /* 006ccf7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccf7f: je 0x6ccf90 */ if (fZ) goto L_006ccf90;
L_006ccf81:; BB(0x006ccf81);
    /* 006ccf81: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ccf86u); f_007127b0();
    /* 006ccf86: mov dword ptr [0xa96074], 0 */ W32((u32)(0xa96074u), 0x0u);
L_006ccf90:; BB(0x006ccf90);
    /* 006ccf90: mov ecx, dword ptr [0xa96070] */ r_ecx = R32((u32)(0xa96070u));
    /* 006ccf96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccf98: je 0x6ccfa9 */ if (fZ) goto L_006ccfa9;
L_006ccf9a:; BB(0x006ccf9a);
    /* 006ccf9a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ccf9fu); f_007127b0();
    /* 006ccf9f: mov dword ptr [0xa96070], 0 */ W32((u32)(0xa96070u), 0x0u);
L_006ccfa9:; BB(0x006ccfa9);
    /* 006ccfa9: mov ecx, dword ptr [0xa9606c] */ r_ecx = R32((u32)(0xa9606cu));
    /* 006ccfaf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccfb1: je 0x6ccfc2 */ if (fZ) goto L_006ccfc2;
L_006ccfb3:; BB(0x006ccfb3);
    /* 006ccfb3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ccfb8u); f_007127b0();
    /* 006ccfb8: mov dword ptr [0xa9606c], 0 */ W32((u32)(0xa9606cu), 0x0u);
L_006ccfc2:; BB(0x006ccfc2);
    /* 006ccfc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ccfc4: mov dword ptr [0xa9607c], eax */ W32((u32)(0xa9607cu), r_eax);
    /* 006ccfc9: mov dword ptr [0xa96078], eax */ W32((u32)(0xa96078u), r_eax);
    /* 006ccfce: mov eax, dword ptr [0xa96180] */ r_eax = R32((u32)(0xa96180u));
    /* 006ccfd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ccfd5: je 0x6ccfde */ if (fZ) goto L_006ccfde;
L_006ccfd7:; BB(0x006ccfd7);
    /* 006ccfd7: mov dword ptr [eax + 0x20], 0xb */ W32((u32)(r_eax+0x20u), 0xbu);
L_006ccfde:; BB(0x006ccfde);
    /* 006ccfde: call 0x6d050c */ r_esp -= 4; W32(r_esp, 0x6ccfe3u); f_006d050c();
    /* 006ccfe3: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006ccfe8: call 0x8181c4 */ r_esp -= 4; W32(r_esp, 0x6ccfedu); f_008181c4();
    /* 006ccfed: mov eax, 1 */ r_eax = 0x1u;
    /* 006ccff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccff3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ccff4: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6ccff9u); f_007836b0();
    /* 006ccff9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ccffc: ret  */ FN_RET(0x006ccf28); r_esp += 4; return;
}

