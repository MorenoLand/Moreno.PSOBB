#include "protos.h"

void f_005d8034(void) /* sub_5D8034 */
{
    FN_ENTER(0x005d8034);
    /* 005d8034: push 0xc000 */ { u32 v = 0xc000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8039: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d803eu); f_008581c5();
    /* 005d803e: mov dword ptr [0xa8da1c], 0 */ W32((u32)(0xa8da1cu), 0x0u);
    /* 005d8048: mov dword ptr [0xa8da18], eax */ W32((u32)(0xa8da18u), r_eax);
    /* 005d804d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d804e: ret  */ FN_RET(0x005d8034); r_esp += 4; return;
}

void f_005d8050(void) /* sub_5D8050 */
{
    FN_ENTER(0x005d8050);
    /* 005d8050: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8051: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d8053: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d8055: call 0x5d8074 */ r_esp -= 4; W32(r_esp, 0x5d805au); f_005d8074();
    /* 005d805a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d805e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d8060: jne 0x5d8066 */ if (!fZ) goto L_005d8066;
L_005d8062:; BB(0x005d8062);
    /* 005d8062: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d8063: ret 4 */ FN_RET(0x005d8050); r_esp += 8; return;
L_005d8066:; BB(0x005d8066);
    /* 005d8066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8067: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d806cu); f_005c2f74();
    /* 005d806c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d806d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d806e: ret 4 */ FN_RET(0x005d8050); r_esp += 8; return;
}

void f_005d8074(void) /* sub_5D8074 */
{
    FN_ENTER(0x005d8074);
    /* 005d8074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8075: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8077: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8079: push 0x8da898 */ { u32 v = 0x8da898u; r_esp -= 4; W32(r_esp, v); }
    /* 005d807e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d8084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8085: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d808c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d808f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d8092: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d8095: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d8098: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d809b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d809e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d80a5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d80a8: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d80ab: mov dword ptr [eax], 0xb0d6b0 */ W32((u32)(r_eax), 0xb0d6b0u);
    /* 005d80b1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d80b6u); f_00857e98();
    /* 005d80b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d80b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d80be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d80c1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5d80c6u); f_008171e8();
    /* 005d80c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d80c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d80d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d80d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d80d3: ret  */ FN_RET(0x005d8074); r_esp += 4; return;
}

void f_005d80d4(void) /* sub_5D80D4 */
{
    FN_ENTER(0x005d80d4);
    /* 005d80d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d80d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005d80d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d80d9: push 0x8da8b4 */ { u32 v = 0x8da8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d80de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d80e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d80e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d80ec: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d80ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d80f2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005d80f5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005d80f8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005d80fb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d80fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8101: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005d8104: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d8107: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d810a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005d810d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005d8110: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d8113: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5d8118u); f_008193cc();
    /* 005d8118: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d811f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8122: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8125: mov dword ptr [edx], 0xb0d6b0 */ W32((u32)(r_edx), 0xb0d6b0u);
    /* 005d812b: mov eax, dword ptr [0x9c27b4] */ r_eax = R32((u32)(0x9c27b4u));
    /* 005d8130: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005d8133: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 005d8136: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8138: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d813a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d813d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d813e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d8143u); f_008581c5();
    /* 005d8143: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8146: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8149: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d814c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d814f: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 005d8152: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 005d8155: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8156: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8158: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 005d815b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d815c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x5d8161u); f_0086b688();
    /* 005d8161: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d8164: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8167: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d816a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d816d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8170: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8173: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d817a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d817c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d817d: ret 0x10 */ FN_RET(0x005d80d4); r_esp += 20; return;
}

void f_005d8180(void) /* sub_5D8180 */
{
    FN_ENTER(0x005d8180);
    /* 005d8180: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8181: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8182: mov esi, ecx */ r_esi = r_ecx;
    /* 005d8184: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 005d8188: cmp ebp, dword ptr [esi + 0x1c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d818b: jge 0x5d81ae */ if ((fS==fO)) goto L_005d81ae;
L_005d818d:; BB(0x005d818d);
    /* 005d818d: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 005d8190: mov edx, dword ptr [ecx + ebp*4] */ r_edx = R32((u32)(r_ecx+r_ebp*4));
    /* 005d8193: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8195: jne 0x5d81a8 */ if (!fZ) goto L_005d81a8;
L_005d8197:; BB(0x005d8197);
    /* 005d8197: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005d819a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d819c: je 0x5d81a8 */ if (fZ) goto L_005d81a8;
L_005d819e:; BB(0x005d819e);
    /* 005d819e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d819f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d81a1u); call_ind(t); }
    /* 005d81a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d81a2: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 005d81a5: mov edx, dword ptr [ecx + ebp*4] */ r_edx = R32((u32)(r_ecx+r_ebp*4));
L_005d81a8:; BB(0x005d81a8);
    /* 005d81a8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d81ab: mov dword ptr [ecx + ebp*4], edx */ W32((u32)(r_ecx+r_ebp*4), r_edx);
L_005d81ae:; BB(0x005d81ae);
    /* 005d81ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d81af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d81b0: ret 4 */ FN_RET(0x005d8180); r_esp += 8; return;
}

void f_005d81b4(void) /* sub_5D81B4 */
{
    FN_ENTER(0x005d81b4);
    /* 005d81b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d81b5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d81b9: cmp eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d81bc: jge 0x5d81e3 */ if ((fS==fO)) goto L_005d81e3;
L_005d81be:; BB(0x005d81be);
    /* 005d81be: mov edi, dword ptr [ecx + 0x20] */ r_edi = R32((u32)(r_ecx+0x20u));
    /* 005d81c1: mov edx, dword ptr [edi + eax*4] */ r_edx = R32((u32)(r_edi+r_eax*4));
    /* 005d81c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d81c6: je 0x5d81e3 */ if (fZ) goto L_005d81e3;
L_005d81c8:; BB(0x005d81c8);
    /* 005d81c8: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d81cb: mov dword ptr [edi + eax*4], edx */ W32((u32)(r_edi+r_eax*4), r_edx);
    /* 005d81ce: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005d81d1: mov edi, dword ptr [edx + eax*4] */ r_edi = R32((u32)(r_edx+r_eax*4));
    /* 005d81d4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d81d6: jne 0x5d81e3 */ if (!fZ) goto L_005d81e3;
L_005d81d8:; BB(0x005d81d8);
    /* 005d81d8: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005d81db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d81dd: je 0x5d81e3 */ if (fZ) goto L_005d81e3;
L_005d81df:; BB(0x005d81df);
    /* 005d81df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d81e0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d81e2u); call_ind(t); }
    /* 005d81e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005d81e3:; BB(0x005d81e3);
    /* 005d81e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d81e4: ret 4 */ FN_RET(0x005d81b4); r_esp += 8; return;
}

void f_005d81e8(void) /* sub_5D81E8 */
{
    FN_ENTER(0x005d81e8);
    /* 005d81e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d81e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d81eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d81ed: call 0x5d820c */ r_esp -= 4; W32(r_esp, 0x5d81f2u); f_005d820c();
    /* 005d81f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d81f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d81f8: jne 0x5d81fe */ if (!fZ) goto L_005d81fe;
L_005d81fa:; BB(0x005d81fa);
    /* 005d81fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d81fb: ret 4 */ FN_RET(0x005d81e8); r_esp += 8; return;
L_005d81fe:; BB(0x005d81fe);
    /* 005d81fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d81ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d8204u); f_005c2f74();
    /* 005d8204: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d8205: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d8206: ret 4 */ FN_RET(0x005d81e8); r_esp += 8; return;
}

