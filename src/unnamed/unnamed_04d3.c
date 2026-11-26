#include "protos.h"

void f_004d307c(void) /* sub_4D307C */
{
    FN_ENTER(0x004d307c);
    /* 004d307c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004d3080: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d3087: mov ecx, dword ptr [eax*4 + 0xa48a00] */ r_ecx = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d308e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3090: je 0x4d30c9 */ if (fZ) goto L_004d30c9;
L_004d3092:; BB(0x004d3092);
    /* 004d3092: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d3097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3099: je 0x4d30a1 */ if (fZ) goto L_004d30a1;
L_004d309b:; BB(0x004d309b);
    /* 004d309b: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
L_004d30a1:; BB(0x004d30a1);
    /* 004d30a1: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004d30a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d30a6: je 0x4d30b0 */ if (fZ) goto L_004d30b0;
L_004d30a8:; BB(0x004d30a8);
    /* 004d30a8: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 004d30ac: mov word ptr [ecx + 0x20], ax */ W16((u32)(r_ecx+0x20u), (u16)r_eax);
L_004d30b0:; BB(0x004d30b0);
    /* 004d30b0: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d30b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d30b5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004d30b7: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4d30bau); call_ind(t); }
    /* 004d30ba: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d30bf: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d30c4: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
L_004d30c9:; BB(0x004d30c9);
    /* 004d30c9: ret  */ FN_RET(0x004d307c); r_esp += 4; return;
}

void f_004d30cc(void) /* sub_4D30CC */
{
    FN_ENTER(0x004d30cc);
    /* 004d30cc: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 004d30d3: ret  */ FN_RET(0x004d30cc); r_esp += 4; return;
}

void f_004d30d4(void) /* sub_4D30D4 */
{
    FN_ENTER(0x004d30d4);
    /* 004d30d4: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d30d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d30db: je 0x4d30ec */ if (fZ) goto L_004d30ec;
L_004d30dd:; BB(0x004d30dd);
    /* 004d30dd: mov eax, dword ptr [eax + 0x90] */ r_eax = R32((u32)(r_eax+0x90u));
    /* 004d30e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d30e5: je 0x4d30ec */ if (fZ) goto L_004d30ec;
L_004d30e7:; BB(0x004d30e7);
    /* 004d30e7: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 004d30eb: ret  */ FN_RET(0x004d30d4); r_esp += 4; return;
L_004d30ec:; BB(0x004d30ec);
    /* 004d30ec: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004d30f1: ret  */ FN_RET(0x004d30d4); r_esp += 4; return;
}

void f_004d30e0(void)
{
    FN_ENTER(0x004d30e0);
    /* 004d30e0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d30e2: add byte ptr [ebp + 0xf0574c0], al */ { u32 ad = (u32)(r_ebp+0xf0574c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 004d30e8: mov bh, 0x40 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x40u) & 0xffu) << 8);
    /* 004d30ea: sbb al, 0xc3 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xc3u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = ((u64)a < (u64)b + c); }
    /* 004d30ec: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004d30f1: ret  */ FN_RET(0x004d30e0); r_esp += 4; return;
}

void f_004d30f4(void) /* sub_4D30F4 */
{
    FN_ENTER(0x004d30f4);
    /* 004d30f4: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d30fb: ret  */ FN_RET(0x004d30f4); r_esp += 4; return;
}

void f_004d30fc(void) /* sub_4D30FC */
{
    FN_ENTER(0x004d30fc);
    /* 004d30fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d30fd: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 004d3102: mov ebx, dword ptr [eax*4 + 0xa48a00] */ r_ebx = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d3109: mov byte ptr [0xa489f4], al */ W8((u32)(0xa489f4u), (u8)r_eax);
    /* 004d310e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3110: je 0x4d317c */ if (fZ) goto L_004d317c;
L_004d3112:; BB(0x004d3112);
    /* 004d3112: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004d3114: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d3116: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4d3119u); call_ind(t); }
    /* 004d3119: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d311e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3120: je 0x4d317c */ if (fZ) goto L_004d317c;
L_004d3122:; BB(0x004d3122);
    /* 004d3122: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004d3125: mov dword ptr [eax + 0x1a0], edx */ W32((u32)(r_eax+0x1a0u), r_edx);
    /* 004d312b: mov dword ptr [eax + 0x178], edx */ W32((u32)(r_eax+0x178u), r_edx);
    /* 004d3131: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004d3134: mov dword ptr [eax + 0x1a4], edx */ W32((u32)(r_eax+0x1a4u), r_edx);
    /* 004d313a: mov dword ptr [eax + 0x17c], edx */ W32((u32)(r_eax+0x17cu), r_edx);
    /* 004d3140: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004d3143: mov dword ptr [eax + 0x1a8], edx */ W32((u32)(r_eax+0x1a8u), r_edx);
    /* 004d3149: mov dword ptr [eax + 0x180], edx */ W32((u32)(r_eax+0x180u), r_edx);
    /* 004d314f: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 004d3152: mov dword ptr [eax + 0x1ac], edx */ W32((u32)(r_eax+0x1acu), r_edx);
    /* 004d3158: mov dword ptr [eax + 0x184], edx */ W32((u32)(r_eax+0x184u), r_edx);
    /* 004d315e: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 004d3161: mov dword ptr [eax + 0x1b0], edx */ W32((u32)(r_eax+0x1b0u), r_edx);
    /* 004d3167: mov dword ptr [eax + 0x188], edx */ W32((u32)(r_eax+0x188u), r_edx);
    /* 004d316d: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 004d3170: mov dword ptr [eax + 0x1b4], ecx */ W32((u32)(r_eax+0x1b4u), r_ecx);
    /* 004d3176: mov dword ptr [eax + 0x18c], ecx */ W32((u32)(r_eax+0x18cu), r_ecx);
L_004d317c:; BB(0x004d317c);
    /* 004d317c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d317d: ret  */ FN_RET(0x004d30fc); r_esp += 4; return;
}

void f_004d3180(void) /* sub_4D3180 */
{
    FN_ENTER(0x004d3180);
    /* 004d3180: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004d3184: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d3189: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d318b: jne 0x4d31d9 */ if (!fZ) goto L_004d31d9;
L_004d318d:; BB(0x004d318d);
    /* 004d318d: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d3190: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
    /* 004d3195: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d319c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d319e: jne 0x4d31ab */ if (!fZ) goto L_004d31ab;
L_004d31a0:; BB(0x004d31a0);
    /* 004d31a0: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004d31a3: mov byte ptr [0xa489f4], dl */ W8((u32)(0xa489f4u), (u8)r_edx);
    /* 004d31a9: jmp 0x4d31c3 */ goto L_004d31c3;
L_004d31ab:; BB(0x004d31ab);
    /* 004d31ab: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d31ae: je 0x4d31ba */ if (fZ) goto L_004d31ba;
L_004d31b0:; BB(0x004d31b0);
    /* 004d31b0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d31b3: je 0x4d31ba */ if (fZ) goto L_004d31ba;
L_004d31b5:; BB(0x004d31b5);
    /* 004d31b5: mov byte ptr [0xa489f5], al */ W8((u32)(0xa489f5u), (u8)r_eax);
L_004d31ba:; BB(0x004d31ba);
    /* 004d31ba: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004d31bd: mov byte ptr [0xa489f4], dl */ W8((u32)(0xa489f4u), (u8)r_edx);
L_004d31c3:; BB(0x004d31c3);
    /* 004d31c3: mov ecx, dword ptr [edx*4 + 0xa48a00] */ r_ecx = R32((u32)(r_edx*4+0xa48a00u));
    /* 004d31ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d31cc: je 0x4d31d3 */ if (fZ) goto L_004d31d3;
L_004d31ce:; BB(0x004d31ce);
    /* 004d31ce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004d31d0: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4d31d3u); call_ind(t); }
L_004d31d3:; BB(0x004d31d3);
    /* 004d31d3: mov eax, 1 */ r_eax = 0x1u;
    /* 004d31d8: ret  */ FN_RET(0x004d3180); r_esp += 4; return;
L_004d31d9:; BB(0x004d31d9);
    /* 004d31d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d31db: ret  */ FN_RET(0x004d3180); r_esp += 4; return;
}

