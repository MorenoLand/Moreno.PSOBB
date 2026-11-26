#include "protos.h"

void f_008a60dd(void) /* sub_8A60DD */
{
    FN_ENTER(0x008a60dd);
    /* 008a60dd: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a60e2: je 0x8a60f7 */ if (fZ) goto L_008a60f7;
L_008a60e4:; BB(0x008a60e4);
    /* 008a60e4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a60e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a60ea: je 0x8a60f7 */ if (fZ) goto L_008a60f7;
L_008a60ec:; BB(0x008a60ec);
    /* 008a60ec: fld qword ptr [esp + 0xc] */ FPUSH(R_F64((u32)(r_esp+0xcu)));
    /* 008a60f0: or dword ptr [eax + 8], 1 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a60f4: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
L_008a60f7:; BB(0x008a60f7);
    /* 008a60f7: ret  */ FN_RET(0x008a60dd); r_esp += 4; return;
}

void f_008a60f8(void) /* sub_8A60F8 */
{
    FN_ENTER(0x008a60f8);
    /* 008a60f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a60f9: mov ebp, esp */ r_ebp = r_esp;
    /* 008a60fb: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a60ff: je 0x8a6197 */ if (fZ) goto L_008a6197;
L_008a6105:; BB(0x008a6105);
    /* 008a6105: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6106: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a6109: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a610b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a610c: je 0x8a6195 */ if (fZ) goto L_008a6195;
L_008a6112:; BB(0x008a6112);
    /* 008a6112: mov dl, byte ptr [ebp + 0x24] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 008a6115: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008a6118: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008a611b: mov cl, byte ptr [ebp + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 008a611e: mov byte ptr [esi + 0x1a], dl */ W8((u32)(r_esi+0x1au), (u8)r_edx);
    /* 008a6121: mov dl, byte ptr [ebp + 0x28] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x28u))) & 0xffu);
    /* 008a6124: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008a6127: mov al, byte ptr [ebp + 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x1cu))) & 0xffu);
    /* 008a612a: cmp al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a612c: mov byte ptr [esi + 0x1b], dl */ W8((u32)(r_esi+0x1bu), (u8)r_edx);
    /* 008a612f: mov dl, byte ptr [ebp + 0x20] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x20u))) & 0xffu);
    /* 008a6132: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008a6134: mov byte ptr [esi + 0x18], cl */ W8((u32)(r_esi+0x18u), (u8)r_ecx);
    /* 008a6137: mov byte ptr [esi + 0x19], al */ W8((u32)(r_esi+0x19u), (u8)r_eax);
    /* 008a613a: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 008a613d: je 0x8a6149 */ if (fZ) goto L_008a6149;
L_008a613f:; BB(0x008a613f);
    /* 008a613f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6141: je 0x8a6149 */ if (fZ) goto L_008a6149;
L_008a6143:; BB(0x008a6143);
    /* 008a6143: mov byte ptr [esi + 0x1d], 3 */ W8((u32)(r_esi+0x1du), 0x3u);
    /* 008a6147: jmp 0x8a614d */ goto L_008a614d;
L_008a6149:; BB(0x008a6149);
    /* 008a6149: mov byte ptr [esi + 0x1d], 1 */ W8((u32)(r_esi+0x1du), 0x1u);
L_008a614d:; BB(0x008a614d);
    /* 008a614d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a614f: je 0x8a6154 */ if (fZ) goto L_008a6154;
L_008a6151:; BB(0x008a6151);
    /* 008a6151: inc byte ptr [esi + 0x1d] */ { u32 ad = (u32)(r_esi+0x1du); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_008a6154:; BB(0x008a6154);
    /* 008a6154: mov al, byte ptr [esi + 0x1d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1du))) & 0xffu);
    /* 008a6157: imul cl */ { i32 t = (i32)(i8)r_eax * (i32)(i8)(u8)r_ecx; r_eax = (r_eax & 0xffff0000u) | ((u32)t & 0xffffu); fC = fO = (t != (i32)(i8)t); }
    /* 008a6159: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 008a615c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a615d: mov byte ptr [esi + 0x1e], al */ W8((u32)(r_esi+0x1eu), (u8)r_eax);
    /* 008a6160: lea ebx, [ecx + 7] */ r_ebx = (u32)(r_ecx+0x7u);
    /* 008a6163: sar ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008a6166: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a6168: mov eax, 0x7fffffff */ r_eax = 0x7fffffffu;
    /* 008a616d: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x008a616d, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a616d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a616f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a6170: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a6172: jbe 0x8a6189 */ if ((fC||fZ)) goto L_008a6189;
L_008a6174:; BB(0x008a6174);
    /* 008a6174: push 0x99d9b4 */ { u32 v = 0x99d9b4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a6179: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a617c: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8a6181u); f_008a3f0e();
    /* 008a6181: and dword ptr [esi + 0xc], 0 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a6185: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a6186: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a6187: jmp 0x8a6195 */ goto L_008a6195;
L_008a6189:; BB(0x008a6189);
    /* 008a6189: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a618c: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a618f: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a6192: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
L_008a6195:; BB(0x008a6195);
    /* 008a6195: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a6196: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a6197:; BB(0x008a6197);
    /* 008a6197: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a6198: ret  */ FN_RET(0x008a60f8); r_esp += 4; return;
}

void f_008a6199(void) /* sub_8A6199 */
{
    FN_ENTER(0x008a6199);
    /* 008a6199: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a619e: je 0x8a61bc */ if (fZ) goto L_008a61bc;
L_008a61a0:; BB(0x008a61a0);
    /* 008a61a0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a61a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a61a6: je 0x8a61bc */ if (fZ) goto L_008a61bc;
L_008a61a8:; BB(0x008a61a8);
    /* 008a61a8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008a61ac: or dword ptr [eax + 8], 8 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a61b0: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008a61b3: mov cx, word ptr [esp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esp+0x10u))) & 0xffffu);
    /* 008a61b8: mov word ptr [eax + 0x14], cx */ W16((u32)(r_eax+0x14u), (u16)r_ecx);
L_008a61bc:; BB(0x008a61bc);
    /* 008a61bc: ret  */ FN_RET(0x008a6199); r_esp += 4; return;
}

void f_008a61bd(void) /* sub_8A61BD */
{
    FN_ENTER(0x008a61bd);
    /* 008a61bd: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a61c2: je 0x8a61d7 */ if (fZ) goto L_008a61d7;
L_008a61c4:; BB(0x008a61c4);
    /* 008a61c4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a61c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a61ca: je 0x8a61d7 */ if (fZ) goto L_008a61d7;
L_008a61cc:; BB(0x008a61cc);
    /* 008a61cc: mov cl, byte ptr [esp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0xcu))) & 0xffu);
    /* 008a61d0: or byte ptr [eax + 9], 8 */ { u32 ad = (u32)(r_eax+0x9u);  u32 a = R8(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a61d4: mov byte ptr [eax + 0x2c], cl */ W8((u32)(r_eax+0x2cu), (u8)r_ecx);
L_008a61d7:; BB(0x008a61d7);
    /* 008a61d7: ret  */ FN_RET(0x008a61bd); r_esp += 4; return;
}

void f_008a61d8(void) /* sub_8A61D8 */
{
    FN_ENTER(0x008a61d8);
    /* 008a61d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a61d9: mov ebp, esp */ r_ebp = r_esp;
    /* 008a61db: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a61df: je 0x8a620f */ if (fZ) goto L_008a620f;
L_008a61e1:; BB(0x008a61e1);
    /* 008a61e1: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a61e5: je 0x8a620f */ if (fZ) goto L_008a620f;
L_008a61e7:; BB(0x008a61e7);
    /* 008a61e7: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a61ea: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a61ed: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a61f0: call 0x8a61bd */ r_esp -= 4; W32(r_esp, 0x8a61f5u); f_008a61bd();
    /* 008a61f5: fld qword ptr [0x99d9f8] */ FPUSH(R_F64((u32)(0x99d9f8u)));
    /* 008a61fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a61fe: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008a6201: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a6204: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a6207: call 0x8a60dd */ r_esp -= 4; W32(r_esp, 0x8a620cu); f_008a60dd();
    /* 008a620c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008a620f:; BB(0x008a620f);
    /* 008a620f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a6210: ret  */ FN_RET(0x008a61d8); r_esp += 4; return;
}

void f_008a6211(void) /* sub_8A6211 */
{
    FN_ENTER(0x008a6211);
    /* 008a6211: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a6212: mov ebp, esp */ r_ebp = r_esp;
    /* 008a6214: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a6218: je 0x8a6256 */ if (fZ) goto L_008a6256;
L_008a621a:; BB(0x008a621a);
    /* 008a621a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a621d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a621f: je 0x8a6256 */ if (fZ) goto L_008a6256;
L_008a6221:; BB(0x008a6221);
    /* 008a6221: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008a6224: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6226: je 0x8a622b */ if (fZ) goto L_008a622b;
L_008a6228:; BB(0x008a6228);
    /* 008a6228: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
L_008a622b:; BB(0x008a622b);
    /* 008a622b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a622c: mov esi, dword ptr [ebp + 0x18] */ r_esi = R32((u32)(r_ebp+0x18u));
    /* 008a622f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6231: je 0x8a6249 */ if (fZ) goto L_008a6249;
L_008a6233:; BB(0x008a6233);
    /* 008a6233: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6237: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6238: lea edi, [eax + 0x34] */ r_edi = (u32)(r_eax+0x34u);
    /* 008a623b: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a623c: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a623d: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
    /* 008a623f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a6240: jne 0x8a6249 */ if (!fZ) goto L_008a6249;
L_008a6242:; BB(0x008a6242);
    /* 008a6242: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
L_008a6249:; BB(0x008a6249);
    /* 008a6249: mov cx, word ptr [ebp + 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x14u))) & 0xffffu);
    /* 008a624d: or dword ptr [eax + 8], 0x10 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a6251: mov word ptr [eax + 0x16], cx */ W16((u32)(r_eax+0x16u), (u16)r_ecx);
    /* 008a6255: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a6256:; BB(0x008a6256);
    /* 008a6256: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a6257: ret  */ FN_RET(0x008a6211); r_esp += 4; return;
}

void f_008a6258(void) /* sub_8A6258 */
{
    FN_ENTER(0x008a6258);
    /* 008a6258: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a625c: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 008a625f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6261: je 0x8a6272 */ if (fZ) goto L_008a6272;
L_008a6263:; BB(0x008a6263);
    /* 008a6263: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a6267: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a626b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a626c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8a626eu); call_ind(t); }
    /* 008a626e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a6271: ret  */ FN_RET(0x008a6258); r_esp += 4; return;
L_008a6272:; BB(0x008a6272);
    /* 008a6272: push 0x99da00 */ { u32 v = 0x99da00u; r_esp -= 4; W32(r_esp, v); }
    /* 008a6277: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a6278: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a627du); f_008a3ef0();
    /* 008a627d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a627e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a627f: ret  */ FN_RET(0x008a6258); r_esp += 4; return;
}

void f_008a6280(void) /* sub_8A6280 */
{
    FN_ENTER(0x008a6280);
    /* 008a6280: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a6284: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6285: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a6289: cmp dword ptr [esi + 0x4c], 0 */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a628d: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 008a6290: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008a6294: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 008a6297: je 0x8a62b6 */ if (fZ) goto L_008a62b6;
L_008a6299:; BB(0x008a6299);
    /* 008a6299: and dword ptr [esi + 0x4c], 0 */ { u32 ad = (u32)(r_esi+0x4cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a629d: push 0x99da50 */ { u32 v = 0x99da50u; r_esp -= 4; W32(r_esp, v); }
    /* 008a62a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a62a3: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8a62a8u); f_008a3f0e();
    /* 008a62a8: push 0x99da1c */ { u32 v = 0x99da1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a62ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a62ae: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8a62b3u); f_008a3f0e();
    /* 008a62b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a62b6:; BB(0x008a62b6);
    /* 008a62b6: and dword ptr [esi + 0x120], 0 */ { u32 ad = (u32)(r_esi+0x120u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a62bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a62be: ret  */ FN_RET(0x008a6280); r_esp += 4; return;
}

void f_008a62bf(void) /* sub_8A62BF */
{
    FN_ENTER(0x008a62bf);
    /* 008a62bf: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008a62c3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a62c5: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a62c6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a62c8: jbe 0x8a62ce */ if ((fC||fZ)) goto L_008a62ce;
L_008a62ca:; BB(0x008a62ca);
    /* 008a62ca: mov ecx, edx */ r_ecx = r_edx;
    /* 008a62cc: jmp 0x8a62d3 */ goto L_008a62d3;
L_008a62ce:; BB(0x008a62ce);
    /* 008a62ce: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a62d1: jb 0x8a62dc */ if (fC) goto L_008a62dc;
L_008a62d3:; BB(0x008a62d3);
    /* 008a62d3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a62d7: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a62da: jbe 0x8a62df */ if ((fC||fZ)) goto L_008a62df;
L_008a62dc:; BB(0x008a62dc);
    /* 008a62dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a62de: ret  */ FN_RET(0x008a62bf); r_esp += 4; return;
L_008a62df:; BB(0x008a62df);
    /* 008a62df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a62e0: lea esi, [eax + ecx] */ r_esi = (u32)(r_eax+r_ecx);
    /* 008a62e3: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a62e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a62e6: jbe 0x8a62ec */ if ((fC||fZ)) goto L_008a62ec;
L_008a62e8:; BB(0x008a62e8);
    /* 008a62e8: mov ecx, edx */ r_ecx = r_edx;
    /* 008a62ea: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008a62ec:; BB(0x008a62ec);
    /* 008a62ec: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008a62f0: lea edi, [eax + 0x99da94] */ r_edi = (u32)(r_eax+0x99da94u);
    /* 008a62f6: lea esi, [edx + eax] */ r_esi = (u32)(r_edx+r_eax);
    /* 008a62f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a62fb: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a62fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a62fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a62ff: je 0x8a6306 */ if (fZ) goto L_008a6306;
L_008a6301:; BB(0x008a6301);
    /* 008a6301: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 008a6303: sbb eax, -1 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
L_008a6306:; BB(0x008a6306);
    /* 008a6306: ret  */ FN_RET(0x008a62bf); r_esp += 4; return;
}

void f_008a6307(void) /* sub_8A6307 */
{
    FN_ENTER(0x008a6307);
    /* 008a6307: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6308: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008a630c: imul esi, dword ptr [esp + 0x10] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_esp+0x10u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a6311: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6312: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a6316: call 0x8aa89f */ r_esp -= 4; W32(r_esp, 0x8a631bu); f_008aa89f();
    /* 008a631b: mov edx, eax */ r_edx = r_eax;
    /* 008a631d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a631e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a6320: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a6322: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a6323: je 0x8a6358 */ if (fZ) goto L_008a6358;
L_008a6325:; BB(0x008a6325);
    /* 008a6325: cmp esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a632b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a632c: mov edi, edx */ r_edi = r_edx;
    /* 008a632e: jbe 0x8a6345 */ if ((fC||fZ)) goto L_008a6345;
L_008a6330:; BB(0x008a6330);
    /* 008a6330: mov ecx, 0x2000 */ r_ecx = 0x2000u;
    /* 008a6335: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a6337: lea ecx, [esi - 0x8000] */ r_ecx = (u32)(r_esi+0xffff8000u);
    /* 008a633d: lea edi, [edx + 0x8000] */ r_edi = (u32)(r_edx+0x8000u);
    /* 008a6343: jmp 0x8a6347 */ goto L_008a6347;
L_008a6345:; BB(0x008a6345);
    /* 008a6345: mov ecx, esi */ r_ecx = r_esi;
L_008a6347:; BB(0x008a6347);
    /* 008a6347: mov esi, ecx */ r_esi = r_ecx;
    /* 008a6349: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a634c: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a634e: mov ecx, esi */ r_ecx = r_esi;
    /* 008a6350: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a6353: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a6355: mov eax, edx */ r_eax = r_edx;
    /* 008a6357: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008a6358:; BB(0x008a6358);
    /* 008a6358: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a6359: ret  */ FN_RET(0x008a6307); r_esp += 4; return;
}

void f_008a635f(void) /* sub_8A635F */
{
    FN_ENTER(0x008a635f);
    /* 008a635f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a6361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6362: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6363: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6364: call 0x8abc4a */ r_esp -= 4; W32(r_esp, 0x8a6369u); f_008abc4a();
    /* 008a6369: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008a636d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a6370: mov dword ptr [ecx + 0x100], eax */ W32((u32)(r_ecx+0x100u), r_eax);
    /* 008a6376: ret  */ FN_RET(0x008a635f); r_esp += 4; return;
}

void f_008a63b6(void) /* sub_8A63B6 */
{
    FN_ENTER(0x008a63b6);
    /* 008a63b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a63b7: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008a63bb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a63bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a63be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a63c0: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a63c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a63c3: ret  */ FN_RET(0x008a63b6); r_esp += 4; return;
}

void f_008a63c4(void) /* sub_8A63C4 */
{
    FN_ENTER(0x008a63c4);
    /* 008a63c4: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a63c9: jne 0x8a63ce */ if (!fZ) goto L_008a63ce;
L_008a63cb:; BB(0x008a63cb);
    /* 008a63cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a63cd: ret  */ FN_RET(0x008a63c4); r_esp += 4; return;
L_008a63ce:; BB(0x008a63ce);
    /* 008a63ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a63d0: call 0x8aa850 */ r_esp -= 4; W32(r_esp, 0x8a63d5u); f_008aa850();
    /* 008a63d5: mov edx, eax */ r_edx = r_eax;
    /* 008a63d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a63d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a63da: je 0x8a63e7 */ if (fZ) goto L_008a63e7;
L_008a63dc:; BB(0x008a63dc);
    /* 008a63dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a63dd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a63df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a63e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a63e2: mov edi, edx */ r_edi = r_edx;
    /* 008a63e4: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a63e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008a63e7:; BB(0x008a63e7);
    /* 008a63e7: mov eax, edx */ r_eax = r_edx;
    /* 008a63e9: ret  */ FN_RET(0x008a63c4); r_esp += 4; return;
}

void f_008a63ea(void) /* sub_8A63EA */
{
    FN_ENTER(0x008a63ea);
    /* 008a63ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a63eb: mov ebp, esp */ r_ebp = r_esp;
    /* 008a63ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a63ee: fld dword ptr [0x99bac8] */ FPUSH(R_F32((u32)(0x99bac8u)));
    /* 008a63f4: mov dx, cx */ r_edx = (r_edx & 0xffff0000u) | (((u16)r_ecx) & 0xffffu);
    /* 008a63f7: shr dx, 0xb */ { u32 c = (11u) & 31; u32 a = (u16)r_edx; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 008a63fb: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 008a63fe: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008a6401: mov edx, ecx */ r_edx = r_ecx;
    /* 008a6403: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a6406: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 008a6409: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a640c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008a640f: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a6412: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6414: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a6416: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 008a6419: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a641c: fmul dword ptr [0x99bac4] */ ST(0) = ST(0) * R_F32((u32)(0x99bac4u));
    /* 008a6422: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008a6425: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 008a6428: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a642a: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 008a642d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a642f: fld1  */ FPUSH(1.0);
    /* 008a6431: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008a6434: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a6435: ret  */ FN_RET(0x008a63ea); r_esp += 4; return;
}

void f_008a6436(void) /* sub_8A6436 */
{
    FN_ENTER(0x008a6436);
    /* 008a6436: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a6438: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_008a6439:; BB(0x008a6439);
    /* 008a6439: fldz  */ FPUSH(0.0);
    /* 008a643b: fcomp dword ptr [ecx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xcu))); FPOP();
    /* 008a643e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6440: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6443: jp 0x8a6452 */ if (fP) goto L_008a6452;
L_008a6445:; BB(0x008a6445);
    /* 008a6445: fldz  */ FPUSH(0.0);
    /* 008a6447: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a6449: fldz  */ FPUSH(0.0);
    /* 008a644b: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008a644e: fldz  */ FPUSH(0.0);
    /* 008a6450: jmp 0x8a64a8 */ goto L_008a64a8;
L_008a6452:; BB(0x008a6452);
    /* 008a6452: fld1  */ FPUSH(1.0);
    /* 008a6454: fcomp dword ptr [ecx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xcu))); FPOP();
    /* 008a6457: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6459: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a645c: jne 0x8a64ab */ if (!fZ) goto L_008a64ab;
L_008a645e:; BB(0x008a645e);
    /* 008a645e: fld1  */ FPUSH(1.0);
    /* 008a6460: fdiv dword ptr [ecx + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ecx+0xcu));
    /* 008a6463: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6465: fcomp dword ptr [ecx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xcu))); FPOP();
    /* 008a6468: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a646a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a646d: jp 0x8a6475 */ if (fP) goto L_008a6475;
L_008a646f:; BB(0x008a646f);
    /* 008a646f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6471: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008a6473: jmp 0x8a6477 */ goto L_008a6477;
L_008a6475:; BB(0x008a6475);
    /* 008a6475: fld1  */ FPUSH(1.0);
L_008a6477:; BB(0x008a6477);
    /* 008a6477: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a6479: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008a647c: fcomp dword ptr [ecx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xcu))); FPOP();
    /* 008a647f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6481: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6484: jp 0x8a648d */ if (fP) goto L_008a648d;
L_008a6486:; BB(0x008a6486);
    /* 008a6486: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6488: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008a648b: jmp 0x8a648f */ goto L_008a648f;
L_008a648d:; BB(0x008a648d);
    /* 008a648d: fld1  */ FPUSH(1.0);
L_008a648f:; BB(0x008a648f);
    /* 008a648f: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008a6492: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008a6495: fcomp dword ptr [ecx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xcu))); FPOP();
    /* 008a6498: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a649a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a649d: jp 0x8a64a4 */ if (fP) goto L_008a64a4;
L_008a649f:; BB(0x008a649f);
    /* 008a649f: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 008a64a2: jmp 0x8a64a8 */ goto L_008a64a8;
L_008a64a4:; BB(0x008a64a4);
    /* 008a64a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a64a6: fld1  */ FPUSH(1.0);
L_008a64a8:; BB(0x008a64a8);
    /* 008a64a8: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
L_008a64ab:; BB(0x008a64ab);
    /* 008a64ab: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a64ae: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a64af: jne 0x8a6439 */ if (!fZ) goto L_008a6439;
L_008a64b1:; BB(0x008a64b1);
    /* 008a64b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a64b3: ret  */ FN_RET(0x008a6436); r_esp += 4; return;
}

void f_008a64e4(void) /* sub_8A64E4 */
{
    FN_ENTER(0x008a64e4);
    /* 008a64e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a64e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a64e6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008a64ea: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008a64ee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a64f3: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 008a64f7: fldcw word ptr [esp + 4] */ fcw = R16((u32)(r_esp+0x4u));
    /* 008a64fb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008a64ff: mov dword ptr [0xaea334], eax */ W32((u32)(0xaea334u), r_eax);
    /* 008a6504: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a6505: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a6506: ret  */ FN_RET(0x008a64e4); r_esp += 4; return;
}

void f_008a6507(void) /* sub_8A6507 */
{
    FN_ENTER(0x008a6507);
    /* 008a6507: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a6508: mov ebp, esp */ r_ebp = r_esp;
    /* 008a650a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a650d: fld dword ptr [0x99b9cc] */ FPUSH(R_F32((u32)(0x99b9ccu)));
    /* 008a6513: fcom dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); 
    /* 008a6515: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6517: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a651a: jne 0x8a6523 */ if (!fZ) goto L_008a6523;
L_008a651c:; BB(0x008a651c);
    /* 008a651c: fldz  */ FPUSH(0.0);
L_008a651e:; BB(0x008a651e);
    /* 008a651e: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 008a6521: jmp 0x8a653b */ goto L_008a653b;
L_008a6523:; BB(0x008a6523);
    /* 008a6523: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6525: fcomp dword ptr [0x99b9b8] */ fx_compare(ST(0), R_F32((u32)(0x99b9b8u))); FPOP();
    /* 008a652b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a652d: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6530: jne 0x8a6536 */ if (!fZ) goto L_008a6536;
L_008a6532:; BB(0x008a6532);
    /* 008a6532: fld1  */ FPUSH(1.0);
    /* 008a6534: jmp 0x8a651e */ goto L_008a651e;
L_008a6536:; BB(0x008a6536);
    /* 008a6536: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a6538: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_008a653b:; BB(0x008a653b);
    /* 008a653b: fcom dword ptr [ecx + 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x4u))); 
    /* 008a653e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6540: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6543: jne 0x8a654c */ if (!fZ) goto L_008a654c;
L_008a6545:; BB(0x008a6545);
    /* 008a6545: fldz  */ FPUSH(0.0);
L_008a6547:; BB(0x008a6547);
    /* 008a6547: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008a654a: jmp 0x8a6566 */ goto L_008a6566;
L_008a654c:; BB(0x008a654c);
    /* 008a654c: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008a654f: fcomp dword ptr [0x99b9b8] */ fx_compare(ST(0), R_F32((u32)(0x99b9b8u))); FPOP();
    /* 008a6555: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6557: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a655a: jne 0x8a6560 */ if (!fZ) goto L_008a6560;
L_008a655c:; BB(0x008a655c);
    /* 008a655c: fld1  */ FPUSH(1.0);
    /* 008a655e: jmp 0x8a6547 */ goto L_008a6547;
L_008a6560:; BB(0x008a6560);
    /* 008a6560: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008a6563: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_008a6566:; BB(0x008a6566);
    /* 008a6566: fcomp dword ptr [ecx + 8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x8u))); FPOP();
    /* 008a6569: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a656b: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a656e: jne 0x8a6577 */ if (!fZ) goto L_008a6577;
L_008a6570:; BB(0x008a6570);
    /* 008a6570: fldz  */ FPUSH(0.0);
L_008a6572:; BB(0x008a6572);
    /* 008a6572: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008a6575: jmp 0x8a6591 */ goto L_008a6591;
L_008a6577:; BB(0x008a6577);
    /* 008a6577: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008a657a: fcomp dword ptr [0x99b9b8] */ fx_compare(ST(0), R_F32((u32)(0x99b9b8u))); FPOP();
    /* 008a6580: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6582: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6585: jne 0x8a658b */ if (!fZ) goto L_008a658b;
L_008a6587:; BB(0x008a6587);
    /* 008a6587: fld1  */ FPUSH(1.0);
    /* 008a6589: jmp 0x8a6572 */ goto L_008a6572;
L_008a658b:; BB(0x008a658b);
    /* 008a658b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 008a658e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_008a6591:; BB(0x008a6591);
    /* 008a6591: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6592: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a6597u); f_008a64e4();
    /* 008a6597: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 008a659a: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 008a65a0: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a65a6: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008a65a9: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a65ac: fistp dword ptr [ebp - 8] */ W32((u32)(r_ebp+0xfffffff8u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a65af: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008a65b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a65b5: fmul dword ptr [0x99ba94] */ ST(0) = ST(0) * R_F32((u32)(0x99ba94u));
    /* 008a65bb: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a65c1: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008a65c4: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a65c7: fistp dword ptr [ebp - 4] */ W32((u32)(r_ebp+0xfffffffcu), (u32)fx_int32(ST(0))); FPOP();
    /* 008a65ca: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008a65cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a65d0: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 008a65d6: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a65dc: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008a65df: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a65e2: fistp dword ptr [ebp - 4] */ W32((u32)(r_ebp+0xfffffffcu), (u32)fx_int32(ST(0))); FPOP();
    /* 008a65e5: mov esi, dword ptr [0xaea334] */ r_esi = R32((u32)(0xaea334u));
    /* 008a65eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a65ee: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 008a65f1: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
    /* 008a65f4: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a65f7: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a65f9: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a65fc: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a65fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a65ff: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a6600: ret  */ FN_RET(0x008a6507); r_esp += 4; return;
}

void f_008a6601(void) /* sub_8A6601 */
{
    FN_ENTER(0x008a6601);
    /* 008a6601: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a6602: mov ebp, esp */ r_ebp = r_esp;
    /* 008a6604: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a6607: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a6608: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6609: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 008a660c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a660f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6610: jne 0x8a6620 */ if (!fZ) goto L_008a6620;
L_008a6612:; BB(0x008a6612);
    /* 008a6612: mov ebx, 0x99db3c */ r_ebx = 0x99db3cu;
    /* 008a6617: mov dword ptr [ebp - 0x1c], 0x99db24 */ W32((u32)(r_ebp+0xffffffe4u), 0x99db24u);
    /* 008a661e: jmp 0x8a662c */ goto L_008a662c;
L_008a6620:; BB(0x008a6620);
    /* 008a6620: mov ebx, 0x99db04 */ r_ebx = 0x99db04u;
    /* 008a6625: mov dword ptr [ebp - 0x1c], 0x99dae4 */ W32((u32)(r_ebp+0xffffffe4u), 0x99dae4u);
L_008a662c:; BB(0x008a662c);
    /* 008a662c: fld1  */ FPUSH(1.0);
    /* 008a662e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a6630: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6633: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008a6636: fldz  */ FPUSH(0.0);
    /* 008a6638: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008a663b: jne 0x8a666d */ if (!fZ) goto L_008a666d;
L_008a663d:; BB(0x008a663d);
    /* 008a663d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a6640: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 008a6643: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6645: fcomp dword ptr [ebp - 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffffcu))); FPOP();
    /* 008a6648: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a664a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a664d: jp 0x8a6654 */ if (fP) goto L_008a6654;
L_008a664f:; BB(0x008a664f);
    /* 008a664f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a6651: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a6654:; BB(0x008a6654);
    /* 008a6654: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6656: fcomp dword ptr [ebp - 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 008a6659: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a665b: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a665e: jne 0x8a6665 */ if (!fZ) goto L_008a6665;
L_008a6660:; BB(0x008a6660);
    /* 008a6660: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a6662: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a6665:; BB(0x008a6665);
    /* 008a6665: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a6666: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a6669: jb 0x8a663d */ if (fC) goto L_008a663d;
L_008a666b:; BB(0x008a666b);
    /* 008a666b: jmp 0x8a66b9 */ goto L_008a66b9;
L_008a666d:; BB(0x008a666d);
    /* 008a666d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a6670: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 008a6673: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6675: fcomp dword ptr [ebp - 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffffcu))); FPOP();
    /* 008a6678: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a667a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a667d: jp 0x8a6693 */ if (fP) goto L_008a6693;
L_008a667f:; BB(0x008a667f);
    /* 008a667f: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6681: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a6687: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6689: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a668c: jne 0x8a6693 */ if (!fZ) goto L_008a6693;
L_008a668e:; BB(0x008a668e);
    /* 008a668e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a6690: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a6693:; BB(0x008a6693);
    /* 008a6693: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6695: fcomp dword ptr [ebp - 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 008a6698: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a669a: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a669d: jne 0x8a66b3 */ if (!fZ) goto L_008a66b3;
L_008a669f:; BB(0x008a669f);
    /* 008a669f: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a66a1: fcomp dword ptr [0x99b9b8] */ fx_compare(ST(0), R_F32((u32)(0x99b9b8u))); FPOP();
    /* 008a66a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a66a9: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a66ac: jp 0x8a66b3 */ if (fP) goto L_008a66b3;
L_008a66ae:; BB(0x008a66ae);
    /* 008a66ae: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a66b0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a66b3:; BB(0x008a66b3);
    /* 008a66b3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a66b4: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a66b7: jb 0x8a666d */ if (fC) goto L_008a666d;
L_008a66b9:; BB(0x008a66b9);
    /* 008a66b9: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 008a66bc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a66be: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 008a66c1: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 008a66c4: jge 0x8a66cc */ if ((fS==fO)) goto L_008a66cc;
L_008a66c6:; BB(0x008a66c6);
    /* 008a66c6: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a66cc:; BB(0x008a66cc);
    /* 008a66cc: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 008a66cf: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a66d4u); f_008a64e4();
    /* 008a66d4: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a66d8:; BB(0x008a66d8);
    /* 008a66d8: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a66db: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008a66de: fcom dword ptr [0x99dae0] */ fx_compare(ST(0), R_F32((u32)(0x99dae0u))); 
    /* 008a66e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a66e6: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a66e9: jnp 0x8a6894 */ if (!fP) goto L_008a6894;
L_008a66ef:; BB(0x008a66ef);
    /* 008a66ef: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a66f1: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 008a66f4: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 008a66f6: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 008a66f9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a66fb: jbe 0x8a6722 */ if ((fC||fZ)) goto L_008a6722;
L_008a66fd:; BB(0x008a66fd);
    /* 008a66fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008a6700: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 008a6703: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a6705: mov eax, ebx */ r_eax = r_ebx;
    /* 008a6707: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008a6709:; BB(0x008a6709);
    /* 008a6709: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a670c: fmul dword ptr [edx + eax] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax));
    /* 008a670f: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a6712: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008a6714: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a6716: fstp dword ptr [ecx + eax] */ W_F32((u32)(r_ecx+r_eax), ST(0)); FPOP();
    /* 008a6719: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a671c: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008a671d: jne 0x8a6709 */ if (!fZ) goto L_008a6709;
L_008a671f:; BB(0x008a671f);
    /* 008a671f: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
L_008a6722:; BB(0x008a6722);
    /* 008a6722: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6725: jne 0x8a6731 */ if (!fZ) goto L_008a6731;
L_008a6727:; BB(0x008a6727);
    /* 008a6727: fldz  */ FPUSH(0.0);
    /* 008a6729: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 008a672c: fld1  */ FPUSH(1.0);
    /* 008a672e: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
L_008a6731:; BB(0x008a6731);
    /* 008a6731: fldz  */ FPUSH(0.0);
    /* 008a6733: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a6735: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008a6738: fldz  */ FPUSH(0.0);
    /* 008a673a: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008a673d: fldz  */ FPUSH(0.0);
    /* 008a673f: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008a6742: fldz  */ FPUSH(0.0);
    /* 008a6744: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_008a6747:; BB(0x008a6747);
    /* 008a6747: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a674a: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 008a674d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a674f: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008a6752: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 008a6755: fcom dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); 
    /* 008a675b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a675d: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6760: jp 0x8a6783 */ if (fP) goto L_008a6783;
L_008a6762:; BB(0x008a6762);
    /* 008a6762: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6765: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6767: jne 0x8a677f */ if (!fZ) goto L_008a677f;
L_008a6769:; BB(0x008a6769);
    /* 008a6769: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a676c: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008a6772: fcomp dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); FPOP();
    /* 008a6774: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6776: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6779: je 0x8a6804 */ if (fZ) goto L_008a6804;
L_008a677f:; BB(0x008a677f);
    /* 008a677f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a6781: jmp 0x8a67c2 */ goto L_008a67c2;
L_008a6783:; BB(0x008a6783);
    /* 008a6783: fcom dword ptr [ebp - 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffdcu))); 
    /* 008a6786: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6788: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a678b: jne 0x8a67b0 */ if (!fZ) goto L_008a67b0;
L_008a678d:; BB(0x008a678d);
    /* 008a678d: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6790: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6792: jne 0x8a67ac */ if (!fZ) goto L_008a67ac;
L_008a6794:; BB(0x008a6794);
    /* 008a6794: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a6797: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 008a679d: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008a67a3: fcomp dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); FPOP();
    /* 008a67a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a67a7: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a67aa: jnp 0x8a6804 */ if (!fP) goto L_008a6804;
L_008a67ac:; BB(0x008a67ac);
    /* 008a67ac: mov eax, edi */ r_eax = r_edi;
    /* 008a67ae: jmp 0x8a67c2 */ goto L_008a67c2;
L_008a67b0:; BB(0x008a67b0);
    /* 008a67b0: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a67b6: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 008a67b9: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 008a67bc: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a67bf: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_008a67c2:; BB(0x008a67c2);
    /* 008a67c2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a67c4: jae 0x8a6804 */ if (!fC) goto L_008a6804;
L_008a67c6:; BB(0x008a67c6);
    /* 008a67c6: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a67c8: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a67cb: fsub dword ptr [ebp + eax - 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_eax+0xffffffb0u));
    /* 008a67cf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008a67d2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a67d4: fmul dword ptr [eax + ebx] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_ebx));
    /* 008a67d7: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 008a67da: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008a67dd: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 008a67e0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a67e2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a67e4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a67e6: fadd dword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffecu));
    /* 008a67e9: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008a67ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a67ee: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008a67f0: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 008a67f3: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008a67f6: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a67f8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a67fa: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a67fc: fadd dword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe8u));
    /* 008a67ff: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 008a6802: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a6804:; BB(0x008a6804);
    /* 008a6804: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a6805: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a6808: jb 0x8a6747 */ if (fC) goto L_008a6747;
L_008a680e:; BB(0x008a680e);
    /* 008a680e: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008a6811: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a6817: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6819: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a681c: jne 0x8a682a */ if (!fZ) goto L_008a682a;
L_008a681e:; BB(0x008a681e);
    /* 008a681e: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008a6821: fdiv dword ptr [ebp - 0x14] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffecu));
    /* 008a6824: fsubr dword ptr [ebp - 4] */ ST(0) = R_F32((u32)(r_ebp+0xfffffffcu)) - ST(0);
    /* 008a6827: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
L_008a682a:; BB(0x008a682a);
    /* 008a682a: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 008a682d: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a6833: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6835: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6838: jne 0x8a6846 */ if (!fZ) goto L_008a6846;
L_008a683a:; BB(0x008a683a);
    /* 008a683a: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008a683d: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 008a6840: fsubr dword ptr [ebp - 8] */ ST(0) = R_F32((u32)(r_ebp+0xfffffff8u)) - ST(0);
    /* 008a6843: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
L_008a6846:; BB(0x008a6846);
    /* 008a6846: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a6849: fcomp dword ptr [ebp - 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 008a684c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a684e: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6851: jne 0x8a685f */ if (!fZ) goto L_008a685f;
L_008a6853:; BB(0x008a6853);
    /* 008a6853: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a6856: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a6859: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008a685c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a685f:; BB(0x008a685f);
    /* 008a685f: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008a6862: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 008a6865: fcomp dword ptr [0x99dadc] */ fx_compare(ST(0), R_F32((u32)(0x99dadcu))); FPOP();
    /* 008a686b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a686d: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6870: jp 0x8a6885 */ if (fP) goto L_008a6885;
L_008a6872:; BB(0x008a6872);
    /* 008a6872: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008a6875: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 008a6878: fcomp dword ptr [0x99dadc] */ fx_compare(ST(0), R_F32((u32)(0x99dadcu))); FPOP();
    /* 008a687e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6880: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6883: jnp 0x8a6896 */ if (!fP) goto L_008a6896;
L_008a6885:; BB(0x008a6885);
    /* 008a6885: inc dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a6888: cmp dword ptr [ebp - 0x20], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a688c: jb 0x8a66d8 */ if (fC) goto L_008a66d8;
L_008a6892:; BB(0x008a6892);
    /* 008a6892: jmp 0x8a6896 */ goto L_008a6896;
L_008a6894:; BB(0x008a6894);
    /* 008a6894: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a6896:; BB(0x008a6896);
    /* 008a6896: mov eax, dword ptr [0xaea334] */ r_eax = R32((u32)(0xaea334u));
    /* 008a689b: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008a689e: fldcw word ptr [ebp + 0x14] */ fcw = R16((u32)(r_ebp+0x14u));
    /* 008a68a1: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a68a4: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a68aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a68ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a68ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a68ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a68af: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a68b2: jp 0x8a68b8 */ if (fP) goto L_008a68b8;
L_008a68b4:; BB(0x008a68b4);
    /* 008a68b4: fldz  */ FPUSH(0.0);
    /* 008a68b6: jmp 0x8a68cf */ goto L_008a68cf;
L_008a68b8:; BB(0x008a68b8);
    /* 008a68b8: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a68bb: fcomp dword ptr [0x99b9b8] */ fx_compare(ST(0), R_F32((u32)(0x99b9b8u))); FPOP();
    /* 008a68c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a68c3: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a68c6: jne 0x8a68cc */ if (!fZ) goto L_008a68cc;
L_008a68c8:; BB(0x008a68c8);
    /* 008a68c8: fld1  */ FPUSH(1.0);
    /* 008a68ca: jmp 0x8a68cf */ goto L_008a68cf;
L_008a68cc:; BB(0x008a68cc);
    /* 008a68cc: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
L_008a68cf:; BB(0x008a68cf);
    /* 008a68cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a68d2: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a68d4: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a68d7: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a68dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a68df: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a68e2: jp 0x8a68e8 */ if (fP) goto L_008a68e8;
L_008a68e4:; BB(0x008a68e4);
    /* 008a68e4: fldz  */ FPUSH(0.0);
    /* 008a68e6: jmp 0x8a68ff */ goto L_008a68ff;
L_008a68e8:; BB(0x008a68e8);
    /* 008a68e8: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a68eb: fcomp dword ptr [0x99b9b8] */ fx_compare(ST(0), R_F32((u32)(0x99b9b8u))); FPOP();
    /* 008a68f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a68f3: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a68f6: jne 0x8a68fc */ if (!fZ) goto L_008a68fc;
L_008a68f8:; BB(0x008a68f8);
    /* 008a68f8: fld1  */ FPUSH(1.0);
    /* 008a68fa: jmp 0x8a68ff */ goto L_008a68ff;
L_008a68fc:; BB(0x008a68fc);
    /* 008a68fc: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
L_008a68ff:; BB(0x008a68ff);
    /* 008a68ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a6902: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a6904: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a6905: ret  */ FN_RET(0x008a6601); r_esp += 4; return;
}

void f_008a6669(void)
{
    FN_ENTER(0x008a6669);
    goto L_008a6669;
L_008a663d:; BB(0x008a663d);
    /* 008a663d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a6640: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 008a6643: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6645: fcomp dword ptr [ebp - 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffffcu))); FPOP();
    /* 008a6648: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a664a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a664d: jp 0x8a6654 */ if (fP) goto L_008a6654;
L_008a664f:; BB(0x008a664f);
    /* 008a664f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a6651: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a6654:; BB(0x008a6654);
    /* 008a6654: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6656: fcomp dword ptr [ebp - 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 008a6659: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a665b: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a665e: jne 0x8a6665 */ if (!fZ) goto L_008a6665;
L_008a6660:; BB(0x008a6660);
    /* 008a6660: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a6662: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a6665:; BB(0x008a6665);
    /* 008a6665: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a6666: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
L_008a6669:; BB(0x008a6669);
    /* 008a6669: jb 0x8a663d */ if (fC) goto L_008a663d;
L_008a666b:; BB(0x008a666b);
    /* 008a666b: jmp 0x8a66b9 */ goto L_008a66b9;
L_008a66b9:; BB(0x008a66b9);
    /* 008a66b9: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 008a66bc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a66be: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 008a66c1: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 008a66c4: jge 0x8a66cc */ if ((fS==fO)) goto L_008a66cc;
L_008a66c6:; BB(0x008a66c6);
    /* 008a66c6: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a66cc:; BB(0x008a66cc);
    /* 008a66cc: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 008a66cf: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a66d4u); f_008a64e4();
    /* 008a66d4: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a66d8:; BB(0x008a66d8);
    /* 008a66d8: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a66db: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008a66de: fcom dword ptr [0x99dae0] */ fx_compare(ST(0), R_F32((u32)(0x99dae0u))); 
    /* 008a66e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a66e6: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a66e9: jnp 0x8a6894 */ if (!fP) goto L_008a6894;
L_008a66ef:; BB(0x008a66ef);
    /* 008a66ef: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a66f1: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 008a66f4: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 008a66f6: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 008a66f9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a66fb: jbe 0x8a6722 */ if ((fC||fZ)) goto L_008a6722;
L_008a66fd:; BB(0x008a66fd);
    /* 008a66fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008a6700: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 008a6703: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a6705: mov eax, ebx */ r_eax = r_ebx;
    /* 008a6707: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008a6709:; BB(0x008a6709);
    /* 008a6709: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a670c: fmul dword ptr [edx + eax] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax));
    /* 008a670f: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a6712: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008a6714: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a6716: fstp dword ptr [ecx + eax] */ W_F32((u32)(r_ecx+r_eax), ST(0)); FPOP();
    /* 008a6719: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a671c: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008a671d: jne 0x8a6709 */ if (!fZ) goto L_008a6709;
L_008a671f:; BB(0x008a671f);
    /* 008a671f: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
L_008a6722:; BB(0x008a6722);
    /* 008a6722: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6725: jne 0x8a6731 */ if (!fZ) goto L_008a6731;
L_008a6727:; BB(0x008a6727);
    /* 008a6727: fldz  */ FPUSH(0.0);
    /* 008a6729: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 008a672c: fld1  */ FPUSH(1.0);
    /* 008a672e: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
L_008a6731:; BB(0x008a6731);
    /* 008a6731: fldz  */ FPUSH(0.0);
    /* 008a6733: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a6735: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008a6738: fldz  */ FPUSH(0.0);
    /* 008a673a: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008a673d: fldz  */ FPUSH(0.0);
    /* 008a673f: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008a6742: fldz  */ FPUSH(0.0);
    /* 008a6744: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_008a6747:; BB(0x008a6747);
    /* 008a6747: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a674a: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 008a674d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a674f: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008a6752: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 008a6755: fcom dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); 
    /* 008a675b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a675d: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6760: jp 0x8a6783 */ if (fP) goto L_008a6783;
L_008a6762:; BB(0x008a6762);
    /* 008a6762: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6765: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6767: jne 0x8a677f */ if (!fZ) goto L_008a677f;
L_008a6769:; BB(0x008a6769);
    /* 008a6769: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a676c: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008a6772: fcomp dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); FPOP();
    /* 008a6774: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6776: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6779: je 0x8a6804 */ if (fZ) goto L_008a6804;
L_008a677f:; BB(0x008a677f);
    /* 008a677f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a6781: jmp 0x8a67c2 */ goto L_008a67c2;
L_008a6783:; BB(0x008a6783);
    /* 008a6783: fcom dword ptr [ebp - 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffdcu))); 
    /* 008a6786: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6788: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a678b: jne 0x8a67b0 */ if (!fZ) goto L_008a67b0;
L_008a678d:; BB(0x008a678d);
    /* 008a678d: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6790: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6792: jne 0x8a67ac */ if (!fZ) goto L_008a67ac;
L_008a6794:; BB(0x008a6794);
    /* 008a6794: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a6797: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 008a679d: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008a67a3: fcomp dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); FPOP();
    /* 008a67a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a67a7: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a67aa: jnp 0x8a6804 */ if (!fP) goto L_008a6804;
L_008a67ac:; BB(0x008a67ac);
    /* 008a67ac: mov eax, edi */ r_eax = r_edi;
    /* 008a67ae: jmp 0x8a67c2 */ goto L_008a67c2;
L_008a67b0:; BB(0x008a67b0);
    /* 008a67b0: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a67b6: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 008a67b9: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 008a67bc: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a67bf: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_008a67c2:; BB(0x008a67c2);
    /* 008a67c2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a67c4: jae 0x8a6804 */ if (!fC) goto L_008a6804;
L_008a67c6:; BB(0x008a67c6);
    /* 008a67c6: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a67c8: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a67cb: fsub dword ptr [ebp + eax - 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_eax+0xffffffb0u));
    /* 008a67cf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008a67d2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a67d4: fmul dword ptr [eax + ebx] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_ebx));
    /* 008a67d7: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 008a67da: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008a67dd: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 008a67e0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a67e2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a67e4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a67e6: fadd dword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffecu));
    /* 008a67e9: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008a67ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a67ee: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008a67f0: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 008a67f3: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008a67f6: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a67f8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a67fa: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a67fc: fadd dword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe8u));
    /* 008a67ff: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 008a6802: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a6804:; BB(0x008a6804);
    /* 008a6804: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a6805: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a6808: jb 0x8a6747 */ if (fC) goto L_008a6747;
L_008a680e:; BB(0x008a680e);
    /* 008a680e: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008a6811: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a6817: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6819: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a681c: jne 0x8a682a */ if (!fZ) goto L_008a682a;
L_008a681e:; BB(0x008a681e);
    /* 008a681e: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008a6821: fdiv dword ptr [ebp - 0x14] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffecu));
    /* 008a6824: fsubr dword ptr [ebp - 4] */ ST(0) = R_F32((u32)(r_ebp+0xfffffffcu)) - ST(0);
    /* 008a6827: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
L_008a682a:; BB(0x008a682a);
    /* 008a682a: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 008a682d: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a6833: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6835: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6838: jne 0x8a6846 */ if (!fZ) goto L_008a6846;
L_008a683a:; BB(0x008a683a);
    /* 008a683a: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008a683d: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 008a6840: fsubr dword ptr [ebp - 8] */ ST(0) = R_F32((u32)(r_ebp+0xfffffff8u)) - ST(0);
    /* 008a6843: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
L_008a6846:; BB(0x008a6846);
    /* 008a6846: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a6849: fcomp dword ptr [ebp - 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 008a684c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a684e: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6851: jne 0x8a685f */ if (!fZ) goto L_008a685f;
L_008a6853:; BB(0x008a6853);
    /* 008a6853: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a6856: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a6859: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008a685c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a685f:; BB(0x008a685f);
    /* 008a685f: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008a6862: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 008a6865: fcomp dword ptr [0x99dadc] */ fx_compare(ST(0), R_F32((u32)(0x99dadcu))); FPOP();
    /* 008a686b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a686d: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6870: jp 0x8a6885 */ if (fP) goto L_008a6885;
L_008a6872:; BB(0x008a6872);
    /* 008a6872: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008a6875: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 008a6878: fcomp dword ptr [0x99dadc] */ fx_compare(ST(0), R_F32((u32)(0x99dadcu))); FPOP();
    /* 008a687e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6880: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6883: jnp 0x8a6896 */ if (!fP) goto L_008a6896;
L_008a6885:; BB(0x008a6885);
    /* 008a6885: inc dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a6888: cmp dword ptr [ebp - 0x20], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a688c: jb 0x8a66d8 */ if (fC) goto L_008a66d8;
L_008a6892:; BB(0x008a6892);
    /* 008a6892: jmp 0x8a6896 */ goto L_008a6896;
L_008a6894:; BB(0x008a6894);
    /* 008a6894: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a6896:; BB(0x008a6896);
    /* 008a6896: mov eax, dword ptr [0xaea334] */ r_eax = R32((u32)(0xaea334u));
    /* 008a689b: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008a689e: fldcw word ptr [ebp + 0x14] */ fcw = R16((u32)(r_ebp+0x14u));
    /* 008a68a1: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a68a4: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a68aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a68ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a68ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a68ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a68af: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a68b2: jp 0x8a68b8 */ if (fP) goto L_008a68b8;
L_008a68b4:; BB(0x008a68b4);
    /* 008a68b4: fldz  */ FPUSH(0.0);
    /* 008a68b6: jmp 0x8a68cf */ goto L_008a68cf;
L_008a68b8:; BB(0x008a68b8);
    /* 008a68b8: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a68bb: fcomp dword ptr [0x99b9b8] */ fx_compare(ST(0), R_F32((u32)(0x99b9b8u))); FPOP();
    /* 008a68c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a68c3: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a68c6: jne 0x8a68cc */ if (!fZ) goto L_008a68cc;
L_008a68c8:; BB(0x008a68c8);
    /* 008a68c8: fld1  */ FPUSH(1.0);
    /* 008a68ca: jmp 0x8a68cf */ goto L_008a68cf;
L_008a68cc:; BB(0x008a68cc);
    /* 008a68cc: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
L_008a68cf:; BB(0x008a68cf);
    /* 008a68cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a68d2: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a68d4: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a68d7: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a68dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a68df: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a68e2: jp 0x8a68e8 */ if (fP) goto L_008a68e8;
L_008a68e4:; BB(0x008a68e4);
    /* 008a68e4: fldz  */ FPUSH(0.0);
    /* 008a68e6: jmp 0x8a68ff */ goto L_008a68ff;
L_008a68e8:; BB(0x008a68e8);
    /* 008a68e8: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a68eb: fcomp dword ptr [0x99b9b8] */ fx_compare(ST(0), R_F32((u32)(0x99b9b8u))); FPOP();
    /* 008a68f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a68f3: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a68f6: jne 0x8a68fc */ if (!fZ) goto L_008a68fc;
L_008a68f8:; BB(0x008a68f8);
    /* 008a68f8: fld1  */ FPUSH(1.0);
    /* 008a68fa: jmp 0x8a68ff */ goto L_008a68ff;
L_008a68fc:; BB(0x008a68fc);
    /* 008a68fc: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
L_008a68ff:; BB(0x008a68ff);
    /* 008a68ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a6902: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a6904: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a6905: ret  */ FN_RET(0x008a6669); r_esp += 4; return;
}

void f_008a6906(void) /* sub_8A6906 */
{
    FN_ENTER(0x008a6906);
    /* 008a6906: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a6907: lea ebp, [esp - 0x68] */ r_ebp = (u32)(r_esp+0xffffff98u);
    /* 008a690b: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a6911: cmp dword ptr [ebp + 0x7c], 3 */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6915: jne 0x8a6927 */ if (!fZ) goto L_008a6927;
L_008a6917:; BB(0x008a6917);
    /* 008a6917: mov dword ptr [ebp], 0x99db88 */ W32((u32)(r_ebp), 0x99db88u);
    /* 008a691e: mov dword ptr [ebp + 4], 0x99db7c */ W32((u32)(r_ebp+0x4u), 0x99db7cu);
    /* 008a6925: jmp 0x8a6935 */ goto L_008a6935;
L_008a6927:; BB(0x008a6927);
    /* 008a6927: mov dword ptr [ebp], 0x99db6c */ W32((u32)(r_ebp), 0x99db6cu);
    /* 008a692e: mov dword ptr [ebp + 4], 0x99db5c */ W32((u32)(r_ebp+0x4u), 0x99db5cu);
L_008a6935:; BB(0x008a6935);
    /* 008a6935: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6936: fldz  */ FPUSH(0.0);
    /* 008a6938: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6939: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 008a693c: mov esi, 0xa34f98 */ r_esi = 0xa34f98u;
    /* 008a6941: fldz  */ FPUSH(0.0);
    /* 008a6943: lea edi, [ebp + 0x58] */ r_edi = (u32)(r_ebp+0x58u);
    /* 008a6946: fst dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0));
    /* 008a6949: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a694a: fldz  */ FPUSH(0.0);
    /* 008a694c: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a694d: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
    /* 008a6950: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a6951: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a6952: mov esi, dword ptr [ebp + 0x78] */ r_esi = R32((u32)(r_ebp+0x78u));
    /* 008a6955: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a6957: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a695a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a695b: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008a695e: mov ecx, esi */ r_ecx = r_esi;
    /* 008a6960: mov edx, edi */ r_edx = r_edi;
L_008a6962:; BB(0x008a6962);
    /* 008a6962: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 008a6965: fcomp dword ptr [ebp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x58u))); FPOP();
    /* 008a6968: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a696a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a696d: jp 0x8a6975 */ if (fP) goto L_008a6975;
L_008a696f:; BB(0x008a696f);
    /* 008a696f: mov eax, dword ptr [ecx - 8] */ r_eax = R32((u32)(r_ecx+0xfffffff8u));
    /* 008a6972: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
L_008a6975:; BB(0x008a6975);
    /* 008a6975: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 008a6978: fcomp dword ptr [ebp + 0x5c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x5cu))); FPOP();
    /* 008a697b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a697d: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6980: jp 0x8a6988 */ if (fP) goto L_008a6988;
L_008a6982:; BB(0x008a6982);
    /* 008a6982: mov eax, dword ptr [ecx - 4] */ r_eax = R32((u32)(r_ecx+0xfffffffcu));
    /* 008a6985: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
L_008a6988:; BB(0x008a6988);
    /* 008a6988: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a698a: fcomp dword ptr [ebp + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x60u))); FPOP();
    /* 008a698d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a698f: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6992: jp 0x8a6999 */ if (fP) goto L_008a6999;
L_008a6994:; BB(0x008a6994);
    /* 008a6994: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a6996: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
L_008a6999:; BB(0x008a6999);
    /* 008a6999: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 008a699c: fcomp dword ptr [ebp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x48u))); FPOP();
    /* 008a699f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a69a1: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a69a4: jne 0x8a69ac */ if (!fZ) goto L_008a69ac;
L_008a69a6:; BB(0x008a69a6);
    /* 008a69a6: mov eax, dword ptr [ecx - 8] */ r_eax = R32((u32)(r_ecx+0xfffffff8u));
    /* 008a69a9: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
L_008a69ac:; BB(0x008a69ac);
    /* 008a69ac: fcom dword ptr [ecx - 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xfffffffcu))); 
    /* 008a69af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a69b1: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a69b4: jp 0x8a69bb */ if (fP) goto L_008a69bb;
L_008a69b6:; BB(0x008a69b6);
    /* 008a69b6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a69b8: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
L_008a69bb:; BB(0x008a69bb);
    /* 008a69bb: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a69bd: fcomp dword ptr [ebp + 0x50] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x50u))); FPOP();
    /* 008a69c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a69c2: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a69c5: jne 0x8a69cc */ if (!fZ) goto L_008a69cc;
L_008a69c7:; BB(0x008a69c7);
    /* 008a69c7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a69c9: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
L_008a69cc:; BB(0x008a69cc);
    /* 008a69cc: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a69ce: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a69cf: jne 0x8a6962 */ if (!fZ) goto L_008a6962;
L_008a69d1:; BB(0x008a69d1);
    /* 008a69d1: fst dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0));
    /* 008a69d4: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 008a69d7: fsub dword ptr [ebp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x58u));
    /* 008a69da: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 008a69dd: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 008a69e0: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 008a69e2: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 008a69e5: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 008a69e8: fsub dword ptr [ebp + 0x60] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x60u));
    /* 008a69eb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a69ed: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a69ef: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008a69f2: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 008a69f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a69f7: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 008a69fa: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 008a69fd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a69ff: fcom dword ptr [0x99b9f0] */ fx_compare(ST(0), R_F32((u32)(0x99b9f0u))); 
    /* 008a6a05: fst dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0));
    /* 008a6a08: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6a0a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6a0d: jp 0x8a6a37 */ if (fP) goto L_008a6a37;
L_008a6a0f:; BB(0x008a6a0f);
    /* 008a6a0f: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 008a6a12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6a14: mov ecx, dword ptr [ebp + 0x58] */ r_ecx = R32((u32)(r_ebp+0x58u));
    /* 008a6a17: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6a19: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a6a1b: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 008a6a1e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a6a21: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 008a6a24: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a6a27: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 008a6a2a: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 008a6a2d: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008a6a30: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a6a32: jmp 0x8a6e64 */ goto L_008a6e64;
L_008a6a37:; BB(0x008a6a37);
    /* 008a6a37: fld1  */ FPUSH(1.0);
    /* 008a6a39: mov eax, esi */ r_eax = r_esi;
    /* 008a6a3b: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 008a6a3d: mov ecx, edi */ r_ecx = r_edi;
    /* 008a6a3f: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 008a6a42: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6a44: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008a6a47: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008a6a4a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6a4c: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008a6a4f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6a51: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008a6a54: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6a56: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 008a6a5c: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 008a6a5f: fadd dword ptr [ebp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x58u));
    /* 008a6a62: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6a64: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 008a6a67: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a6a69: fadd dword ptr [ebp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x5cu));
    /* 008a6a6c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6a6e: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 008a6a71: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 008a6a74: fadd dword ptr [ebp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x60u));
    /* 008a6a77: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6a79: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 008a6a7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6a7e: fldz  */ FPUSH(0.0);
    /* 008a6a80: fstp dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0)); FPOP();
    /* 008a6a83: fldz  */ FPUSH(0.0);
    /* 008a6a85: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 008a6a88: fldz  */ FPUSH(0.0);
    /* 008a6a8a: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 008a6a8d: fldz  */ FPUSH(0.0);
L_008a6a8f:; BB(0x008a6a8f);
    /* 008a6a8f: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 008a6a92: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 008a6a95: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 008a6a98: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 008a6a9b: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 008a6a9e: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 008a6aa1: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 008a6aa4: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 008a6aa7: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a6aa9: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a6aab: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a6aac: fsub dword ptr [ebp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x1cu));
    /* 008a6aaf: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 008a6ab2: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008a6ab5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008a6ab7: fadd dword ptr [ebp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x28u));
    /* 008a6aba: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6abc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6abe: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008a6ac0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6ac2: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008a6ac5: fadd dword ptr [ebp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x28u));
    /* 008a6ac8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008a6aca: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6acc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6ace: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 008a6ad1: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 008a6ad4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6ad6: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 008a6ad9: fsub dword ptr [ebp + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x2cu));
    /* 008a6adc: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6ade: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 008a6ae0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6ae2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6ae4: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 008a6ae7: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 008a6aea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6aec: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 008a6aee: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6af0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6af2: fadd dword ptr [ebp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x44u));
    /* 008a6af5: fstp dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0)); FPOP();
    /* 008a6af8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6afa: jne 0x8a6a8f */ if (!fZ) goto L_008a6a8f;
L_008a6afc:; BB(0x008a6afc);
    /* 008a6afc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a6afd: fst dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0));
    /* 008a6b00: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a6b02: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a6b04: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008a6b05:; BB(0x008a6b05);
    /* 008a6b05: lea ecx, [ebp + edx*4 + 0x38] */ r_ecx = (u32)(r_ebp+r_edx*4+0x38u);
    /* 008a6b09: fcom dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); 
    /* 008a6b0b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6b0d: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6b10: jp 0x8a6b18 */ if (fP) goto L_008a6b18;
L_008a6b12:; BB(0x008a6b12);
    /* 008a6b12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6b14: mov ebx, edx */ r_ebx = r_edx;
    /* 008a6b16: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
L_008a6b18:; BB(0x008a6b18);
    /* 008a6b18: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a6b19: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a6b1c: jb 0x8a6b05 */ if (fC) goto L_008a6b05;
L_008a6b1e:; BB(0x008a6b1e);
    /* 008a6b1e: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6b21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6b23: je 0x8a6b34 */ if (fZ) goto L_008a6b34;
L_008a6b25:; BB(0x008a6b25);
    /* 008a6b25: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 008a6b28: fstp dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0)); FPOP();
    /* 008a6b2b: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008a6b2e: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008a6b31: fst dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0));
L_008a6b34:; BB(0x008a6b34);
    /* 008a6b34: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6b37: je 0x8a6b45 */ if (fZ) goto L_008a6b45;
L_008a6b39:; BB(0x008a6b39);
    /* 008a6b39: fld dword ptr [ebp + 0x60] */ FPUSH(R_F32((u32)(r_ebp+0x60u)));
    /* 008a6b3c: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 008a6b3f: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
    /* 008a6b42: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
L_008a6b45:; BB(0x008a6b45);
    /* 008a6b45: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 008a6b48: fcomp dword ptr [0x99db58] */ fx_compare(ST(0), R_F32((u32)(0x99db58u))); FPOP();
    /* 008a6b4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6b50: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6b53: jp 0x8a6b79 */ if (fP) goto L_008a6b79;
L_008a6b55:; BB(0x008a6b55);
    /* 008a6b55: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 008a6b58: mov ecx, dword ptr [ebp + 0x58] */ r_ecx = R32((u32)(r_ebp+0x58u));
    /* 008a6b5b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a6b5d: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 008a6b60: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a6b63: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 008a6b66: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a6b69: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 008a6b6c: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 008a6b6f: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008a6b72: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a6b74: jmp 0x8a6e63 */ goto L_008a6e63;
L_008a6b79:; BB(0x008a6b79);
    /* 008a6b79: mov ebx, dword ptr [ebp + 0x7c] */ r_ebx = R32((u32)(r_ebp+0x7cu));
    /* 008a6b7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6b7e: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 008a6b81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a6b83: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 008a6b86: fild dword ptr [ebp + 0x7c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x7cu)));
    /* 008a6b89: jge 0x8a6b91 */ if ((fS==fO)) goto L_008a6b91;
L_008a6b8b:; BB(0x008a6b8b);
    /* 008a6b8b: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a6b91:; BB(0x008a6b91);
    /* 008a6b91: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 008a6b94: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a6b99u); f_008a64e4();
    /* 008a6b99: and dword ptr [ebp + 0x24], 0 */ { u32 ad = (u32)(r_ebp+0x24u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a6b9d: fld dword ptr [0x99db54] */ FPUSH(R_F32((u32)(0x99db54u)));
L_008a6ba3:; BB(0x008a6ba3);
    /* 008a6ba3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a6ba5: jbe 0x8a6beb */ if ((fC||fZ)) goto L_008a6beb;
L_008a6ba7:; BB(0x008a6ba7);
    /* 008a6ba7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 008a6baa: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 008a6bad: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 008a6bb0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a6bb2: mov esi, ebx */ r_esi = r_ebx;
L_008a6bb4:; BB(0x008a6bb4);
    /* 008a6bb4: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 008a6bb7: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008a6bb9: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 008a6bbc: fmul dword ptr [edx + eax] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax));
    /* 008a6bbf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a6bc1: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 008a6bc4: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 008a6bc7: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008a6bc9: fld dword ptr [ebp + 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0x4cu)));
    /* 008a6bcc: fmul dword ptr [edx + eax] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax));
    /* 008a6bcf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a6bd1: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a6bd3: fld dword ptr [ebp + 0x60] */ FPUSH(R_F32((u32)(r_ebp+0x60u)));
    /* 008a6bd6: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008a6bd8: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 008a6bdb: fmul dword ptr [edx + eax] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax));
    /* 008a6bde: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a6be1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a6be3: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008a6be6: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6be8: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008a6be9: jne 0x8a6bb4 */ if (!fZ) goto L_008a6bb4;
L_008a6beb:; BB(0x008a6beb);
    /* 008a6beb: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 008a6bee: fsub dword ptr [ebp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x58u));
    /* 008a6bf1: fld dword ptr [ebp + 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0x4cu)));
    /* 008a6bf4: fsub dword ptr [ebp + 0x5c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x5cu));
    /* 008a6bf7: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 008a6bfa: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 008a6bfd: fsub dword ptr [ebp + 0x60] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x60u));
    /* 008a6c00: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6c02: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6c04: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008a6c07: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 008a6c0a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a6c0c: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008a6c0e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008a6c10: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a6c12: fcom dword ptr [0x99db58] */ fx_compare(ST(0), R_F32((u32)(0x99db58u))); 
    /* 008a6c18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6c1a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6c1d: jnp 0x8a6e2e */ if (!fP) goto L_008a6e2e;
L_008a6c23:; BB(0x008a6c23);
    /* 008a6c23: fdivr dword ptr [ebp + 0xc] */ ST(0) = R_F32((u32)(r_ebp+0xcu)) / ST(0);
    /* 008a6c26: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a6c29: mov esi, edi */ r_esi = r_edi;
    /* 008a6c2b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6c2d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008a6c2f: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 008a6c32: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008a6c35: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6c37: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 008a6c3a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6c3c: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 008a6c3f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6c41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6c43: fldz  */ FPUSH(0.0);
    /* 008a6c45: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 008a6c48: fldz  */ FPUSH(0.0);
    /* 008a6c4a: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 008a6c4d: fldz  */ FPUSH(0.0);
    /* 008a6c4f: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 008a6c52: fldz  */ FPUSH(0.0);
    /* 008a6c54: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 008a6c57: fldz  */ FPUSH(0.0);
    /* 008a6c59: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 008a6c5c: fldz  */ FPUSH(0.0);
    /* 008a6c5e: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 008a6c61: fldz  */ FPUSH(0.0);
    /* 008a6c63: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 008a6c66: fldz  */ FPUSH(0.0);
    /* 008a6c68: fstp dword ptr [ebp + 0x7c] */ W_F32((u32)(r_ebp+0x7cu), ST(0)); FPOP();
L_008a6c6b:; BB(0x008a6c6b);
    /* 008a6c6b: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 008a6c6e: fsub dword ptr [ebp + 0x5c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x5cu));
    /* 008a6c71: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 008a6c74: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 008a6c77: fsub dword ptr [ebp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x58u));
    /* 008a6c7a: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 008a6c7d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a6c7f: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6c81: fsub dword ptr [ebp + 0x60] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x60u));
    /* 008a6c84: fmul dword ptr [ebp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x30u));
    /* 008a6c87: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a6c89: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 008a6c8c: fcomp dword ptr [ebp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xcu))); FPOP();
    /* 008a6c8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6c91: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6c94: jne 0x8a6c9b */ if (!fZ) goto L_008a6c9b;
L_008a6c96:; BB(0x008a6c96);
    /* 008a6c96: lea edx, [ebx - 1] */ r_edx = (u32)(r_ebx+0xffffffffu);
    /* 008a6c99: jmp 0x8a6cb8 */ goto L_008a6cb8;
L_008a6c9b:; BB(0x008a6c9b);
    /* 008a6c9b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6c9d: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008a6ca0: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a6ca6: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 008a6ca9: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008a6cac: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 008a6caf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008a6cb2: fld dword ptr [0x99db54] */ FPUSH(R_F32((u32)(0x99db54u)));
L_008a6cb8:; BB(0x008a6cb8);
    /* 008a6cb8: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 008a6cbb: mov eax, edx */ r_eax = r_edx;
    /* 008a6cbd: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a6cc0: fld dword ptr [ebp + eax - 0x58] */ FPUSH(R_F32((u32)(r_ebp+r_eax+0xffffffa8u)));
    /* 008a6cc4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a6cc6: fsub dword ptr [ecx - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xfffffff8u));
    /* 008a6cc9: fld dword ptr [ebp + eax - 0x54] */ FPUSH(R_F32((u32)(r_ebp+r_eax+0xffffffacu)));
    /* 008a6ccd: fsub dword ptr [ecx - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xfffffffcu));
    /* 008a6cd0: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008a6cd3: fld dword ptr [ebp + eax - 0x50] */ FPUSH(R_F32((u32)(r_ebp+r_eax+0xffffffb0u)));
    /* 008a6cd7: mov eax, edx */ r_eax = r_edx;
    /* 008a6cd9: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 008a6cdb: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 008a6cde: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a6ce1: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a6ce3: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008a6ce5: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a6ce7: fmul dword ptr [0x99b9d0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9d0u));
    /* 008a6ced: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a6cee: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a6cf0: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6cf2: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008a6cf3: fmul dword ptr [0x99b9d0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9d0u));
    /* 008a6cf9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a6cfb: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008a6cfd: fadd dword ptr [ebp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x7cu));
    /* 008a6d00: fstp dword ptr [ebp + 0x7c] */ W_F32((u32)(r_ebp+0x7cu), ST(0)); FPOP();
    /* 008a6d03: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a6d05: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008a6d07: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 008a6d0a: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 008a6d0d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a6d0f: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 008a6d12: fadd dword ptr [ebp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18u));
    /* 008a6d15: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 008a6d18: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a6d1a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008a6d1c: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 008a6d1f: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 008a6d22: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6d24: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008a6d26: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 008a6d29: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 008a6d2c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a6d2e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008a6d30: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 008a6d33: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 008a6d36: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008a6d39: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6d3b: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 008a6d3e: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 008a6d41: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008a6d43: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 008a6d46: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 008a6d49: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6d4b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6d4d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6d4f: jne 0x8a6c6b */ if (!fZ) goto L_008a6c6b;
L_008a6d55:; BB(0x008a6d55);
    /* 008a6d55: fld dword ptr [ebp + 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0x7cu)));
    /* 008a6d58: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a6d5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6d60: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6d63: jne 0x8a6d8d */ if (!fZ) goto L_008a6d8d;
L_008a6d65:; BB(0x008a6d65);
    /* 008a6d65: fld dword ptr [0x99b9d4] */ FPUSH(R_F32((u32)(0x99b9d4u)));
    /* 008a6d6b: fdiv dword ptr [ebp + 0x7c] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x7cu));
    /* 008a6d6e: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 008a6d71: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6d73: fadd dword ptr [ebp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x58u));
    /* 008a6d76: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 008a6d79: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 008a6d7c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6d7e: fadd dword ptr [ebp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x5cu));
    /* 008a6d81: fstp dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0)); FPOP();
    /* 008a6d84: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 008a6d87: fadd dword ptr [ebp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x60u));
    /* 008a6d8a: fstp dword ptr [ebp + 0x60] */ W_F32((u32)(r_ebp+0x60u), ST(0)); FPOP();
L_008a6d8d:; BB(0x008a6d8d);
    /* 008a6d8d: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 008a6d90: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008a6d96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6d98: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6d9b: jne 0x8a6dc5 */ if (!fZ) goto L_008a6dc5;
L_008a6d9d:; BB(0x008a6d9d);
    /* 008a6d9d: fld dword ptr [0x99b9d4] */ FPUSH(R_F32((u32)(0x99b9d4u)));
    /* 008a6da3: fdiv dword ptr [ebp + 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x10u));
    /* 008a6da6: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 008a6da9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6dab: fadd dword ptr [ebp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x48u));
    /* 008a6dae: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 008a6db1: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 008a6db4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a6db6: fadd dword ptr [ebp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4cu));
    /* 008a6db9: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 008a6dbc: fmul dword ptr [ebp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x40u));
    /* 008a6dbf: fadd dword ptr [ebp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x50u));
    /* 008a6dc2: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
L_008a6dc5:; BB(0x008a6dc5);
    /* 008a6dc5: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 008a6dc8: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 008a6dcb: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 008a6dcd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6dcf: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6dd2: jp 0x8a6e1f */ if (fP) goto L_008a6e1f;
L_008a6dd4:; BB(0x008a6dd4);
    /* 008a6dd4: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 008a6dd7: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 008a6dda: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 008a6ddc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6dde: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6de1: jp 0x8a6e1f */ if (fP) goto L_008a6e1f;
L_008a6de3:; BB(0x008a6de3);
    /* 008a6de3: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 008a6de6: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 008a6de9: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 008a6deb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6ded: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6df0: jp 0x8a6e1f */ if (fP) goto L_008a6e1f;
L_008a6df2:; BB(0x008a6df2);
    /* 008a6df2: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 008a6df5: fmul dword ptr [ebp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x38u));
    /* 008a6df8: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 008a6dfa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6dfc: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6dff: jp 0x8a6e1f */ if (fP) goto L_008a6e1f;
L_008a6e01:; BB(0x008a6e01);
    /* 008a6e01: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 008a6e04: fmul dword ptr [ebp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3cu));
    /* 008a6e07: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 008a6e09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6e0b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6e0e: jp 0x8a6e1f */ if (fP) goto L_008a6e1f;
L_008a6e10:; BB(0x008a6e10);
    /* 008a6e10: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 008a6e13: fmul dword ptr [ebp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x40u));
    /* 008a6e16: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 008a6e18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6e1a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6e1d: jnp 0x8a6e34 */ if (!fP) goto L_008a6e34;
L_008a6e1f:; BB(0x008a6e1f);
    /* 008a6e1f: inc dword ptr [ebp + 0x24] */ { u32 ad = (u32)(r_ebp+0x24u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a6e22: cmp dword ptr [ebp + 0x24], 8 */ {  u32 a = R32((u32)(r_ebp+0x24u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a6e26: jb 0x8a6ba3 */ if (fC) goto L_008a6ba3;
L_008a6e2c:; BB(0x008a6e2c);
    /* 008a6e2c: jmp 0x8a6e34 */ goto L_008a6e34;
L_008a6e2e:; BB(0x008a6e2e);
    /* 008a6e2e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6e30: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6e32: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a6e34:; BB(0x008a6e34);
    /* 008a6e34: mov eax, dword ptr [0xaea334] */ r_eax = R32((u32)(0xaea334u));
    /* 008a6e39: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a6e3b: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 008a6e3e: fldcw word ptr [ebp + 0x7c] */ fcw = R16((u32)(r_ebp+0x7cu));
    /* 008a6e41: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 008a6e44: mov ecx, dword ptr [ebp + 0x58] */ r_ecx = R32((u32)(r_ebp+0x58u));
    /* 008a6e47: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a6e49: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 008a6e4c: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a6e4f: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 008a6e52: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a6e55: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 008a6e58: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 008a6e5b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a6e5d: mov ecx, dword ptr [ebp + 0x4c] */ r_ecx = R32((u32)(r_ebp+0x4cu));
    /* 008a6e60: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_008a6e63:; BB(0x008a6e63);
    /* 008a6e63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a6e64:; BB(0x008a6e64);
    /* 008a6e64: mov ecx, dword ptr [ebp + 0x50] */ r_ecx = R32((u32)(r_ebp+0x50u));
    /* 008a6e67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a6e68: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a6e6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a6e6c: add ebp, 0x68 */ {  u32 a = r_ebp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a6e6f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a6e70: ret  */ FN_RET(0x008a6906); r_esp += 4; return;
}

void f_008a6e71(void) /* sub_8A6E71 */
{
    FN_ENTER(0x008a6e71);
    /* 008a6e71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a6e72: lea ebp, [esp - 0x70] */ r_ebp = (u32)(r_esp+0xffffff90u);
    /* 008a6e76: sub esp, 0x2d0 */ {  u32 a = r_esp; u32 b = 0x2d0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a6e7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a6e7d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a6e7f: cmp dword ptr [ebp + 0x7c], edx */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6e82: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6e83: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6e84: mov ebx, eax */ r_ebx = r_eax;
    /* 008a6e86: je 0x8a6ece */ if (fZ) goto L_008a6ece;
L_008a6e88:; BB(0x008a6e88);
    /* 008a6e88: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a6e8a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008a6e8c: lea ecx, [ebx + 0xc] */ r_ecx = (u32)(r_ebx+0xcu);
    /* 008a6e8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008a6e90:; BB(0x008a6e90);
    /* 008a6e90: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a6e92: fcomp dword ptr [0x99b9b4] */ fx_compare(ST(0), R_F32((u32)(0x99b9b4u))); FPOP();
    /* 008a6e98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a6e9a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a6e9d: jp 0x8a6ea0 */ if (fP) goto L_008a6ea0;
L_008a6e9f:; BB(0x008a6e9f);
    /* 008a6e9f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008a6ea0:; BB(0x008a6ea0);
    /* 008a6ea0: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6ea3: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008a6ea4: jne 0x8a6e90 */ if (!fZ) goto L_008a6e90;
L_008a6ea6:; BB(0x008a6ea6);
    /* 008a6ea6: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a6ea9: jne 0x8a6ec0 */ if (!fZ) goto L_008a6ec0;
L_008a6eab:; BB(0x008a6eab);
    /* 008a6eab: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 008a6eae: or word ptr [eax + 2], 0xffff */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 008a6eb4: or dword ptr [eax + 4], 0xffffffff */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008a6eb8: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 008a6ebb: jmp 0x8a766b */ goto L_008a766b;
L_008a6ec0:; BB(0x008a6ec0);
    /* 008a6ec0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a6ec2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a6ec4: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008a6ec6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a6ec9: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 008a6ecc: jmp 0x8a6ed5 */ goto L_008a6ed5;
L_008a6ece:; BB(0x008a6ece);
    /* 008a6ece: mov dword ptr [ebp + 0x64], 4 */ W32((u32)(r_ebp+0x64u), 0x4u);
L_008a6ed5:; BB(0x008a6ed5);
    /* 008a6ed5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008a6ed7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a6ed8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a6eda: lea edi, [ebp - 0x160] */ r_edi = (u32)(r_ebp+0xfffffea0u);
    /* 008a6ee0: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a6ee2: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a6ee7u); f_008a64e4();
    /* 008a6ee7: lea ecx, [ebp - 0x158] */ r_ecx = (u32)(r_ebp+0xfffffea8u);
    /* 008a6eed: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6eef: mov dword ptr [ebp + 0x1c], ecx */ W32((u32)(r_ebp+0x1cu), r_ecx);
    /* 008a6ef2: lea ecx, [ebp - 0x154] */ r_ecx = (u32)(r_ebp+0xfffffeacu);
    /* 008a6ef8: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6efa: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 008a6efd: lea ecx, [ebp - 0x150] */ r_ecx = (u32)(r_ebp+0xfffffeb0u);
    /* 008a6f03: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f05: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 008a6f08: lea ecx, [ebp - 0x138] */ r_ecx = (u32)(r_ebp+0xfffffec8u);
    /* 008a6f0e: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f10: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 008a6f13: lea ecx, [ebp - 0x134] */ r_ecx = (u32)(r_ebp+0xfffffeccu);
    /* 008a6f19: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f1b: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 008a6f1e: lea ecx, [ebp - 0x130] */ r_ecx = (u32)(r_ebp+0xfffffed0u);
    /* 008a6f24: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f26: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 008a6f29: lea ecx, [ebp - 0x128] */ r_ecx = (u32)(r_ebp+0xfffffed8u);
    /* 008a6f2f: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f31: mov dword ptr [ebp + 0x4c], ecx */ W32((u32)(r_ebp+0x4cu), r_ecx);
    /* 008a6f34: lea ecx, [ebp - 0x124] */ r_ecx = (u32)(r_ebp+0xfffffedcu);
    /* 008a6f3a: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f3c: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 008a6f3f: lea ecx, [ebp - 0x120] */ r_ecx = (u32)(r_ebp+0xfffffee0u);
    /* 008a6f45: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f47: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 008a6f4a: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 008a6f50: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f52: mov dword ptr [ebp + 0x48], ecx */ W32((u32)(r_ebp+0x48u), r_ecx);
    /* 008a6f55: lea ecx, [ebp - 0x114] */ r_ecx = (u32)(r_ebp+0xfffffeecu);
    /* 008a6f5b: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f5d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 008a6f60: mov dword ptr [ebp + 0x7c], edx */ W32((u32)(r_ebp+0x7cu), r_edx);
    /* 008a6f63: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 008a6f69: lea esi, [ebp - 0x160] */ r_esi = (u32)(r_ebp+0xfffffea0u);
    /* 008a6f6f: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f71: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008a6f73: lea edx, [ebp - 0x25c] */ r_edx = (u32)(r_ebp+0xfffffda4u);
    /* 008a6f79: lea edi, [ebp - 0x260] */ r_edi = (u32)(r_ebp+0xfffffda0u);
    /* 008a6f7f: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a6f81: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 008a6f84: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a6f86: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 008a6f89: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 008a6f8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a6f8e: jmp 0x8a6f93 */ goto L_008a6f93;
L_008a6f90:; BB(0x008a6f90);
    /* 008a6f90: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
L_008a6f93:; BB(0x008a6f93);
    /* 008a6f93: fld dword ptr [ebp + ecx - 0x160] */ FPUSH(R_F32((u32)(r_ebp+r_ecx+0xfffffea0u)));
    /* 008a6f9a: fadd dword ptr [eax - 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xfffffff8u));
    /* 008a6f9d: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 008a6fa0: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 008a6fa3: fadd dword ptr [ebp + ecx - 0x15c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_ecx+0xfffffea4u));
    /* 008a6faa: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 008a6fad: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 008a6fb0: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a6fb2: fstp dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0)); FPOP();
    /* 008a6fb5: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 008a6fb8: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 008a6fbe: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a6fc4: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 008a6fc7: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 008a6fca: fistp dword ptr [ebp - 0x50] */ W32((u32)(r_ebp+0xffffffb0u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a6fcd: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 008a6fd0: mov dword ptr [ebp + 0x6c], esi */ W32((u32)(r_ebp+0x6cu), r_esi);
    /* 008a6fd3: fild dword ptr [ebp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x6cu)));
    /* 008a6fd6: fmul dword ptr [0x99bac8] */ ST(0) = ST(0) * R_F32((u32)(0x99bac8u));
    /* 008a6fdc: fst dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0));
    /* 008a6fdf: fstp dword ptr [ebp + ecx - 0x260] */ W_F32((u32)(r_ebp+r_ecx+0xfffffda0u), ST(0)); FPOP();
    /* 008a6fe6: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 008a6fe9: fmul dword ptr [0x99ba94] */ ST(0) = ST(0) * R_F32((u32)(0x99ba94u));
    /* 008a6fef: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a6ff5: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 008a6ff8: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 008a6ffb: fistp dword ptr [ebp + 0x24] */ W32((u32)(r_ebp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a6ffe: mov esi, dword ptr [ebp + 0x24] */ r_esi = R32((u32)(r_ebp+0x24u));
    /* 008a7001: mov dword ptr [ebp + 0x6c], esi */ W32((u32)(r_ebp+0x6cu), r_esi);
    /* 008a7004: fild dword ptr [ebp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x6cu)));
    /* 008a7007: fmul dword ptr [0x99bac4] */ ST(0) = ST(0) * R_F32((u32)(0x99bac4u));
    /* 008a700d: fst dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0));
    /* 008a7010: fstp dword ptr [ebp + ecx - 0x25c] */ W_F32((u32)(r_ebp+r_ecx+0xfffffda4u), ST(0)); FPOP();
    /* 008a7017: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 008a701a: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 008a7020: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a7026: fstp dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0)); FPOP();
    /* 008a7029: fld dword ptr [ebp + 0x68] */ FPUSH(R_F32((u32)(r_ebp+0x68u)));
    /* 008a702c: fistp dword ptr [ebp + 0x20] */ W32((u32)(r_ebp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a702f: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 008a7032: mov dword ptr [ebp + 0x68], esi */ W32((u32)(r_ebp+0x68u), r_esi);
    /* 008a7035: fild dword ptr [ebp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x68u)));
    /* 008a7038: mov esi, dword ptr [ebp + 0x7c] */ r_esi = R32((u32)(r_ebp+0x7cu));
    /* 008a703b: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008a703e: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7041: fmul dword ptr [0x99bac8] */ ST(0) = ST(0) * R_F32((u32)(0x99bac8u));
    /* 008a7047: mov dword ptr [ebp + 0x68], esi */ W32((u32)(r_ebp+0x68u), r_esi);
    /* 008a704a: fst dword ptr [edi + eax] */ W_F32((u32)(r_edi+r_eax), ST(0));
    /* 008a704d: fld1  */ FPUSH(1.0);
    /* 008a704f: fstp dword ptr [edx + eax] */ W_F32((u32)(r_edx+r_eax), ST(0)); FPOP();
    /* 008a7052: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 008a7055: fsub dword ptr [ebp + 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x50u));
    /* 008a7058: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 008a705b: fsub dword ptr [ebp + 0x6c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x6cu));
    /* 008a705e: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 008a7061: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 008a7064: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 008a7066: fst dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0));
    /* 008a7069: je 0x8a709a */ if (fZ) goto L_008a709a;
L_008a706b:; BB(0x008a706b);
    /* 008a706b: fld dword ptr [0x99dbbc] */ FPUSH(R_F32((u32)(0x99dbbcu)));
    /* 008a7071: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 008a7074: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a7076: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a7078: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a707a: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a707c: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a707e: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 008a7081: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008a7083: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a7085: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7087: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a7089: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a708b: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 008a708e: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a7090: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a7092: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7094: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a7096: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a7098: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a709a:; BB(0x008a709a);
    /* 008a709a: cmp ecx, 0xc0 */ {  u32 a = r_ecx; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a70a0: jae 0x8a7149 */ if (!fC) goto L_008a7149;
L_008a70a6:; BB(0x008a70a6);
    /* 008a70a6: cmp dword ptr [ebp + 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a70aa: je 0x8a70db */ if (fZ) goto L_008a70db;
L_008a70ac:; BB(0x008a70ac);
    /* 008a70ac: fld dword ptr [0x99dbb8] */ FPUSH(R_F32((u32)(0x99dbb8u)));
    /* 008a70b2: mov esi, dword ptr [ebp + 0x18] */ r_esi = R32((u32)(r_ebp+0x18u));
    /* 008a70b5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a70b7: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a70b9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a70bb: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a70bd: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a70bf: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 008a70c2: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008a70c4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a70c6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a70c8: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a70ca: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a70cc: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 008a70cf: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a70d1: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a70d3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a70d5: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a70d7: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a70d9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a70db:; BB(0x008a70db);
    /* 008a70db: fld dword ptr [0x99dbb4] */ FPUSH(R_F32((u32)(0x99dbb4u)));
    /* 008a70e1: mov esi, dword ptr [ebp + 0x4c] */ r_esi = R32((u32)(r_ebp+0x4cu));
    /* 008a70e4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a70e6: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a70e8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a70ea: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a70ec: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a70ee: mov esi, dword ptr [ebp - 0x48] */ r_esi = R32((u32)(r_ebp+0xffffffb8u));
    /* 008a70f1: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a70f3: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008a70f5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a70f7: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a70f9: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a70fb: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 008a70fe: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a7100: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a7102: cmp dword ptr [ebp + 0x68], 3 */ {  u32 a = R32((u32)(r_ebp+0x68u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7106: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7108: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a710a: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a710c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a710e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7110: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7112: je 0x8a714d */ if (fZ) goto L_008a714d;
L_008a7114:; BB(0x008a7114);
    /* 008a7114: fmul dword ptr [0x99bae4] */ ST(0) = ST(0) * R_F32((u32)(0x99bae4u));
    /* 008a711a: mov esi, dword ptr [ebp + 0x48] */ r_esi = R32((u32)(r_ebp+0x48u));
    /* 008a711d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a711f: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a7121: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a7123: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 008a7126: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 008a7129: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a712b: fmul dword ptr [0x99bae4] */ ST(0) = ST(0) * R_F32((u32)(0x99bae4u));
    /* 008a7131: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a7133: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a7135: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 008a7138: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 008a713b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a713d: fmul dword ptr [0x99bae4] */ ST(0) = ST(0) * R_F32((u32)(0x99bae4u));
    /* 008a7143: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 008a7145: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008a7147: jmp 0x8a714f */ goto L_008a714f;
L_008a7149:; BB(0x008a7149);
    /* 008a7149: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a714b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a714d:; BB(0x008a714d);
    /* 008a714d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a714f:; BB(0x008a714f);
    /* 008a714f: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 008a7152: inc dword ptr [ebp + 0x7c] */ { u32 ad = (u32)(r_ebp+0x7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a7155: fmul dword ptr [0xa34f98] */ ST(0) = ST(0) * R_F32((u32)(0xa34f98u));
    /* 008a715b: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a715e: fstp dword ptr [ebp + ecx - 0x270] */ W_F32((u32)(r_ebp+r_ecx+0xfffffd90u), ST(0)); FPOP();
    /* 008a7165: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 008a7168: fmul dword ptr [0xa34f9c] */ ST(0) = ST(0) * R_F32((u32)(0xa34f9cu));
    /* 008a716e: fstp dword ptr [ebp + ecx - 0x26c] */ W_F32((u32)(r_ebp+r_ecx+0xfffffd94u), ST(0)); FPOP();
    /* 008a7175: fmul dword ptr [0xa34fa0] */ ST(0) = ST(0) * R_F32((u32)(0xa34fa0u));
    /* 008a717b: fstp dword ptr [edi + eax] */ W_F32((u32)(r_edi+r_eax), ST(0)); FPOP();
    /* 008a717e: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7181: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7187: jb 0x8a6f90 */ if (fC) goto L_008a6f90;
L_008a718d:; BB(0x008a718d);
    /* 008a718d: mov eax, dword ptr [0xaea334] */ r_eax = R32((u32)(0xaea334u));
    /* 008a7192: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 008a7195: fldcw word ptr [ebp + 0x7c] */ fcw = R16((u32)(r_ebp+0x7cu));
    /* 008a7198: push dword ptr [ebp + 0x64] */ { u32 v = R32((u32)(r_ebp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a719b: lea eax, [ebp - 0x260] */ r_eax = (u32)(r_ebp+0xfffffda0u);
    /* 008a71a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a71a2: lea eax, [ebp + 0x54] */ r_eax = (u32)(r_ebp+0x54u);
    /* 008a71a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a71a6: lea eax, [ebp + 0x28] */ r_eax = (u32)(r_ebp+0x28u);
    /* 008a71a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a71aa: call 0x8a6906 */ r_esp -= 4; W32(r_esp, 0x8a71afu); f_008a6906();
    /* 008a71af: fld dword ptr [0xa34fa8] */ FPUSH(R_F32((u32)(0xa34fa8u)));
    /* 008a71b5: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 008a71b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a71bb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a71bd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 008a71c0: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 008a71c3: fld dword ptr [0xa34fac] */ FPUSH(R_F32((u32)(0xa34facu)));
    /* 008a71c9: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008a71cc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a71ce: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 008a71d1: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 008a71d4: fmul dword ptr [0xa34fb0] */ ST(0) = ST(0) * R_F32((u32)(0xa34fb0u));
    /* 008a71da: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 008a71dd: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 008a71e0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008a71e2: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 008a71e5: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 008a71e8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a71ea: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 008a71ed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a71ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a71f1: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 008a71f4: fmul dword ptr [0xa34fb0] */ ST(0) = ST(0) * R_F32((u32)(0xa34fb0u));
    /* 008a71fa: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 008a71fd: call 0x8a6507 */ r_esp -= 4; W32(r_esp, 0x8a7202u); f_008a6507();
    /* 008a7202: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 008a7205: mov esi, eax */ r_esi = r_eax;
    /* 008a7207: mov dword ptr [ebp + 0x4c], esi */ W32((u32)(r_ebp+0x4cu), r_esi);
    /* 008a720a: call 0x8a6507 */ r_esp -= 4; W32(r_esp, 0x8a720fu); f_008a6507();
    /* 008a720f: cmp dword ptr [ebp + 0x64], 4 */ {  u32 a = R32((u32)(r_ebp+0x64u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7213: mov edi, eax */ r_edi = r_eax;
    /* 008a7215: mov dword ptr [ebp + 0x48], edi */ W32((u32)(r_ebp+0x48u), r_edi);
    /* 008a7218: jne 0x8a7232 */ if (!fZ) goto L_008a7232;
L_008a721a:; BB(0x008a721a);
    /* 008a721a: cmp si, di */ {  u32 a = (u16)r_esi; u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a721d: jne 0x8a7232 */ if (!fZ) goto L_008a7232;
L_008a721f:; BB(0x008a721f);
    /* 008a721f: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 008a7222: and dword ptr [eax + 4], 0 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a7226: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 008a7229: mov word ptr [eax + 2], di */ W16((u32)(r_eax+0x2u), (u16)r_edi);
    /* 008a722d: jmp 0x8a766b */ goto L_008a766b;
L_008a7232:; BB(0x008a7232);
    /* 008a7232: mov ecx, esi */ r_ecx = r_esi;
    /* 008a7234: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 008a7237: call 0x8a63ea */ r_esp -= 4; W32(r_esp, 0x8a723cu); f_008a63ea();
    /* 008a723c: mov ecx, edi */ r_ecx = r_edi;
    /* 008a723e: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 008a7241: call 0x8a63ea */ r_esp -= 4; W32(r_esp, 0x8a7246u); f_008a63ea();
    /* 008a7246: fld dword ptr [0xa34f98] */ FPUSH(R_F32((u32)(0xa34f98u)));
    /* 008a724c: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 008a724f: cmp di, si */ {  u32 a = (u16)r_edi; u32 b = (u16)r_esi; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 008a7252: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7254: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008a7256: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7257: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a7259: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 008a725c: cmp dword ptr [ebp + 0x64], 3 */ {  u32 a = R32((u32)(r_ebp+0x64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7260: fld dword ptr [0xa34f9c] */ FPUSH(R_F32((u32)(0xa34f9cu)));
    /* 008a7266: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 008a7269: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008a726c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a726e: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 008a7271: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 008a7274: fmul dword ptr [0xa34fa0] */ ST(0) = ST(0) * R_F32((u32)(0xa34fa0u));
    /* 008a727a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a727c: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 008a727f: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 008a7282: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 008a7285: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008a7287: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 008a728a: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 008a728d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a728f: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 008a7292: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7294: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7296: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 008a7299: fmul dword ptr [0xa34fa0] */ ST(0) = ST(0) * R_F32((u32)(0xa34fa0u));
    /* 008a729f: fstp dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0)); FPOP();
    /* 008a72a2: jne 0x8a72ba */ if (!fZ) goto L_008a72ba;
L_008a72a4:; BB(0x008a72a4);
    /* 008a72a4: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 008a72a7: mov word ptr [eax + 2], di */ W16((u32)(r_eax+0x2u), (u16)r_edi);
    /* 008a72ab: lea esi, [ebp + 0x28] */ r_esi = (u32)(r_ebp+0x28u);
    /* 008a72ae: lea edi, [ebp - 0x28] */ r_edi = (u32)(r_ebp+0xffffffd8u);
    /* 008a72b1: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72b2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72b3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72b4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72b5: lea esi, [ebp + 0x54] */ r_esi = (u32)(r_ebp+0x54u);
    /* 008a72b8: jmp 0x8a72ce */ goto L_008a72ce;
L_008a72ba:; BB(0x008a72ba);
    /* 008a72ba: mov word ptr [eax + 2], si */ W16((u32)(r_eax+0x2u), (u16)r_esi);
    /* 008a72be: mov word ptr [eax], di */ W16((u32)(r_eax), (u16)r_edi);
    /* 008a72c1: lea esi, [ebp + 0x54] */ r_esi = (u32)(r_ebp+0x54u);
    /* 008a72c4: lea edi, [ebp - 0x28] */ r_edi = (u32)(r_ebp+0xffffffd8u);
    /* 008a72c7: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72c8: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72c9: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72ca: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72cb: lea esi, [ebp + 0x28] */ r_esi = (u32)(r_ebp+0x28u);
L_008a72ce:; BB(0x008a72ce);
    /* 008a72ce: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 008a72d1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a72d4: lea edi, [ebp - 0x18] */ r_edi = (u32)(r_ebp+0xffffffe8u);
    /* 008a72d7: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72d8: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72d9: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72da: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a72db: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 008a72de: fsub dword ptr [ebp - 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffd8u));
    /* 008a72e1: jne 0x8a7332 */ if (!fZ) goto L_008a7332;
L_008a72e3:; BB(0x008a72e3);
    /* 008a72e3: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 008a72e9: mov dword ptr [ebp + 0x50], 0x99dba8 */ W32((u32)(r_ebp+0x50u), 0x99dba8u);
    /* 008a72f0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a72f2: fadd dword ptr [ebp - 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd8u));
    /* 008a72f5: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008a72f8: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008a72fb: fsub dword ptr [ebp - 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffdcu));
    /* 008a72fe: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 008a7304: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a7306: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7308: fadd dword ptr [ebp - 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffdcu));
    /* 008a730b: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008a730e: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008a7311: fsub dword ptr [ebp - 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffe0u));
    /* 008a7314: fst dword ptr [ebp + 0x7c] */ W_F32((u32)(r_ebp+0x7cu), ST(0));
    /* 008a7317: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7319: fadd dword ptr [ebp - 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe0u));
    /* 008a731c: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 008a731f: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008a7322: fsub dword ptr [ebp - 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffe4u));
    /* 008a7325: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7327: fadd dword ptr [ebp - 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe4u));
    /* 008a732a: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 008a732d: jmp 0x8a73b8 */ goto L_008a73b8;
L_008a7332:; BB(0x008a7332);
    /* 008a7332: fld dword ptr [0x99bad0] */ FPUSH(R_F32((u32)(0x99bad0u)));
    /* 008a7338: mov dword ptr [ebp + 0x50], 0x99db98 */ W32((u32)(r_ebp+0x50u), 0x99db98u);
    /* 008a733f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7341: fadd dword ptr [ebp - 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd8u));
    /* 008a7344: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008a7347: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008a734a: fsub dword ptr [ebp - 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffdcu));
    /* 008a734d: fld dword ptr [0x99bad0] */ FPUSH(R_F32((u32)(0x99bad0u)));
    /* 008a7353: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7355: fadd dword ptr [ebp - 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffdcu));
    /* 008a7358: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008a735b: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008a735e: fsub dword ptr [ebp - 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffe0u));
    /* 008a7361: fst dword ptr [ebp + 0x7c] */ W_F32((u32)(r_ebp+0x7cu), ST(0));
    /* 008a7364: fld dword ptr [0x99bad0] */ FPUSH(R_F32((u32)(0x99bad0u)));
    /* 008a736a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a736c: fadd dword ptr [ebp - 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe0u));
    /* 008a736f: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 008a7372: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008a7375: fsub dword ptr [ebp - 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffe4u));
    /* 008a7378: fld dword ptr [0x99bad0] */ FPUSH(R_F32((u32)(0x99bad0u)));
    /* 008a737e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7380: fadd dword ptr [ebp - 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe4u));
    /* 008a7383: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 008a7386: fld dword ptr [0x99db94] */ FPUSH(R_F32((u32)(0x99db94u)));
    /* 008a738c: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 008a738e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7390: fadd dword ptr [ebp - 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd8u));
    /* 008a7393: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 008a7396: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a7398: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a739a: fadd dword ptr [ebp - 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffdcu));
    /* 008a739d: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 008a73a0: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008a73a2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a73a4: fadd dword ptr [ebp - 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe0u));
    /* 008a73a7: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 008a73aa: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a73ac: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a73ae: fadd dword ptr [ebp - 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe4u));
    /* 008a73b1: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 008a73b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a73b6: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a73b8:; BB(0x008a73b8);
    /* 008a73b8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a73ba: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a73bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a73bd: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a73bf: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 008a73c2: fst st(1) */ ST(1) = ST(0);
    /* 008a73c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a73c6: fld dword ptr [ebp + 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0x7cu)));
    /* 008a73c9: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 008a73cc: fild dword ptr [ebp + 0x7c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x7cu)));
    /* 008a73cf: jge 0x8a73d7 */ if ((fS==fO)) goto L_008a73d7;
L_008a73d1:; BB(0x008a73d1);
    /* 008a73d1: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a73d7:; BB(0x008a73d7);
    /* 008a73d7: mov ax, word ptr [ebp + 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x48u))) & 0xffffu);
    /* 008a73db: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 008a73de: cmp word ptr [ebp + 0x4c], ax */ {  u32 a = R16((u32)(r_ebp+0x4cu)); u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a73e2: je 0x8a73fb */ if (fZ) goto L_008a73fb;
L_008a73e4:; BB(0x008a73e4);
    /* 008a73e4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a73e6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a73e8: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008a73ea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008a73ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a73ee: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 008a73f1: fmul dword ptr [ebp + 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x54u));
    /* 008a73f4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a73f6: fdivr dword ptr [ebp + 0x6c] */ ST(0) = R_F32((u32)(r_ebp+0x6cu)) / ST(0);
    /* 008a73f9: jmp 0x8a73fd */ goto L_008a73fd;
L_008a73fb:; BB(0x008a73fb);
    /* 008a73fb: fldz  */ FPUSH(0.0);
L_008a73fd:; BB(0x008a73fd);
    /* 008a73fd: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 008a7400: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7402: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7404: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7405: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7407: lea edi, [ebp - 0x160] */ r_edi = (u32)(r_ebp+0xfffffea0u);
    /* 008a740d: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 008a7410: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a7412: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a7414: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008a7416: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008a7418: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 008a741b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a741d: fstp dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0)); FPOP();
    /* 008a7420: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7422: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7424: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a7429u); f_008a64e4();
    /* 008a7429: lea eax, [ebp - 0x160] */ r_eax = (u32)(r_ebp+0xfffffea0u);
    /* 008a742f: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 008a7432: lea eax, [ebp - 0x15c] */ r_eax = (u32)(r_ebp+0xfffffea4u);
    /* 008a7438: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a743a: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 008a743d: lea eax, [ebp - 0x14c] */ r_eax = (u32)(r_ebp+0xfffffeb4u);
    /* 008a7443: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a7445: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 008a7448: lea eax, [ebp - 0x12c] */ r_eax = (u32)(r_ebp+0xfffffed4u);
    /* 008a744e: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a7450: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 008a7453: lea esi, [ebp - 0x258] */ r_esi = (u32)(r_ebp+0xfffffda8u);
    /* 008a7459: lea edi, [ebp - 0x11c] */ r_edi = (u32)(r_ebp+0xfffffee4u);
    /* 008a745f: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 008a7465: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008a7467: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a7469: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a746b: mov dword ptr [ebp + 0x7c], edx */ W32((u32)(r_ebp+0x7cu), r_edx);
    /* 008a746e: lea ecx, [ebx + 4] */ r_ecx = (u32)(r_ebx+0x4u);
    /* 008a7471: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
L_008a7474:; BB(0x008a7474);
    /* 008a7474: cmp dword ptr [ebp + 0x64], 3 */ {  u32 a = R32((u32)(r_ebp+0x64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7478: jne 0x8a7498 */ if (!fZ) goto L_008a7498;
L_008a747a:; BB(0x008a747a);
    /* 008a747a: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008a747d: fcomp dword ptr [0x99b9b4] */ fx_compare(ST(0), R_F32((u32)(0x99b9b4u))); FPOP();
    /* 008a7483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7485: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a7488: jp 0x8a7498 */ if (fP) goto L_008a7498;
L_008a748a:; BB(0x008a748a);
    /* 008a748a: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a748d: or edx, 0xc0000000 */ {  u32 a = r_edx; u32 b = 0xc0000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008a7493: jmp 0x8a7646 */ goto L_008a7646;
L_008a7498:; BB(0x008a7498);
    /* 008a7498: fld dword ptr [0xa34f98] */ FPUSH(R_F32((u32)(0xa34f98u)));
    /* 008a749e: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 008a74a1: fmul dword ptr [ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffffcu));
    /* 008a74a4: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a74a6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 008a74a9: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 008a74ac: fld dword ptr [0xa34f9c] */ FPUSH(R_F32((u32)(0xa34f9cu)));
    /* 008a74b2: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008a74b4: fadd dword ptr [ecx + eax] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax));
    /* 008a74b7: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 008a74ba: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 008a74bd: fld dword ptr [0xa34fa0] */ FPUSH(R_F32((u32)(0xa34fa0u)));
    /* 008a74c3: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008a74c6: fadd dword ptr [eax + ecx] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ecx));
    /* 008a74c9: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 008a74cc: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 008a74cf: fsub dword ptr [ebp - 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffd8u));
    /* 008a74d2: fmul dword ptr [ebp + 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x54u));
    /* 008a74d5: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 008a74d8: fsub dword ptr [ebp - 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffe0u));
    /* 008a74db: fmul dword ptr [ebp + 0x5c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x5cu));
    /* 008a74de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a74e0: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008a74e3: fsub dword ptr [ebp - 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffdcu));
    /* 008a74e6: fmul dword ptr [ebp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x58u));
    /* 008a74e9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a74eb: fcom dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); 
    /* 008a74f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a74f3: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a74f6: jp 0x8a74fe */ if (fP) goto L_008a74fe;
L_008a74f8:; BB(0x008a74f8);
    /* 008a74f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a74fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a74fc: jmp 0x8a7527 */ goto L_008a7527;
L_008a74fe:; BB(0x008a74fe);
    /* 008a74fe: fcom dword ptr [ebp + 0x6c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x6cu))); 
    /* 008a7501: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7503: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a7506: jne 0x8a750f */ if (!fZ) goto L_008a750f;
L_008a7508:; BB(0x008a7508);
    /* 008a7508: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a750a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a750c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a750d: jmp 0x8a7527 */ goto L_008a7527;
L_008a750f:; BB(0x008a750f);
    /* 008a750f: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a7515: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 008a7518: fld dword ptr [ebp + 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0x4cu)));
    /* 008a751b: fistp dword ptr [ebp + 0x18] */ W32((u32)(r_ebp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a751e: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008a7521: mov ebx, dword ptr [ebp + 0x50] */ r_ebx = R32((u32)(r_ebp+0x50u));
    /* 008a7524: mov eax, dword ptr [ebx + eax*4] */ r_eax = R32((u32)(r_ebx+r_eax*4));
L_008a7527:; BB(0x008a7527);
    /* 008a7527: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 008a752a: mov ebx, eax */ r_ebx = r_eax;
    /* 008a752c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a752f: fsub dword ptr [ebp + eax - 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_eax+0xffffffd8u));
    /* 008a7533: shl ebx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a7536: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a7539: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008a753b: mov ebx, dword ptr [ebp + 0x7c] */ r_ebx = R32((u32)(r_ebp+0x7cu));
    /* 008a753e: fmul dword ptr [esi + ecx] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx));
    /* 008a7541: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008a7544: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a7547: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a754a: fsub dword ptr [ebp + eax - 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_eax+0xffffffdcu));
    /* 008a754e: fmul dword ptr [esi + ecx] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx));
    /* 008a7551: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 008a7554: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 008a7557: fsub dword ptr [ebp + eax - 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_eax+0xffffffe0u));
    /* 008a755b: fmul dword ptr [esi + ecx] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx));
    /* 008a755e: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 008a7561: je 0x8a7597 */ if (fZ) goto L_008a7597;
L_008a7563:; BB(0x008a7563);
    /* 008a7563: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 008a7566: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a7568: fmul dword ptr [0x99dbbc] */ ST(0) = ST(0) * R_F32((u32)(0x99dbbcu));
    /* 008a756e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7570: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7572: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7574: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 008a7577: fld dword ptr [0x99dbbc] */ FPUSH(R_F32((u32)(0x99dbbcu)));
    /* 008a757d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a757f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7581: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7583: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7585: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008a7588: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 008a758b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a758d: fmul dword ptr [0x99dbbc] */ ST(0) = ST(0) * R_F32((u32)(0x99dbbcu));
    /* 008a7593: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7595: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008a7597:; BB(0x008a7597);
    /* 008a7597: cmp dword ptr [ebp + 0x7c], 0xc */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a759b: jae 0x8a7642 */ if (!fC) goto L_008a7642;
L_008a75a1:; BB(0x008a75a1);
    /* 008a75a1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a75a3: je 0x8a75d9 */ if (fZ) goto L_008a75d9;
L_008a75a5:; BB(0x008a75a5);
    /* 008a75a5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 008a75a8: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a75aa: fmul dword ptr [0x99dbb8] */ ST(0) = ST(0) * R_F32((u32)(0x99dbb8u));
    /* 008a75b0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a75b2: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a75b4: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a75b6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 008a75b9: fld dword ptr [0x99dbb8] */ FPUSH(R_F32((u32)(0x99dbb8u)));
    /* 008a75bf: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a75c1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a75c3: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a75c5: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a75c7: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 008a75ca: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 008a75cd: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a75cf: fmul dword ptr [0x99dbb8] */ ST(0) = ST(0) * R_F32((u32)(0x99dbb8u));
    /* 008a75d5: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a75d7: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008a75d9:; BB(0x008a75d9);
    /* 008a75d9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 008a75dc: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a75de: fmul dword ptr [0x99dbb4] */ ST(0) = ST(0) * R_F32((u32)(0x99dbb4u));
    /* 008a75e4: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a75e6: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a75e8: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a75ea: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008a75ed: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a75ef: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a75f2: fmul dword ptr [0x99dbb4] */ ST(0) = ST(0) * R_F32((u32)(0x99dbb4u));
    /* 008a75f8: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a75fa: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a75fc: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 008a75ff: fmul dword ptr [0x99dbb4] */ ST(0) = ST(0) * R_F32((u32)(0x99dbb4u));
    /* 008a7605: fadd dword ptr [edi + ecx] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_ecx));
    /* 008a7608: fstp dword ptr [edi + ecx] */ W_F32((u32)(r_edi+r_ecx), ST(0)); FPOP();
    /* 008a760b: je 0x8a7644 */ if (fZ) goto L_008a7644;
L_008a760d:; BB(0x008a760d);
    /* 008a760d: fmul dword ptr [0x99bae4] */ ST(0) = ST(0) * R_F32((u32)(0x99bae4u));
    /* 008a7613: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008a7616: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7618: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a761a: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a761c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008a761f: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 008a7622: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7624: fmul dword ptr [0x99bae4] */ ST(0) = ST(0) * R_F32((u32)(0x99bae4u));
    /* 008a762a: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a762c: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a762e: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 008a7631: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 008a7634: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7636: fmul dword ptr [0x99bae4] */ ST(0) = ST(0) * R_F32((u32)(0x99bae4u));
    /* 008a763c: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a763e: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7640: jmp 0x8a7646 */ goto L_008a7646;
L_008a7642:; BB(0x008a7642);
    /* 008a7642: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a7644:; BB(0x008a7644);
    /* 008a7644: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a7646:; BB(0x008a7646);
    /* 008a7646: inc dword ptr [ebp + 0x7c] */ { u32 ad = (u32)(r_ebp+0x7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a7649: add dword ptr [ebp + 0x68], 0x10 */ { u32 ad = (u32)(r_ebp+0x68u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a764d: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a7650: cmp dword ptr [ebp + 0x7c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7654: jb 0x8a7474 */ if (fC) goto L_008a7474;
L_008a765a:; BB(0x008a765a);
    /* 008a765a: mov eax, dword ptr [0xaea334] */ r_eax = R32((u32)(0xaea334u));
    /* 008a765f: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 008a7662: fldcw word ptr [ebp + 0x7c] */ fcw = R16((u32)(r_ebp+0x7cu));
    /* 008a7665: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 008a7668: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_008a766b:; BB(0x008a766b);
    /* 008a766b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a766c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a766d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a766f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a7670: add ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a7673: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a7674: ret  */ FN_RET(0x008a6e71); r_esp += 4; return;
}

