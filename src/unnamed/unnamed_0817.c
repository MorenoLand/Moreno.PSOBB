#include "protos.h"

void f_008170b4(void) /* sub_8170B4 */
{
    FN_ENTER(0x008170b4);
    /* 008170b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008170b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008170b6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008170b8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008170ba: call 0x8170d8 */ r_esp -= 4; W32(r_esp, 0x8170bfu); f_008170d8();
    /* 008170bf: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008170c3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008170c5: jne 0x8170cc */ if (!fZ) goto L_008170cc;
L_008170c7:; BB(0x008170c7);
    /* 008170c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008170c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008170c9: ret 4 */ FN_RET(0x008170b4); r_esp += 8; return;
L_008170cc:; BB(0x008170cc);
    /* 008170cc: mov eax, ebp */ r_eax = r_ebp;
    /* 008170ce: call 0x5c2f78 */ r_esp -= 4; W32(r_esp, 0x8170d3u); f_005c2f78();
    /* 008170d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008170d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008170d5: ret 4 */ FN_RET(0x008170b4); r_esp += 8; return;
}

void f_008170d8(void) /* sub_8170D8 */
{
    FN_ENTER(0x008170d8);
    /* 008170d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008170d9: mov ebp, esp */ r_ebp = r_esp;
    /* 008170db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008170dd: push 0x8f74cc */ { u32 v = 0x8f74ccu; r_esp -= 4; W32(r_esp, v); }
    /* 008170e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008170e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008170e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008170f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008170f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008170f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008170f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008170fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008170ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00817102: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00817109: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0081710c: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0081710f: mov dword ptr [ebx], 0xb47a90 */ W32((u32)(r_ebx), 0xb47a90u);
    /* 00817115: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817117: je 0x81712d */ if (fZ) goto L_0081712d;
L_00817119:; BB(0x00817119);
    /* 00817119: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081711b: je 0x817129 */ if (fZ) goto L_00817129;
L_0081711d:; BB(0x0081711d);
    /* 0081711d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0081711f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00817121: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x817123u); call_ind(t); }
    /* 00817123: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00817126: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
L_00817129:; BB(0x00817129);
    /* 00817129: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081712b: jne 0x817119 */ if (!fZ) goto L_00817119;
L_0081712d:; BB(0x0081712d);
    /* 0081712d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00817134: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817138: mov dword ptr [ebx], 0xb47a80 */ W32((u32)(r_ebx), 0xb47a80u);
    /* 0081713e: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817140: jne 0x817168 */ if (!fZ) goto L_00817168;
L_00817142:; BB(0x00817142);
    /* 00817142: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 00817145: or eax, 0xffff0020 */ {  u32 a = r_eax; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0081714a: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0081714e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817150: je 0x81717f */ if (fZ) goto L_0081717f;
L_00817152:; BB(0x00817152);
    /* 00817152: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817154: je 0x817162 */ if (fZ) goto L_00817162;
L_00817156:; BB(0x00817156);
    /* 00817156: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00817158: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0081715a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x81715cu); call_ind(t); }
    /* 0081715c: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0081715f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
L_00817162:; BB(0x00817162);
    /* 00817162: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817164: jne 0x817152 */ if (!fZ) goto L_00817152;
L_00817166:; BB(0x00817166);
    /* 00817166: jmp 0x81717f */ goto L_0081717f;
L_00817168:; BB(0x00817168);
    /* 00817168: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081716b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081716e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00817171: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00817174: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081717b: mov esp, ebp */ r_esp = r_ebp;
    /* 0081717d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081717e: ret  */ FN_RET(0x008170d8); r_esp += 4; return;
L_0081717f:; BB(0x0081717f);
    /* 0081717f: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00817182: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817184: je 0x817168 */ if (fZ) goto L_00817168;
L_00817186:; BB(0x00817186);
    /* 00817186: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00817189: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081718b: je 0x8171cf */ if (fZ) goto L_008171cf;
L_0081718d:; BB(0x0081718d);
    /* 0081718d: cmp ebx, dword ptr [ecx + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817190: je 0x8171aa */ if (fZ) goto L_008171aa;
L_00817192:; BB(0x00817192);
    /* 00817192: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00817195: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00817198: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0081719b: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0081719e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008171a0: je 0x8171d8 */ if (fZ) goto L_008171d8;
L_008171a2:; BB(0x008171a2);
    /* 008171a2: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 008171a5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 008171a8: jmp 0x817168 */ goto L_00817168;
L_008171aa:; BB(0x008171aa);
    /* 008171aa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008171ad: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008171b0: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008171b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008171b6: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 008171b9: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 008171c0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008171c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008171c5: je 0x817168 */ if (fZ) goto L_00817168;
L_008171c7:; BB(0x008171c7);
    /* 008171c7: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 008171ca: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 008171cd: jmp 0x817168 */ goto L_00817168;
L_008171cf:; BB(0x008171cf);
    /* 008171cf: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 008171d6: jmp 0x817168 */ goto L_00817168;
L_008171d8:; BB(0x008171d8);
    /* 008171d8: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 008171db: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 008171de: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 008171e1: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 008171e4: jmp 0x817168 */ goto L_00817168;
}

void f_008171e8(void) /* sub_8171E8 */
{
    FN_ENTER(0x008171e8);
    /* 008171e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008171e9: mov eax, ecx */ r_eax = r_ecx;
    /* 008171eb: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 008171ef: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008171f2: mov dword ptr [eax], 0xb47a80 */ W32((u32)(r_eax), 0xb47a80u);
    /* 008171f8: jne 0x81724c */ if (!fZ) goto L_0081724c;
L_008171fa:; BB(0x008171fa);
    /* 008171fa: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 008171fd: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00817203: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00817207: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817209: je 0x817226 */ if (fZ) goto L_00817226;
L_0081720b:; BB(0x0081720b);
    /* 0081720b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0081720e: mov ebx, eax */ r_ebx = r_eax;
L_00817210:; BB(0x00817210);
    /* 00817210: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817212: je 0x81721d */ if (fZ) goto L_0081721d;
L_00817214:; BB(0x00817214);
    /* 00817214: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00817216: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00817218: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x81721au); call_ind(t); }
    /* 0081721a: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
L_0081721d:; BB(0x0081721d);
    /* 0081721d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081721f: jne 0x817210 */ if (!fZ) goto L_00817210;
L_00817221:; BB(0x00817221);
    /* 00817221: mov eax, ebx */ r_eax = r_ebx;
    /* 00817223: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00817226:; BB(0x00817226);
    /* 00817226: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00817229: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081722b: je 0x81724c */ if (fZ) goto L_0081724c;
L_0081722d:; BB(0x0081722d);
    /* 0081722d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00817230: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00817232: je 0x81725c */ if (fZ) goto L_0081725c;
L_00817234:; BB(0x00817234);
    /* 00817234: cmp eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817237: je 0x817265 */ if (fZ) goto L_00817265;
L_00817239:; BB(0x00817239);
    /* 00817239: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0081723c: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0081723f: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00817242: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817244: je 0x81724e */ if (fZ) goto L_0081724e;
L_00817246:; BB(0x00817246);
    /* 00817246: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00817249: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_0081724c:; BB(0x0081724c);
    /* 0081724c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081724d: ret  */ FN_RET(0x008171e8); r_esp += 4; return;
L_0081724e:; BB(0x0081724e);
    /* 0081724e: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00817251: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 00817254: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00817257: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0081725a: jmp 0x81724c */ goto L_0081724c;
L_0081725c:; BB(0x0081725c);
    /* 0081725c: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 00817263: jmp 0x81724c */ goto L_0081724c;
L_00817265:; BB(0x00817265);
    /* 00817265: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00817268: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0081726b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0081726e: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 00817275: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00817278: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081727a: je 0x81724c */ if (fZ) goto L_0081724c;
L_0081727c:; BB(0x0081727c);
    /* 0081727c: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0081727f: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00817282: jmp 0x81724c */ goto L_0081724c;
}

void f_00817284(void) /* sub_817284 */
{
    FN_ENTER(0x00817284);
    /* 00817284: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00817285: mov eax, ecx */ r_eax = r_ecx;
    /* 00817287: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0081728a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081728c: je 0x8172a7 */ if (fZ) goto L_008172a7;
L_0081728e:; BB(0x0081728e);
    /* 0081728e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00817291: mov ebx, eax */ r_ebx = r_eax;
L_00817293:; BB(0x00817293);
    /* 00817293: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817295: je 0x8172a0 */ if (fZ) goto L_008172a0;
L_00817297:; BB(0x00817297);
    /* 00817297: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00817299: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0081729b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x81729du); call_ind(t); }
    /* 0081729d: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
L_008172a0:; BB(0x008172a0);
    /* 008172a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008172a2: jne 0x817293 */ if (!fZ) goto L_00817293;
L_008172a4:; BB(0x008172a4);
    /* 008172a4: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008172a7:; BB(0x008172a7);
    /* 008172a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008172a8: ret  */ FN_RET(0x00817284); r_esp += 4; return;
}

void f_008172ac(void) /* sub_8172AC */
{
    FN_ENTER(0x008172ac);
    /* 008172ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008172ad: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 008172b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008172b2: je 0x8172d1 */ if (fZ) goto L_008172d1;
L_008172b4:; BB(0x008172b4);
    /* 008172b4: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008172b7: mov ebx, eax */ r_ebx = r_eax;
L_008172b9:; BB(0x008172b9);
    /* 008172b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008172bb: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x8172c0u); f_0073d160();
    /* 008172c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008172c2: call 0x8172ac */ r_esp -= 4; W32(r_esp, 0x8172c7u); f_008172ac();
    /* 008172c7: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 008172ca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008172cc: jne 0x8172b9 */ if (!fZ) goto L_008172b9;
L_008172ce:; BB(0x008172ce);
    /* 008172ce: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008172d1:; BB(0x008172d1);
    /* 008172d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008172d2: ret  */ FN_RET(0x008172ac); r_esp += 4; return;
}

void f_008172d4(void) /* sub_8172D4 */
{
    FN_ENTER(0x008172d4);
    /* 008172d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008172d5: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 008172d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008172da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008172de: je 0x8172ff */ if (fZ) goto L_008172ff;
L_008172e0:; BB(0x008172e0);
    /* 008172e0: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 008172e3: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008172e5: je 0x817354 */ if (fZ) goto L_00817354;
L_008172e7:; BB(0x008172e7);
    /* 008172e7: cmp ecx, dword ptr [edx + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008172ea: je 0x81735d */ if (fZ) goto L_0081735d;
L_008172ec:; BB(0x008172ec);
    /* 008172ec: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 008172ef: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 008172f2: mov ebx, dword ptr [ecx + 0x10] */ r_ebx = R32((u32)(r_ecx+0x10u));
    /* 008172f5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008172f7: je 0x817346 */ if (fZ) goto L_00817346;
L_008172f9:; BB(0x008172f9);
    /* 008172f9: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 008172fc: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
L_008172ff:; BB(0x008172ff);
    /* 008172ff: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00817302: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817304: je 0x817338 */ if (fZ) goto L_00817338;
L_00817306:; BB(0x00817306);
    /* 00817306: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00817309: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081730b: je 0x817327 */ if (fZ) goto L_00817327;
L_0081730d:; BB(0x0081730d);
    /* 0081730d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00817310: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00817317: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0081731a: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 0081731d: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 00817320: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00817323: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00817324: ret 4 */ FN_RET(0x008172d4); r_esp += 8; return;
L_00817327:; BB(0x00817327);
    /* 00817327: mov dword ptr [ecx + 0xc], ecx */ W32((u32)(r_ecx+0xcu), r_ecx);
    /* 0081732a: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0081732d: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00817334: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00817335: ret 4 */ FN_RET(0x008172d4); r_esp += 8; return;
L_00817338:; BB(0x00817338);
    /* 00817338: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0081733f: mov dword ptr [ecx + 0xc], ecx */ W32((u32)(r_ecx+0xcu), r_ecx);
    /* 00817342: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00817343: ret 4 */ FN_RET(0x008172d4); r_esp += 8; return;
L_00817346:; BB(0x00817346);
    /* 00817346: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00817349: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0081734c: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0081734f: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 00817352: jmp 0x8172ff */ goto L_008172ff;
L_00817354:; BB(0x00817354);
    /* 00817354: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 0081735b: jmp 0x8172ff */ goto L_008172ff;
L_0081735d:; BB(0x0081735d);
    /* 0081735d: mov ebx, dword ptr [ecx + 0x10] */ r_ebx = R32((u32)(r_ecx+0x10u));
    /* 00817360: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 00817363: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00817366: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 0081736d: mov ebx, dword ptr [ecx + 0x10] */ r_ebx = R32((u32)(r_ecx+0x10u));
    /* 00817370: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817372: je 0x8172ff */ if (fZ) goto L_008172ff;
L_00817374:; BB(0x00817374);
    /* 00817374: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00817377: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 0081737a: jmp 0x8172ff */ goto L_008172ff;
}

void f_0081737c(void) /* sub_81737C */
{
    FN_ENTER(0x0081737c);
    /* 0081737c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081737f: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00817382: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00817384: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817386: je 0x8173ae */ if (fZ) goto L_008173ae;
L_00817388:; BB(0x00817388);
    /* 00817388: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0081738c: mov ebx, eax */ r_ebx = r_eax;
    /* 0081738e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00817391: mov esi, ecx */ r_esi = r_ecx;
L_00817393:; BB(0x00817393);
    /* 00817393: mov ecx, esi */ r_ecx = r_esi;
    /* 00817395: call 0x81737c */ r_esp -= 4; W32(r_esp, 0x81739au); f_0081737c();
    /* 0081739a: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 0081739d: lea ebx, [eax + ebx + 1] */ r_ebx = (u32)(r_eax+r_ebx+0x1u);
    /* 008173a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008173a3: jne 0x817393 */ if (!fZ) goto L_00817393;
L_008173a5:; BB(0x008173a5);
    /* 008173a5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 008173a8: mov eax, ebx */ r_eax = r_ebx;
    /* 008173aa: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_008173ae:; BB(0x008173ae);
    /* 008173ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008173b1: ret  */ FN_RET(0x0081737c); r_esp += 4; return;
}

void f_008173b4(void) /* sub_8173B4 */
{
    FN_ENTER(0x008173b4);
    /* 008173b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008173b6: je 0x8173c7 */ if (fZ) goto L_008173c7;
L_008173b8:; BB(0x008173b8);
    /* 008173b8: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 008173bc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008173be: jne 0x8173cd */ if (!fZ) goto L_008173cd;
L_008173c0:; BB(0x008173c0);
    /* 008173c0: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 008173c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008173c5: jne 0x8173b8 */ if (!fZ) goto L_008173b8;
L_008173c7:; BB(0x008173c7);
    /* 008173c7: mov eax, 1 */ r_eax = 0x1u;
    /* 008173cc: ret  */ FN_RET(0x008173b4); r_esp += 4; return;
L_008173cd:; BB(0x008173cd);
    /* 008173cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008173cf: ret  */ FN_RET(0x008173b4); r_esp += 4; return;
}

void f_008173d0(void) /* sub_8173D0 */
{
    FN_ENTER(0x008173d0);
    /* 008173d0: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 008173d4: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008173d9: je 0x8173de */ if (fZ) goto L_008173de;
L_008173db:; BB(0x008173db);
    /* 008173db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008173dd: ret  */ FN_RET(0x008173d0); r_esp += 4; return;
L_008173de:; BB(0x008173de);
    /* 008173de: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008173e3: jne 0x8173f4 */ if (!fZ) goto L_008173f4;
L_008173e5:; BB(0x008173e5);
    /* 008173e5: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008173ea: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 008173ee: mov eax, 1 */ r_eax = 0x1u;
    /* 008173f3: ret  */ FN_RET(0x008173d0); r_esp += 4; return;
L_008173f4:; BB(0x008173f4);
    /* 008173f4: and eax, 0xfdff */ {  u32 a = r_eax; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008173f9: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 008173fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008173ff: ret  */ FN_RET(0x008173d0); r_esp += 4; return;
}

void f_00817400(void) /* sub_817400 */
{
    FN_ENTER(0x00817400);
    /* 00817400: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00817401: mov eax, ecx */ r_eax = r_ecx;
    /* 00817403: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00817406: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817408: je 0x817423 */ if (fZ) goto L_00817423;
L_0081740a:; BB(0x0081740a);
    /* 0081740a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0081740d: mov ebx, eax */ r_ebx = r_eax;
L_0081740f:; BB(0x0081740f);
    /* 0081740f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817411: je 0x81741c */ if (fZ) goto L_0081741c;
L_00817413:; BB(0x00817413);
    /* 00817413: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00817415: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00817417: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x817419u); call_ind(t); }
    /* 00817419: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
L_0081741c:; BB(0x0081741c);
    /* 0081741c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081741e: jne 0x81740f */ if (!fZ) goto L_0081740f;
L_00817420:; BB(0x00817420);
    /* 00817420: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00817423:; BB(0x00817423);
    /* 00817423: mov ecx, dword ptr [0xaab400] */ r_ecx = R32((u32)(0xaab400u));
    /* 00817429: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081742b: je 0x817434 */ if (fZ) goto L_00817434;
L_0081742d:; BB(0x0081742d);
    /* 0081742d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0081742f: call 0x508320 */ r_esp -= 4; W32(r_esp, 0x817434u); f_00508320();
L_00817434:; BB(0x00817434);
    /* 00817434: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 0081743a: mov dword ptr [0xaab400], 0 */ W32((u32)(0xaab400u), 0x0u);
    /* 00817444: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817446: je 0x81744f */ if (fZ) goto L_0081744f;
L_00817448:; BB(0x00817448);
    /* 00817448: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0081744a: call 0x508320 */ r_esp -= 4; W32(r_esp, 0x81744fu); f_00508320();
L_0081744f:; BB(0x0081744f);
    /* 0081744f: mov dword ptr [0xaab404], 0 */ W32((u32)(0xaab404u), 0x0u);
    /* 00817459: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081745a: ret  */ FN_RET(0x00817400); r_esp += 4; return;
}

void f_0081745c(void) /* sub_81745C */
{
    FN_ENTER(0x0081745c);
    /* 0081745c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081745d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081745e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081745f: mov eax, ecx */ r_eax = r_ecx;
    /* 00817461: mov edi, dword ptr [0xaca2a8] */ r_edi = R32((u32)(0xaca2a8u));
    /* 00817467: cmp edi, dword ptr [0xaca2a4] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaca2a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081746d: je 0x8174a3 */ if (fZ) goto L_008174a3;
L_0081746f:; BB(0x0081746f);
    /* 0081746f: mov ecx, dword ptr [0xaca2fc] */ r_ecx = R32((u32)(0xaca2fcu));
    /* 00817475: mov edx, 1 */ r_edx = 0x1u;
    /* 0081747a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081747c: je 0x81749d */ if (fZ) goto L_0081749d;
L_0081747e:; BB(0x0081747e);
    /* 0081747e: test edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817480: jne 0x817528 */ if (!fZ) goto L_00817528;
L_00817486:; BB(0x00817486);
    /* 00817486: movzx ebp, word ptr [ecx + 8] */ r_ebp = (u32)R16((u32)(r_ecx+0x8u));
    /* 0081748a: and ebp, 0xfff7 */ {  u32 a = r_ebp; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00817490: mov word ptr [ecx + 8], bp */ W16((u32)(r_ecx+0x8u), (u16)r_ebp);
L_00817494:; BB(0x00817494);
    /* 00817494: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00817497: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00817499: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081749b: jne 0x81747e */ if (!fZ) goto L_0081747e;
L_0081749d:; BB(0x0081749d);
    /* 0081749d: mov dword ptr [0xaca2a4], edi */ W32((u32)(0xaca2a4u), r_edi);
L_008174a3:; BB(0x008174a3);
    /* 008174a3: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 008174a6: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 008174a9: mov dword ptr [0xa16380], 0 */ W32((u32)(0xa16380u), 0x0u);
    /* 008174b3: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008174b6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008174b8: je 0x817518 */ if (fZ) goto L_00817518;
L_008174ba:; BB(0x008174ba);
    /* 008174ba: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 008174bd: mov ebp, eax */ r_ebp = r_eax;
L_008174bf:; BB(0x008174bf);
    /* 008174bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008174c1: je 0x81756a */ if (fZ) goto L_0081756a;
L_008174c7:; BB(0x008174c7);
    /* 008174c7: mov esi, edi */ r_esi = r_edi;
    /* 008174c9: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 008174cc: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 008174d0: test dl, 0xf */ {  u32 a = (u8)r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008174d3: je 0x8174fe */ if (fZ) goto L_008174fe;
L_008174d5:; BB(0x008174d5);
    /* 008174d5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008174d8: je 0x8174f7 */ if (fZ) goto L_008174f7;
L_008174da:; BB(0x008174da);
    /* 008174da: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008174e0: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 008174e4: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008174e7: jne 0x8174f7 */ if (!fZ) goto L_008174f7;
L_008174e9:; BB(0x008174e9);
    /* 008174e9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008174eb: je 0x81750c */ if (fZ) goto L_0081750c;
L_008174ed:; BB(0x008174ed);
    /* 008174ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008174ef: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008174f1: mov ecx, esi */ r_ecx = r_esi;
    /* 008174f3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x8174f5u); call_ind(t); }
    /* 008174f5: jmp 0x81750c */ goto L_0081750c;
L_008174f7:; BB(0x008174f7);
    /* 008174f7: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008174fa: jne 0x81753b */ if (!fZ) goto L_0081753b;
L_008174fc:; BB(0x008174fc);
    /* 008174fc: jmp 0x81750c */ goto L_0081750c;
L_008174fe:; BB(0x008174fe);
    /* 008174fe: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00817500: mov ecx, esi */ r_ecx = r_esi;
    /* 00817502: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x817505u); call_ind(t); }
    /* 00817505: mov ecx, esi */ r_ecx = r_esi;
    /* 00817507: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x81750cu); f_00817574();
L_0081750c:; BB(0x0081750c);
    /* 0081750c: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0081750f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817511: jne 0x8174bf */ if (!fZ) goto L_008174bf;
L_00817513:; BB(0x00817513);
    /* 00817513: mov eax, ebp */ r_eax = r_ebp;
    /* 00817515: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
L_00817518:; BB(0x00817518);
    /* 00817518: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0081751b: or edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817521: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00817524: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00817525: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00817526: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00817527: ret  */ FN_RET(0x0081745c); r_esp += 4; return;
L_00817528:; BB(0x00817528);
    /* 00817528: movzx ebp, word ptr [ecx + 8] */ r_ebp = (u32)R16((u32)(r_ecx+0x8u));
    /* 0081752c: or ebp, 0xffff0008 */ {  u32 a = r_ebp; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00817532: mov word ptr [ecx + 8], bp */ W16((u32)(r_ecx+0x8u), (u16)r_ebp);
    /* 00817536: jmp 0x817494 */ goto L_00817494;
L_0081753b:; BB(0x0081753b);
    /* 0081753b: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0081753e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817540: je 0x817553 */ if (fZ) goto L_00817553;
L_00817542:; BB(0x00817542);
    /* 00817542: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817544: je 0x81754f */ if (fZ) goto L_0081754f;
L_00817546:; BB(0x00817546);
    /* 00817546: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00817548: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0081754a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x81754cu); call_ind(t); }
    /* 0081754c: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
L_0081754f:; BB(0x0081754f);
    /* 0081754f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817551: jne 0x817542 */ if (!fZ) goto L_00817542;
L_00817553:; BB(0x00817553);
    /* 00817553: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00817555: mov ecx, esi */ r_ecx = r_esi;
    /* 00817557: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x81755au); call_ind(t); }
    /* 0081755a: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 0081755e: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00817564: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 00817568: jmp 0x81750c */ goto L_0081750c;
L_0081756a:; BB(0x0081756a);
    /* 0081756a: mov eax, ebp */ r_eax = r_ebp;
    /* 0081756c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0081756f: jmp 0x817518 */ goto L_00817518;
}

void f_00817574(void) /* sub_817574 */
{
    FN_ENTER(0x00817574);
    /* 00817574: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00817575: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00817576: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00817577: mov edx, ecx */ r_edx = r_ecx;
    /* 00817579: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0081757c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081757e: je 0x8175cf */ if (fZ) goto L_008175cf;
L_00817580:; BB(0x00817580);
    /* 00817580: mov ebp, eax */ r_ebp = r_eax;
    /* 00817582: mov esi, edx */ r_esi = r_edx;
L_00817584:; BB(0x00817584);
    /* 00817584: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817586: je 0x8175cf */ if (fZ) goto L_008175cf;
L_00817588:; BB(0x00817588);
    /* 00817588: mov edi, ebp */ r_edi = r_ebp;
    /* 0081758a: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 0081758d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00817591: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817593: je 0x8175ba */ if (fZ) goto L_008175ba;
L_00817595:; BB(0x00817595);
    /* 00817595: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817597: je 0x8175b4 */ if (fZ) goto L_008175b4;
L_00817599:; BB(0x00817599);
    /* 00817599: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0081759e: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 008175a2: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008175a4: jne 0x8175b4 */ if (!fZ) goto L_008175b4;
L_008175a6:; BB(0x008175a6);
    /* 008175a6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008175a8: je 0x8175c8 */ if (fZ) goto L_008175c8;
L_008175aa:; BB(0x008175aa);
    /* 008175aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008175ac: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008175ae: mov ecx, edi */ r_ecx = r_edi;
    /* 008175b0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8175b2u); call_ind(t); }
    /* 008175b2: jmp 0x8175c8 */ goto L_008175c8;
L_008175b4:; BB(0x008175b4);
    /* 008175b4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008175b6: jne 0x8175d3 */ if (!fZ) goto L_008175d3;
L_008175b8:; BB(0x008175b8);
    /* 008175b8: jmp 0x8175c8 */ goto L_008175c8;
L_008175ba:; BB(0x008175ba);
    /* 008175ba: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008175bc: mov ecx, edi */ r_ecx = r_edi;
    /* 008175be: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8175c1u); call_ind(t); }
    /* 008175c1: mov ecx, edi */ r_ecx = r_edi;
    /* 008175c3: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x8175c8u); f_00817574();
L_008175c8:; BB(0x008175c8);
    /* 008175c8: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 008175cb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008175cd: jne 0x817584 */ if (!fZ) goto L_00817584;
L_008175cf:; BB(0x008175cf);
    /* 008175cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008175d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008175d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008175d2: ret  */ FN_RET(0x00817574); r_esp += 4; return;
L_008175d3:; BB(0x008175d3);
    /* 008175d3: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 008175d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008175d8: je 0x8175eb */ if (fZ) goto L_008175eb;
L_008175da:; BB(0x008175da);
    /* 008175da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008175dc: je 0x8175e7 */ if (fZ) goto L_008175e7;
L_008175de:; BB(0x008175de);
    /* 008175de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008175e0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008175e2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8175e4u); call_ind(t); }
    /* 008175e4: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
L_008175e7:; BB(0x008175e7);
    /* 008175e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008175e9: jne 0x8175da */ if (!fZ) goto L_008175da;
L_008175eb:; BB(0x008175eb);
    /* 008175eb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008175ed: mov ecx, edi */ r_ecx = r_edi;
    /* 008175ef: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8175f2u); call_ind(t); }
    /* 008175f2: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 008175f6: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008175fb: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 008175ff: jmp 0x8175c8 */ goto L_008175c8;
}

void f_00817604(void) /* sub_817604 */
{
    FN_ENTER(0x00817604);
    /* 00817604: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00817605: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00817606: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00817608: mov ecx, dword ptr [0xaca2a0] */ r_ecx = R32((u32)(0xaca2a0u));
    /* 0081760e: cmp ecx, dword ptr [0xaca29c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaca29cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817614: je 0x81765c */ if (fZ) goto L_0081765c;
L_00817616:; BB(0x00817616);
    /* 00817616: mov edx, dword ptr [0xaca2fc] */ r_edx = R32((u32)(0xaca2fcu));
    /* 0081761c: mov eax, 1 */ r_eax = 0x1u;
    /* 00817621: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817623: je 0x817656 */ if (fZ) goto L_00817656;
L_00817625:; BB(0x00817625);
    /* 00817625: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00817628:; BB(0x00817628);
    /* 00817628: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081762a: je 0x81763c */ if (fZ) goto L_0081763c;
L_0081762c:; BB(0x0081762c);
    /* 0081762c: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 00817630: or edi, 0xffff0010 */ {  u32 a = r_edi; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00817636: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
    /* 0081763a: jmp 0x81764a */ goto L_0081764a;
L_0081763c:; BB(0x0081763c);
    /* 0081763c: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 00817640: and edi, 0xffef */ {  u32 a = r_edi; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00817646: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
L_0081764a:; BB(0x0081764a);
    /* 0081764a: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0081764d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081764f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817651: jne 0x817628 */ if (!fZ) goto L_00817628;
L_00817653:; BB(0x00817653);
    /* 00817653: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00817656:; BB(0x00817656);
    /* 00817656: mov dword ptr [0xaca29c], ecx */ W32((u32)(0xaca29cu), r_ecx);
L_0081765c:; BB(0x0081765c);
    /* 0081765c: call 0x817768 */ r_esp -= 4; W32(r_esp, 0x817661u); f_00817768();
    /* 00817661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817663: je 0x817695 */ if (fZ) goto L_00817695;
L_00817665:; BB(0x00817665);
    /* 00817665: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00817668: mov dword ptr [0xa16380], 0 */ W32((u32)(0xa16380u), 0x0u);
    /* 00817672: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817675: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00817678: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0081767a: call 0x817b80 */ r_esp -= 4; W32(r_esp, 0x81767fu); f_00817b80();
    /* 0081767f: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00817682: mov dword ptr [0xa16380], 1 */ W32((u32)(0xa16380u), 0x1u);
    /* 0081768c: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081768f: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00817692: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817693: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00817694: ret  */ FN_RET(0x00817604); r_esp += 4; return;
L_00817695:; BB(0x00817695);
    /* 00817695: mov eax, 1 */ r_eax = 0x1u;
    /* 0081769a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081769b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081769c: call 0x5067f8 */ r_esp -= 4; W32(r_esp, 0x8176a1u); f_005067f8();
    /* 008176a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008176a4: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008176a7: mov dword ptr [0xa16380], 0 */ W32((u32)(0xa16380u), 0x0u);
    /* 008176b1: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008176b4: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 008176b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008176b9: call 0x817b80 */ r_esp -= 4; W32(r_esp, 0x8176beu); f_00817b80();
    /* 008176be: mov dword ptr [0xa16380], 1 */ W32((u32)(0xa16380u), 0x1u);
    /* 008176c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008176ca: call 0x817794 */ r_esp -= 4; W32(r_esp, 0x8176cfu); f_00817794();
    /* 008176cf: mov dword ptr [0xa16380], 0 */ W32((u32)(0xa16380u), 0x0u);
    /* 008176d9: call 0x82f500 */ r_esp -= 4; W32(r_esp, 0x8176deu); f_0082f500();
    /* 008176de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008176e0: call 0x8178ac */ r_esp -= 4; W32(r_esp, 0x8176e5u); f_008178ac();
    /* 008176e5: call 0x82f4d8 */ r_esp -= 4; W32(r_esp, 0x8176eau); f_0082f4d8();
    /* 008176ea: mov dword ptr [0xa16380], 1 */ W32((u32)(0xa16380u), 0x1u);
    /* 008176f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008176f6: call 0x817934 */ r_esp -= 4; W32(r_esp, 0x8176fbu); f_00817934();
    /* 008176fb: mov dword ptr [0xa16380], 0 */ W32((u32)(0xa16380u), 0x0u);
    /* 00817705: call 0x50689c */ r_esp -= 4; W32(r_esp, 0x81770au); f_0050689c();
    /* 0081770a: call 0x50692c */ r_esp -= 4; W32(r_esp, 0x81770fu); f_0050692c();
    /* 0081770f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00817711: call 0x817ab8 */ r_esp -= 4; W32(r_esp, 0x817716u); f_00817ab8();
    /* 00817716: mov edx, dword ptr [0xaca340] */ r_edx = R32((u32)(0xaca340u));
    /* 0081771c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817720: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817725: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00817728: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0081772c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081772e: je 0x817755 */ if (fZ) goto L_00817755;
L_00817730:; BB(0x00817730);
    /* 00817730: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00817733: mov edi, ecx */ r_edi = r_ecx;
L_00817735:; BB(0x00817735);
    /* 00817735: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00817739: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0081773b: jne 0x81774b */ if (!fZ) goto L_0081774b;
L_0081773d:; BB(0x0081773d);
    /* 0081773d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0081773f: mov ecx, edi */ r_ecx = r_edi;
    /* 00817741: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817744u); call_ind(t); }
    /* 00817744: mov ecx, edi */ r_ecx = r_edi;
    /* 00817746: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x81774bu); f_00818f50();
L_0081774b:; BB(0x0081774b);
    /* 0081774b: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 0081774e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817750: jne 0x817735 */ if (!fZ) goto L_00817735;
L_00817752:; BB(0x00817752);
    /* 00817752: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00817755:; BB(0x00817755);
    /* 00817755: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00817758: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0081775b: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817760: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00817763: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817764: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00817765: ret  */ FN_RET(0x00817604); r_esp += 4; return;
}

void f_00817768(void) /* sub_817768 */
{
    FN_ENTER(0x00817768);
    /* 00817768: mov eax, dword ptr [0xaca200] */ r_eax = R32((u32)(0xaca200u));
    /* 0081776d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081776f: jne 0x81778d */ if (!fZ) goto L_0081778d;
L_00817771:; BB(0x00817771);
    /* 00817771: movzx eax, word ptr [0xaca204] */ r_eax = (u32)R16((u32)(0xaca204u));
    /* 00817778: movzx ecx, word ptr [0xaca208] */ r_ecx = (u32)R16((u32)(0xaca208u));
    /* 0081777f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00817782: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00817784: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00817784, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00817784, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00817786: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817788: jne 0x81778d */ if (!fZ) goto L_0081778d;
L_0081778a:; BB(0x0081778a);
    /* 0081778a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081778c: ret  */ FN_RET(0x00817768); r_esp += 4; return;
L_0081778d:; BB(0x0081778d);
    /* 0081778d: mov eax, 1 */ r_eax = 0x1u;
    /* 00817792: ret  */ FN_RET(0x00817768); r_esp += 4; return;
}

void f_00817794(void) /* sub_817794 */
{
    FN_ENTER(0x00817794);
    /* 00817794: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00817795: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00817797: call 0x817768 */ r_esp -= 4; W32(r_esp, 0x81779cu); f_00817768();
    /* 0081779c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081779e: je 0x8177a2 */ if (fZ) goto L_008177a2;
L_008177a0:; BB(0x008177a0);
    /* 008177a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008177a1: ret  */ FN_RET(0x00817794); r_esp += 4; return;
L_008177a2:; BB(0x008177a2);
    /* 008177a2: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x8177a7u); f_007a9380();
    /* 008177a7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008177a9: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x8177aeu); f_007a94a0();
    /* 008177ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008177af: call 0x7a9440 */ r_esp -= 4; W32(r_esp, 0x8177b4u); f_007a9440();
    /* 008177b4: mov edx, dword ptr [0xaca374] */ r_edx = R32((u32)(0xaca374u));
    /* 008177ba: mov ecx, dword ptr [0xaca340] */ r_ecx = R32((u32)(0xaca340u));
    /* 008177c0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 008177c4: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008177c9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 008177cd: mov edx, dword ptr [0xaca360] */ r_edx = R32((u32)(0xaca360u));
    /* 008177d3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 008177d7: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008177dc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 008177e0: mov edx, dword ptr [0xaca358] */ r_edx = R32((u32)(0xaca358u));
    /* 008177e6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 008177ea: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008177ef: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 008177f3: mov edx, dword ptr [0xaca348] */ r_edx = R32((u32)(0xaca348u));
    /* 008177f9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 008177fd: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817802: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817806: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0081780b: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0081780f: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00817815: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00817819: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0081781d: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00817823: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00817827: mov ecx, dword ptr [0xaca370] */ r_ecx = R32((u32)(0xaca370u));
    /* 0081782d: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00817831: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00817837: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0081783b: mov ebx, dword ptr [ebx + 0x18] */ r_ebx = R32((u32)(r_ebx+0x18u));
    /* 0081783e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817840: je 0x817864 */ if (fZ) goto L_00817864;
L_00817842:; BB(0x00817842);
    /* 00817842: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817846: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817848: jne 0x817858 */ if (!fZ) goto L_00817858;
L_0081784a:; BB(0x0081784a);
    /* 0081784a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0081784c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081784e: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817851u); call_ind(t); }
    /* 00817851: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817853: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x817858u); f_00818f50();
L_00817858:; BB(0x00817858);
    /* 00817858: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0081785b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081785d: jne 0x817842 */ if (!fZ) goto L_00817842;
L_0081785f:; BB(0x0081785f);
    /* 0081785f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
L_00817864:; BB(0x00817864);
    /* 00817864: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00817868: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0081786e: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00817872: call 0x82f500 */ r_esp -= 4; W32(r_esp, 0x817877u); f_0082f500();
    /* 00817877: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0081787c: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 0081787f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817881: je 0x8178a0 */ if (fZ) goto L_008178a0;
L_00817883:; BB(0x00817883);
    /* 00817883: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817887: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817889: jne 0x817899 */ if (!fZ) goto L_00817899;
L_0081788b:; BB(0x0081788b);
    /* 0081788b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0081788d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081788f: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817892u); call_ind(t); }
    /* 00817892: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817894: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x817899u); f_00818f50();
L_00817899:; BB(0x00817899);
    /* 00817899: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0081789c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081789e: jne 0x817883 */ if (!fZ) goto L_00817883;
L_008178a0:; BB(0x008178a0);
    /* 008178a0: call 0x82f4d8 */ r_esp -= 4; W32(r_esp, 0x8178a5u); f_0082f4d8();
    /* 008178a5: call 0x7a9470 */ r_esp -= 4; W32(r_esp, 0x8178aau); f_007a9470();
    /* 008178aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008178ab: ret  */ FN_RET(0x00817794); r_esp += 4; return;
}

void f_008178ac(void) /* sub_8178AC */
{
    FN_ENTER(0x008178ac);
    /* 008178ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008178ad: call 0x817768 */ r_esp -= 4; W32(r_esp, 0x8178b2u); f_00817768();
    /* 008178b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008178b4: je 0x8178b8 */ if (fZ) goto L_008178b8;
L_008178b6:; BB(0x008178b6);
    /* 008178b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008178b7: ret  */ FN_RET(0x008178ac); r_esp += 4; return;
L_008178b8:; BB(0x008178b8);
    /* 008178b8: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x8178bdu); f_007a9380();
    /* 008178bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008178bf: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x8178c4u); f_007a94a0();
    /* 008178c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008178c5: call 0x7a9440 */ r_esp -= 4; W32(r_esp, 0x8178cau); f_007a9440();
    /* 008178ca: mov eax, dword ptr [0xaca334] */ r_eax = R32((u32)(0xaca334u));
    /* 008178cf: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 008178d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008178d4: je 0x8178fb */ if (fZ) goto L_008178fb;
L_008178d6:; BB(0x008178d6);
    /* 008178d6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008178d9: mov ebx, ecx */ r_ebx = r_ecx;
L_008178db:; BB(0x008178db);
    /* 008178db: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 008178df: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008178e1: jne 0x8178f1 */ if (!fZ) goto L_008178f1;
L_008178e3:; BB(0x008178e3);
    /* 008178e3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008178e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008178e7: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8178eau); call_ind(t); }
    /* 008178ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008178ec: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x8178f1u); f_00818f50();
L_008178f1:; BB(0x008178f1);
    /* 008178f1: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 008178f4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008178f6: jne 0x8178db */ if (!fZ) goto L_008178db;
L_008178f8:; BB(0x008178f8);
    /* 008178f8: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008178fb:; BB(0x008178fb);
    /* 008178fb: mov eax, dword ptr [0xaca330] */ r_eax = R32((u32)(0xaca330u));
    /* 00817900: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00817903: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817905: je 0x81792c */ if (fZ) goto L_0081792c;
L_00817907:; BB(0x00817907);
    /* 00817907: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0081790a: mov ebx, ecx */ r_ebx = r_ecx;
L_0081790c:; BB(0x0081790c);
    /* 0081790c: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817910: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817912: jne 0x817922 */ if (!fZ) goto L_00817922;
L_00817914:; BB(0x00817914);
    /* 00817914: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00817916: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817918: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x81791bu); call_ind(t); }
    /* 0081791b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081791d: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x817922u); f_00818f50();
L_00817922:; BB(0x00817922);
    /* 00817922: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00817925: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817927: jne 0x81790c */ if (!fZ) goto L_0081790c;
L_00817929:; BB(0x00817929);
    /* 00817929: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0081792c:; BB(0x0081792c);
    /* 0081792c: call 0x7a9470 */ r_esp -= 4; W32(r_esp, 0x817931u); f_007a9470();
    /* 00817931: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817932: ret  */ FN_RET(0x008178ac); r_esp += 4; return;
}

void f_00817934(void) /* sub_817934 */
{
    FN_ENTER(0x00817934);
    /* 00817934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00817935: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00817936: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00817938: call 0x817768 */ r_esp -= 4; W32(r_esp, 0x81793du); f_00817768();
    /* 0081793d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081793f: je 0x817944 */ if (fZ) goto L_00817944;
L_00817941:; BB(0x00817941);
    /* 00817941: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00817942: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00817943: ret  */ FN_RET(0x00817934); r_esp += 4; return;
L_00817944:; BB(0x00817944);
    /* 00817944: mov edx, dword ptr [0xaca374] */ r_edx = R32((u32)(0xaca374u));
    /* 0081794a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0081794d: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817952: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00817955: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00817958: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081795a: je 0x81798b */ if (fZ) goto L_0081798b;
L_0081795c:; BB(0x0081795c);
    /* 0081795c: mov edi, ecx */ r_edi = r_ecx;
L_0081795e:; BB(0x0081795e);
    /* 0081795e: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00817962: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817967: je 0x81797d */ if (fZ) goto L_0081797d;
L_00817969:; BB(0x00817969);
    /* 00817969: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0081796b: mov ecx, edi */ r_ecx = r_edi;
    /* 0081796d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817970u); call_ind(t); }
    /* 00817970: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00817974: and eax, 0xfdff */ {  u32 a = r_eax; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817979: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_0081797d:; BB(0x0081797d);
    /* 0081797d: mov ecx, edi */ r_ecx = r_edi;
    /* 0081797f: call 0x817a78 */ r_esp -= 4; W32(r_esp, 0x817984u); f_00817a78();
    /* 00817984: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 00817987: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817989: jne 0x81795e */ if (!fZ) goto L_0081795e;
L_0081798b:; BB(0x0081798b);
    /* 0081798b: mov eax, dword ptr [0xaca360] */ r_eax = R32((u32)(0xaca360u));
    /* 00817990: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00817993: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817995: je 0x8179c6 */ if (fZ) goto L_008179c6;
L_00817997:; BB(0x00817997);
    /* 00817997: mov edi, ecx */ r_edi = r_ecx;
L_00817999:; BB(0x00817999);
    /* 00817999: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0081799d: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008179a2: je 0x8179b8 */ if (fZ) goto L_008179b8;
L_008179a4:; BB(0x008179a4);
    /* 008179a4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008179a6: mov ecx, edi */ r_ecx = r_edi;
    /* 008179a8: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8179abu); call_ind(t); }
    /* 008179ab: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 008179af: and eax, 0xfdff */ {  u32 a = r_eax; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008179b4: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_008179b8:; BB(0x008179b8);
    /* 008179b8: mov ecx, edi */ r_ecx = r_edi;
    /* 008179ba: call 0x817a78 */ r_esp -= 4; W32(r_esp, 0x8179bfu); f_00817a78();
    /* 008179bf: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 008179c2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008179c4: jne 0x817999 */ if (!fZ) goto L_00817999;
L_008179c6:; BB(0x008179c6);
    /* 008179c6: mov eax, dword ptr [0xaca358] */ r_eax = R32((u32)(0xaca358u));
    /* 008179cb: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 008179ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008179d0: je 0x817a01 */ if (fZ) goto L_00817a01;
L_008179d2:; BB(0x008179d2);
    /* 008179d2: mov edi, ecx */ r_edi = r_ecx;
L_008179d4:; BB(0x008179d4);
    /* 008179d4: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 008179d8: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008179dd: je 0x8179f3 */ if (fZ) goto L_008179f3;
L_008179df:; BB(0x008179df);
    /* 008179df: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008179e1: mov ecx, edi */ r_ecx = r_edi;
    /* 008179e3: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8179e6u); call_ind(t); }
    /* 008179e6: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 008179ea: and eax, 0xfdff */ {  u32 a = r_eax; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008179ef: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_008179f3:; BB(0x008179f3);
    /* 008179f3: mov ecx, edi */ r_ecx = r_edi;
    /* 008179f5: call 0x817a78 */ r_esp -= 4; W32(r_esp, 0x8179fau); f_00817a78();
    /* 008179fa: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 008179fd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008179ff: jne 0x8179d4 */ if (!fZ) goto L_008179d4;
L_00817a01:; BB(0x00817a01);
    /* 00817a01: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00817a03: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x817a08u); f_007a94a0();
    /* 00817a08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817a09: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00817a0e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x817a13u); f_0061cdb0();
    /* 00817a13: mov edx, dword ptr [0xaca370] */ r_edx = R32((u32)(0xaca370u));
    /* 00817a19: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817a1d: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817a22: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00817a25: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817a29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817a2b: je 0x817a56 */ if (fZ) goto L_00817a56;
L_00817a2d:; BB(0x00817a2d);
    /* 00817a2d: mov edi, ecx */ r_edi = r_ecx;
L_00817a2f:; BB(0x00817a2f);
    /* 00817a2f: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00817a33: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817a35: jne 0x817a45 */ if (!fZ) goto L_00817a45;
L_00817a37:; BB(0x00817a37);
    /* 00817a37: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00817a39: mov ecx, edi */ r_ecx = r_edi;
    /* 00817a3b: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817a3eu); call_ind(t); }
    /* 00817a3e: mov ecx, edi */ r_ecx = r_edi;
    /* 00817a40: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x817a45u); f_00818f50();
L_00817a45:; BB(0x00817a45);
    /* 00817a45: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 00817a48: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817a4a: jne 0x817a2f */ if (!fZ) goto L_00817a2f;
L_00817a4c:; BB(0x00817a4c);
    /* 00817a4c: mov edx, dword ptr [0xaca370] */ r_edx = R32((u32)(0xaca370u));
    /* 00817a52: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
L_00817a56:; BB(0x00817a56);
    /* 00817a56: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817a5b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817a5f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x817a64u); f_0061cdb0();
    /* 00817a64: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x817a69u); f_007a94b0();
    /* 00817a69: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00817a6c: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817a71: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00817a74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00817a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00817a76: ret  */ FN_RET(0x00817934); r_esp += 4; return;
}

void f_00817a78(void) /* sub_817A78 */
{
    FN_ENTER(0x00817a78);
    /* 00817a78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00817a79: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00817a7c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817a7e: je 0x817ab5 */ if (fZ) goto L_00817ab5;
L_00817a80:; BB(0x00817a80);
    /* 00817a80: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00817a83: mov ebx, ecx */ r_ebx = r_ecx;
L_00817a85:; BB(0x00817a85);
    /* 00817a85: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817a89: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817a8e: je 0x817aa4 */ if (fZ) goto L_00817aa4;
L_00817a90:; BB(0x00817a90);
    /* 00817a90: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00817a92: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817a94: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817a97u); call_ind(t); }
    /* 00817a97: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817a9b: and eax, 0xfdff */ {  u32 a = r_eax; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817aa0: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_00817aa4:; BB(0x00817aa4);
    /* 00817aa4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817aa6: call 0x817a78 */ r_esp -= 4; W32(r_esp, 0x817aabu); f_00817a78();
    /* 00817aab: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00817aae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817ab0: jne 0x817a85 */ if (!fZ) goto L_00817a85;
L_00817ab2:; BB(0x00817ab2);
    /* 00817ab2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00817ab5:; BB(0x00817ab5);
    /* 00817ab5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817ab6: ret  */ FN_RET(0x00817a78); r_esp += 4; return;
}

void f_00817ab8(void) /* sub_817AB8 */
{
    FN_ENTER(0x00817ab8);
    /* 00817ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00817ab9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00817aba: call 0x817768 */ r_esp -= 4; W32(r_esp, 0x817abfu); f_00817768();
    /* 00817abf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817ac1: je 0x817ac6 */ if (fZ) goto L_00817ac6;
L_00817ac3:; BB(0x00817ac3);
    /* 00817ac3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817ac4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00817ac5: ret  */ FN_RET(0x00817ab8); r_esp += 4; return;
L_00817ac6:; BB(0x00817ac6);
    /* 00817ac6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x817acbu); f_0082dbac();
    /* 00817acb: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x817ad0u); f_007a93d8();
    /* 00817ad0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00817ad2: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x817ad7u); f_007a94a0();
    /* 00817ad7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817ad8: call 0x7a9440 */ r_esp -= 4; W32(r_esp, 0x817addu); f_007a9440();
    /* 00817add: mov ebp, dword ptr [0xaf034c] */ r_ebp = R32((u32)(0xaf034cu));
    /* 00817ae3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00817ae5: call 0x82d6f0 */ r_esp -= 4; W32(r_esp, 0x817aeau); f_0082d6f0();
    /* 00817aea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817aeb: mov edx, dword ptr [0xaca338] */ r_edx = R32((u32)(0xaca338u));
    /* 00817af1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817af5: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817afa: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00817afd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817b01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817b03: je 0x817b2a */ if (fZ) goto L_00817b2a;
L_00817b05:; BB(0x00817b05);
    /* 00817b05: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00817b08: mov edi, ecx */ r_edi = r_ecx;
L_00817b0a:; BB(0x00817b0a);
    /* 00817b0a: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00817b0e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817b10: jne 0x817b20 */ if (!fZ) goto L_00817b20;
L_00817b12:; BB(0x00817b12);
    /* 00817b12: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00817b14: mov ecx, edi */ r_ecx = r_edi;
    /* 00817b16: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817b19u); call_ind(t); }
    /* 00817b19: mov ecx, edi */ r_ecx = r_edi;
    /* 00817b1b: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x817b20u); f_00818f50();
L_00817b20:; BB(0x00817b20);
    /* 00817b20: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 00817b23: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817b25: jne 0x817b0a */ if (!fZ) goto L_00817b0a;
L_00817b27:; BB(0x00817b27);
    /* 00817b27: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00817b2a:; BB(0x00817b2a);
    /* 00817b2a: mov edx, dword ptr [0xaca32c] */ r_edx = R32((u32)(0xaca32cu));
    /* 00817b30: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817b34: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817b39: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00817b3c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817b40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817b42: je 0x817b69 */ if (fZ) goto L_00817b69;
L_00817b44:; BB(0x00817b44);
    /* 00817b44: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00817b47: mov edi, ecx */ r_edi = r_ecx;
L_00817b49:; BB(0x00817b49);
    /* 00817b49: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00817b4d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817b4f: jne 0x817b5f */ if (!fZ) goto L_00817b5f;
L_00817b51:; BB(0x00817b51);
    /* 00817b51: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00817b53: mov ecx, edi */ r_ecx = r_edi;
    /* 00817b55: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817b58u); call_ind(t); }
    /* 00817b58: mov ecx, edi */ r_ecx = r_edi;
    /* 00817b5a: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x817b5fu); f_00818f50();
L_00817b5f:; BB(0x00817b5f);
    /* 00817b5f: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 00817b62: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817b64: jne 0x817b49 */ if (!fZ) goto L_00817b49;
L_00817b66:; BB(0x00817b66);
    /* 00817b66: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00817b69:; BB(0x00817b69);
    /* 00817b69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00817b6a: call 0x82d6f0 */ r_esp -= 4; W32(r_esp, 0x817b6fu); f_0082d6f0();
    /* 00817b6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817b70: call 0x7a9470 */ r_esp -= 4; W32(r_esp, 0x817b75u); f_007a9470();
    /* 00817b75: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x817b7au); f_0082dab0();
    /* 00817b7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817b7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00817b7c: ret  */ FN_RET(0x00817ab8); r_esp += 4; return;
}

void f_00817b80(void) /* sub_817B80 */
{
    FN_ENTER(0x00817b80);
    /* 00817b80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00817b81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00817b83: call 0x817768 */ r_esp -= 4; W32(r_esp, 0x817b88u); f_00817768();
    /* 00817b88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817b8a: je 0x817bc5 */ if (fZ) goto L_00817bc5;
L_00817b8c:; BB(0x00817b8c);
    /* 00817b8c: mov edx, dword ptr [0xaca374] */ r_edx = R32((u32)(0xaca374u));
    /* 00817b92: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817b96: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817b9b: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00817b9e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817ba2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817ba4: je 0x817bc3 */ if (fZ) goto L_00817bc3;
L_00817ba6:; BB(0x00817ba6);
    /* 00817ba6: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817baa: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817bac: jne 0x817bbc */ if (!fZ) goto L_00817bbc;
L_00817bae:; BB(0x00817bae);
    /* 00817bae: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00817bb0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817bb2: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817bb5u); call_ind(t); }
    /* 00817bb5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817bb7: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x817bbcu); f_00818f50();
L_00817bbc:; BB(0x00817bbc);
    /* 00817bbc: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00817bbf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817bc1: jne 0x817ba6 */ if (!fZ) goto L_00817ba6;
L_00817bc3:; BB(0x00817bc3);
    /* 00817bc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00817bc4: ret  */ FN_RET(0x00817b80); r_esp += 4; return;
L_00817bc5:; BB(0x00817bc5);
    /* 00817bc5: call 0x7a9350 */ r_esp -= 4; W32(r_esp, 0x817bcau); f_007a9350();
    /* 00817bca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00817bcc: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x817bd1u); f_007a94a0();
    /* 00817bd1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817bd2: call 0x7a9440 */ r_esp -= 4; W32(r_esp, 0x817bd7u); f_007a9440();
    /* 00817bd7: mov edx, dword ptr [0xaca374] */ r_edx = R32((u32)(0xaca374u));
    /* 00817bdd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817be1: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817be6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817bea: mov edx, dword ptr [0xaca360] */ r_edx = R32((u32)(0xaca360u));
    /* 00817bf0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817bf4: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817bf9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817bfd: mov edx, dword ptr [0xaca358] */ r_edx = R32((u32)(0xaca358u));
    /* 00817c03: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817c07: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817c0c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817c10: mov edx, dword ptr [0xaca348] */ r_edx = R32((u32)(0xaca348u));
    /* 00817c16: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817c1a: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817c1f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817c23: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 00817c29: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817c2d: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817c32: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817c36: mov edx, dword ptr [0xaca340] */ r_edx = R32((u32)(0xaca340u));
    /* 00817c3c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817c40: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817c45: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817c49: mov edx, dword ptr [0xaca338] */ r_edx = R32((u32)(0xaca338u));
    /* 00817c4f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817c53: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817c58: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817c5c: mov edx, dword ptr [0xaca334] */ r_edx = R32((u32)(0xaca334u));
    /* 00817c62: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817c66: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817c6b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817c6f: mov edx, dword ptr [0xaca330] */ r_edx = R32((u32)(0xaca330u));
    /* 00817c75: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817c79: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817c7e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817c82: mov edx, dword ptr [0xaca32c] */ r_edx = R32((u32)(0xaca32cu));
    /* 00817c88: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817c8c: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817c91: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817c95: mov edx, dword ptr [0xaca328] */ r_edx = R32((u32)(0xaca328u));
    /* 00817c9b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817c9f: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817ca4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817ca8: mov edx, dword ptr [0xaca324] */ r_edx = R32((u32)(0xaca324u));
    /* 00817cae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817cb2: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817cb7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817cbb: mov edx, dword ptr [0xaca320] */ r_edx = R32((u32)(0xaca320u));
    /* 00817cc1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817cc5: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817cca: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817cce: mov edx, dword ptr [0xaca370] */ r_edx = R32((u32)(0xaca370u));
    /* 00817cd4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817cd8: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817cdd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817ce1: mov ebx, dword ptr [ebx + 0x18] */ r_ebx = R32((u32)(r_ebx+0x18u));
    /* 00817ce4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817ce6: je 0x817d05 */ if (fZ) goto L_00817d05;
L_00817ce8:; BB(0x00817ce8);
    /* 00817ce8: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817cec: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817cee: jne 0x817cfe */ if (!fZ) goto L_00817cfe;
L_00817cf0:; BB(0x00817cf0);
    /* 00817cf0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00817cf2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817cf4: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817cf7u); call_ind(t); }
    /* 00817cf7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817cf9: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x817cfeu); f_00818f50();
L_00817cfe:; BB(0x00817cfe);
    /* 00817cfe: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00817d01: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817d03: jne 0x817ce8 */ if (!fZ) goto L_00817ce8;
L_00817d05:; BB(0x00817d05);
    /* 00817d05: call 0x7a9470 */ r_esp -= 4; W32(r_esp, 0x817d0au); f_007a9470();
    /* 00817d0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00817d0c: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x817d11u); f_007a94a0();
    /* 00817d11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817d12: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00817d17: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x817d1cu); f_0061cdb0();
    /* 00817d1c: mov edx, dword ptr [0xaca370] */ r_edx = R32((u32)(0xaca370u));
    /* 00817d22: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817d26: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817d2b: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00817d2e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817d32: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817d34: je 0x817d53 */ if (fZ) goto L_00817d53;
L_00817d36:; BB(0x00817d36);
    /* 00817d36: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817d3a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817d3c: jne 0x817d4c */ if (!fZ) goto L_00817d4c;
L_00817d3e:; BB(0x00817d3e);
    /* 00817d3e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00817d40: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817d42: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x817d45u); call_ind(t); }
    /* 00817d45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817d47: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x817d4cu); f_00818f50();
L_00817d4c:; BB(0x00817d4c);
    /* 00817d4c: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00817d4f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817d51: jne 0x817d36 */ if (!fZ) goto L_00817d36;
L_00817d53:; BB(0x00817d53);
    /* 00817d53: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x817d58u); f_0061cdb0();
    /* 00817d58: mov edx, dword ptr [0xaca370] */ r_edx = R32((u32)(0xaca370u));
    /* 00817d5e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817d62: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817d67: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817d6b: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x817d70u); f_007a94b0();
    /* 00817d70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00817d71: ret  */ FN_RET(0x00817b80); r_esp += 4; return;
}

void f_00817d74(void) /* sub_817D74 */
{
    FN_ENTER(0x00817d74);
    /* 00817d74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00817d75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00817d76: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00817d78: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00817d7b: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00817d7e: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00817d81: mov eax, dword ptr [0xaca330] */ r_eax = R32((u32)(0xaca330u));
    /* 00817d86: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00817d8a: or edx, 0xffff0100 */ {  u32 a = r_edx; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00817d90: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00817d94: call 0x50269c */ r_esp -= 4; W32(r_esp, 0x817d99u); f_0050269c();
    /* 00817d99: mov ecx, dword ptr [0xaca298] */ r_ecx = R32((u32)(0xaca298u));
    /* 00817d9f: cmp ecx, dword ptr [0xaca294] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaca294u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817da5: je 0x817de7 */ if (fZ) goto L_00817de7;
L_00817da7:; BB(0x00817da7);
    /* 00817da7: mov edx, dword ptr [0xaca2fc] */ r_edx = R32((u32)(0xaca2fcu));
    /* 00817dad: mov eax, 1 */ r_eax = 0x1u;
    /* 00817db2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817db4: je 0x817de1 */ if (fZ) goto L_00817de1;
L_00817db6:; BB(0x00817db6);
    /* 00817db6: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817db8: je 0x817dca */ if (fZ) goto L_00817dca;
L_00817dba:; BB(0x00817dba);
    /* 00817dba: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 00817dbe: and edi, 0xfeff */ {  u32 a = r_edi; u32 b = 0xfeffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00817dc4: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
    /* 00817dc8: jmp 0x817dd8 */ goto L_00817dd8;
L_00817dca:; BB(0x00817dca);
    /* 00817dca: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 00817dce: or edi, 0xffff0100 */ {  u32 a = r_edi; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00817dd4: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
L_00817dd8:; BB(0x00817dd8);
    /* 00817dd8: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 00817ddb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00817ddd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817ddf: jne 0x817db6 */ if (!fZ) goto L_00817db6;
L_00817de1:; BB(0x00817de1);
    /* 00817de1: mov dword ptr [0xaca294], ecx */ W32((u32)(0xaca294u), r_ecx);
L_00817de7:; BB(0x00817de7);
    /* 00817de7: call 0x7a9350 */ r_esp -= 4; W32(r_esp, 0x817decu); f_007a9350();
    /* 00817dec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00817dee: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x817df3u); f_007a94a0();
    /* 00817df3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817df4: call 0x7a9440 */ r_esp -= 4; W32(r_esp, 0x817df9u); f_007a9440();
    /* 00817df9: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00817dfc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817dfe: je 0x817e22 */ if (fZ) goto L_00817e22;
L_00817e00:; BB(0x00817e00);
    /* 00817e00: mov edi, ecx */ r_edi = r_ecx;
L_00817e02:; BB(0x00817e02);
    /* 00817e02: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00817e06: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817e0b: jne 0x817e1b */ if (!fZ) goto L_00817e1b;
L_00817e0d:; BB(0x00817e0d);
    /* 00817e0d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00817e0f: mov ecx, edi */ r_ecx = r_edi;
    /* 00817e11: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x817e14u); call_ind(t); }
    /* 00817e14: mov ecx, edi */ r_ecx = r_edi;
    /* 00817e16: call 0x817e74 */ r_esp -= 4; W32(r_esp, 0x817e1bu); f_00817e74();
L_00817e1b:; BB(0x00817e1b);
    /* 00817e1b: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 00817e1e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817e20: jne 0x817e02 */ if (!fZ) goto L_00817e02;
L_00817e22:; BB(0x00817e22);
    /* 00817e22: call 0x502a70 */ r_esp -= 4; W32(r_esp, 0x817e27u); f_00502a70();
    /* 00817e27: mov edx, dword ptr [0xaca330] */ r_edx = R32((u32)(0xaca330u));
    /* 00817e2d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817e31: and eax, 0xfeff */ {  u32 a = r_eax; u32 b = 0xfeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817e36: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00817e39: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817e3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817e3f: je 0x817e63 */ if (fZ) goto L_00817e63;
L_00817e41:; BB(0x00817e41);
    /* 00817e41: mov edi, ecx */ r_edi = r_ecx;
L_00817e43:; BB(0x00817e43);
    /* 00817e43: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00817e47: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817e4c: jne 0x817e5c */ if (!fZ) goto L_00817e5c;
L_00817e4e:; BB(0x00817e4e);
    /* 00817e4e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00817e50: mov ecx, edi */ r_ecx = r_edi;
    /* 00817e52: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x817e55u); call_ind(t); }
    /* 00817e55: mov ecx, edi */ r_ecx = r_edi;
    /* 00817e57: call 0x817e74 */ r_esp -= 4; W32(r_esp, 0x817e5cu); f_00817e74();
L_00817e5c:; BB(0x00817e5c);
    /* 00817e5c: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 00817e5f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817e61: jne 0x817e43 */ if (!fZ) goto L_00817e43;
L_00817e63:; BB(0x00817e63);
    /* 00817e63: call 0x7a9470 */ r_esp -= 4; W32(r_esp, 0x817e68u); f_007a9470();
    /* 00817e68: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00817e6b: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817e6e: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00817e71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00817e72: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00817e73: ret  */ FN_RET(0x00817d74); r_esp += 4; return;
}

void f_00817e74(void) /* sub_817E74 */
{
    FN_ENTER(0x00817e74);
    /* 00817e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00817e75: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00817e78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817e7a: je 0x817ea4 */ if (fZ) goto L_00817ea4;
L_00817e7c:; BB(0x00817e7c);
    /* 00817e7c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00817e7f: mov ebx, ecx */ r_ebx = r_ecx;
L_00817e81:; BB(0x00817e81);
    /* 00817e81: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00817e85: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817e8a: jne 0x817e9a */ if (!fZ) goto L_00817e9a;
L_00817e8c:; BB(0x00817e8c);
    /* 00817e8c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00817e8e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817e90: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x817e93u); call_ind(t); }
    /* 00817e93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00817e95: call 0x817e74 */ r_esp -= 4; W32(r_esp, 0x817e9au); f_00817e74();
L_00817e9a:; BB(0x00817e9a);
    /* 00817e9a: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00817e9d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00817e9f: jne 0x817e81 */ if (!fZ) goto L_00817e81;
L_00817ea1:; BB(0x00817ea1);
    /* 00817ea1: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00817ea4:; BB(0x00817ea4);
    /* 00817ea4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00817ea5: ret  */ FN_RET(0x00817e74); r_esp += 4; return;
}

void f_00817ea8(void) /* sub_817EA8 */
{
    FN_ENTER(0x00817ea8);
    /* 00817ea8: mov edx, dword ptr [0xaca378] */ r_edx = R32((u32)(0xaca378u));
    /* 00817eae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817eb2: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817eb7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817ebb: mov edx, dword ptr [0xaca374] */ r_edx = R32((u32)(0xaca374u));
    /* 00817ec1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817ec5: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817eca: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817ece: mov edx, dword ptr [0xaca370] */ r_edx = R32((u32)(0xaca370u));
    /* 00817ed4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817ed8: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817edd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817ee1: mov edx, dword ptr [0xaca368] */ r_edx = R32((u32)(0xaca368u));
    /* 00817ee7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817eeb: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817ef0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817ef4: mov edx, dword ptr [0xaca364] */ r_edx = R32((u32)(0xaca364u));
    /* 00817efa: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817efe: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817f03: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817f07: mov edx, dword ptr [0xaca360] */ r_edx = R32((u32)(0xaca360u));
    /* 00817f0d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817f11: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817f16: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817f1a: mov edx, dword ptr [0xaca35c] */ r_edx = R32((u32)(0xaca35cu));
    /* 00817f20: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817f24: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817f29: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817f2d: mov edx, dword ptr [0xaca358] */ r_edx = R32((u32)(0xaca358u));
    /* 00817f33: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817f37: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817f3c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817f40: mov edx, dword ptr [0xaca354] */ r_edx = R32((u32)(0xaca354u));
    /* 00817f46: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817f4a: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817f4f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817f53: mov edx, dword ptr [0xaca34c] */ r_edx = R32((u32)(0xaca34cu));
    /* 00817f59: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817f5d: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817f62: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817f66: mov edx, dword ptr [0xaca350] */ r_edx = R32((u32)(0xaca350u));
    /* 00817f6c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817f70: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817f75: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817f79: mov edx, dword ptr [0xaca36c] */ r_edx = R32((u32)(0xaca36cu));
    /* 00817f7f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817f83: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817f88: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817f8c: mov edx, dword ptr [0xaca348] */ r_edx = R32((u32)(0xaca348u));
    /* 00817f92: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817f96: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817f9b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817f9f: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 00817fa5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817fa9: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817fae: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817fb2: mov edx, dword ptr [0xaca33c] */ r_edx = R32((u32)(0xaca33cu));
    /* 00817fb8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817fbc: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817fc1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817fc5: mov edx, dword ptr [0xaca338] */ r_edx = R32((u32)(0xaca338u));
    /* 00817fcb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817fcf: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817fd4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817fd8: mov edx, dword ptr [0xaca334] */ r_edx = R32((u32)(0xaca334u));
    /* 00817fde: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817fe2: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817fe7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817feb: mov edx, dword ptr [0xaca330] */ r_edx = R32((u32)(0xaca330u));
    /* 00817ff1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00817ff5: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00817ffa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00817ffe: mov edx, dword ptr [0xaca32c] */ r_edx = R32((u32)(0xaca32cu));
    /* 00818004: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00818008: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0081800d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00818011: mov edx, dword ptr [0xaca328] */ r_edx = R32((u32)(0xaca328u));
    /* 00818017: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0081801b: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00818020: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00818024: mov edx, dword ptr [0xaca324] */ r_edx = R32((u32)(0xaca324u));
    /* 0081802a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0081802e: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00818033: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00818037: mov edx, dword ptr [0xaca320] */ r_edx = R32((u32)(0xaca320u));
    /* 0081803d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00818041: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00818046: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0081804a: ret  */ FN_RET(0x00817ea8); r_esp += 4; return;
}