void f_004d31dc(void) /* sub_4D31DC */
{
    FN_ENTER(0x004d31dc);
    /* 004d31dc: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d31e1: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d31e3: je 0x4d31f0 */ if (fZ) goto L_004d31f0;
L_004d31e5:; BB(0x004d31e5);
    /* 004d31e5: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d31e8: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d31eb: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
L_004d31f0:; BB(0x004d31f0);
    /* 004d31f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d31f2: ret  */ FN_RET(0x004d31dc); r_esp += 4; return;
}

void f_004d31f4(void) /* sub_4D31F4 */
{
    FN_ENTER(0x004d31f4);
    /* 004d31f4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004d31f8: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d31fd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d31ff: jne 0x4d324d */ if (!fZ) goto L_004d324d;
L_004d3201:; BB(0x004d3201);
    /* 004d3201: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d3204: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
    /* 004d3209: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d3210: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3212: jne 0x4d321f */ if (!fZ) goto L_004d321f;
L_004d3214:; BB(0x004d3214);
    /* 004d3214: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004d3217: mov byte ptr [0xa489f4], dl */ W8((u32)(0xa489f4u), (u8)r_edx);
    /* 004d321d: jmp 0x4d3237 */ goto L_004d3237;
L_004d321f:; BB(0x004d321f);
    /* 004d321f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3222: je 0x4d322e */ if (fZ) goto L_004d322e;
L_004d3224:; BB(0x004d3224);
    /* 004d3224: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3227: je 0x4d322e */ if (fZ) goto L_004d322e;
L_004d3229:; BB(0x004d3229);
    /* 004d3229: mov byte ptr [0xa489f5], al */ W8((u32)(0xa489f5u), (u8)r_eax);
L_004d322e:; BB(0x004d322e);
    /* 004d322e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004d3231: mov byte ptr [0xa489f4], dl */ W8((u32)(0xa489f4u), (u8)r_edx);
L_004d3237:; BB(0x004d3237);
    /* 004d3237: mov ecx, dword ptr [edx*4 + 0xa48a00] */ r_ecx = R32((u32)(r_edx*4+0xa48a00u));
    /* 004d323e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3240: je 0x4d3247 */ if (fZ) goto L_004d3247;
L_004d3242:; BB(0x004d3242);
    /* 004d3242: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004d3244: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4d3247u); call_ind(t); }
L_004d3247:; BB(0x004d3247);
    /* 004d3247: mov eax, 1 */ r_eax = 0x1u;
    /* 004d324c: ret  */ FN_RET(0x004d31f4); r_esp += 4; return;
L_004d324d:; BB(0x004d324d);
    /* 004d324d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d324f: ret  */ FN_RET(0x004d31f4); r_esp += 4; return;
}

void f_004d3250(void) /* sub_4D3250 */
{
    FN_ENTER(0x004d3250);
    /* 004d3250: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3251: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d3252: mov edx, dword ptr [0xa489fc] */ r_edx = R32((u32)(0xa489fcu));
    /* 004d3258: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d325b: je 0x4d3279 */ if (fZ) goto L_004d3279;
L_004d325d:; BB(0x004d325d);
    /* 004d325d: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d3264: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004d3267: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d326a: je 0x4d3351 */ if (fZ) goto L_004d3351;
L_004d3270:; BB(0x004d3270);
    /* 004d3270: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004d3273: mov dword ptr [0xa489fc], edx */ W32((u32)(0xa489fcu), r_edx);
L_004d3279:; BB(0x004d3279);
    /* 004d3279: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d327f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d3284u); f_0068d5a8();
    /* 004d3284: mov esi, eax */ r_esi = r_eax;
    /* 004d3286: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d3289: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d328b: je 0x4d334c */ if (fZ) goto L_004d334c;
L_004d3291:; BB(0x004d3291);
    /* 004d3291: movzx edx, byte ptr [0xa489f4] */ r_edx = (u32)R8((u32)(0xa489f4u));
    /* 004d3298: mov ecx, dword ptr [edx*4 + 0xa48a00] */ r_ecx = R32((u32)(r_edx*4+0xa48a00u));
    /* 004d329f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d32a1: je 0x4d32d2 */ if (fZ) goto L_004d32d2;
L_004d32a3:; BB(0x004d32a3);
    /* 004d32a3: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d32a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d32aa: mov dword ptr [edx + 0x90], esi */ W32((u32)(r_edx+0x90u), r_esi);
    /* 004d32b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004d32b2: mov dword ptr [ecx + 0x1c], esi */ W32((u32)(r_ecx+0x1cu), r_esi);
    /* 004d32b5: movzx ebx, word ptr [esi + 0x1c] */ r_ebx = (u32)R16((u32)(r_esi+0x1cu));
    /* 004d32b9: mov word ptr [ecx + 0x20], bx */ W16((u32)(r_ecx+0x20u), (u16)r_ebx);
    /* 004d32bd: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x4d32c0u); call_ind(t); }
    /* 004d32c0: mov edx, dword ptr [0xa489fc] */ r_edx = R32((u32)(0xa489fcu));
    /* 004d32c6: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004d32cc: mov dword ptr [0xa489fc], edx */ W32((u32)(0xa489fcu), r_edx);
L_004d32d2:; BB(0x004d32d2);
    /* 004d32d2: mov ebx, dword ptr [0xa48a00] */ r_ebx = R32((u32)(0xa48a00u));
    /* 004d32d8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d32da: je 0x4d32ef */ if (fZ) goto L_004d32ef;
L_004d32dc:; BB(0x004d32dc);
    /* 004d32dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d32dd: mov dword ptr [ebx + 0x1c], esi */ W32((u32)(r_ebx+0x1cu), r_esi);
    /* 004d32e0: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 004d32e4: mov word ptr [ebx + 0x20], dx */ W16((u32)(r_ebx+0x20u), (u16)r_edx);
    /* 004d32e8: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004d32ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d32ec: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x4d32efu); call_ind(t); }
L_004d32ef:; BB(0x004d32ef);
    /* 004d32ef: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d32f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d32f7: je 0x4d334c */ if (fZ) goto L_004d334c;
L_004d32f9:; BB(0x004d32f9);
    /* 004d32f9: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004d32fc: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 004d3302: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 004d3308: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004d330b: mov dword ptr [esi + 0xd8], edx */ W32((u32)(r_esi+0xd8u), r_edx);
    /* 004d3311: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 004d3314: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d331a: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 004d3320: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3326: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 004d3329: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004d332f: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 004d3332: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3338: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 004d333e: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d3343: mov ebx, dword ptr [ebx + 0x50] */ r_ebx = R32((u32)(r_ebx+0x50u));
    /* 004d3346: mov dword ptr [eax + 0x10c], ebx */ W32((u32)(r_eax+0x10cu), r_ebx);
L_004d334c:; BB(0x004d334c);
    /* 004d334c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d334e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d334f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d3350: ret  */ FN_RET(0x004d3250); r_esp += 4; return;
L_004d3351:; BB(0x004d3351);
    /* 004d3351: mov ecx, dword ptr [0xa48a14] */ r_ecx = R32((u32)(0xa48a14u));
    /* 004d3357: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3359: je 0x4d3270 */ if (fZ) goto L_004d3270;
L_004d335f:; BB(0x004d335f);
    /* 004d335f: mov eax, dword ptr [0xa48b24] */ r_eax = R32((u32)(0xa48b24u));
    /* 004d3364: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3366: je 0x4d3270 */ if (fZ) goto L_004d3270;
L_004d336c:; BB(0x004d336c);
    /* 004d336c: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 004d336f: jmp 0x4d3270 */ goto L_004d3270;
}

void f_004d3374(void) /* sub_4D3374 */
{
    FN_ENTER(0x004d3374);
    /* 004d3374: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004d3378: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d337d: test al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d337f: je 0x4d33bd */ if (fZ) goto L_004d33bd;
L_004d3381:; BB(0x004d3381);
    /* 004d3381: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d3388: mov eax, dword ptr [eax*4 + 0xa48a00] */ r_eax = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d338f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3391: je 0x4d33bd */ if (fZ) goto L_004d33bd;
L_004d3393:; BB(0x004d3393);
    /* 004d3393: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004d3396: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 004d3399: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004d339c: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 004d339f: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004d33a2: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 004d33a5: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004d33a8: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 004d33ab: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004d33ae: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 004d33b1: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004d33b4: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004d33b7: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 004d33ba: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
L_004d33bd:; BB(0x004d33bd);
    /* 004d33bd: ret  */ FN_RET(0x004d3374); r_esp += 4; return;
}