void f_005d820c(void) /* sub_5D820C */
{
    FN_ENTER(0x005d820c);
    /* 005d820c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d820d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d820f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8211: push 0x8da8d0 */ { u32 v = 0x8da8d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8216: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d821c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d821d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d8224: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8227: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d822a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d822d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d8230: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d8233: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d8236: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8239: mov dword ptr [ecx], 0xb0d800 */ W32((u32)(r_ecx), 0xb0d800u);
    /* 005d823f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8246: call 0x5d1654 */ r_esp -= 4; W32(r_esp, 0x5d824bu); f_005d1654();
    /* 005d824b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d824e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d8255: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8258: ret  */ FN_RET(0x005d820c); r_esp += 4; return;
}

void f_005d825c(void) /* sub_5D825C */
{
    FN_ENTER(0x005d825c);
    /* 005d825c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d825d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d825f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8261: push 0x8da8ec */ { u32 v = 0x8da8ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8266: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d826c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d826d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d8274: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8277: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d827a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d827d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d8280: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d8283: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d8286: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d8289: mov eax, ecx */ r_eax = r_ecx;
    /* 005d828b: mov dword ptr [eax], 0xb0d8e0 */ W32((u32)(r_eax), 0xb0d8e0u);
    /* 005d8291: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8298: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5d829du); f_005e5c50();
    /* 005d829d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d82a0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d82a2: jne 0x5d82b4 */ if (!fZ) goto L_005d82b4;
L_005d82a4:; BB(0x005d82a4);
    /* 005d82a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d82a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d82ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005d82b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d82b1: ret 4 */ FN_RET(0x005d825c); r_esp += 8; return;
L_005d82b4:; BB(0x005d82b4);
    /* 005d82b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d82b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d82b8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d82bdu); f_005c2f74();
    /* 005d82bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d82be: jmp 0x5d82a4 */ goto L_005d82a4;
}

void f_005d82c0(void) /* sub_5D82C0 */
{
    FN_ENTER(0x005d82c0);
    /* 005d82c0: movzx edx, byte ptr [ecx + 0xf3] */ r_edx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005d82c7: mov eax, 0x52 */ r_eax = 0x52u;
    /* 005d82cc: cmp edx, 0x52 */ {  u32 a = r_edx; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d82cf: jl 0x5d82d3 */ if ((fS!=fO)) goto L_005d82d3;
L_005d82d1:; BB(0x005d82d1);
    /* 005d82d1: mov edx, eax */ r_edx = r_eax;
L_005d82d3:; BB(0x005d82d3);
    /* 005d82d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d82d4: call 0x5d1a80 */ r_esp -= 4; W32(r_esp, 0x5d82d9u); f_005d1a80();
    /* 005d82d9: ret  */ FN_RET(0x005d82c0); r_esp += 4; return;
}

void f_005d82dc(void) /* sub_5D82DC */
{
    FN_ENTER(0x005d82dc);
    /* 005d82dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d82dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d82de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d82df: lea edx, [ecx + 0x1cc] */ r_edx = (u32)(r_ecx+0x1ccu);
    /* 005d82e5: lea eax, [ecx + 0x1d4] */ r_eax = (u32)(r_ecx+0x1d4u);
    /* 005d82eb: mov ebp, eax */ r_ebp = r_eax;
    /* 005d82ed: mov esi, edx */ r_esi = r_edx;
    /* 005d82ef: mov edi, ecx */ r_edi = r_ecx;
L_005d82f1:; BB(0x005d82f1);
    /* 005d82f1: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 005d82f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d82f5: je 0x5d8302 */ if (fZ) goto L_005d8302;
L_005d82f7:; BB(0x005d82f7);
    /* 005d82f7: call 0x5dd334 */ r_esp -= 4; W32(r_esp, 0x5d82fcu); f_005dd334();
    /* 005d82fc: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_005d8302:; BB(0x005d8302);
    /* 005d8302: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d8305: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d8307: ja 0x5d82f1 */ if ((!fC&&!fZ)) goto L_005d82f1;
L_005d8309:; BB(0x005d8309);
    /* 005d8309: mov ecx, edi */ r_ecx = r_edi;
    /* 005d830b: call 0x5d1840 */ r_esp -= 4; W32(r_esp, 0x5d8310u); f_005d1840();
    /* 005d8310: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8311: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d8312: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d8313: ret  */ FN_RET(0x005d82dc); r_esp += 4; return;
}

void f_005d8314(void) /* sub_5D8314 */
{
    FN_ENTER(0x005d8314);
    /* 005d8314: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8315: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8317: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8319: push 0x8da92e */ { u32 v = 0x8da92eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d831e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d8324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8325: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d832c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d832f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d8332: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 005d8335: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 005d8338: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 005d833b: movzx edx, byte ptr [ecx + 0xf3] */ r_edx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005d8342: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d8345: mov eax, 0x52 */ r_eax = 0x52u;
    /* 005d834a: cmp edx, 0x52 */ {  u32 a = r_edx; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d834d: jl 0x5d8351 */ if ((fS!=fO)) goto L_005d8351;
L_005d834f:; BB(0x005d834f);
    /* 005d834f: mov edx, eax */ r_edx = r_eax;
L_005d8351:; BB(0x005d8351);
    /* 005d8351: movzx eax, byte ptr [ecx + 0x1ca] */ r_eax = (u32)R8((u32)(r_ecx+0x1cau));
    /* 005d8358: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d835b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d835e: jl 0x5d8365 */ if ((fS!=fO)) goto L_005d8365;
L_005d8360:; BB(0x005d8360);
    /* 005d8360: call 0x5d8924 */ r_esp -= 4; W32(r_esp, 0x5d8365u); f_005d8924();
L_005d8365:; BB(0x005d8365);
    /* 005d8365: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8368: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005d836b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d836d: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005d8370: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8372: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d8374: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d8377: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d8314); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d850c(void)
{
    FN_ENTER(0x005d850c);
    goto L_005d850c;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d850c:; BB(0x005d850c);
    /* 005d850c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8511: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8514: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8517: mov eax, dword ptr [edx + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ebx*2+0x1ccu));
    /* 005d851e: mov dword ptr [eax + 0x8c], 0x3f800000 */ W32((u32)(r_eax+0x8cu), 0x3f800000u);
    /* 005d8528: mov ecx, dword ptr [edx + ebx*2 + 0x1cc] */ r_ecx = R32((u32)(r_edx+r_ebx*2+0x1ccu));
    /* 005d852f: call 0x5dd2f0 */ r_esp -= 4; W32(r_esp, 0x5d8534u); f_005dd2f0();
    /* 005d8534: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8537: mov edx, ebx */ r_edx = r_ebx;
    /* 005d8539: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8540: mov dword ptr [ecx + 0x70], 2 */ W32((u32)(r_ecx+0x70u), 0x2u);
    /* 005d8547: mov ebx, dword ptr [eax + edx*2 + 0x1cc] */ r_ebx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d854e: mov dword ptr [ebx + 0x74], 4 */ W32((u32)(r_ebx+0x74u), 0x4u);
    /* 005d8555: mov esi, dword ptr [eax + edx*2 + 0x1cc] */ r_esi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d855c: mov dword ptr [esi + 0x78], 6 */ W32((u32)(r_esi+0x78u), 0x6u);
    /* 005d8563: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d856a: mov dword ptr [edi + 0x7c], 8 */ W32((u32)(r_edi+0x7cu), 0x8u);
    /* 005d8571: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8578: mov dword ptr [ecx + 0x80], 0xa */ W32((u32)(r_ecx+0x80u), 0xau);
    /* 005d8582: mov eax, dword ptr [eax + edx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8589: mov dword ptr [eax + 0x84], 0xc */ W32((u32)(r_eax+0x84u), 0xcu);
    /* 005d8593: jmp 0x5d869f */ goto L_005d869f;
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d850c); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d8598(void)
{
    FN_ENTER(0x005d8598);
    goto L_005d8598;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d8598:; BB(0x005d8598);
    /* 005d8598: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d859b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d859d: jne 0x5d85bb */ if (!fZ) goto L_005d85bb;
L_005d859f:; BB(0x005d859f);
    /* 005d859f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d85a2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d85a5: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d85ac: mov dword ptr [ecx + 0x8c], 0x42100000 */ W32((u32)(r_ecx+0x8cu), 0x42100000u);
    /* 005d85b6: jmp 0x5d869f */ goto L_005d869f;
L_005d85bb:; BB(0x005d85bb);
    /* 005d85bb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d85be: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d85c1: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d85c8: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 005d85d2: jmp 0x5d869f */ goto L_005d869f;
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d8598); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d85d7(void)
{
    FN_ENTER(0x005d85d7);
    goto L_005d85d7;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d85d7:; BB(0x005d85d7);
    /* 005d85d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d85da: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d85dd: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d85e4: mov dword ptr [ecx + 0x74], 3 */ W32((u32)(r_ecx+0x74u), 0x3u);
    /* 005d85eb: jmp 0x5d869f */ goto L_005d869f;
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d85d7); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d85f0(void)
{
    FN_ENTER(0x005d85f0);
    goto L_005d85f0;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d85f0:; BB(0x005d85f0);
    /* 005d85f0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d85f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d85f6: mov eax, dword ptr [edx + ecx*2 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*2+0x1ccu));
    /* 005d85fd: mov dword ptr [eax + 0x74], 2 */ W32((u32)(r_eax+0x74u), 0x2u);
    /* 005d8604: mov ebx, dword ptr [edx + ecx*2 + 0x1cc] */ r_ebx = R32((u32)(r_edx+r_ecx*2+0x1ccu));
    /* 005d860b: mov dword ptr [ebx + 0x78], 5 */ W32((u32)(r_ebx+0x78u), 0x5u);
    /* 005d8612: jmp 0x5d869f */ goto L_005d869f;
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d85f0); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d8617(void)
{
    FN_ENTER(0x005d8617);
    goto L_005d8617;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d8617:; BB(0x005d8617);
    /* 005d8617: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d861a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d861d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8624: mov dword ptr [ecx + 0x74], 3 */ W32((u32)(r_ecx+0x74u), 0x3u);
    /* 005d862b: jmp 0x5d869f */ goto L_005d869f;
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d8617); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d862d(void)
{
    FN_ENTER(0x005d862d);
    goto L_005d862d;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d862d:; BB(0x005d862d);
    /* 005d862d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8630: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8633: mov eax, dword ptr [edx + ecx*2 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*2+0x1ccu));
    /* 005d863a: mov dword ptr [eax + 0x74], 3 */ W32((u32)(r_eax+0x74u), 0x3u);
    /* 005d8641: mov ebx, dword ptr [edx + ecx*2 + 0x1cc] */ r_ebx = R32((u32)(r_edx+r_ecx*2+0x1ccu));
    /* 005d8648: mov dword ptr [ebx + 0x78], 5 */ W32((u32)(r_ebx+0x78u), 0x5u);
    /* 005d864f: jmp 0x5d869f */ goto L_005d869f;
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d862d); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d8651(void)
{
    FN_ENTER(0x005d8651);
    goto L_005d8651;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d8651:; BB(0x005d8651);
    /* 005d8651: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8654: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8657: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d865e: mov dword ptr [ecx + 0x74], 3 */ W32((u32)(r_ecx+0x74u), 0x3u);
    /* 005d8665: jmp 0x5d869f */ goto L_005d869f;
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d8651); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d8667(void)
{
    FN_ENTER(0x005d8667);
    goto L_005d8667;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d8667:; BB(0x005d8667);
    /* 005d8667: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d866a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d866d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8674: mov dword ptr [ecx + 0x74], 3 */ W32((u32)(r_ecx+0x74u), 0x3u);
    /* 005d867b: jmp 0x5d869f */ goto L_005d869f;
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d8667); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d867d(void)
{
    FN_ENTER(0x005d867d);
    goto L_005d867d;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d867d:; BB(0x005d867d);
    /* 005d867d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8680: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8683: mov eax, dword ptr [edx + ecx*2 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*2+0x1ccu));
    /* 005d868a: mov dword ptr [eax + 0x74], 2 */ W32((u32)(r_eax+0x74u), 0x2u);
    /* 005d8691: mov ebx, dword ptr [edx + ecx*2 + 0x1cc] */ r_ebx = R32((u32)(r_edx+r_ecx*2+0x1ccu));
    /* 005d8698: mov dword ptr [ebx + 0x78], 4 */ W32((u32)(r_ebx+0x78u), 0x4u);
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d867d); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d869f(void)
{
    FN_ENTER(0x005d869f);
    goto L_005d869f;
L_005d837a:; BB(0x005d837a);
    /* 005d837a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d837d: mov edx, dword ptr [0xa8da38] */ r_edx = R32((u32)(0xa8da38u));
    /* 005d8383: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8386: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005d8388: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d838b: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d838e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8391: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005d8394: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8396: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8398: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d839a: mov dword ptr [ebx + esi*4 + 0x1d4], edi */ W32((u32)(r_ebx+r_esi*4+0x1d4u), r_edi);
    /* 005d83a1: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d83a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d83a7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83aa: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d83b7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d83c1u); f_005caba4();
    /* 005d83c1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d83c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d83c7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d83ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83cc: je 0x5d8919 */ if (fZ) goto L_005d8919;
L_005d83d2:; BB(0x005d83d2);
    /* 005d83d2: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005d83d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d83e0: mov eax, ebx */ r_eax = r_ebx;
    /* 005d83e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d83e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83e6: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d83ec: call 0x5dc65c */ r_esp -= 4; W32(r_esp, 0x5d83f1u); f_005dc65c();
    /* 005d83f1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d83f8:; BB(0x005d83f8);
    /* 005d83f8: mov edx, ebx */ r_edx = r_ebx;
    /* 005d83fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d83fd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8400: mov dword ptr [edx + ecx*2 + 0x1cc], eax */ W32((u32)(r_edx+r_ecx*2+0x1ccu), r_eax);
    /* 005d8407: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d840e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8410: je 0x5d869f */ if (fZ) goto L_005d869f;
L_005d8416:; BB(0x005d8416);
    /* 005d8416: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d841d: call 0x5dd200 */ r_esp -= 4; W32(r_esp, 0x5d8422u); f_005dd200();
    /* 005d8422: mov eax, esi */ r_eax = r_esi;
    /* 005d8424: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8427: je 0x5d88a4 */ if (fZ) goto L_005d88a4;
L_005d842d:; BB(0x005d842d);
    /* 005d842d: mov edx, ebx */ r_edx = r_ebx;
    /* 005d842f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8432: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d8439: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 005d843f: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d8442: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d8448: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d844b: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d844e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d8451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8453: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d8455:; BB(0x005d8455);
    /* 005d8455: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d845f: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d8469: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d8473: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d8476: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d8479: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d847c: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8483: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d8489: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
L_005d848f:; BB(0x005d848f);
    /* 005d848f: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8495: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8497: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d849au); call_ind(t); }
    /* 005d849a: mov esi, eax */ r_esi = r_eax;
    /* 005d849c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d849f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84a2: movzx ecx, byte ptr [eax + 0x1ca] */ r_ecx = (u32)R8((u32)(r_eax+0x1cau));
    /* 005d84a9: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005d84ac: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 005d84af: movsx esi, byte ptr [esi + edi] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+r_edi));
    /* 005d84b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84b5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005d84b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d84bc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005d84be: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d84c1: mov eax, dword ptr [eax + ebx*2 + 0x1cc] */ r_eax = R32((u32)(r_eax+r_ebx*2+0x1ccu));
    /* 005d84c8: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 005d84cb: je 0x5d84f4 */ if (fZ) goto L_005d84f4;
L_005d84cd:; BB(0x005d84cd);
    /* 005d84cd: mov ebx, dword ptr [edx + ecx*8] */ r_ebx = R32((u32)(r_edx+r_ecx*8));
    /* 005d84d0: mov dword ptr [eax + 0xcc], ebx */ W32((u32)(r_eax+0xccu), r_ebx);
    /* 005d84d6: mov esi, dword ptr [edx + ecx*8 + 4] */ r_esi = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005d84da: mov dword ptr [eax + 0xd0], esi */ W32((u32)(r_eax+0xd0u), r_esi);
    /* 005d84e0: mov edi, dword ptr [edx + ecx*8 + 8] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 005d84e4: mov dword ptr [eax + 0xd4], edi */ W32((u32)(r_eax+0xd4u), r_edi);
    /* 005d84ea: mov edx, dword ptr [edx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 005d84ee: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_005d84f4:; BB(0x005d84f4);
    /* 005d84f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d84f7: lea edx, [eax - 0xe] */ r_edx = (u32)(r_eax+0xfffffff2u);
    /* 005d84fa: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d84fd: ja 0x5d869f */ if ((!fC&&!fZ)) goto L_005d869f;
L_005d8503:; BB(0x005d8503);
    /* 005d8503: mov edx, dword ptr [eax*4 + 0x92c668] */ r_edx = R32((u32)(r_eax*4+0x92c668u));
    /* 005d850a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d869f:; BB(0x005d869f);
    /* 005d869f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d86a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d86a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d86a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86ab: jne 0x5d837a */ if (!fZ) goto L_005d837a;
L_005d86b1:; BB(0x005d86b1);
    /* 005d86b1: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d86b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d86b9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d86bcu); call_ind(t); }
    /* 005d86bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d86bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d86c2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d86c5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d86c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d86ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005d86cd:; BB(0x005d86cd);
    /* 005d86cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d86d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d86d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005d86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d86d9: mov eax, dword ptr [edx + ecx*4 + 0x1cc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1ccu));
    /* 005d86e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86e2: je 0x5d8782 */ if (fZ) goto L_005d8782;
L_005d86e8:; BB(0x005d86e8);
    /* 005d86e8: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 005d86ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86f0: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d86f6:; BB(0x005d86f6);
    /* 005d86f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d86f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d86fc: movsx ebx, byte ptr [edx + ecx*2 + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2+0x1u));
    /* 005d8701: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8704: je 0x5d8825 */ if (fZ) goto L_005d8825;
L_005d870a:; BB(0x005d870a);
    /* 005d870a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d870f: jne 0x5d874d */ if (!fZ) goto L_005d874d;
L_005d8711:; BB(0x005d8711);
    /* 005d8711: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8714: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d8718: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d871b: je 0x5d87bd */ if (fZ) goto L_005d87bd;
L_005d8721:; BB(0x005d8721);
    /* 005d8721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8724: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8727: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d872d: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8731: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d8737:; BB(0x005d8737);
    /* 005d8737: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d873a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d873d: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d8744: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d874b: jmp 0x5d8777 */ goto L_005d8777;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8750: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8753: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d8756: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d875c: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8760: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
    /* 005d8766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8769: mov edi, dword ptr [eax + esi*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_esi*2+0x1ccu));
    /* 005d8770: mov byte ptr [edi + 0xe8], 0xe0 */ W8((u32)(r_edi+0xe8u), 0xe0u);
L_005d8777:; BB(0x005d8777);
    /* 005d8777: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005d877d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8780: jne 0x5d87c9 */ if (!fZ) goto L_005d87c9;
L_005d8782:; BB(0x005d8782);
    /* 005d8782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8788: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d878b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d878e: jl 0x5d86cd */ if ((fS!=fO)) goto L_005d86cd;
L_005d8794:; BB(0x005d8794);
    /* 005d8794: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8797: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d879a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005d879d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d87a0: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 005d87a6: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d87a9: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005d87af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d87b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d87b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bc: ret  */ FN_RET(0x005d869f); r_esp += 4; return;
L_005d87bd:; BB(0x005d87bd);
    /* 005d87bd: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d87c4: jmp 0x5d8737 */ goto L_005d8737;
L_005d87c9:; BB(0x005d87c9);
    /* 005d87c9: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005d87cf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d87d2: jne 0x5d8782 */ if (!fZ) goto L_005d8782;
L_005d87d4:; BB(0x005d87d4);
    /* 005d87d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d87db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d87e2u); f_005caba4();
    /* 005d87e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d87e3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d87e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87e8: je 0x5d8819 */ if (fZ) goto L_005d8819;
L_005d87ea:; BB(0x005d87ea);
    /* 005d87ea: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005d87f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d87f8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d87fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d87fe: push dword ptr [edx + ebx*2 + 0x1cc] */ { u32 v = R32((u32)(r_edx+r_ebx*2+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8805: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8807: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d880d: call 0x5dd360 */ r_esp -= 4; W32(r_esp, 0x5d8812u); f_005dd360();
    /* 005d8812: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8819:; BB(0x005d8819);
    /* 005d8819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8820: jmp 0x5d8782 */ goto L_005d8782;
L_005d8825:; BB(0x005d8825);
    /* 005d8825: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d882b: movsx ebx, byte ptr [edx + ecx*2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*2));
    /* 005d882f: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8832: je 0x5d889b */ if (fZ) goto L_005d889b;
L_005d8834:; BB(0x005d8834);
    /* 005d8834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8837: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 005d883a: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005d8840: mov ebx, dword ptr [ecx + ebx*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005d8844: mov dword ptr [eax + 0xe4], ebx */ W32((u32)(r_eax+0xe4u), r_ebx);
L_005d884a:; BB(0x005d884a);
    /* 005d884a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d884d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8850: movsx esi, byte ptr [eax + edx*2 + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 005d8855: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8858: je 0x5d8882 */ if (fZ) goto L_005d8882;
L_005d885a:; BB(0x005d885a);
    /* 005d885a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d885d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8860: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8863: mov edi, dword ptr [eax + edx*2 + 0x1cc] */ r_edi = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d886a: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 005d886d: mov dword ptr [edi + 0xe8], ecx */ W32((u32)(r_edi+0xe8u), r_ecx);
    /* 005d8873: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005d8877: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005d887d: jmp 0x5d8777 */ goto L_005d8777;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8888: mov ecx, dword ptr [eax + edx*2 + 0x1cc] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x1ccu));
    /* 005d888f: mov byte ptr [ecx + 0xe8], 0xe0 */ W8((u32)(r_ecx+0xe8u), 0xe0u);
    /* 005d8896: jmp 0x5d8777 */ goto L_005d8777;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov byte ptr [eax + 0xe0], 0xe0 */ W8((u32)(r_eax+0xe0u), 0xe0u);
    /* 005d88a2: jmp 0x5d884a */ goto L_005d884a;
L_005d88a4:; BB(0x005d88a4);
    /* 005d88a4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d88a6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 005d88ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ae: je 0x5d842d */ if (fZ) goto L_005d842d;
L_005d88b4:; BB(0x005d88b4);
    /* 005d88b4: mov edx, eax */ r_edx = r_eax;
    /* 005d88b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d88b9: mov esi, dword ptr [edx + eax*2 + 0x1cc] */ r_esi = R32((u32)(r_edx+r_eax*2+0x1ccu));
    /* 005d88c0: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 005d88c3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005d88c9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 005d88cc: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 005d88cf: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d88d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88d4: je 0x5d848f */ if (fZ) goto L_005d848f;
L_005d88da:; BB(0x005d88da);
    /* 005d88da: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 005d88e4: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 005d88ee: mov dword ptr [esi + 0x94], 0x3f800000 */ W32((u32)(r_esi+0x94u), 0x3f800000u);
    /* 005d88f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005d88fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d88fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d8901: fadd dword ptr [edx*4 + 0x92cb08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92cb08u));
    /* 005d8908: fadd dword ptr [0x92cb80] */ ST(0) = ST(0) + R_F32((u32)(0x92cb80u));
    /* 005d890e: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 005d8914: jmp 0x5d848f */ goto L_005d848f;
L_005d8919:; BB(0x005d8919);
    /* 005d8919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d891b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d891e: jmp 0x5d83f8 */ goto L_005d83f8;
}

void f_005d8924(void) /* sub_5D8924 */
{
    FN_ENTER(0x005d8924);
    /* 005d8924: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8925: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8928: mov edi, ecx */ r_edi = r_ecx;
    /* 005d892a: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005d8930: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8932: je 0x5d8951 */ if (fZ) goto L_005d8951;
L_005d8934:; BB(0x005d8934);
    /* 005d8934: movsx eax, byte ptr [edx + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x961u));
    /* 005d893b: add edx, 0x968 */ {  u32 a = r_edx; u32 b = 0x968u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d8941: call 0x5d8968 */ r_esp -= 4; W32(r_esp, 0x5d8946u); f_005d8968();
    /* 005d8946: mov byte ptr [edi + 0x1ca], al */ W8((u32)(r_edi+0x1cau), (u8)r_eax);
    /* 005d894c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d894f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d8950: ret  */ FN_RET(0x005d8924); r_esp += 4; return;
L_005d8951:; BB(0x005d8951);
    /* 005d8951: mov byte ptr [edi + 0x1ca], 0xe */ W8((u32)(r_edi+0x1cau), 0xeu);
    /* 005d8958: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d895b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d895c: ret  */ FN_RET(0x005d8924); r_esp += 4; return;
}

void f_005d8968(void) /* sub_5D8968 */
{
    FN_ENTER(0x005d8968);
    /* 005d8968: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8969: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d896a: sub esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8970: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 005d8973: mov esi, 0x92c7a0 */ r_esi = 0x92c7a0u;
    /* 005d8978: mov ecx, 0x12c */ r_ecx = 0x12cu;
    /* 005d897d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d897e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005d8981: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005d8983: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d8984: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8987: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 005d8989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d898b: jl 0x5d8992 */ if ((fS!=fO)) goto L_005d8992;
L_005d898d:; BB(0x005d898d);
    /* 005d898d: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8990: jl 0x5d8994 */ if ((fS!=fO)) goto L_005d8994;
L_005d8992:; BB(0x005d8992);
    /* 005d8992: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d8994:; BB(0x005d8994);
    /* 005d8994: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8997: je 0x5d89b8 */ if (fZ) goto L_005d89b8;
L_005d8999:; BB(0x005d8999);
    /* 005d8999: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d899c: jl 0x5d89a8 */ if ((fS!=fO)) goto L_005d89a8;
L_005d899e:; BB(0x005d899e);
    /* 005d899e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d89a1: jle 0x5d89b8 */ if ((fZ||fS!=fO)) goto L_005d89b8;
L_005d89a3:; BB(0x005d89a3);
    /* 005d89a3: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d89a6: je 0x5d89b8 */ if (fZ) goto L_005d89b8;
L_005d89a8:; BB(0x005d89a8);
    /* 005d89a8: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 005d89ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d89ad: jl 0x5d89b4 */ if ((fS!=fO)) goto L_005d89b4;
L_005d89af:; BB(0x005d89af);
    /* 005d89af: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d89b2: jl 0x5d89c2 */ if ((fS!=fO)) goto L_005d89c2;
L_005d89b4:; BB(0x005d89b4);
    /* 005d89b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d89b6: jmp 0x5d89c2 */ goto L_005d89c2;
L_005d89b8:; BB(0x005d89b8);
    /* 005d89b8: movsx edx, word ptr [edx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 005d89bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d89be: jge 0x5d89db */ if ((fS==fO)) goto L_005d89db;
L_005d89c0:; BB(0x005d89c0);
    /* 005d89c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005d89c2:; BB(0x005d89c2);
    /* 005d89c2: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005d89c5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d89c7: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d89c9: lea eax, [eax + ecx*8] */ r_eax = (u32)(r_eax+r_ecx*8);
    /* 005d89cc: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d89ce: movzx eax, byte ptr [esp + eax] */ r_eax = (u32)R8((u32)(r_esp+r_eax));
    /* 005d89d2: add esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d89d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d89d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d89da: ret  */ FN_RET(0x005d8968); r_esp += 4; return;
L_005d89db:; BB(0x005d89db);
    /* 005d89db: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d89de: jl 0x5d89c2 */ if ((fS!=fO)) goto L_005d89c2;
L_005d89e0:; BB(0x005d89e0);
    /* 005d89e0: jmp 0x5d89c0 */ goto L_005d89c0;
}

void f_005d89e4(void) /* sub_5D89E4 */
{
    FN_ENTER(0x005d89e4);
    /* 005d89e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d89e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005d89e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d89e9: push 0x8da954 */ { u32 v = 0x8da954u; r_esp -= 4; W32(r_esp, v); }
    /* 005d89ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d89f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d89f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d89fc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d89ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d8a02: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005d8a05: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005d8a08: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005d8a0b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d8a0e: mov dword ptr [ecx + 0x1b0], 0 */ W32((u32)(r_ecx+0x1b0u), 0x0u);
    /* 005d8a18: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005d8a1e: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005d8a25: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8a28: je 0x5d8a8e */ if (fZ) goto L_005d8a8e;
L_005d8a2a:; BB(0x005d8a2a);
    /* 005d8a2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8a2d: mov dword ptr [eax + 0x1b0], 0x10 */ W32((u32)(r_eax+0x1b0u), 0x10u);
    /* 005d8a37: add ecx, 0x538 */ {  u32 a = r_ecx; u32 b = 0x538u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8a3d: call 0x6abb88 */ r_esp -= 4; W32(r_esp, 0x5d8a42u); f_006abb88();
    /* 005d8a42: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8a45: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005d8a47: lea ebx, [eax + 0x1bc] */ r_ebx = (u32)(r_eax+0x1bcu);
L_005d8a4d:; BB(0x005d8a4d);
    /* 005d8a4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d8a50: call 0x5dbc08 */ r_esp -= 4; W32(r_esp, 0x5d8a55u); f_005dbc08();
    /* 005d8a55: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8a58: je 0x5d8a86 */ if (fZ) goto L_005d8a86;
L_005d8a5a:; BB(0x005d8a5a);
    /* 005d8a5a: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8a5d: movzx edx, byte ptr [edi + 0xf4] */ r_edx = (u32)R8((u32)(r_edi+0xf4u));
    /* 005d8a64: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005d8a6a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005d8a6d: mov byte ptr [ecx + eax + 0x528], dl */ W8((u32)(r_ecx+r_eax+0x528u), (u8)r_edx);
    /* 005d8a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a75: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005d8a7b: add ecx, 0x538 */ {  u32 a = r_ecx; u32 b = 0x538u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8a81: call 0x6abb30 */ r_esp -= 4; W32(r_esp, 0x5d8a86u); f_006abb30();
L_005d8a86:; BB(0x005d8a86);
    /* 005d8a86: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d8a89: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8a8c: jl 0x5d8a4d */ if ((fS!=fO)) goto L_005d8a4d;
L_005d8a8e:; BB(0x005d8a8e);
    /* 005d8a8e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8a91: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a93: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5d8a98u); f_005d9a60();
    /* 005d8a98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8a9b: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 005d8aa1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8aa3: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d8aa6u); call_ind(t); }
    /* 005d8aa6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8aa9: mov word ptr [edx + 0x1f8], ax */ W16((u32)(r_edx+0x1f8u), (u16)r_eax);
    /* 005d8ab0: movsx eax, word ptr [edx + 0x1fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1fau));
    /* 005d8ab7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8aba: je 0x5d8bc5 */ if (fZ) goto L_005d8bc5;
L_005d8ac0:; BB(0x005d8ac0);
    /* 005d8ac0: mov ebx, edx */ r_ebx = r_edx;
    /* 005d8ac2: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005d8ac8: movzx edx, word ptr [eax + 0x334] */ r_edx = (u32)R16((u32)(r_eax+0x334u));
    /* 005d8acf: mov esi, dword ptr [ebx + 0x190] */ r_esi = R32((u32)(r_ebx+0x190u));
    /* 005d8ad5: mov word ptr [ebx + 0x200], dx */ W16((u32)(r_ebx+0x200u), (u16)r_edx);
    /* 005d8adc: movzx ecx, word ptr [eax + 0x336] */ r_ecx = (u32)R16((u32)(r_eax+0x336u));
    /* 005d8ae3: mov word ptr [ebx + 0x202], cx */ W16((u32)(r_ebx+0x202u), (u16)r_ecx);
    /* 005d8aea: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8af0: je 0x5d8b05 */ if (fZ) goto L_005d8b05;
L_005d8af2:; BB(0x005d8af2);
    /* 005d8af2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d8af4: mov edx, dword ptr [ecx + 0x1b0] */ r_edx = R32((u32)(r_ecx+0x1b0u));
    /* 005d8afa: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d8afd: mov dword ptr [ecx + 0x1b0], edx */ W32((u32)(r_ecx+0x1b0u), r_edx);
    /* 005d8b03: jmp 0x5d8b16 */ goto L_005d8b16;
L_005d8b05:; BB(0x005d8b05);
    /* 005d8b05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d8b07: mov edx, dword ptr [ecx + 0x1b0] */ r_edx = R32((u32)(r_ecx+0x1b0u));
    /* 005d8b0d: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005d8b10: mov dword ptr [ecx + 0x1b0], edx */ W32((u32)(r_ecx+0x1b0u), r_edx);
L_005d8b16:; BB(0x005d8b16);
    /* 005d8b16: mov edx, ecx */ r_edx = r_ecx;
    /* 005d8b18: mov ecx, dword ptr [edx + 0xdc] */ r_ecx = R32((u32)(r_edx+0xdcu));
    /* 005d8b1e: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8b21: jne 0x5d8b41 */ if (!fZ) goto L_005d8b41;
L_005d8b23:; BB(0x005d8b23);
    /* 005d8b23: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 005d8b2a: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8b2d: je 0x5d8b41 */ if (fZ) goto L_005d8b41;
L_005d8b2f:; BB(0x005d8b2f);
    /* 005d8b2f: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8b32: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d8b34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b37: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b39: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5d8b3eu); f_00814298();
    /* 005d8b3e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d8b41:; BB(0x005d8b41);
    /* 005d8b41: mov eax, ebx */ r_eax = r_ebx;
    /* 005d8b43: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 005d8b49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d8b4b: je 0x5d8bae */ if (fZ) goto L_005d8bae;
L_005d8b4d:; BB(0x005d8b4d);
    /* 005d8b4d: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d8b54: cmp edx, 0x4b */ {  u32 a = r_edx; u32 b = 0x4bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d8b57: jne 0x5d8bae */ if (!fZ) goto L_005d8bae;
L_005d8b59:; BB(0x005d8b59);
    /* 005d8b59: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005d8b60: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b62: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d8b67u); f_005caba4();
    /* 005d8b67: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d8b6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8b6d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8b70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d8b72: je 0x5d8bae */ if (fZ) goto L_005d8bae;
L_005d8b74:; BB(0x005d8b74);
    /* 005d8b74: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005d8b7b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d8b82: mov edx, ebx */ r_edx = r_ebx;
    /* 005d8b84: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8b86: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b8b: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005d8b92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b93: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8b99: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5d8b9eu); f_005e5cac();
    /* 005d8b9e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8ba1: mov dword ptr [eax], 0xb0d8e0 */ W32((u32)(r_eax), 0xb0d8e0u);
    /* 005d8ba7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005d8bae:; BB(0x005d8bae);
    /* 005d8bae: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8bb1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8bb4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8bb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8bba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d8bc1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8bc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8bc4: ret  */ FN_RET(0x005d89e4); r_esp += 4; return;
L_005d8bc5:; BB(0x005d8bc5);
    /* 005d8bc5: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5d8bcau); f_00807ac0();
    /* 005d8bca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8bcd: mov word ptr [edx + 0x1fa], ax */ W16((u32)(r_edx+0x1fau), (u16)r_eax);
    /* 005d8bd4: jmp 0x5d8ac0 */ goto L_005d8ac0;
}

void f_005d8bdc(void) /* sub_5D8BDC */
{
    FN_ENTER(0x005d8bdc);
    /* 005d8bdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8bdd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8be0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d8be2: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005d8be8: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005d8bef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8bf2: je 0x5d8c80 */ if (fZ) goto L_005d8c80;
L_005d8bf8:; BB(0x005d8bf8);
    /* 005d8bf8: add ecx, 0x538 */ {  u32 a = r_ecx; u32 b = 0x538u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8bfe: call 0x6abb88 */ r_esp -= 4; W32(r_esp, 0x5d8c03u); f_006abb88();
    /* 005d8c03: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005d8c07: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005d8c0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d8c0c: lea ecx, [ebx + 0x1bc] */ r_ecx = (u32)(r_ebx+0x1bcu);
    /* 005d8c12: mov edi, eax */ r_edi = r_eax;
    /* 005d8c14: mov esi, ecx */ r_esi = r_ecx;
L_005d8c16:; BB(0x005d8c16);
    /* 005d8c16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c17: mov ecx, esi */ r_ecx = r_esi;
    /* 005d8c19: call 0x5dbc08 */ r_esp -= 4; W32(r_esp, 0x5d8c1eu); f_005dbc08();
    /* 005d8c1e: mov edx, eax */ r_edx = r_eax;
    /* 005d8c20: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8c23: je 0x5d8c36 */ if (fZ) goto L_005d8c36;
L_005d8c25:; BB(0x005d8c25);
    /* 005d8c25: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005d8c2b: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005d8c2e: mov byte ptr [edx + eax + 0x528], 0xff */ W8((u32)(r_edx+r_eax+0x528u), 0xffu);
L_005d8c36:; BB(0x005d8c36);
    /* 005d8c36: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d8c39: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8c3c: jl 0x5d8c16 */ if ((fS!=fO)) goto L_005d8c16;
L_005d8c3e:; BB(0x005d8c3e);
    /* 005d8c3e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005d8c42: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 005d8c45: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005d8c4b: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005d8c51: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8c56: je 0x5d8c5f */ if (fZ) goto L_005d8c5f;
L_005d8c58:; BB(0x005d8c58);
    /* 005d8c58: mov eax, 1 */ r_eax = 0x1u;
    /* 005d8c5d: jmp 0x5d8c61 */ goto L_005d8c61;
L_005d8c5f:; BB(0x005d8c5f);
    /* 005d8c5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d8c61:; BB(0x005d8c61);
    /* 005d8c61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8c63: jne 0x5d8c80 */ if (!fZ) goto L_005d8c80;
L_005d8c65:; BB(0x005d8c65);
    /* 005d8c65: mov dword ptr [edx + 0x520], 0 */ W32((u32)(r_edx+0x520u), 0x0u);
    /* 005d8c6f: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005d8c75: add ecx, 0x4e4 */ {  u32 a = r_ecx; u32 b = 0x4e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8c7b: call 0x6a7f48 */ r_esp -= 4; W32(r_esp, 0x5d8c80u); f_006a7f48();
L_005d8c80:; BB(0x005d8c80);
    /* 005d8c80: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d8c82: call 0x5d8c8c */ r_esp -= 4; W32(r_esp, 0x5d8c87u); f_005d8c8c();
    /* 005d8c87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d8c8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d8c8b: ret  */ FN_RET(0x005d8bdc); r_esp += 4; return;
}

void f_005d8c8c(void) /* sub_5D8C8C */
{
    FN_ENTER(0x005d8c8c);
    /* 005d8c8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c8e: mov esi, ecx */ r_esi = r_ecx;
    /* 005d8c90: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005d8c96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d8c98: je 0x5d8cde */ if (fZ) goto L_005d8cde;
L_005d8c9a:; BB(0x005d8c9a);
    /* 005d8c9a: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c9f: lea ebp, [esi + 0x1f8] */ r_ebp = (u32)(r_esi+0x1f8u);
    /* 005d8ca5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d8ca7: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d8cacu); f_005dbbe4();
    /* 005d8cac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d8cae: je 0x5d8cde */ if (fZ) goto L_005d8cde;
L_005d8cb0:; BB(0x005d8cb0);
    /* 005d8cb0: mov eax, dword ptr [esi + 0x1f4] */ r_eax = R32((u32)(r_esi+0x1f4u));
    /* 005d8cb6: sub eax, dword ptr [esi + 0x1f0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x1f0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d8cbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d8cbe: jle 0x5d8cd2 */ if ((fZ||fS!=fO)) goto L_005d8cd2;
L_005d8cc0:; BB(0x005d8cc0);
    /* 005d8cc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8cc1: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005d8cc7: add ecx, 0x71c */ {  u32 a = r_ecx; u32 b = 0x71cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8ccd: call 0x6981f8 */ r_esp -= 4; W32(r_esp, 0x5d8cd2u); f_006981f8();
L_005d8cd2:; BB(0x005d8cd2);
    /* 005d8cd2: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8cd7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d8cd9: call 0x5dbbfc */ r_esp -= 4; W32(r_esp, 0x5d8cdeu); f_005dbbfc();
L_005d8cde:; BB(0x005d8cde);
    /* 005d8cde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8cdf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d8ce0: ret  */ FN_RET(0x005d8c8c); r_esp += 4; return;
}

void f_005d8ce4(void) /* sub_5D8CE4 */
{
    FN_ENTER(0x005d8ce4);
    /* 005d8ce4: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005d8cea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8cec: je 0x5d8cf4 */ if (fZ) goto L_005d8cf4;
L_005d8cee:; BB(0x005d8cee);
    /* 005d8cee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8cf0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8cf2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d8cf4u); call_ind(t); }
L_005d8cf4:; BB(0x005d8cf4);
    /* 005d8cf4: push dword ptr [0xa8da34] */ { u32 v = R32((u32)(0xa8da34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d8cfa: call 0x844ac4 */ r_esp -= 4; W32(r_esp, 0x5d8cffu); f_00844ac4();
    /* 005d8cff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d8d01: mov dword ptr [0xa8da3c], eax */ W32((u32)(0xa8da3cu), r_eax);
    /* 005d8d06: mov dword ptr [0xa8da38], eax */ W32((u32)(0xa8da38u), r_eax);
    /* 005d8d0b: mov dword ptr [0xa8da34], eax */ W32((u32)(0xa8da34u), r_eax);
    /* 005d8d10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d8d11: ret  */ FN_RET(0x005d8ce4); r_esp += 4; return;
}

void f_005d8d14(void) /* sub_5D8D14 */
{
    FN_ENTER(0x005d8d14);
    /* 005d8d14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d15: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8d17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d19: push 0x8da98a */ { u32 v = 0x8da98au; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d8d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d8d2c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8d2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d8d32: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d8d35: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d8d38: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d8d3b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8d3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8d40: je 0x5d8e66 */ if (fZ) goto L_005d8e66;
L_005d8d46:; BB(0x005d8d46);
    /* 005d8d46: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005d8d4d: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d52: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d8d57u); f_005caba4();
    /* 005d8d57: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d8d5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8d5d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d8d60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8d62: je 0x5d8e5f */ if (fZ) goto L_005d8e5f;
L_005d8d68:; BB(0x005d8d68);
    /* 005d8d68: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005d8d6f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d8d76: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8d78: mov edx, dword ptr [0xaca36c] */ r_edx = R32((u32)(0xaca36cu));
    /* 005d8d7e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8d81: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005d8d84: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005d8d87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d89: call 0x5d1b50 */ r_esp -= 4; W32(r_esp, 0x5d8d8eu); f_005d1b50();
    /* 005d8d8e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d8d95: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8d98: mov dword ptr [eax], 0xb0d800 */ W32((u32)(r_eax), 0xb0d800u);
    /* 005d8d9e: lea ebx, [eax + 0x1bc] */ r_ebx = (u32)(r_eax+0x1bcu);
    /* 005d8da4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d8da6: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x5d8dabu); f_005dc1e0();
    /* 005d8dab: mov eax, dword ptr [0x9c27b8] */ r_eax = R32((u32)(0x9c27b8u));
    /* 005d8db0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8db3: mov dword ptr [edx + 0x1ec], 0 */ W32((u32)(r_edx+0x1ecu), 0x0u);
    /* 005d8dbd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005d8dc0: call 0x5d8e78 */ r_esp -= 4; W32(r_esp, 0x5d8dc5u); f_005d8e78();
    /* 005d8dc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8dc8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8dcb: mov dword ptr [edx + 0x1b8], 0x40000000 */ W32((u32)(r_edx+0x1b8u), 0x40000000u);
    /* 005d8dd5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005d8dd8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d8ddb: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 005d8dde: fstp dword ptr [edx + 0x1b4] */ W_F32((u32)(r_edx+0x1b4u), ST(0)); FPOP();
    /* 005d8de4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8de5: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x5d8deau); f_005d4108();
    /* 005d8dea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8ded: movzx eax, byte ptr [edx + 0x1c8] */ r_eax = (u32)R8((u32)(r_edx+0x1c8u));
    /* 005d8df4: and eax, 0xbf */ {  u32 a = r_eax; u32 b = 0xbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d8df9: mov byte ptr [edx + 0x1c8], al */ W8((u32)(r_edx+0x1c8u), (u8)r_eax);
    /* 005d8dff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d8e01: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5d8e06u); f_005dbdb8();
    /* 005d8e06: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8e09: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d8e0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e0d: call 0x5c4ffc */ r_esp -= 4; W32(r_esp, 0x5d8e12u); f_005c4ffc();
    /* 005d8e12: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8e15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e17: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d8e19: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5d8e1cu); call_ind(t); }
    /* 005d8e1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8e1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d8e21: mov dword ptr [ecx + 0x1b0], eax */ W32((u32)(r_ecx+0x1b0u), r_eax);
    /* 005d8e27: mov dword ptr [ecx + 0x1cc], eax */ W32((u32)(r_ecx+0x1ccu), r_eax);
    /* 005d8e2d: mov dword ptr [ecx + 0x1d4], eax */ W32((u32)(r_ecx+0x1d4u), r_eax);
    /* 005d8e33: mov dword ptr [ecx + 0x1d0], eax */ W32((u32)(r_ecx+0x1d0u), r_eax);
    /* 005d8e39: mov dword ptr [ecx + 0x1d8], eax */ W32((u32)(r_ecx+0x1d8u), r_eax);
    /* 005d8e3f: call 0x5d8e90 */ r_esp -= 4; W32(r_esp, 0x5d8e44u); f_005d8e90();
    /* 005d8e44: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005d8e4b:; BB(0x005d8e4b);
    /* 005d8e4b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8e4e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8e51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8e54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d8e5b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8e5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8e5e: ret  */ FN_RET(0x005d8d14); r_esp += 4; return;
L_005d8e5f:; BB(0x005d8e5f);
    /* 005d8e5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d8e61: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d8e64: jmp 0x5d8e4b */ goto L_005d8e4b;
L_005d8e66:; BB(0x005d8e66);
    /* 005d8e66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d8e68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8e6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d8e72: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8e74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8e75: ret  */ FN_RET(0x005d8d14); r_esp += 4; return;
}

void f_005d8e78(void) /* sub_5D8E78 */
{
    FN_ENTER(0x005d8e78);
    /* 005d8e78: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x5d8e7du); f_006dc358();
    /* 005d8e7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d8e80: je 0x5d8e88 */ if (fZ) goto L_005d8e88;
L_005d8e82:; BB(0x005d8e82);
    /* 005d8e82: mov eax, 0x189c */ r_eax = 0x189cu;
    /* 005d8e87: ret  */ FN_RET(0x005d8e78); r_esp += 4; return;
L_005d8e88:; BB(0x005d8e88);
    /* 005d8e88: mov eax, 0x1fa4 */ r_eax = 0x1fa4u;
    /* 005d8e8d: ret  */ FN_RET(0x005d8e78); r_esp += 4; return;
}

void f_005d8e90(void) /* sub_5D8E90 */
{
    FN_ENTER(0x005d8e90);
    /* 005d8e90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e91: mov esi, ecx */ r_esi = r_ecx;
    /* 005d8e93: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005d8e9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e9b: call 0x5e4b64 */ r_esp -= 4; W32(r_esp, 0x5d8ea0u); f_005e4b64();
    /* 005d8ea0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d8ea1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d8ea3: je 0x5d8ec8 */ if (fZ) goto L_005d8ec8;
L_005d8ea5:; BB(0x005d8ea5);
    /* 005d8ea5: movsx edx, word ptr [eax + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 005d8ea9: mov dword ptr [esi + 0x1dc], edx */ W32((u32)(r_esi+0x1dcu), r_edx);
    /* 005d8eaf: movzx edx, byte ptr [eax + 0xf] */ r_edx = (u32)R8((u32)(r_eax+0xfu));
    /* 005d8eb3: mov byte ptr [esi + 0x1e0], dl */ W8((u32)(r_esi+0x1e0u), (u8)r_edx);
    /* 005d8eb9: lea edx, [eax + 0x10] */ r_edx = (u32)(r_eax+0x10u);
    /* 005d8ebc: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8ebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ec0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ec1: mov ecx, esi */ r_ecx = r_esi;
    /* 005d8ec3: call 0x5d8ecc */ r_esp -= 4; W32(r_esp, 0x5d8ec8u); f_005d8ecc();
L_005d8ec8:; BB(0x005d8ec8);
    /* 005d8ec8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d8ec9: ret  */ FN_RET(0x005d8e90); r_esp += 4; return;
}

void f_005d8ecc(void) /* sub_5D8ECC */
{
    FN_ENTER(0x005d8ecc);
    /* 005d8ecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ecd: lea eax, [ecx + 0x1e1] */ r_eax = (u32)(r_ecx+0x1e1u);
    /* 005d8ed3: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 005d8ed7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005d8edb: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 005d8ede: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 005d8ee0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8ee2: add ecx, 0x1e5 */ {  u32 a = r_ecx; u32 b = 0x1e5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d8ee8: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005d8eea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8eeb: ret 8 */ FN_RET(0x005d8ecc); r_esp += 12; return;
}

void f_005d8ef0(void) /* sub_5D8EF0 */
{
    FN_ENTER(0x005d8ef0);
    /* 005d8ef0: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8ef6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ef7: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005d8efb: call 0x5d67e4 */ r_esp -= 4; W32(r_esp, 0x5d8f00u); f_005d67e4();
    /* 005d8f00: ret 4 */ FN_RET(0x005d8ef0); r_esp += 8; return;
}

void f_005d8f04(void) /* sub_5D8F04 */
{
    FN_ENTER(0x005d8f04);
    /* 005d8f04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f05: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8f08: mov esi, ecx */ r_esi = r_ecx;
    /* 005d8f0a: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005d8f10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8f12: je 0x5d9016 */ if (fZ) goto L_005d9016;
L_005d8f18:; BB(0x005d8f18);
    /* 005d8f18: mov edx, dword ptr [0xaca300] */ r_edx = R32((u32)(0xaca300u));
    /* 005d8f1e: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8f21: je 0x5d8f33 */ if (fZ) goto L_005d8f33;
L_005d8f23:; BB(0x005d8f23);
    /* 005d8f23: mov edx, dword ptr [eax + 0x340] */ r_edx = R32((u32)(r_eax+0x340u));
    /* 005d8f29: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8f2c: jne 0x5d8f33 */ if (!fZ) goto L_005d8f33;
L_005d8f2e:; BB(0x005d8f2e);
    /* 005d8f2e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d8f31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d8f32: ret  */ FN_RET(0x005d8f04); r_esp += 4; return;
L_005d8f33:; BB(0x005d8f33);
    /* 005d8f33: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005d8f36: test edx, 0x8000000 */ {  u32 a = r_edx; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8f3c: jne 0x5d9016 */ if (!fZ) goto L_005d9016;
L_005d8f42:; BB(0x005d8f42);
    /* 005d8f42: mov edx, dword ptr [esi + 0xdc] */ r_edx = R32((u32)(r_esi+0xdcu));
    /* 005d8f48: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8f4b: jne 0x5d9016 */ if (!fZ) goto L_005d9016;
L_005d8f51:; BB(0x005d8f51);
    /* 005d8f51: mov edx, dword ptr [eax + 0x68c] */ r_edx = R32((u32)(r_eax+0x68cu));
    /* 005d8f57: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8f5a: je 0x5d8f67 */ if (fZ) goto L_005d8f67;
L_005d8f5c:; BB(0x005d8f5c);
    /* 005d8f5c: mov edx, 1 */ r_edx = 0x1u;
    /* 005d8f61: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005d8f65: jmp 0x5d8f6d */ goto L_005d8f6d;
L_005d8f67:; BB(0x005d8f67);
    /* 005d8f67: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d8f69: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_005d8f6d:; BB(0x005d8f6d);
    /* 005d8f6d: fld dword ptr [eax + 0x690] */ FPUSH(R_F32((u32)(r_eax+0x690u)));
    /* 005d8f73: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005d8f77: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5d8f7cu); f_0082d7b0();
    /* 005d8f7c: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x5d8f81u); f_005cb0c8();
    /* 005d8f81: mov ecx, esi */ r_ecx = r_esi;
    /* 005d8f83: call 0x5c3538 */ r_esp -= 4; W32(r_esp, 0x5d8f88u); f_005c3538();
    /* 005d8f88: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d8f8b: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x5d8f90u); f_005cb158();
    /* 005d8f90: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005d8f94: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 005d8f98: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005d8f9c: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005d8fa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d8fa2: mov ebx, eax */ r_ebx = r_eax;
L_005d8fa4:; BB(0x005d8fa4);
    /* 005d8fa4: mov ebp, dword ptr [esi + ebx*4 + 0x1cc] */ r_ebp = R32((u32)(r_esi+r_ebx*4+0x1ccu));
    /* 005d8fab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d8fae: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8fb0: je 0x5d8ff6 */ if (fZ) goto L_005d8ff6;
L_005d8fb2:; BB(0x005d8fb2);
    /* 005d8fb2: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 005d8fb5: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d8fb8: jne 0x5d8ff6 */ if (!fZ) goto L_005d8ff6;
L_005d8fba:; BB(0x005d8fba);
    /* 005d8fba: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8fbc: je 0x5d8fee */ if (fZ) goto L_005d8fee;
L_005d8fbe:; BB(0x005d8fbe);
    /* 005d8fbe: fld dword ptr [ebp + 0xdc] */ FPUSH(R_F32((u32)(r_ebp+0xdcu)));
    /* 005d8fc4: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 005d8fc8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005d8fcb: fstp dword ptr [ebp + 0xdc] */ W_F32((u32)(r_ebp+0xdcu), ST(0)); FPOP();
    /* 005d8fd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d8fd3: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d8fd6u); call_ind(t); }
    /* 005d8fd6: fld dword ptr [0x92cb5c] */ FPUSH(R_F32((u32)(0x92cb5cu)));
    /* 005d8fdc: fdiv dword ptr [esp + 0x14] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x14u));
    /* 005d8fe0: fmul dword ptr [ebp + 0xdc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xdcu));
    /* 005d8fe6: fstp dword ptr [ebp + 0xdc] */ W_F32((u32)(r_ebp+0xdcu), ST(0)); FPOP();
    /* 005d8fec: jmp 0x5d8ff6 */ goto L_005d8ff6;
L_005d8fee:; BB(0x005d8fee);
    /* 005d8fee: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005d8ff1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d8ff3: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d8ff6u); call_ind(t); }
L_005d8ff6:; BB(0x005d8ff6);
    /* 005d8ff6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8ff9: jl 0x5d8fa4 */ if ((fS!=fO)) goto L_005d8fa4;
L_005d8ffb:; BB(0x005d8ffb);
    /* 005d8ffb: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005d8fff: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 005d9003: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 005d9007: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x5d900cu); f_005cb228();
    /* 005d900c: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x5d9011u); f_005cb114();
    /* 005d9011: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5d9016u); f_0082da80();
L_005d9016:; BB(0x005d9016);
    /* 005d9016: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d9019: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d901a: ret  */ FN_RET(0x005d8f04); r_esp += 4; return;
}