void f_004d33c0(void) /* sub_4D33C0 */
{
    FN_ENTER(0x004d33c0);
    /* 004d33c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d33c1: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004d33c5: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004d33c9: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d33ce: test al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d33d0: je 0x4d3406 */ if (fZ) goto L_004d3406;
L_004d33d2:; BB(0x004d33d2);
    /* 004d33d2: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d33d9: mov eax, dword ptr [eax*4 + 0xa48a00] */ r_eax = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d33e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d33e2: je 0x4d3406 */ if (fZ) goto L_004d3406;
L_004d33e4:; BB(0x004d33e4);
    /* 004d33e4: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 004d33e6: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 004d33e9: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 004d33ec: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 004d33ef: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004d33f2: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 004d33f5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004d33f7: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 004d33fa: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004d33fd: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 004d3400: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 004d3403: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
L_004d3406:; BB(0x004d3406);
    /* 004d3406: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d3407: ret  */ FN_RET(0x004d33c0); r_esp += 4; return;
}

void f_004d3408(void) /* sub_4D3408 */
{
    FN_ENTER(0x004d3408);
    /* 004d3408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d3409: mov ebp, esp */ r_ebp = r_esp;
    /* 004d340b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d340d: push 0x8d1da4 */ { u32 v = 0x8d1da4u; r_esp -= 4; W32(r_esp, v); }
    /* 004d3412: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d3418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d3419: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d3420: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d3423: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d3426: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d3429: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d342c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d342f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d3432: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d3435: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d343au); f_008193cc();
    /* 004d343a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d3441: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d3444: mov dword ptr [edx], 0xafc590 */ W32((u32)(r_edx), 0xafc590u);
    /* 004d344a: mov esi, dword ptr [0x9acb64] */ r_esi = R32((u32)(0x9acb64u));
    /* 004d3450: mov dword ptr [edx + 0x19c], 0x3555 */ W32((u32)(r_edx+0x19cu), 0x3555u);
    /* 004d345a: mov dword ptr [0xa48a54], edx */ W32((u32)(0xa48a54u), r_edx);
    /* 004d3460: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 004d3463: mov dword ptr [edx + 0x1c8], 0 */ W32((u32)(r_edx+0x1c8u), 0x0u);
    /* 004d346d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d346f: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 004d3472: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 004d3478: mov dword ptr [edx + 0x1cc], 0 */ W32((u32)(r_edx+0x1ccu), 0x0u);
    /* 004d3482: mov dword ptr [edx + 0x174], eax */ W32((u32)(r_edx+0x174u), r_eax);
    /* 004d3488: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 004d348e: mov dword ptr [edx + 0x164], eax */ W32((u32)(r_edx+0x164u), r_eax);
    /* 004d3494: mov dword ptr [edx + 0x1d0], 0 */ W32((u32)(r_edx+0x1d0u), 0x0u);
    /* 004d349e: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 004d34a4: mov dword ptr [edx + 0x168], eax */ W32((u32)(r_edx+0x168u), r_eax);
    /* 004d34aa: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 004d34b0: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
    /* 004d34ba: mov dword ptr [edx + 0x16c], eax */ W32((u32)(r_edx+0x16cu), r_eax);
    /* 004d34c0: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 004d34c6: mov dword ptr [edx + 0x170], eax */ W32((u32)(r_edx+0x170u), r_eax);
    /* 004d34cc: mov dword ptr [edx + 0xa8], 0 */ W32((u32)(r_edx+0xa8u), 0x0u);
    /* 004d34d6: mov dword ptr [edx + 0x190], eax */ W32((u32)(r_edx+0x190u), r_eax);
    /* 004d34dc: mov dword ptr [edx + 0x194], eax */ W32((u32)(r_edx+0x194u), r_eax);
    /* 004d34e2: mov dword ptr [edx + 0x198], eax */ W32((u32)(r_edx+0x198u), r_eax);
    /* 004d34e8: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 004d34f2: mov dword ptr [edx + 0x1c0], eax */ W32((u32)(r_edx+0x1c0u), r_eax);
    /* 004d34f8: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 004d34fe: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004d3501: mov dword ptr [edx + 0x134], 0 */ W32((u32)(r_edx+0x134u), 0x0u);
    /* 004d350b: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004d350e: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004d3511: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 004d3514: mov dword ptr [edx + 0x138], 0 */ W32((u32)(r_edx+0x138u), 0x0u);
    /* 004d351e: mov word ptr [edx + 0x64], ax */ W16((u32)(r_edx+0x64u), (u16)r_eax);
    /* 004d3522: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004d3524: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004d352e: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 004d3538: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
    /* 004d3542: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 004d354c: mov dword ptr [edx + 0x140], 0 */ W32((u32)(r_edx+0x140u), 0x0u);
    /* 004d3556: mov dword ptr [edx + 0x144], 0 */ W32((u32)(r_edx+0x144u), 0x0u);
    /* 004d3560: mov dword ptr [edx + 0x148], 0 */ W32((u32)(r_edx+0x148u), 0x0u);
    /* 004d356a: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
    /* 004d3574: mov dword ptr [edx + 0xc0], 0 */ W32((u32)(r_edx+0xc0u), 0x0u);
    /* 004d357e: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
    /* 004d3588: mov dword ptr [edx + 0x14c], 0 */ W32((u32)(r_edx+0x14cu), 0x0u);
    /* 004d3592: mov dword ptr [edx + 0x150], 0 */ W32((u32)(r_edx+0x150u), 0x0u);
    /* 004d359c: mov dword ptr [edx + 0x154], 0 */ W32((u32)(r_edx+0x154u), 0x0u);
    /* 004d35a6: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 004d35b0: mov dword ptr [edx + 0xcc], 0 */ W32((u32)(r_edx+0xccu), 0x0u);
    /* 004d35ba: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
    /* 004d35c4: mov dword ptr [edx + 0x158], 0 */ W32((u32)(r_edx+0x158u), 0x0u);
    /* 004d35ce: mov dword ptr [edx + 0x15c], 0 */ W32((u32)(r_edx+0x15cu), 0x0u);
    /* 004d35d8: mov dword ptr [edx + 0x160], 0 */ W32((u32)(r_edx+0x160u), 0x0u);
    /* 004d35e2: mov dword ptr [edx + 0x178], 0 */ W32((u32)(r_edx+0x178u), 0x0u);
    /* 004d35ec: mov dword ptr [edx + 0x17c], 0 */ W32((u32)(r_edx+0x17cu), 0x0u);
    /* 004d35f6: mov dword ptr [edx + 0x180], 0 */ W32((u32)(r_edx+0x180u), 0x0u);
    /* 004d3600: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
    /* 004d360a: mov dword ptr [edx + 0x1a4], 0 */ W32((u32)(r_edx+0x1a4u), 0x0u);
    /* 004d3614: mov dword ptr [edx + 0x1a8], 0 */ W32((u32)(r_edx+0x1a8u), 0x0u);
    /* 004d361e: mov dword ptr [edx + 0x184], 0 */ W32((u32)(r_edx+0x184u), 0x0u);
    /* 004d3628: mov dword ptr [edx + 0x188], 0 */ W32((u32)(r_edx+0x188u), 0x0u);
    /* 004d3632: mov dword ptr [edx + 0x18c], 0 */ W32((u32)(r_edx+0x18cu), 0x0u);
    /* 004d363c: mov dword ptr [edx + 0x1ac], 0 */ W32((u32)(r_edx+0x1acu), 0x0u);
    /* 004d3646: mov dword ptr [edx + 0x1b0], 0 */ W32((u32)(r_edx+0x1b0u), 0x0u);
    /* 004d3650: mov dword ptr [edx + 0x1b4], 0 */ W32((u32)(r_edx+0x1b4u), 0x0u);
    /* 004d365a: mov dword ptr [edx + 0x1b8], 0 */ W32((u32)(r_edx+0x1b8u), 0x0u);
    /* 004d3664: mov dword ptr [edx + 0x1bc], 0 */ W32((u32)(r_edx+0x1bcu), 0x0u);
    /* 004d366e: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 004d3675: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 004d367c: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 004d3683: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 004d368a: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 004d3691: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 004d3698: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 004d369f: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
    /* 004d36a6: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 004d36ad: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 004d36b4: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 004d36bb: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 004d36c2: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 004d36c9: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 004d36d0: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 004d36d7: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 004d36de: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
    /* 004d36e5: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 004d36ec: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
L_004d36f6:; BB(0x004d36f6);
    /* 004d36f6: call dword ptr [ebx*4 + 0x9acb70] */ { u32 t = R32((u32)(r_ebx*4+0x9acb70u)); r_esp -= 4; W32(r_esp, 0x4d36fdu); call_ind(t); }
    /* 004d36fd: mov ecx, dword ptr [0xa489f8] */ r_ecx = R32((u32)(0xa489f8u));
    /* 004d3703: mov dword ptr [ecx*4 + 0xa48a00], eax */ W32((u32)(r_ecx*4+0xa48a00u), r_eax);
    /* 004d370a: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 004d370d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d3710: mov dword ptr [0xa489f8], edx */ W32((u32)(0xa489f8u), r_edx);
    /* 004d3716: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d3719: jl 0x4d36f6 */ if ((fS!=fO)) goto L_004d36f6;
L_004d371b:; BB(0x004d371b);
    /* 004d371b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d371e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d3721: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d3724: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d3727: mov byte ptr [0xa489f4], 0 */ W8((u32)(0xa489f4u), 0x0u);
    /* 004d372e: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
    /* 004d3738: mov dword ptr [eax + 0xd8], 0 */ W32((u32)(r_eax+0xd8u), 0x0u);
    /* 004d3742: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
    /* 004d374c: mov dword ptr [eax + 0x104], 0 */ W32((u32)(r_eax+0x104u), 0x0u);
    /* 004d3756: mov dword ptr [eax + 0x108], 0 */ W32((u32)(r_eax+0x108u), 0x0u);
    /* 004d3760: mov dword ptr [eax + 0x10c], 0 */ W32((u32)(r_eax+0x10cu), 0x0u);
    /* 004d376a: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 004d3774: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 004d377e: mov dword ptr [eax + 0xe8], 0 */ W32((u32)(r_eax+0xe8u), 0x0u);
    /* 004d3788: mov dword ptr [eax + 0x110], 0 */ W32((u32)(r_eax+0x110u), 0x0u);
    /* 004d3792: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004d379c: mov dword ptr [eax + 0x118], 0 */ W32((u32)(r_eax+0x118u), 0x0u);
    /* 004d37a6: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
    /* 004d37b0: mov dword ptr [eax + 0xf0], 0 */ W32((u32)(r_eax+0xf0u), 0x0u);
    /* 004d37ba: mov dword ptr [eax + 0xf4], 0 */ W32((u32)(r_eax+0xf4u), 0x0u);
    /* 004d37c4: mov dword ptr [eax + 0x11c], 0 */ W32((u32)(r_eax+0x11cu), 0x0u);
    /* 004d37ce: mov dword ptr [eax + 0x120], 0 */ W32((u32)(r_eax+0x120u), 0x0u);
    /* 004d37d8: mov dword ptr [eax + 0x124], 0 */ W32((u32)(r_eax+0x124u), 0x0u);
    /* 004d37e2: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 004d37ec: mov dword ptr [eax + 0xfc], 0 */ W32((u32)(r_eax+0xfcu), 0x0u);
    /* 004d37f6: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
    /* 004d3800: mov dword ptr [eax + 0x128], 0 */ W32((u32)(r_eax+0x128u), 0x0u);
    /* 004d380a: mov dword ptr [eax + 0x12c], 0 */ W32((u32)(r_eax+0x12cu), 0x0u);
    /* 004d3814: mov dword ptr [eax + 0x130], 0 */ W32((u32)(r_eax+0x130u), 0x0u);
    /* 004d381e: mov dword ptr [0xa48780], 0 */ W32((u32)(0xa48780u), 0x0u);
    /* 004d3828: mov dword ptr [0xa48784], 0 */ W32((u32)(0xa48784u), 0x0u);
    /* 004d3832: mov dword ptr [0xa48788], 0 */ W32((u32)(0xa48788u), 0x0u);
    /* 004d383c: mov dword ptr [0xa4878c], 0 */ W32((u32)(0xa4878cu), 0x0u);
    /* 004d3846: mov dword ptr [0xa48790], 0 */ W32((u32)(0xa48790u), 0x0u);
    /* 004d3850: mov dword ptr [0xa48794], 0xbf800000 */ W32((u32)(0xa48794u), 0xbf800000u);
    /* 004d385a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d385d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d3864: mov esp, ebp */ r_esp = r_ebp;
    /* 004d3866: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d3867: ret 4 */ FN_RET(0x004d3408); r_esp += 8; return;
}

void f_004d386c(void) /* sub_4D386C */
{
    FN_ENTER(0x004d386c);
    /* 004d386c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d386d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d3870: mov edi, ecx */ r_edi = r_ecx;
    /* 004d3872: mov ecx, edi */ r_ecx = r_edi;
    /* 004d3874: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 004d3878: call 0x4d3974 */ r_esp -= 4; W32(r_esp, 0x4d387du); f_004d3974();
    /* 004d387d: mov ecx, edi */ r_ecx = r_edi;
    /* 004d387f: call 0x4d3abc */ r_esp -= 4; W32(r_esp, 0x4d3884u); f_004d3abc();
    /* 004d3884: mov ecx, edi */ r_ecx = r_edi;
    /* 004d3886: call 0x4d3ef4 */ r_esp -= 4; W32(r_esp, 0x4d388bu); f_004d3ef4();
    /* 004d388b: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004d3891: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3893: je 0x4d38ac */ if (fZ) goto L_004d38ac;
L_004d3895:; BB(0x004d3895);
    /* 004d3895: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 004d389b: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 004d38a1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d38a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d38a8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_004d38ac:; BB(0x004d38ac);
    /* 004d38ac: je 0x4d3955 */ if (fZ) goto L_004d3955;
L_004d38b2:; BB(0x004d38b2);
    /* 004d38b2: fld dword ptr [ecx + 0x184] */ FPUSH(R_F32((u32)(r_ecx+0x184u)));
    /* 004d38b8: fsub dword ptr [ecx + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x178u));
    /* 004d38be: fadd dword ptr [edi + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x68u));
    /* 004d38c1: fld dword ptr [ecx + 0x188] */ FPUSH(R_F32((u32)(r_ecx+0x188u)));
    /* 004d38c7: fsub dword ptr [ecx + 0x17c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x17cu));
    /* 004d38cd: fld dword ptr [ecx + 0x18c] */ FPUSH(R_F32((u32)(r_ecx+0x18cu)));
    /* 004d38d3: fsub dword ptr [ecx + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x180u));
    /* 004d38d9: mov eax, dword ptr [edi + 0x178] */ r_eax = R32((u32)(r_edi+0x178u));
    /* 004d38df: mov edx, dword ptr [edi + 0x17c] */ r_edx = R32((u32)(r_edi+0x17cu));
    /* 004d38e5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d38e7: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004d38eb: fadd dword ptr [edi + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x6cu));
    /* 004d38ee: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004d38f2: fadd dword ptr [edi + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x70u));
    /* 004d38f5: mov dword ptr [0xa48780], eax */ W32((u32)(0xa48780u), r_eax);
    /* 004d38fa: mov eax, dword ptr [edi + 0x180] */ r_eax = R32((u32)(r_edi+0x180u));
    /* 004d3900: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004d3904: mov dword ptr [0xa48784], edx */ W32((u32)(0xa48784u), r_edx);
    /* 004d390a: mov dword ptr [0xa48788], eax */ W32((u32)(0xa48788u), r_eax);
    /* 004d390f: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004d3913: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x4d3918u); f_0082def4();
    /* 004d3918: fcomp dword ptr [0x9090d0] */ fx_compare(ST(0), R_F32((u32)(0x9090d0u))); FPOP();
    /* 004d391e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d3920: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d3921: je 0x4d392e */ if (fZ) goto L_004d392e;
L_004d3923:; BB(0x004d3923);
    /* 004d3923: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004d3927: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d392cu); f_0082df08();
    /* 004d392c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d392e:; BB(0x004d392e);
    /* 004d392e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 004d3932: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004d3936: mov dword ptr [0xa4878c], edx */ W32((u32)(0xa4878cu), r_edx);
    /* 004d393c: mov dword ptr [0xa48790], eax */ W32((u32)(0xa48790u), r_eax);
    /* 004d3941: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004d3945: mov dword ptr [0xa48794], eax */ W32((u32)(0xa48794u), r_eax);
    /* 004d394a: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004d394e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d3953u); f_0083173c();
    /* 004d3953: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d3955:; BB(0x004d3955);
    /* 004d3955: push 0xa48980 */ { u32 v = 0xa48980u; r_esp -= 4; W32(r_esp, v); }
    /* 004d395a: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 004d395f: call 0x782984 */ r_esp -= 4; W32(r_esp, 0x4d3964u); f_00782984();
    /* 004d3964: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d3967: mov ecx, edi */ r_ecx = r_edi;
    /* 004d3969: call 0x4d3fb0 */ r_esp -= 4; W32(r_esp, 0x4d396eu); f_004d3fb0();
    /* 004d396e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d3971: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d3972: ret  */ FN_RET(0x004d386c); r_esp += 4; return;
}

void f_004d3974(void) /* sub_4D3974 */
{
    FN_ENTER(0x004d3974);
    /* 004d3974: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3975: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d3976: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3977: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d397c: test al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d397e: je 0x4d3996 */ if (fZ) goto L_004d3996;
L_004d3980:; BB(0x004d3980);
    /* 004d3980: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3982: jne 0x4d3996 */ if (!fZ) goto L_004d3996;
L_004d3984:; BB(0x004d3984);
    /* 004d3984: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3989: jne 0x4d3996 */ if (!fZ) goto L_004d3996;
L_004d398b:; BB(0x004d398b);
    /* 004d398b: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3990: jne 0x4d3996 */ if (!fZ) goto L_004d3996;
L_004d3992:; BB(0x004d3992);
    /* 004d3992: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d3993: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d3994: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d3995: ret  */ FN_RET(0x004d3974); r_esp += 4; return;
L_004d3996:; BB(0x004d3996);
    /* 004d3996: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3998: jne 0x4d3a8c */ if (!fZ) goto L_004d3a8c;
L_004d399e:; BB(0x004d399e);
    /* 004d399e: test eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d39a3: je 0x4d3a97 */ if (fZ) goto L_004d3a97;
L_004d39a9:; BB(0x004d39a9);
    /* 004d39a9: movzx eax, byte ptr [0xa489f5] */ r_eax = (u32)R8((u32)(0xa489f5u));
    /* 004d39b0: call 0x4d3aa0 */ r_esp -= 4; W32(r_esp, 0x4d39b5u); f_004d3aa0();
    /* 004d39b5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d39bb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d39c0u); f_0068d5a8();
    /* 004d39c0: mov edi, eax */ r_edi = r_eax;
    /* 004d39c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d39c5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d39c7: je 0x4d3a97 */ if (fZ) goto L_004d3a97;
L_004d39cd:; BB(0x004d39cd);
    /* 004d39cd: movzx edx, byte ptr [0xa489f4] */ r_edx = (u32)R8((u32)(0xa489f4u));
    /* 004d39d4: mov ecx, dword ptr [edx*4 + 0xa48a00] */ r_ecx = R32((u32)(r_edx*4+0xa48a00u));
    /* 004d39db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d39dd: je 0x4d3a0e */ if (fZ) goto L_004d3a0e;
L_004d39df:; BB(0x004d39df);
    /* 004d39df: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d39e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d39e6: mov dword ptr [edx + 0x90], edi */ W32((u32)(r_edx+0x90u), r_edi);
    /* 004d39ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004d39ee: mov dword ptr [ecx + 0x1c], edi */ W32((u32)(r_ecx+0x1cu), r_edi);
    /* 004d39f1: movzx ebx, word ptr [edi + 0x1c] */ r_ebx = (u32)R16((u32)(r_edi+0x1cu));
    /* 004d39f5: mov word ptr [ecx + 0x20], bx */ W16((u32)(r_ecx+0x20u), (u16)r_ebx);
    /* 004d39f9: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x4d39fcu); call_ind(t); }
    /* 004d39fc: mov edx, dword ptr [0xa489fc] */ r_edx = R32((u32)(0xa489fcu));
    /* 004d3a02: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004d3a08: mov dword ptr [0xa489fc], edx */ W32((u32)(0xa489fcu), r_edx);
L_004d3a0e:; BB(0x004d3a0e);
    /* 004d3a0e: mov ebx, dword ptr [0xa48a00] */ r_ebx = R32((u32)(0xa48a00u));
    /* 004d3a14: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3a16: je 0x4d3a2b */ if (fZ) goto L_004d3a2b;
L_004d3a18:; BB(0x004d3a18);
    /* 004d3a18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3a19: mov dword ptr [ebx + 0x1c], edi */ W32((u32)(r_ebx+0x1cu), r_edi);
    /* 004d3a1c: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 004d3a20: mov word ptr [ebx + 0x20], dx */ W16((u32)(r_ebx+0x20u), (u16)r_edx);
    /* 004d3a24: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004d3a26: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d3a28: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x4d3a2bu); call_ind(t); }
L_004d3a2b:; BB(0x004d3a2b);
    /* 004d3a2b: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3a31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3a33: je 0x4d3a97 */ if (fZ) goto L_004d3a97;
L_004d3a35:; BB(0x004d3a35);
    /* 004d3a35: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004d3a38: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 004d3a3e: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 004d3a44: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004d3a47: mov dword ptr [edi + 0xd8], edx */ W32((u32)(r_edi+0xd8u), r_edx);
    /* 004d3a4d: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 004d3a50: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3a56: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 004d3a5c: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3a62: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 004d3a65: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004d3a6b: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 004d3a6e: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3a74: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 004d3a7a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d3a7f: mov ebx, dword ptr [ebx + 0x50] */ r_ebx = R32((u32)(r_ebx+0x50u));
    /* 004d3a82: mov dword ptr [eax + 0x10c], ebx */ W32((u32)(r_eax+0x10cu), r_ebx);
    /* 004d3a88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d3a89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d3a8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d3a8b: ret  */ FN_RET(0x004d3974); r_esp += 4; return;
L_004d3a8c:; BB(0x004d3a8c);
    /* 004d3a8c: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004d3a8f: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d3a92: call 0x4d3aa0 */ r_esp -= 4; W32(r_esp, 0x4d3a97u); f_004d3aa0();
L_004d3a97:; BB(0x004d3a97);
    /* 004d3a97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d3a98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d3a99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d3a9a: ret  */ FN_RET(0x004d3974); r_esp += 4; return;
}

void f_004d3aa0(void) /* sub_4D3AA0 */
{
    FN_ENTER(0x004d3aa0);
    /* 004d3aa0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004d3aa3: mov ecx, dword ptr [eax*4 + 0xa48a00] */ r_ecx = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d3aaa: mov byte ptr [0xa489f4], al */ W8((u32)(0xa489f4u), (u8)r_eax);
    /* 004d3aaf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3ab1: je 0x4d3ab8 */ if (fZ) goto L_004d3ab8;
L_004d3ab3:; BB(0x004d3ab3);
    /* 004d3ab3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004d3ab5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4d3ab8u); call_ind(t); }
L_004d3ab8:; BB(0x004d3ab8);
    /* 004d3ab8: ret  */ FN_RET(0x004d3aa0); r_esp += 4; return;
}

void f_004d3abc(void) /* sub_4D3ABC */
{
    FN_ENTER(0x004d3abc);
    /* 004d3abc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3abd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d3abe: mov esi, ecx */ r_esi = r_ecx;
    /* 004d3ac0: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d3ac7: mov ebp, dword ptr [eax*4 + 0xa48a00] */ r_ebp = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d3ace: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3ad0: je 0x4d3ba3 */ if (fZ) goto L_004d3ba3;
L_004d3ad6:; BB(0x004d3ad6);
    /* 004d3ad6: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d3adb: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3ae0: jne 0x4d3aef */ if (!fZ) goto L_004d3aef;
L_004d3ae2:; BB(0x004d3ae2);
    /* 004d3ae2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004d3ae5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d3ae7: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4d3aeau); call_ind(t); }
    /* 004d3aea: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
L_004d3aef:; BB(0x004d3aef);
    /* 004d3aef: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3af1: jne 0x4d3b06 */ if (!fZ) goto L_004d3b06;
L_004d3af3:; BB(0x004d3af3);
    /* 004d3af3: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3af8: je 0x4d3b10 */ if (fZ) goto L_004d3b10;
L_004d3afa:; BB(0x004d3afa);
    /* 004d3afa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d3afc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004d3aff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d3b01: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4d3b04u); call_ind(t); }
    /* 004d3b04: jmp 0x4d3b10 */ goto L_004d3b10;
L_004d3b06:; BB(0x004d3b06);
    /* 004d3b06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d3b08: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004d3b0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d3b0d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4d3b10u); call_ind(t); }
L_004d3b10:; BB(0x004d3b10);
    /* 004d3b10: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d3b12: call 0x4d1ff4 */ r_esp -= 4; W32(r_esp, 0x4d3b17u); f_004d1ff4();
    /* 004d3b17: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d3b1c: test eax, 0x820 */ {  u32 a = r_eax; u32 b = 0x820u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3b21: je 0x4d3b2c */ if (fZ) goto L_004d3b2c;
L_004d3b23:; BB(0x004d3b23);
    /* 004d3b23: mov ecx, esi */ r_ecx = r_esi;
    /* 004d3b25: call 0x4d3e90 */ r_esp -= 4; W32(r_esp, 0x4d3b2au); f_004d3e90();
    /* 004d3b2a: jmp 0x4d3b75 */ goto L_004d3b75;
L_004d3b2c:; BB(0x004d3b2c);
    /* 004d3b2c: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004d3b2f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3b31: je 0x4d3b3e */ if (fZ) goto L_004d3b3e;
L_004d3b33:; BB(0x004d3b33);
    /* 004d3b33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d3b34: mov ecx, esi */ r_ecx = r_esi;
    /* 004d3b36: call 0x4d3ba8 */ r_esp -= 4; W32(r_esp, 0x4d3b3bu); f_004d3ba8();
    /* 004d3b3b: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
L_004d3b3e:; BB(0x004d3b3e);
    /* 004d3b3e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3b40: jne 0x4d3b58 */ if (!fZ) goto L_004d3b58;
L_004d3b42:; BB(0x004d3b42);
    /* 004d3b42: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3b44: je 0x4d3b4f */ if (fZ) goto L_004d3b4f;
L_004d3b46:; BB(0x004d3b46);
    /* 004d3b46: mov ecx, esi */ r_ecx = r_esi;
    /* 004d3b48: call 0x4d3c98 */ r_esp -= 4; W32(r_esp, 0x4d3b4du); f_004d3c98();
    /* 004d3b4d: jmp 0x4d3b5f */ goto L_004d3b5f;
L_004d3b4f:; BB(0x004d3b4f);
    /* 004d3b4f: mov ecx, esi */ r_ecx = r_esi;
    /* 004d3b51: call 0x4d3e90 */ r_esp -= 4; W32(r_esp, 0x4d3b56u); f_004d3e90();
    /* 004d3b56: jmp 0x4d3b5f */ goto L_004d3b5f;
L_004d3b58:; BB(0x004d3b58);
    /* 004d3b58: mov ecx, esi */ r_ecx = r_esi;
    /* 004d3b5a: call 0x4d3d14 */ r_esp -= 4; W32(r_esp, 0x4d3b5fu); f_004d3d14();
L_004d3b5f:; BB(0x004d3b5f);
    /* 004d3b5f: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004d3b62: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3b64: je 0x4d3b6e */ if (fZ) goto L_004d3b6e;
L_004d3b66:; BB(0x004d3b66);
    /* 004d3b66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d3b67: mov ecx, esi */ r_ecx = r_esi;
    /* 004d3b69: call 0x4d3d6c */ r_esp -= 4; W32(r_esp, 0x4d3b6eu); f_004d3d6c();
L_004d3b6e:; BB(0x004d3b6e);
    /* 004d3b6e: mov ecx, esi */ r_ecx = r_esi;
    /* 004d3b70: call 0x4d3df4 */ r_esp -= 4; W32(r_esp, 0x4d3b75u); f_004d3df4();
L_004d3b75:; BB(0x004d3b75);
    /* 004d3b75: push 0x46a41000 */ { u32 v = 0x46a41000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d3b7a: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d3b7f: push 0x3f911112 */ { u32 v = 0x3f911112u; r_esp -= 4; W32(r_esp, v); }
    /* 004d3b84: mov ecx, dword ptr [esi + 0x19c] */ r_ecx = R32((u32)(r_esi+0x19cu));
    /* 004d3b8a: call 0x82ebc8 */ r_esp -= 4; W32(r_esp, 0x4d3b8fu); f_0082ebc8();
    /* 004d3b8f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004d3b92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d3b94: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x4d3b97u); call_ind(t); }
    /* 004d3b97: mov eax, dword ptr [esi + 0x194] */ r_eax = R32((u32)(r_esi+0x194u));
    /* 004d3b9d: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
L_004d3ba3:; BB(0x004d3ba3);
    /* 004d3ba3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d3ba4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d3ba5: ret  */ FN_RET(0x004d3abc); r_esp += 4; return;
}

void f_004d3ba8(void) /* sub_4D3BA8 */
{
    FN_ENTER(0x004d3ba8);
    /* 004d3ba8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3ba9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3baa: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d3bad: mov edi, ecx */ r_edi = r_ecx;
    /* 004d3baf: push 0x901 */ { u32 v = 0x901u; r_esp -= 4; W32(r_esp, v); }
    /* 004d3bb4: lea edx, [edi + 0x1c8] */ r_edx = (u32)(r_edi+0x1c8u);
    /* 004d3bba: lea eax, [edi + 0x1a0] */ r_eax = (u32)(r_edi+0x1a0u);
    /* 004d3bc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d3bc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d3bc2: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x4d3bc7u); f_0077fffc();
    /* 004d3bc7: mov esi, eax */ r_esi = r_eax;
    /* 004d3bc9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d3bcc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3bce: je 0x4d3c62 */ if (fZ) goto L_004d3c62;
L_004d3bd4:; BB(0x004d3bd4);
    /* 004d3bd4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d3bd7: fld dword ptr [edi + 0x1a0] */ FPUSH(R_F32((u32)(r_edi+0x1a0u)));
    /* 004d3bdd: fsub dword ptr [edi + 0x1c8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x1c8u));
    /* 004d3be3: fld dword ptr [edi + 0x1a4] */ FPUSH(R_F32((u32)(r_edi+0x1a4u)));
    /* 004d3be9: fsub dword ptr [edi + 0x1cc] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x1ccu));
    /* 004d3bef: fld dword ptr [edi + 0x1a8] */ FPUSH(R_F32((u32)(r_edi+0x1a8u)));
    /* 004d3bf5: fsub dword ptr [edi + 0x1d0] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x1d0u));
    /* 004d3bfb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d3bfd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d3c00: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d3c04: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d3c08: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d3c0du); f_0083173c();
    /* 004d3c0d: fcomp dword ptr [0x9090c0] */ fx_compare(ST(0), R_F32((u32)(0x9090c0u))); FPOP();
    /* 004d3c13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d3c15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d3c16: je 0x4d3c22 */ if (fZ) goto L_004d3c22;
L_004d3c18:; BB(0x004d3c18);
    /* 004d3c18: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d3c1b: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d3c20u); f_0082df08();
    /* 004d3c20: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d3c22:; BB(0x004d3c22);
    /* 004d3c22: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004d3c25: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004d3c27: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 004d3c2a: fstp dword ptr [edi + 0x1c8] */ W_F32((u32)(r_edi+0x1c8u), ST(0)); FPOP();
    /* 004d3c30: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004d3c33: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004d3c36: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 004d3c3a: fstp dword ptr [edi + 0x1cc] */ W_F32((u32)(r_edi+0x1ccu), ST(0)); FPOP();
    /* 004d3c40: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 004d3c43: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004d3c46: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 004d3c4a: mov dword ptr [edi + 0x174], 1 */ W32((u32)(r_edi+0x174u), 0x1u);
    /* 004d3c54: fstp dword ptr [edi + 0x1d0] */ W_F32((u32)(r_edi+0x1d0u), ST(0)); FPOP();
    /* 004d3c5a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d3c5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d3c5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d3c5f: ret 4 */ FN_RET(0x004d3ba8); r_esp += 8; return;
L_004d3c62:; BB(0x004d3c62);
    /* 004d3c62: mov eax, dword ptr [edi + 0x178] */ r_eax = R32((u32)(r_edi+0x178u));
    /* 004d3c68: mov edx, dword ptr [edi + 0x17c] */ r_edx = R32((u32)(r_edi+0x17cu));
    /* 004d3c6e: mov esi, dword ptr [edi + 0x180] */ r_esi = R32((u32)(r_edi+0x180u));
    /* 004d3c74: mov dword ptr [edi + 0x1c8], eax */ W32((u32)(r_edi+0x1c8u), r_eax);
    /* 004d3c7a: mov dword ptr [edi + 0x1cc], edx */ W32((u32)(r_edi+0x1ccu), r_edx);
    /* 004d3c80: mov dword ptr [edi + 0x1d0], esi */ W32((u32)(r_edi+0x1d0u), r_esi);
    /* 004d3c86: mov dword ptr [edi + 0x174], 0 */ W32((u32)(r_edi+0x174u), 0x0u);
    /* 004d3c90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d3c93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d3c94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d3c95: ret 4 */ FN_RET(0x004d3ba8); r_esp += 8; return;
}

void f_004d3c98(void) /* sub_4D3C98 */
{
    FN_ENTER(0x004d3c98);
    /* 004d3c98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d3c99: mov eax, dword ptr [ecx + 0x1a0] */ r_eax = R32((u32)(r_ecx+0x1a0u));
    /* 004d3c9f: mov edx, dword ptr [ecx + 0x1a4] */ r_edx = R32((u32)(r_ecx+0x1a4u));
    /* 004d3ca5: mov ebp, dword ptr [ecx + 0x1a8] */ r_ebp = R32((u32)(r_ecx+0x1a8u));
    /* 004d3cab: mov dword ptr [ecx + 0x178], eax */ W32((u32)(r_ecx+0x178u), r_eax);
    /* 004d3cb1: mov dword ptr [ecx + 0x17c], edx */ W32((u32)(r_ecx+0x17cu), r_edx);
    /* 004d3cb7: mov dword ptr [ecx + 0x180], ebp */ W32((u32)(r_ecx+0x180u), r_ebp);
    /* 004d3cbd: mov dword ptr [ecx + 0x1c8], eax */ W32((u32)(r_ecx+0x1c8u), r_eax);
    /* 004d3cc3: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d3cca: mov eax, dword ptr [eax*4 + 0xa48a00] */ r_eax = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d3cd1: mov dword ptr [ecx + 0x1cc], edx */ W32((u32)(r_ecx+0x1ccu), r_edx);
    /* 004d3cd7: mov dword ptr [ecx + 0x1d0], ebp */ W32((u32)(r_ecx+0x1d0u), r_ebp);
    /* 004d3cdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3cdf: je 0x4d3cf4 */ if (fZ) goto L_004d3cf4;
L_004d3ce1:; BB(0x004d3ce1);
    /* 004d3ce1: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 004d3ce4: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3ce6: jne 0x4d3cf4 */ if (!fZ) goto L_004d3cf4;
L_004d3ce8:; BB(0x004d3ce8);
    /* 004d3ce8: mov eax, dword ptr [ecx + 0x1b0] */ r_eax = R32((u32)(r_ecx+0x1b0u));
    /* 004d3cee: mov dword ptr [ecx + 0x188], eax */ W32((u32)(r_ecx+0x188u), r_eax);
L_004d3cf4:; BB(0x004d3cf4);
    /* 004d3cf4: push dword ptr [ecx + 0x1bc] */ { u32 v = R32((u32)(r_ecx+0x1bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d3cfa: lea edx, [ecx + 0x184] */ r_edx = (u32)(r_ecx+0x184u);
    /* 004d3d00: lea eax, [ecx + 0x1ac] */ r_eax = (u32)(r_ecx+0x1acu);
    /* 004d3d06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d08: call 0x4d63b0 */ r_esp -= 4; W32(r_esp, 0x4d3d0du); f_004d63b0();
    /* 004d3d0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d3d10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d3d11: ret  */ FN_RET(0x004d3c98); r_esp += 4; return;
}

void f_004d3d14(void) /* sub_4D3D14 */
{
    FN_ENTER(0x004d3d14);
    /* 004d3d14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d15: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d3d17: mov eax, dword ptr [0xa48a44] */ r_eax = R32((u32)(0xa48a44u));
    /* 004d3d1c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3d1e: je 0x4d3d33 */ if (fZ) goto L_004d3d33;
L_004d3d20:; BB(0x004d3d20);
    /* 004d3d20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d3d22: call 0x4d3e90 */ r_esp -= 4; W32(r_esp, 0x4d3d27u); f_004d3e90();
    /* 004d3d27: mov dword ptr [0xa48a44], 0 */ W32((u32)(0xa48a44u), 0x0u);
    /* 004d3d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d3d32: ret  */ FN_RET(0x004d3d14); r_esp += 4; return;
L_004d3d33:; BB(0x004d3d33);
    /* 004d3d33: push dword ptr [ebp + 0x1b8] */ { u32 v = R32((u32)(r_ebp+0x1b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d3d39: lea edx, [ebp + 0x178] */ r_edx = (u32)(r_ebp+0x178u);
    /* 004d3d3f: lea eax, [ebp + 0x1a0] */ r_eax = (u32)(r_ebp+0x1a0u);
    /* 004d3d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d47: call 0x4d63b0 */ r_esp -= 4; W32(r_esp, 0x4d3d4cu); f_004d63b0();
    /* 004d3d4c: push dword ptr [ebp + 0x1bc] */ { u32 v = R32((u32)(r_ebp+0x1bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d3d52: lea edx, [ebp + 0x184] */ r_edx = (u32)(r_ebp+0x184u);
    /* 004d3d58: lea eax, [ebp + 0x1ac] */ r_eax = (u32)(r_ebp+0x1acu);
    /* 004d3d5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d60: call 0x4d63b0 */ r_esp -= 4; W32(r_esp, 0x4d3d65u); f_004d63b0();
    /* 004d3d65: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d3d68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d3d69: ret  */ FN_RET(0x004d3d14); r_esp += 4; return;
}

void f_004d3d6c(void) /* sub_4D3D6C */
{
    FN_ENTER(0x004d3d6c);
    /* 004d3d6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d6d: mov edi, ecx */ r_edi = r_ecx;
    /* 004d3d6f: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x4d3d74u); f_007bb6d0();
    /* 004d3d74: mov eax, dword ptr [edi + 0x174] */ r_eax = R32((u32)(r_edi+0x174u));
    /* 004d3d7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3d7c: je 0x4d3dee */ if (fZ) goto L_004d3dee;
L_004d3d7e:; BB(0x004d3d7e);
    /* 004d3d7e: push 0x901 */ { u32 v = 0x901u; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d83: lea edx, [edi + 0x184] */ r_edx = (u32)(r_edi+0x184u);
    /* 004d3d89: lea eax, [edi + 0x178] */ r_eax = (u32)(r_edi+0x178u);
    /* 004d3d8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d3d91: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x4d3d96u); f_0077fffc();
    /* 004d3d96: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d3d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3d9b: je 0x4d3dee */ if (fZ) goto L_004d3dee;
L_004d3d9d:; BB(0x004d3d9d);
    /* 004d3d9d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004d3da0: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004d3da2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004d3da4: mov dword ptr [edi + 0x178], edx */ W32((u32)(r_edi+0x178u), r_edx);
    /* 004d3daa: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004d3dad: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004d3db0: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004d3db3: mov dword ptr [edi + 0x17c], edx */ W32((u32)(r_edi+0x17cu), r_edx);
    /* 004d3db9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004d3dbc: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 004d3dbf: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 004d3dc2: mov dword ptr [edi + 0x180], edx */ W32((u32)(r_edi+0x180u), r_edx);
    /* 004d3dc8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004d3dcb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d3dcd: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 004d3dd0: fstp dword ptr [edi + 0x1c8] */ W_F32((u32)(r_edi+0x1c8u), ST(0)); FPOP();
    /* 004d3dd6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004d3dd9: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 004d3ddc: fstp dword ptr [edi + 0x1cc] */ W_F32((u32)(r_edi+0x1ccu), ST(0)); FPOP();
    /* 004d3de2: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004d3de5: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 004d3de8: fstp dword ptr [edi + 0x1d0] */ W_F32((u32)(r_edi+0x1d0u), ST(0)); FPOP();
L_004d3dee:; BB(0x004d3dee);
    /* 004d3dee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d3def: ret 4 */ FN_RET(0x004d3d6c); r_esp += 8; return;
}

void f_004d3df4(void) /* sub_4D3DF4 */
{
    FN_ENTER(0x004d3df4);
    /* 004d3df4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3df5: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d3df8: mov edi, ecx */ r_edi = r_ecx;
    /* 004d3dfa: mov eax, dword ptr [edi + 0x1c0] */ r_eax = R32((u32)(r_edi+0x1c0u));
    /* 004d3e00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 004d3e02: jbe 0x4d3e8b */ if ((fC||fZ)) goto L_004d3e8b;
L_004d3e08:; BB(0x004d3e08);
    /* 004d3e08: mov dword ptr [edi + 0x68], 0 */ W32((u32)(r_edi+0x68u), 0x0u);
    /* 004d3e0f: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 004d3e12: mov dword ptr [edi + 0x1c0], edx */ W32((u32)(r_edi+0x1c0u), r_edx);
    /* 004d3e18: lea eax, [eax + eax*4 - 5] */ r_eax = (u32)(r_eax+r_eax*4+0xfffffffbu);
    /* 004d3e1c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004d3e1f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d3e22: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d3e24: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d3e26: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d3e28: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d3e2c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d3e30: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004d3e33: fmul dword ptr [0x9090b8] */ ST(0) = ST(0) * R_F32((u32)(0x9090b8u));
    /* 004d3e39: fdiv dword ptr [0x9090b4] */ ST(0) = ST(0) / R_F32((u32)(0x9090b4u));
    /* 004d3e3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d3e41: fadd dword ptr [edx*4 + 0x909028] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x909028u));
    /* 004d3e48: fmul dword ptr [edi + 0x1c4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x1c4u));
    /* 004d3e4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d3e50: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004d3e54: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004d3e59: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d3e5e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d3e62: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d3e66: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d3e6a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d3e6e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004d3e72: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004d3e76: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d3e7bu); f_0082dcbc();
    /* 004d3e7b: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004d3e7f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d3e81: fstp dword ptr [edi + 0x6c] */ W_F32((u32)(r_edi+0x6cu), ST(0)); FPOP();
    /* 004d3e84: mov dword ptr [edi + 0x70], 0 */ W32((u32)(r_edi+0x70u), 0x0u);
L_004d3e8b:; BB(0x004d3e8b);
    /* 004d3e8b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d3e8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d3e8f: ret  */ FN_RET(0x004d3df4); r_esp += 4; return;
}

void f_004d3e90(void) /* sub_4D3E90 */
{
    FN_ENTER(0x004d3e90);
    /* 004d3e90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3e91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3e92: mov esi, ecx */ r_esi = r_ecx;
    /* 004d3e94: mov eax, dword ptr [esi + 0x1a0] */ r_eax = R32((u32)(r_esi+0x1a0u));
    /* 004d3e9a: mov edx, dword ptr [esi + 0x1a4] */ r_edx = R32((u32)(r_esi+0x1a4u));
    /* 004d3ea0: mov ecx, dword ptr [esi + 0x1a8] */ r_ecx = R32((u32)(r_esi+0x1a8u));
    /* 004d3ea6: mov edi, dword ptr [esi + 0x1ac] */ r_edi = R32((u32)(r_esi+0x1acu));
    /* 004d3eac: mov dword ptr [esi + 0x178], eax */ W32((u32)(r_esi+0x178u), r_eax);
    /* 004d3eb2: mov dword ptr [esi + 0x17c], edx */ W32((u32)(r_esi+0x17cu), r_edx);
    /* 004d3eb8: mov dword ptr [esi + 0x180], ecx */ W32((u32)(r_esi+0x180u), r_ecx);
    /* 004d3ebe: mov dword ptr [esi + 0x184], edi */ W32((u32)(r_esi+0x184u), r_edi);
    /* 004d3ec4: mov edi, dword ptr [esi + 0x1b0] */ r_edi = R32((u32)(r_esi+0x1b0u));
    /* 004d3eca: mov dword ptr [esi + 0x188], edi */ W32((u32)(r_esi+0x188u), r_edi);
    /* 004d3ed0: mov edi, dword ptr [esi + 0x1b4] */ r_edi = R32((u32)(r_esi+0x1b4u));
    /* 004d3ed6: mov dword ptr [esi + 0x18c], edi */ W32((u32)(r_esi+0x18cu), r_edi);
    /* 004d3edc: mov dword ptr [esi + 0x1c8], eax */ W32((u32)(r_esi+0x1c8u), r_eax);
    /* 004d3ee2: mov dword ptr [esi + 0x1cc], edx */ W32((u32)(r_esi+0x1ccu), r_edx);
    /* 004d3ee8: mov dword ptr [esi + 0x1d0], ecx */ W32((u32)(r_esi+0x1d0u), r_ecx);
    /* 004d3eee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d3eef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d3ef0: ret  */ FN_RET(0x004d3e90); r_esp += 4; return;
}

void f_004d3ef4(void) /* sub_4D3EF4 */
{
    FN_ENTER(0x004d3ef4);
    /* 004d3ef4: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d3ef9: and eax, 0xfffff75f */ {  u32 a = r_eax; u32 b = 0xfffff75fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d3efe: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3f00: je 0x4d3f0c */ if (fZ) goto L_004d3f0c;
L_004d3f02:; BB(0x004d3f02);
    /* 004d3f02: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d3f05: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d3f0a: jmp 0x4d3f1d */ goto L_004d3f1d;
L_004d3f0c:; BB(0x004d3f0c);
    /* 004d3f0c: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3f11: je 0x4d3f1d */ if (fZ) goto L_004d3f1d;
L_004d3f13:; BB(0x004d3f13);
    /* 004d3f13: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d3f18: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_004d3f1d:; BB(0x004d3f1d);
    /* 004d3f1d: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d3f1f: je 0x4d3f2b */ if (fZ) goto L_004d3f2b;
L_004d3f21:; BB(0x004d3f21);
    /* 004d3f21: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d3f24: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
    /* 004d3f29: jmp 0x4d3f30 */ goto L_004d3f30;
L_004d3f2b:; BB(0x004d3f2b);
    /* 004d3f2b: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
L_004d3f30:; BB(0x004d3f30);
    /* 004d3f30: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3f35: jne 0x4d3fae */ if (!fZ) goto L_004d3fae;
L_004d3f37:; BB(0x004d3f37);
    /* 004d3f37: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3f3c: jne 0x4d3fae */ if (!fZ) goto L_004d3fae;
L_004d3f3e:; BB(0x004d3f3e);
    /* 004d3f3e: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3f44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3f46: je 0x4d3fae */ if (fZ) goto L_004d3fae;
L_004d3f48:; BB(0x004d3f48);
    /* 004d3f48: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 004d3f4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3f51: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004d3f54: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004d3f57: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 004d3f5e: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004d3f61: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 004d3f64: mov word ptr [edx + 0x64], ax */ W16((u32)(r_edx+0x64u), (u16)r_eax);
    /* 004d3f68: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 004d3f6f: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 004d3f76: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
    /* 004d3f7d: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 004d3f84: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 004d3f8b: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 004d3f92: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 004d3f99: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 004d3fa0: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 004d3fa7: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
L_004d3fae:; BB(0x004d3fae);
    /* 004d3fae: ret  */ FN_RET(0x004d3ef4); r_esp += 4; return;
}

void f_004d3fb0(void) /* sub_4D3FB0 */
{
    FN_ENTER(0x004d3fb0);
    /* 004d3fb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d3fb1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d3fb4: mov edi, ecx */ r_edi = r_ecx;
    /* 004d3fb6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d3fbb: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 004d3fc2: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004d3fca: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004d3fd2: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004d3fda: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 004d3fe2: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004d3fea: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d3fefu); f_0082d990();
    /* 004d3fef: mov edx, dword ptr [edi + 0x194] */ r_edx = R32((u32)(r_edi+0x194u));
    /* 004d3ff5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d3ff7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d3ffcu); f_0082d8bc();
    /* 004d3ffc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004d3fff: push 0xa489e8 */ { u32 v = 0xa489e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4005: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x4d400au); f_0083a610();
    /* 004d400a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d400d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d4012u); f_0082da80();
    /* 004d4012: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d4017: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d401cu); f_0082d990();
    /* 004d401c: mov edx, dword ptr [edi + 0x190] */ r_edx = R32((u32)(r_edi+0x190u));
    /* 004d4022: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4024: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4d4029u); f_0082e9e4();
    /* 004d4029: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004d402d: push 0xa489dc */ { u32 v = 0xa489dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004d4032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4033: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x4d4038u); f_0083a610();
    /* 004d4038: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d403b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d4040u); f_0082da80();
    /* 004d4040: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d4043: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d4044: ret  */ FN_RET(0x004d3fb0); r_esp += 4; return;
}

