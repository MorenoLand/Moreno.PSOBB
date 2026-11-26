#include "protos.h"

void f_0063a00c(void) /* sub_63A00C */
{
    FN_ENTER(0x0063a00c);
    /* 0063a00c: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63a011u); f_00770738();
    /* 0063a011: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063a015: mov eax, 0 */ r_eax = 0x0u;
    /* 0063a01a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0063a01d: ret 8 */ FN_RET(0x0063a00c); r_esp += 12; return;
}

void f_0063a020(void) /* sub_63A020 */
{
    FN_ENTER(0x0063a020);
    /* 0063a020: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63a025u); f_00770738();
    /* 0063a025: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063a029: mov eax, 0 */ r_eax = 0x0u;
    /* 0063a02e: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0063a031: ret 0xc */ FN_RET(0x0063a020); r_esp += 16; return;
}

void f_0063a034(void) /* sub_63A034 */
{
    FN_ENTER(0x0063a034);
    /* 0063a034: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a035: mov esi, ecx */ r_esi = r_ecx;
    /* 0063a037: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x63a03cu); f_004f7c84();
    /* 0063a03c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a03f: je 0x63a0ba */ if (fZ) goto L_0063a0ba;
L_0063a041:; BB(0x0063a041);
    /* 0063a041: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x63a046u); f_0067e408();
    /* 0063a046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063a048: je 0x63a04c */ if (fZ) goto L_0063a04c;
L_0063a04a:; BB(0x0063a04a);
    /* 0063a04a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a04b: ret  */ FN_RET(0x0063a034); r_esp += 4; return;
L_0063a04c:; BB(0x0063a04c);
    /* 0063a04c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063a04e: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a050: call dword ptr [eax + 0x158] */ { u32 t = R32((u32)(r_eax+0x158u)); r_esp -= 4; W32(r_esp, 0x63a056u); call_ind(t); }
    /* 0063a056: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0063a05d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a05f: je 0x63a094 */ if (fZ) goto L_0063a094;
L_0063a061:; BB(0x0063a061);
    /* 0063a061: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a064: je 0x63a088 */ if (fZ) goto L_0063a088;
L_0063a066:; BB(0x0063a066);
    /* 0063a066: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a069: jne 0x63a077 */ if (!fZ) goto L_0063a077;
L_0063a06b:; BB(0x0063a06b);
    /* 0063a06b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063a06d: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a06f: call dword ptr [eax + 0x14c] */ { u32 t = R32((u32)(r_eax+0x14cu)); r_esp -= 4; W32(r_esp, 0x63a075u); call_ind(t); }
    /* 0063a075: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a076: ret  */ FN_RET(0x0063a034); r_esp += 4; return;
L_0063a077:; BB(0x0063a077);
    /* 0063a077: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063a07a: jne 0x63a092 */ if (!fZ) goto L_0063a092;
L_0063a07c:; BB(0x0063a07c);
    /* 0063a07c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063a07e: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a080: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x63a086u); call_ind(t); }
    /* 0063a086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a087: ret  */ FN_RET(0x0063a034); r_esp += 4; return;
L_0063a088:; BB(0x0063a088);
    /* 0063a088: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063a08a: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a08c: call dword ptr [eax + 0x148] */ { u32 t = R32((u32)(r_eax+0x148u)); r_esp -= 4; W32(r_esp, 0x63a092u); call_ind(t); }
L_0063a092:; BB(0x0063a092);
    /* 0063a092: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a093: ret  */ FN_RET(0x0063a034); r_esp += 4; return;
L_0063a094:; BB(0x0063a094);
    /* 0063a094: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063a096: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a098: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x63a09eu); call_ind(t); }
    /* 0063a09e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a0a0: je 0x63a0ae */ if (fZ) goto L_0063a0ae;
L_0063a0a2:; BB(0x0063a0a2);
    /* 0063a0a2: mov eax, 1 */ r_eax = 0x1u;
    /* 0063a0a7: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
L_0063a0ae:; BB(0x0063a0ae);
    /* 0063a0ae: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063a0b0: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a0b2: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x63a0b8u); call_ind(t); }
    /* 0063a0b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a0b9: ret  */ FN_RET(0x0063a034); r_esp += 4; return;
L_0063a0ba:; BB(0x0063a0ba);
    /* 0063a0ba: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063a0bc: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a0be: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x63a0c4u); call_ind(t); }
    /* 0063a0c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a0c5: ret  */ FN_RET(0x0063a034); r_esp += 4; return;
}

void f_0063a0c8(void) /* sub_63A0C8 */
{
    FN_ENTER(0x0063a0c8);
    /* 0063a0c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a0c9: mov edi, ecx */ r_edi = r_ecx;
    /* 0063a0cb: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x63a0d0u); f_0067e408();
    /* 0063a0d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063a0d2: je 0x63a0d6 */ if (fZ) goto L_0063a0d6;
L_0063a0d4:; BB(0x0063a0d4);
    /* 0063a0d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a0d5: ret  */ FN_RET(0x0063a0c8); r_esp += 4; return;
L_0063a0d6:; BB(0x0063a0d6);
    /* 0063a0d6: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a0db: mov ecx, edi */ r_ecx = r_edi;
    /* 0063a0dd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063a0df: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a0e4: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63a0e7u); call_ind(t); }
    /* 0063a0e7: mov dword ptr [edi + 0x348], eax */ W32((u32)(r_edi+0x348u), r_eax);
    /* 0063a0ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063a0f0: je 0x63a0f4 */ if (fZ) goto L_0063a0f4;
L_0063a0f2:; BB(0x0063a0f2);
    /* 0063a0f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a0f3: ret  */ FN_RET(0x0063a0c8); r_esp += 4; return;
L_0063a0f4:; BB(0x0063a0f4);
    /* 0063a0f4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63a0f9u); f_0082d7b0();
    /* 0063a0f9: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0063a0fc: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63a101u); f_0082d838();
    /* 0063a101: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0063a104: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a106: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63a10bu); f_0082d8bc();
    /* 0063a10b: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0063a10e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63a113u); f_00829cc8();
    /* 0063a113: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x63a118u); f_004f7c84();
    /* 0063a118: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a11b: je 0x63a13b */ if (fZ) goto L_0063a13b;
L_0063a11d:; BB(0x0063a11d);
    /* 0063a11d: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a123: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a129: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a12c: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x63a131u); f_0083046c();
    /* 0063a131: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063a134:; BB(0x0063a134);
    /* 0063a134: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63a139u); f_0082da80();
    /* 0063a139: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a13a: ret  */ FN_RET(0x0063a0c8); r_esp += 4; return;
L_0063a13b:; BB(0x0063a13b);
    /* 0063a13b: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a13e: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x63a143u); f_0082e1e8();
    /* 0063a143: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a144: jmp 0x63a134 */ goto L_0063a134;
}

void f_0063a148(void) /* sub_63A148 */
{
    FN_ENTER(0x0063a148);
    /* 0063a148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a149: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a14b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a14d: push 0x8e4a3c */ { u32 v = 0x8e4a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a152: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063a158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a159: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063a160: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a163: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063a166: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063a169: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063a16c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063a16f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063a172: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a175: mov dword ptr [ecx], 0xb2d260 */ W32((u32)(r_ecx), 0xb2d260u);
    /* 0063a17b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063a182: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x63a187u); f_00770660();
    /* 0063a187: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a18a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063a191: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a193: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a194: ret  */ FN_RET(0x0063a148); r_esp += 4; return;
}

void f_0063a198(void) /* sub_63A198 */
{
    FN_ENTER(0x0063a198);
    /* 0063a198: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a199: mov edi, ecx */ r_edi = r_ecx;
    /* 0063a19b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a19f: mov ecx, edi */ r_ecx = r_edi;
    /* 0063a1a1: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x63a1a6u); f_00770748();
    /* 0063a1a6: mov dword ptr [edi], 0xb2d260 */ W32((u32)(r_edi), 0xb2d260u);
    /* 0063a1ac: mov edx, dword ptr [0x9c67a4] */ r_edx = R32((u32)(0x9c67a4u));
    /* 0063a1b2: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0063a1b5: mov dword ptr [edi + 0x340], 0 */ W32((u32)(r_edi+0x340u), 0x0u);
    /* 0063a1bf: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063a1c4: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0063a1cb: mov dword ptr [edi + 0x33c], 0 */ W32((u32)(r_edi+0x33cu), 0x0u);
    /* 0063a1d5: mov eax, edi */ r_eax = r_edi;
    /* 0063a1d7: mov dword ptr [edi + 0x348], 1 */ W32((u32)(r_edi+0x348u), 0x1u);
    /* 0063a1e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a1e2: ret 4 */ FN_RET(0x0063a198); r_esp += 8; return;
}

void f_0063a1e8(void) /* sub_63A1E8 */
{
    FN_ENTER(0x0063a1e8);
    /* 0063a1e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1e9: mov esi, ecx */ r_esi = r_ecx;
    /* 0063a1eb: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063a1f1: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1f4: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63a1f9u); f_0050b510();
    /* 0063a1f9: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1fc: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63a201u); f_0050b510();
    /* 0063a201: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063a204: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a205: ret  */ FN_RET(0x0063a1e8); r_esp += 4; return;
}

void f_0063a208(void) /* sub_63A208 */
{
    FN_ENTER(0x0063a208);
    /* 0063a208: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a209: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a20a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a20b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a20c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063a20e: mov ebp, eax */ r_ebp = r_eax;
    /* 0063a210: mov esi, ecx */ r_esi = r_ecx;
L_0063a212:; BB(0x0063a212);
    /* 0063a212: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a213: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63a218u); f_0068d5a8();
    /* 0063a218: mov edi, eax */ r_edi = r_eax;
    /* 0063a21a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a21d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a21f: je 0x63a23b */ if (fZ) goto L_0063a23b;
L_0063a221:; BB(0x0063a221);
    /* 0063a221: mov ecx, edi */ r_ecx = r_edi;
    /* 0063a223: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x63a228u); f_007ba980();
    /* 0063a228: mov ebx, eax */ r_ebx = r_eax;
    /* 0063a22a: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a22c: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x63a231u); f_007ba980();
    /* 0063a231: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0063a234: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0063a237: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a239: je 0x63a24a */ if (fZ) goto L_0063a24a;
L_0063a23b:; BB(0x0063a23b);
    /* 0063a23b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0063a23e: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063a241: jl 0x63a212 */ if ((fS!=fO)) goto L_0063a212;
L_0063a243:; BB(0x0063a243);
    /* 0063a243: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063a245: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a246: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a247: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a248: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a249: ret  */ FN_RET(0x0063a208); r_esp += 4; return;
L_0063a24a:; BB(0x0063a24a);
    /* 0063a24a: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 0063a250: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a256: je 0x63a25f */ if (fZ) goto L_0063a25f;
L_0063a258:; BB(0x0063a258);
    /* 0063a258: mov edx, 1 */ r_edx = 0x1u;
    /* 0063a25d: jmp 0x63a261 */ goto L_0063a261;
L_0063a25f:; BB(0x0063a25f);
    /* 0063a25f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063a261:; BB(0x0063a261);
    /* 0063a261: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063a263: je 0x63a23b */ if (fZ) goto L_0063a23b;
L_0063a265:; BB(0x0063a265);
    /* 0063a265: mov eax, 1 */ r_eax = 0x1u;
    /* 0063a26a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a26b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a26c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a26d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a26e: ret  */ FN_RET(0x0063a208); r_esp += 4; return;
}

void f_0063a270(void) /* sub_63A270 */
{
    FN_ENTER(0x0063a270);
    /* 0063a270: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a271: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a272: mov esi, ecx */ r_esi = r_ecx;
    /* 0063a274: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a276: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63a27bu); f_0077a1f4();
    /* 0063a27b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a27c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x63a281u); f_007b999c();
    /* 0063a281: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a282: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 0063a288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063a28a: jl 0x63a29a */ if ((fS!=fO)) goto L_0063a29a;
L_0063a28c:; BB(0x0063a28c);
    /* 0063a28c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a28e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a28f: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x63a294u); f_006946a8();
    /* 0063a294: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063a297: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a298: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a299: ret  */ FN_RET(0x0063a270); r_esp += 4; return;
L_0063a29a:; BB(0x0063a29a);
    /* 0063a29a: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a29c: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63a2a1u); f_00770738();
    /* 0063a2a1: mov ebx, eax */ r_ebx = r_eax;
    /* 0063a2a3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a2a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a2a9: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0063a2ab: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a2ad: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x63a2b0u); call_ind(t); }
    /* 0063a2b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063a2b2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a2b4: je 0x63a28c */ if (fZ) goto L_0063a28c;
L_0063a2b6:; BB(0x0063a2b6);
    /* 0063a2b6: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0063a2ba: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063a2bf: jge 0x63a28c */ if ((fS==fO)) goto L_0063a28c;
L_0063a2c1:; BB(0x0063a2c1);
    /* 0063a2c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a2c2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63a2c7u); f_0068d5a8();
    /* 0063a2c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a2c8: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0063a2cf: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a2d2: jne 0x63a28c */ if (!fZ) goto L_0063a28c;
L_0063a2d4:; BB(0x0063a2d4);
    /* 0063a2d4: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 0063a2da: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063a2dd: je 0x63a2e6 */ if (fZ) goto L_0063a2e6;
L_0063a2df:; BB(0x0063a2df);
    /* 0063a2df: mov edx, 1 */ r_edx = 0x1u;
    /* 0063a2e4: jmp 0x63a2e8 */ goto L_0063a2e8;
L_0063a2e6:; BB(0x0063a2e6);
    /* 0063a2e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063a2e8:; BB(0x0063a2e8);
    /* 0063a2e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a2ea: je 0x63a28c */ if (fZ) goto L_0063a28c;
L_0063a2ec:; BB(0x0063a2ec);
    /* 0063a2ec: mov ecx, eax */ r_ecx = r_eax;
    /* 0063a2ee: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x63a2f3u); f_00685514();
    /* 0063a2f3: jmp 0x63a28c */ goto L_0063a28c;
}

void f_0063a2f8(void) /* sub_63A2F8 */
{
    FN_ENTER(0x0063a2f8);
    /* 0063a2f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a2f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a2fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a2fb: mov edi, ecx */ r_edi = r_ecx;
    /* 0063a2fd: mov ecx, edi */ r_ecx = r_edi;
    /* 0063a2ff: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63a304u); f_0077a1f4();
    /* 0063a304: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a306: push dword ptr [edi + 0x33c] */ { u32 v = R32((u32)(r_edi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a30c: mov ecx, edi */ r_ecx = r_edi;
    /* 0063a30e: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x63a313u); f_007714cc();
    /* 0063a313: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0063a31a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0063a31d: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a322: je 0x63a3af */ if (fZ) goto L_0063a3af;
L_0063a328:; BB(0x0063a328);
    /* 0063a328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a329: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63a32eu); f_0068d5a8();
    /* 0063a32e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a32f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a330: mov ecx, edi */ r_ecx = r_edi;
    /* 0063a332: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63a337u); f_007706b0();
    /* 0063a337: mov ecx, edi */ r_ecx = r_edi;
    /* 0063a339: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63a33eu); f_00770738();
    /* 0063a33e: mov ebp, eax */ r_ebp = r_eax;
    /* 0063a340: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063a342: je 0x63a3ab */ if (fZ) goto L_0063a3ab;
L_0063a344:; BB(0x0063a344);
    /* 0063a344: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0063a347: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a348: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063a34b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a34c: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x63a351u); f_007a9180();
    /* 0063a351: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a354: fld dword ptr [edi + 0x340] */ FPUSH(R_F32((u32)(r_edi+0x340u)));
    /* 0063a35a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0063a35c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0063a35e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063a360: mov edx, dword ptr [edi + 0x340] */ r_edx = R32((u32)(r_edi+0x340u));
    /* 0063a366: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063a367: jbe 0x63a396 */ if ((fC||fZ)) goto L_0063a396;
L_0063a369:; BB(0x0063a369);
    /* 0063a369: mov eax, 3 */ r_eax = 0x3u;
    /* 0063a36e: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0063a375: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0063a37c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063a37f: jne 0x63a3ab */ if (!fZ) goto L_0063a3ab;
L_0063a381:; BB(0x0063a381);
    /* 0063a381: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a383: push dword ptr [edi + 0x84] */ { u32 v = R32((u32)(r_edi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a389: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a38b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a38c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a38d: call 0x6937c8 */ r_esp -= 4; W32(r_esp, 0x63a392u); f_006937c8();
    /* 0063a392: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a393: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a394: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a395: ret  */ FN_RET(0x0063a2f8); r_esp += 4; return;
L_0063a396:; BB(0x0063a396);
    /* 0063a396: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063a39b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a39d: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0063a3a4: mov ecx, edi */ r_ecx = r_edi;
    /* 0063a3a6: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63a3abu); f_007706b0();
L_0063a3ab:; BB(0x0063a3ab);
    /* 0063a3ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a3ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a3ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a3ae: ret  */ FN_RET(0x0063a2f8); r_esp += 4; return;
L_0063a3af:; BB(0x0063a3af);
    /* 0063a3af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a3b1: mov ecx, edi */ r_ecx = r_edi;
    /* 0063a3b3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63a3b8u); f_007706b0();
    /* 0063a3b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a3b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a3ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a3bb: ret  */ FN_RET(0x0063a2f8); r_esp += 4; return;
}

void f_0063a3bc(void) /* sub_63A3BC */
{
    FN_ENTER(0x0063a3bc);
    /* 0063a3bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a3bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063a3bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a3c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a3c2: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x63a3c7u); f_006946a8();
    /* 0063a3c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a3ca: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0063a3cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063a3ce: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x63a3d4u); call_ind(t); }
    /* 0063a3d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a3d5: ret  */ FN_RET(0x0063a3bc); r_esp += 4; return;
}

void f_0063a3d8(void) /* sub_63A3D8 */
{
    FN_ENTER(0x0063a3d8);
    /* 0063a3d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a3d9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063a3db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a3dd: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63a3e2u); f_0077a1f4();
    /* 0063a3e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a3e4: push dword ptr [ebp + 0x33c] */ { u32 v = R32((u32)(r_ebp+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a3ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a3ec: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x63a3f1u); f_007714cc();
    /* 0063a3f1: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 0063a3f8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0063a3fb: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a400: je 0x63a460 */ if (fZ) goto L_0063a460;
L_0063a402:; BB(0x0063a402);
    /* 0063a402: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a403: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63a408u); f_0068d5a8();
    /* 0063a408: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a40a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a40c: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63a411u); f_007706b0();
    /* 0063a411: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a413: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63a418u); f_00770738();
    /* 0063a418: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a41a: je 0x63a449 */ if (fZ) goto L_0063a449;
L_0063a41c:; BB(0x0063a41c);
    /* 0063a41c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063a41f: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063a422: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a424: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x63a429u); f_007a9180();
    /* 0063a429: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0063a42c: fld dword ptr [ebp + 0x33c] */ FPUSH(R_F32((u32)(r_ebp+0x33cu)));
    /* 0063a432: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0063a434: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0063a436: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063a438: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063a439: jbe 0x63a447 */ if ((fC||fZ)) goto L_0063a447;
L_0063a43b:; BB(0x0063a43b);
    /* 0063a43b: mov eax, 2 */ r_eax = 0x2u;
    /* 0063a440: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
L_0063a447:; BB(0x0063a447);
    /* 0063a447: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a448: ret  */ FN_RET(0x0063a3d8); r_esp += 4; return;
L_0063a449:; BB(0x0063a449);
    /* 0063a449: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063a44e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a450: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 0063a457: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a459: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63a45eu); f_007706b0();
    /* 0063a45e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a45f: ret  */ FN_RET(0x0063a3d8); r_esp += 4; return;
L_0063a460:; BB(0x0063a460);
    /* 0063a460: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a462: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a464: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63a469u); f_007706b0();
    /* 0063a469: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a46a: ret  */ FN_RET(0x0063a3d8); r_esp += 4; return;
}

void f_0063a46c(void) /* sub_63A46C */
{
    FN_ENTER(0x0063a46c);
    /* 0063a46c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a46d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063a46f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063a471: call 0x63a148 */ r_esp -= 4; W32(r_esp, 0x63a476u); f_0063a148();
    /* 0063a476: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063a47a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063a47c: jne 0x63a482 */ if (!fZ) goto L_0063a482;
L_0063a47e:; BB(0x0063a47e);
    /* 0063a47e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a47f: ret 4 */ FN_RET(0x0063a46c); r_esp += 8; return;
L_0063a482:; BB(0x0063a482);
    /* 0063a482: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a483: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63a488u); f_005c2f74();
    /* 0063a488: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a489: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a48a: ret 4 */ FN_RET(0x0063a46c); r_esp += 8; return;
}

void f_0063a490(void) /* sub_63A490 */
{
    FN_ENTER(0x0063a490);
    /* 0063a490: mov dword ptr [0xa8f1a0], 0x3f800000 */ W32((u32)(0xa8f1a0u), 0x3f800000u);
    /* 0063a49a: mov dword ptr [0xa8f1a4], 0x41000000 */ W32((u32)(0xa8f1a4u), 0x41000000u);
    /* 0063a4a4: mov dword ptr [0xa8f1a8], 0x3fc00000 */ W32((u32)(0xa8f1a8u), 0x3fc00000u);
    /* 0063a4ae: ret  */ FN_RET(0x0063a490); r_esp += 4; return;
}

void f_0063a4b0(void) /* sub_63A4B0 */
{
    FN_ENTER(0x0063a4b0);
    /* 0063a4b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a4b1: mov esi, ecx */ r_esi = r_ecx;
    /* 0063a4b3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063a4b7: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0063a4ba: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063a4bd: je 0x63a4c3 */ if (fZ) goto L_0063a4c3;
L_0063a4bf:; BB(0x0063a4bf);
    /* 0063a4bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a4c0: ret 8 */ FN_RET(0x0063a4b0); r_esp += 12; return;
L_0063a4c3:; BB(0x0063a4c3);
    /* 0063a4c3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0063a4c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a4ca: je 0x63a4eb */ if (fZ) goto L_0063a4eb;
L_0063a4cc:; BB(0x0063a4cc);
    /* 0063a4cc: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a4ce: call 0x63b2cc */ r_esp -= 4; W32(r_esp, 0x63a4d3u); f_0063b2cc();
    /* 0063a4d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a4d4: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x63a4d9u); f_008113bc();
    /* 0063a4d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a4da: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0063a4de: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063a4e3: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0063a4e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a4e8: ret 8 */ FN_RET(0x0063a4b0); r_esp += 12; return;
L_0063a4eb:; BB(0x0063a4eb);
    /* 0063a4eb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063a4ed: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a4ef: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x63a4f5u); call_ind(t); }
    /* 0063a4f5: jmp 0x63a4cc */ goto L_0063a4cc;
}

void f_0063a4f8(void) /* sub_63A4F8 */
{
    FN_ENTER(0x0063a4f8);
    /* 0063a4f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a4f9: mov esi, ecx */ r_esi = r_ecx;
    /* 0063a4fb: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a4fd: call 0x63b2cc */ r_esp -= 4; W32(r_esp, 0x63a502u); f_0063b2cc();
    /* 0063a502: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a506: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a508: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a50c: call 0x639e90 */ r_esp -= 4; W32(r_esp, 0x63a511u); f_00639e90();
    /* 0063a511: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a512: ret 8 */ FN_RET(0x0063a4f8); r_esp += 12; return;
}

void f_0063a518(void)
{
    FN_ENTER(0x0063a518);
    /* 0063a518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a519: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a51b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a51d: push 0x8e4a64 */ { u32 v = 0x8e4a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a522: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063a528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a529: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063a530: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a533: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063a536: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063a539: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063a53c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063a53f: push 0x3d0 */ { u32 v = 0x3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a544: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063a54b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63a550u); f_005caba4();
    /* 0063a550: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a551: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063a554: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a556: je 0x63a58f */ if (fZ) goto L_0063a58f;
L_0063a558:; BB(0x0063a558);
    /* 0063a558: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063a55f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063a566: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a569: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a56f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a572: call 0x63a8a0 */ r_esp -= 4; W32(r_esp, 0x63a577u); f_0063a8a0();
    /* 0063a577: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a57a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063a581:; BB(0x0063a581);
    /* 0063a581: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a584: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063a58b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a58d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a58e: ret  */ FN_RET(0x0063a518); r_esp += 4; return;
L_0063a58f:; BB(0x0063a58f);
    /* 0063a58f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063a591: jmp 0x63a581 */ goto L_0063a581;
}

void f_0063a594(void) /* sub_63A594 */
{
    FN_ENTER(0x0063a594);
    /* 0063a594: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063a59a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063a59c: je 0x63a5b1 */ if (fZ) goto L_0063a5b1;
L_0063a59e:; BB(0x0063a59e);
    /* 0063a59e: je 0x63a5a7 */ if (fZ) goto L_0063a5a7;
L_0063a5a0:; BB(0x0063a5a0);
    /* 0063a5a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a5a2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63a5a7u); f_004066a8();
L_0063a5a7:; BB(0x0063a5a7);
    /* 0063a5a7: mov dword ptr [0xa8f1ac], 0 */ W32((u32)(0xa8f1acu), 0x0u);
L_0063a5b1:; BB(0x0063a5b1);
    /* 0063a5b1: ret  */ FN_RET(0x0063a594); r_esp += 4; return;
}

void f_0063a5b4(void) /* sub_63A5B4 */
{
    FN_ENTER(0x0063a5b4);
    /* 0063a5b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a5b5: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a5b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a5b9: push 0x8e4a8c */ { u32 v = 0x8e4a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a5be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063a5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a5c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063a5cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a5cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063a5d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063a5d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063a5d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063a5db: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a5e0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063a5e7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63a5ecu); f_008581c5();
    /* 0063a5ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a5ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063a5f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a5f2: je 0x63a667 */ if (fZ) goto L_0063a667;
L_0063a5f4:; BB(0x0063a5f4);
    /* 0063a5f4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063a5fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063a602: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a605: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063a607: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a60a: push 0x9c67bc */ { u32 v = 0x9c67bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a60f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a611: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x63a616u); f_005b7a84();
    /* 0063a616: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a619: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063a620:; BB(0x0063a620);
    /* 0063a620: mov dword ptr [0xa8f1ac], ecx */ W32((u32)(0xa8f1acu), r_ecx);
    /* 0063a626: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063a62d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a62f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63a634u); f_005b8610();
    /* 0063a634: mov ebx, eax */ r_ebx = r_eax;
    /* 0063a636: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063a63c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a63e: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63a643u); f_005b8624();
    /* 0063a643: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a645: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a64a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a64b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a64c: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a64e: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x63a653u); f_006086e8();
    /* 0063a653: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063a656: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a659: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a65c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063a663: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a665: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a666: ret  */ FN_RET(0x0063a5b4); r_esp += 4; return;
L_0063a667:; BB(0x0063a667);
    /* 0063a667: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a669: jmp 0x63a620 */ goto L_0063a620;
}

void f_0063a66c(void) /* sub_63A66C */
{
    FN_ENTER(0x0063a66c);
    /* 0063a66c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a66d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a66e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a66f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a670: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a673: mov esi, ecx */ r_esi = r_ecx;
    /* 0063a675: lea ebp, [esi + 0x360] */ r_ebp = (u32)(r_esi+0x360u);
    /* 0063a67b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a67d: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x63a682u); f_005771a4();
    /* 0063a682: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a687: mov ecx, esi */ r_ecx = r_esi;
    /* 0063a689: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063a68b: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a690: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63a693u); call_ind(t); }
    /* 0063a693: mov dword ptr [esi + 0x348], eax */ W32((u32)(r_esi+0x348u), r_eax);
    /* 0063a699: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a69c: je 0x63a6a6 */ if (fZ) goto L_0063a6a6;
L_0063a69e:; BB(0x0063a69e);
    /* 0063a69e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063a6a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a6a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a6a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a6a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a6a5: ret  */ FN_RET(0x0063a66c); r_esp += 4; return;
L_0063a6a6:; BB(0x0063a6a6);
    /* 0063a6a6: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0063a6a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a6aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a6ac: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x63a6b1u); f_0057725c();
    /* 0063a6b1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a6b4: je 0x63a7e7 */ if (fZ) goto L_0063a7e7;
L_0063a6ba:; BB(0x0063a6ba);
    /* 0063a6ba: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63a6bfu); f_0082d7b0();
    /* 0063a6bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063a6c1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63a6c6u); f_0082d838();
    /* 0063a6c6: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0063a6c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a6cb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63a6d0u); f_0082d8bc();
    /* 0063a6d0: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x63a6d5u); f_004f7c84();
    /* 0063a6d5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a6d8: je 0x63a73d */ if (fZ) goto L_0063a73d;
L_0063a6da:; BB(0x0063a6da);
    /* 0063a6da: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 0063a6dd: fcomp dword ptr [0x933f78] */ fx_compare(ST(0), R_F32((u32)(0x933f78u))); FPOP();
    /* 0063a6e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063a6e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063a6e6: ja 0x63a73d */ if ((!fC&&!fZ)) goto L_0063a73d;
L_0063a6e8:; BB(0x0063a6e8);
    /* 0063a6e8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x63a6edu); f_008587a5();
    /* 0063a6ed: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0063a6f5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0063a6f9: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0063a6fd: fdiv dword ptr [0x933f70] */ ST(0) = ST(0) / R_F32((u32)(0x933f70u));
    /* 0063a703: fmul dword ptr [0x933f6c] */ ST(0) = ST(0) * R_F32((u32)(0x933f6cu));
    /* 0063a709: fadd dword ptr [0x933f74] */ ST(0) = ST(0) + R_F32((u32)(0x933f74u));
    /* 0063a70f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0063a712: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x63a717u); f_008587a5();
    /* 0063a717: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0063a71b: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0063a71f: fdiv dword ptr [0x933f70] */ ST(0) = ST(0) / R_F32((u32)(0x933f70u));
    /* 0063a725: fmul dword ptr [0x933f6c] */ ST(0) = ST(0) * R_F32((u32)(0x933f6cu));
    /* 0063a72b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0063a72e: fadd dword ptr [0x933f74] */ ST(0) = ST(0) + R_F32((u32)(0x933f74u));
    /* 0063a734: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0063a738: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63a73du); f_0082d838();
L_0063a73d:; BB(0x0063a73d);
    /* 0063a73d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0063a740: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63a745u); f_00829cc8();
    /* 0063a745: mov edi, dword ptr [esi + 0x34] */ r_edi = R32((u32)(r_esi+0x34u));
    /* 0063a748: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63a74du); f_0082d7b0();
    /* 0063a74d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a74f: push dword ptr [esi + 0x6c] */ { u32 v = R32((u32)(r_esi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a752: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a754: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a756: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63a75bu); f_00830b74();
    /* 0063a75b: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0063a75e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63a763u); f_0082d838();
    /* 0063a763: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0063a766: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a769: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63a76eu); f_008321d8();
    /* 0063a76e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a76f: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0063a772: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63a777u); f_0082d7b0();
    /* 0063a777: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0063a77a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63a77fu); f_0082d838();
    /* 0063a77f: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63a784u); f_0082dbac();
    /* 0063a784: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a787: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63a78cu); f_008321d8();
    /* 0063a78c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a78d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63a792u); f_0082dab0();
    /* 0063a792: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63a797u); f_0082da80();
    /* 0063a797: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63a79cu); f_0082da80();
    /* 0063a79c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63a7a1u); f_0082da80();
    /* 0063a7a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a7a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a7a4: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x63a7a9u); f_0057725c();
    /* 0063a7a9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a7ac: jne 0x63a69e */ if (!fZ) goto L_0063a69e;
L_0063a7b2:; BB(0x0063a7b2);
    /* 0063a7b2: mov eax, dword ptr [esi + 0x360] */ r_eax = R32((u32)(r_esi+0x360u));
    /* 0063a7b8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a7ba: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x63a7bdu); call_ind(t); }
    /* 0063a7bd: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0063a7c2: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0063a7c8: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 0063a7ce: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0063a7d3: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0063a7d9: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 0063a7df: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063a7e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063a7e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a7e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a7e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a7e6: ret  */ FN_RET(0x0063a66c); r_esp += 4; return;
L_0063a7e7:; BB(0x0063a7e7);
    /* 0063a7e7: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0063a7ec: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0063a7f2: mov edi, dword ptr [0xaf0364] */ r_edi = R32((u32)(0xaf0364u));
    /* 0063a7f8: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0063a7fd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063a7ff: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 0063a805: mov dword ptr [0xaab500], edi */ W32((u32)(0xaab500u), r_edi);
    /* 0063a80b: mov eax, dword ptr [esi + 0x360] */ r_eax = R32((u32)(r_esi+0x360u));
    /* 0063a811: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x63a814u); call_ind(t); }
    /* 0063a814: jmp 0x63a6ba */ goto L_0063a6ba;
}

void f_0063a81c(void) /* sub_63A81C */
{
    FN_ENTER(0x0063a81c);
    /* 0063a81c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a81d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a81f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a821: push 0x8e4ad6 */ { u32 v = 0x8e4ad6u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a826: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063a82c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a82d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063a834: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a837: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063a83a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063a83d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063a840: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063a843: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063a846: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063a84d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a850: mov dword ptr [eax], 0xb2d4e0 */ W32((u32)(r_eax), 0xb2d4e0u);
    /* 0063a856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a857: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x63a85cu); f_007b4e84();
    /* 0063a85c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a85d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a860: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x63a865u); f_007b9c8c();
    /* 0063a865: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0063a86c: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a871: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a874: add eax, 0x360 */ {  u32 a = r_eax; u32 b = 0x360u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063a879: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a87b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a87d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a87e: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x63a883u); f_008586d6();
    /* 0063a883: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063a88a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a88d: call 0x63a148 */ r_esp -= 4; W32(r_esp, 0x63a892u); f_0063a148();
    /* 0063a892: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a895: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063a89c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a89e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a89f: ret  */ FN_RET(0x0063a81c); r_esp += 4; return;
}

void f_0063a8a0(void) /* sub_63A8A0 */
{
    FN_ENTER(0x0063a8a0);
    /* 0063a8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a8a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8a5: push 0x8e4b0e */ { u32 v = 0x8e4b0eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063a8b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063a8b8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a8bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063a8be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063a8c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063a8c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063a8c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063a8ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063a8cd: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0063a8d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063a8d3: call 0x63a198 */ r_esp -= 4; W32(r_esp, 0x63a8d8u); f_0063a198();
    /* 0063a8d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063a8df: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8e4: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8e9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063a8ec: mov dword ptr [eax], 0xb2d4e0 */ W32((u32)(r_eax), 0xb2d4e0u);
    /* 0063a8f2: add eax, 0x360 */ {  u32 a = r_eax; u32 b = 0x360u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063a8f7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8f9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8fc: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x63a901u); f_00858736();
    /* 0063a901: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063a908: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063a90b: mov eax, dword ptr [0x9c67cc] */ r_eax = R32((u32)(0x9c67ccu));
    /* 0063a910: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a913: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0063a915: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063a918: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a919: call dword ptr [ebx + 0x14] */ { u32 t = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, 0x63a91cu); call_ind(t); }
    /* 0063a91c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063a91f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0063a922: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0063a925: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0063a928: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0063a92e: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0063a934: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063a937: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0063a93d: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0063a943: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0063a949: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0063a94f: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0063a955: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0063a95b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063a95e: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0063a964: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063a967: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0063a96d: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0063a970: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0063a976: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0063a979: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0063a97f: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0063a982: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63a987u); f_0077a1f4();
    /* 0063a987: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063a98d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a98f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63a994u); f_005b8610();
    /* 0063a994: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063a997: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063a99d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a99f: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063a9a2: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63a9a7u); f_005b8624();
    /* 0063a9a7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063a9aa: fild dword ptr [ecx + 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x8cu)));
    /* 0063a9b0: fadd dword ptr [0x933f54] */ ST(0) = ST(0) + R_F32((u32)(0x933f54u));
    /* 0063a9b6: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 0063a9b9: fmul dword ptr [0x933f68] */ ST(0) = ST(0) * R_F32((u32)(0x933f68u));
    /* 0063a9bf: fadd dword ptr [0x933f58] */ ST(0) = ST(0) + R_F32((u32)(0x933f58u));
    /* 0063a9c5: fld dword ptr [0x933f64] */ FPUSH(R_F32((u32)(0x933f64u)));
    /* 0063a9cb: fld dword ptr [0x933f60] */ FPUSH(R_F32((u32)(0x933f60u)));
    /* 0063a9d1: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0063a9d4: fld dword ptr [ecx + 0x70] */ FPUSH(R_F32((u32)(r_ecx+0x70u)));
    /* 0063a9d7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0063a9d9: fstp dword ptr [ecx + 0x33c] */ W_F32((u32)(r_ecx+0x33cu), ST(0)); FPOP();
    /* 0063a9df: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0063a9e1: fstp dword ptr [ecx + 0x358] */ W_F32((u32)(r_ecx+0x358u), ST(0)); FPOP();
    /* 0063a9e7: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063a9ea: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0063a9ec: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0063a9ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063a9f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063a9f2: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 0063a9f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063a9fa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0063a9fc: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0063a9fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063aa00: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063aa02: ja 0x63aa06 */ if ((!fC&&!fZ)) goto L_0063aa06;
L_0063aa04:; BB(0x0063aa04);
    /* 0063aa04: fst st(2) */ ST(2) = ST(0);
L_0063aa06:; BB(0x0063aa06);
    /* 0063aa06: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063aa08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063aa0a: fst dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0));
    /* 0063aa0d: fchs  */ ST(0) = -ST(0);
    /* 0063aa0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063aa10: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0063aa12: ja 0x63aa16 */ if ((!fC&&!fZ)) goto L_0063aa16;
L_0063aa14:; BB(0x0063aa14);
    /* 0063aa14: fst st(1) */ ST(1) = ST(0);
L_0063aa16:; BB(0x0063aa16);
    /* 0063aa16: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063aa18: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0063aa1a: fstp dword ptr [ecx + 0x70] */ W_F32((u32)(r_ecx+0x70u), ST(0)); FPOP();
    /* 0063aa1d: fstp dword ptr [ecx + 0x354] */ W_F32((u32)(r_ecx+0x354u), ST(0)); FPOP();
    /* 0063aa23: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x63aa28u); f_007a61a4();
    /* 0063aa28: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063aa2b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063aa2e: je 0x63ab3a */ if (fZ) goto L_0063ab3a;
L_0063aa34:; BB(0x0063aa34);
    /* 0063aa34: fld dword ptr [ecx + 0x358] */ FPUSH(R_F32((u32)(r_ecx+0x358u)));
L_0063aa3a:; BB(0x0063aa3a);
    /* 0063aa3a: fld dword ptr [0x933f64] */ FPUSH(R_F32((u32)(0x933f64u)));
    /* 0063aa40: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0063aa42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063aa44: mov ebx, dword ptr [ecx + 0x84] */ r_ebx = R32((u32)(r_ecx+0x84u));
    /* 0063aa4a: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0063aa4c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063aa4d: mov edx, 0 */ r_edx = 0x0u;
    /* 0063aa52: jb 0x63aa56 */ if (fC) goto L_0063aa56;
L_0063aa54:; BB(0x0063aa54);
    /* 0063aa54: fst st(1) */ ST(1) = ST(0);
L_0063aa56:; BB(0x0063aa56);
    /* 0063aa56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063aa58: fst dword ptr [ecx + 0x358] */ W_F32((u32)(r_ecx+0x358u), ST(0));
    /* 0063aa5e: fstp dword ptr [ecx + 0x35c] */ W_F32((u32)(r_ecx+0x35cu), ST(0)); FPOP();
    /* 0063aa64: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063aa66: jg 0x63aa6a */ if ((!fZ&&fS==fO)) goto L_0063aa6a;
L_0063aa68:; BB(0x0063aa68);
    /* 0063aa68: mov ebx, edx */ r_ebx = r_edx;
L_0063aa6a:; BB(0x0063aa6a);
    /* 0063aa6a: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0063aa6d: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0063aa70: mov dword ptr [ecx + 0x84], ebx */ W32((u32)(r_ecx+0x84u), r_ebx);
    /* 0063aa76: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063aa77: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0063aa7a: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x63aa80u); call_ind(t); }
    /* 0063aa80: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063aa83: mov ebx, dword ptr [ecx + 0x88] */ r_ebx = R32((u32)(r_ecx+0x88u));
    /* 0063aa89: fstp dword ptr [ecx + 0x350] */ W_F32((u32)(r_ecx+0x350u), ST(0)); FPOP();
    /* 0063aa8f: mov eax, 5 */ r_eax = 0x5u;
    /* 0063aa94: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063aa97: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 0063aa9c: mov dword ptr [ecx + 0x340], 0x41700000 */ W32((u32)(r_ecx+0x340u), 0x41700000u);
    /* 0063aaa6: jl 0x63aaaa */ if ((fS!=fO)) goto L_0063aaaa;
L_0063aaa8:; BB(0x0063aaa8);
    /* 0063aaa8: mov ebx, eax */ r_ebx = r_eax;
L_0063aaaa:; BB(0x0063aaaa);
    /* 0063aaaa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063aaac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063aaae: push 0x9c67d0 */ { u32 v = 0x9c67d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063aab3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063aab5: jg 0x63aab9 */ if ((!fZ&&fS==fO)) goto L_0063aab9;
L_0063aab7:; BB(0x0063aab7);
    /* 0063aab7: mov ebx, edx */ r_ebx = r_edx;
L_0063aab9:; BB(0x0063aab9);
    /* 0063aab9: mov dword ptr [ecx + 0x88], ebx */ W32((u32)(r_ecx+0x88u), r_ebx);
    /* 0063aabf: mov dword ptr [ecx + 0x34c], ebx */ W32((u32)(r_ecx+0x34cu), r_ebx);
    /* 0063aac5: mov word ptr [ecx + 0x344], si */ W16((u32)(r_ecx+0x344u), (u16)r_esi);
    /* 0063aacc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63aad1u); f_007b9a88();
    /* 0063aad1: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063aad4: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x63aad9u); f_007b999c();
    /* 0063aad9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063aada: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063aadd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063aadf: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0063aae2: or eax, 0x60040000 */ {  u32 a = r_eax; u32 b = 0x60040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063aae7: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0063aaea: call 0x7ba834 */ r_esp -= 4; W32(r_esp, 0x63aaefu); f_007ba834();
    /* 0063aaef: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063aaf2: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63aaf7u); f_007b4f54();
    /* 0063aaf7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0063aaf9:; BB(0x0063aaf9);
    /* 0063aaf9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063aafc: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0063aaff: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063ab01: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0063ab04: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063ab06: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063ab08: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0063ab0a: lea ecx, [edx + esi + 0x360] */ r_ecx = (u32)(r_edx+r_esi+0x360u);
    /* 0063ab11: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x63ab16u); f_0057739c();
    /* 0063ab16: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063ab19: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063ab1c: jl 0x63aaf9 */ if ((fS!=fO)) goto L_0063aaf9;
L_0063ab1e:; BB(0x0063ab1e);
    /* 0063ab1e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063ab21: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ab24: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063ab27: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063ab2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063ab2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063ab34: mov esp, ebp */ r_esp = r_ebp;
    /* 0063ab36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ab37: ret 8 */ FN_RET(0x0063a8a0); r_esp += 12; return;
L_0063ab3a:; BB(0x0063ab3a);
    /* 0063ab3a: fld dword ptr [ecx + 0x358] */ FPUSH(R_F32((u32)(r_ecx+0x358u)));
    /* 0063ab40: fmul dword ptr [0x933f5c] */ ST(0) = ST(0) * R_F32((u32)(0x933f5cu));
    /* 0063ab46: jmp 0x63aa3a */ goto L_0063aa3a;
}

void f_0063a9dc(void)
{
    FN_ENTER(0x0063a9dc);
    /* 0063a9dc: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063a9de: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063a9e0: int3  */ UNSUP(0x0063a9e0, "int3");
}

void f_0063ab4c(void) /* sub_63AB4C */
{
    FN_ENTER(0x0063ab4c);
    /* 0063ab4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063ab4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab51: push 0x8e4b6a */ { u32 v = 0x8e4b6au; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063ab5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063ab64: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ab6a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063ab6d: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063ab70: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063ab73: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063ab76: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063ab79: mov eax, 0x933e20 */ r_eax = 0x933e20u;
    /* 0063ab7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063ab80: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
    /* 0063ab86: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0063ab89: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 0063ab8f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0063ab92: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
    /* 0063ab98: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0063ab9b: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 0063aba1: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0063aba4: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 0063abaa: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0063abad: mov dword ptr [ebp - 0x100], edx */ W32((u32)(r_ebp+0xffffff00u), r_edx);
    /* 0063abb3: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0063abb6: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 0063abbc: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0063abbf: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 0063abc5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0063abc8: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 0063abce: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0063abd1: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 0063abd7: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0063abda: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 0063abe0: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0063abe3: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 0063abe9: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0063abec: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 0063abf2: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0063abf5: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 0063abfb: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0063abfe: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 0063ac04: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0063ac07: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 0063ac0d: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0063ac10: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 0063ac16: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0063ac19: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0063ac1c: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 0063ac22: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0063ac28: mov edx, ecx */ r_edx = r_ecx;
    /* 0063ac2a: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063ac30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac32: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0063ac35: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0063ac38: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0063ac3b: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0063ac41: mov dword ptr [ebp - 0x104], esi */ W32((u32)(r_ebp+0xfffffefcu), r_esi);
    /* 0063ac47: mov dword ptr [ebp - 0x100], ebx */ W32((u32)(r_ebp+0xffffff00u), r_ebx);
    /* 0063ac4d: mov dword ptr [ebp - 0xdc], esi */ W32((u32)(r_ebp+0xffffff24u), r_esi);
    /* 0063ac53: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63ac58u); f_005b8610();
    /* 0063ac58: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063ac5e: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0063ac64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac66: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63ac6bu); f_005b8624();
    /* 0063ac6b: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0063ac71: mov eax, 0x933dc0 */ r_eax = 0x933dc0u;
    /* 0063ac76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063ac78: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0063ac7b: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0063ac7e: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0063ac81: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0063ac84: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 0063ac8a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0063ac8d: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 0063ac93: mov dword ptr [ebp - 0xc0], ebx */ W32((u32)(r_ebp+0xffffff40u), r_ebx);
    /* 0063ac99: mov dword ptr [ebp - 0xbc], esi */ W32((u32)(r_ebp+0xffffff44u), r_esi);
    /* 0063ac9f: mov dword ptr [ebp - 0xb8], edi */ W32((u32)(r_ebp+0xffffff48u), r_edi);
    /* 0063aca5: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 0063acab: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0063acae: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0063acb4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0063acb7: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0063acbd: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0063acc0: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0063acc6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0063acc9: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0063accf: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0063acd2: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0063acd8: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0063acdb: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0063ace1: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0063ace4: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0063acea: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0063aced: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0063acf3: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0063acf6: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0063acfc: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0063acff: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0063ad05: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0063ad08: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0063ad0e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0063ad11: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0063ad14: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0063ad1a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0063ad1d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063ad20: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063ad26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ad28: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0063ad2b: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0063ad2e: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0063ad31: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0063ad37: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 0063ad3d: mov dword ptr [ebp - 0xb4], ebx */ W32((u32)(r_ebp+0xffffff4cu), r_ebx);
    /* 0063ad43: mov dword ptr [ebp - 0x90], esi */ W32((u32)(r_ebp+0xffffff70u), r_esi);
    /* 0063ad49: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63ad4eu); f_005b8610();
    /* 0063ad4e: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063ad54: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0063ad5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ad5c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63ad61u); f_005b8624();
    /* 0063ad61: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0063ad67: mov eax, 0x933d60 */ r_eax = 0x933d60u;
    /* 0063ad6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063ad6e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0063ad71: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0063ad74: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0063ad77: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0063ad7a: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0063ad7d: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0063ad80: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0063ad83: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 0063ad86: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 0063ad89: mov dword ptr [ebp - 0x6c], edi */ W32((u32)(r_ebp+0xffffff94u), r_edi);
    /* 0063ad8c: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0063ad8f: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0063ad92: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0063ad95: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0063ad98: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0063ad9b: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0063ad9e: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0063ada1: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0063ada4: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0063ada7: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0063adaa: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0063adad: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0063adb0: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0063adb3: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0063adb6: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0063adb9: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0063adbc: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0063adbf: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0063adc2: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0063adc5: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0063adc8: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0063adcb: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0063adce: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0063add1: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0063add4: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0063add7: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0063adda: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0063addd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063ade0: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063ade6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ade8: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0063adeb: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0063adee: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0063adf1: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0063adf4: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0063adf7: mov dword ptr [ebp - 0x68], ebx */ W32((u32)(r_ebp+0xffffff98u), r_ebx);
    /* 0063adfa: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 0063adfd: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63ae02u); f_005b8610();
    /* 0063ae02: mov ecx, dword ptr [0xa8f1ac] */ r_ecx = R32((u32)(0xa8f1acu));
    /* 0063ae08: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0063ae0b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae0d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63ae12u); f_005b8624();
    /* 0063ae12: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0063ae19: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0063ae1c: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae21: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63ae26u); f_005caba4();
    /* 0063ae26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ae27: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0063ae2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ae2c: je 0x63ae58 */ if (fZ) goto L_0063ae58;
L_0063ae2e:; BB(0x0063ae2e);
    /* 0063ae2e: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0063ae35: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063ae3c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063ae3f: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0063ae45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae46: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ae4c: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x63ae51u); f_006441f4();
    /* 0063ae51: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0063ae58:; BB(0x0063ae58);
    /* 0063ae58: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063ae5f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0063ae66: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae6b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63ae70u); f_005caba4();
    /* 0063ae70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ae71: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0063ae74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ae76: je 0x63aea2 */ if (fZ) goto L_0063aea2;
L_0063ae78:; BB(0x0063ae78);
    /* 0063ae78: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0063ae7f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063ae86: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063ae89: lea eax, [ebp - 0xc8] */ r_eax = (u32)(r_ebp+0xffffff38u);
    /* 0063ae8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae90: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ae96: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x63ae9bu); f_006441f4();
    /* 0063ae9b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0063aea2:; BB(0x0063aea2);
    /* 0063aea2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063aea9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063aeb0: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0063aeb5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63aebau); f_005caba4();
    /* 0063aeba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063aebb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0063aebe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063aec0: je 0x63aee9 */ if (fZ) goto L_0063aee9;
L_0063aec2:; BB(0x0063aec2);
    /* 0063aec2: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063aec9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0063aed0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063aed3: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 0063aed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063aed7: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063aedd: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x63aee2u); f_006441f4();
    /* 0063aee2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063aee9:; BB(0x0063aee9);
    /* 0063aee9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063aef0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063aef3: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063aef8: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063aefb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063aefe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063aeff: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63af04u); f_0050b510();
    /* 0063af04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063af07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063af09: je 0x63af19 */ if (fZ) goto L_0063af19;
L_0063af0b:; BB(0x0063af0b);
    /* 0063af0b: mov dword ptr [eax + 0x44], 0x3fa00000 */ W32((u32)(r_eax+0x44u), 0x3fa00000u);
    /* 0063af12: mov dword ptr [eax + 0x48], 0x3fa00000 */ W32((u32)(r_eax+0x48u), 0x3fa00000u);
L_0063af19:; BB(0x0063af19);
    /* 0063af19: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x63af1eu); f_00807ac0();
    /* 0063af1e: lea edx, [eax - 0x13] */ r_edx = (u32)(r_eax+0xffffffedu);
    /* 0063af21: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063af24: ja 0x63afa2 */ if ((!fC&&!fZ)) goto L_0063afa2;
L_0063af26:; BB(0x0063af26);
    /* 0063af26: mov eax, dword ptr [eax*4 + 0x933cb4] */ r_eax = R32((u32)(r_eax*4+0x933cb4u));
    /* 0063af2d: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0063afa2:; BB(0x0063afa2);
    /* 0063afa2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063afa5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063afa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063afa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063afa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063afaa: push 0x483 */ { u32 v = 0x483u; r_esp -= 4; W32(r_esp, v); }
    /* 0063afaf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63afb4u); f_00814298();
    /* 0063afb4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063afb7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063afba: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063afbd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063afc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063afc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063afca: mov esp, ebp */ r_esp = r_ebp;
    /* 0063afcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063afcd: ret  */ FN_RET(0x0063ab4c); r_esp += 4; return;
}

void f_0063af2f(void)
{
    FN_ENTER(0x0063af2f);
    /* 0063af2f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063af32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063af34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063af37: push 0x51e */ { u32 v = 0x51eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063af3c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63af41u); f_00814298();
    /* 0063af41: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063af44: jmp 0x63afb7 */ goto L_0063afb7;
L_0063afb7:; BB(0x0063afb7);
    /* 0063afb7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063afba: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063afbd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063afc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063afc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063afca: mov esp, ebp */ r_esp = r_ebp;
    /* 0063afcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063afcd: ret  */ FN_RET(0x0063af2f); r_esp += 4; return;
}

void f_0063af46(void)
{
    FN_ENTER(0x0063af46);
    /* 0063af46: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063af49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063af4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063af4e: push 0x542 */ { u32 v = 0x542u; r_esp -= 4; W32(r_esp, v); }
    /* 0063af53: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63af58u); f_00814298();
    /* 0063af58: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063af5b: jmp 0x63afb7 */ goto L_0063afb7;
L_0063afb7:; BB(0x0063afb7);
    /* 0063afb7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063afba: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063afbd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063afc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063afc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063afca: mov esp, ebp */ r_esp = r_ebp;
    /* 0063afcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063afcd: ret  */ FN_RET(0x0063af46); r_esp += 4; return;
}

void f_0063af5d(void)
{
    FN_ENTER(0x0063af5d);
    /* 0063af5d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063af60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063af62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063af65: push 0x4f8 */ { u32 v = 0x4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063af6a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63af6fu); f_00814298();
    /* 0063af6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063af72: jmp 0x63afb7 */ goto L_0063afb7;
L_0063afb7:; BB(0x0063afb7);
    /* 0063afb7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063afba: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063afbd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063afc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063afc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063afca: mov esp, ebp */ r_esp = r_ebp;
    /* 0063afcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063afcd: ret  */ FN_RET(0x0063af5d); r_esp += 4; return;
}

void f_0063af74(void)
{
    FN_ENTER(0x0063af74);
    /* 0063af74: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063af77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063af79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063af7c: push 0x4ac */ { u32 v = 0x4acu; r_esp -= 4; W32(r_esp, v); }
    /* 0063af81: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63af86u); f_00814298();
    /* 0063af86: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063af89: jmp 0x63afb7 */ goto L_0063afb7;
L_0063afb7:; BB(0x0063afb7);
    /* 0063afb7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063afba: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063afbd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063afc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063afc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063afca: mov esp, ebp */ r_esp = r_ebp;
    /* 0063afcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063afcd: ret  */ FN_RET(0x0063af74); r_esp += 4; return;
}

void f_0063af8b(void)
{
    FN_ENTER(0x0063af8b);
    /* 0063af8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063af8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063af90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063af93: push 0x495 */ { u32 v = 0x495u; r_esp -= 4; W32(r_esp, v); }
    /* 0063af98: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63af9du); f_00814298();
    /* 0063af9d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063afa0: jmp 0x63afb7 */ goto L_0063afb7;
L_0063afb7:; BB(0x0063afb7);
    /* 0063afb7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063afba: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063afbd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063afc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063afc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063afca: mov esp, ebp */ r_esp = r_ebp;
    /* 0063afcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063afcd: ret  */ FN_RET(0x0063af8b); r_esp += 4; return;
}

void f_0063afa2(void)
{
    FN_ENTER(0x0063afa2);
    /* 0063afa2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063afa5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063afa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063afa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063afa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063afaa: push 0x483 */ { u32 v = 0x483u; r_esp -= 4; W32(r_esp, v); }
    /* 0063afaf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63afb4u); f_00814298();
    /* 0063afb4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063afb7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063afba: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063afbd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063afc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063afc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063afca: mov esp, ebp */ r_esp = r_ebp;
    /* 0063afcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063afcd: ret  */ FN_RET(0x0063afa2); r_esp += 4; return;
}

void f_0063afd0(void) /* sub_63AFD0 */
{
    FN_ENTER(0x0063afd0);
    /* 0063afd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063afd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063afd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063afd3: mov esi, ecx */ r_esi = r_ecx;
    /* 0063afd5: mov ecx, esi */ r_ecx = r_esi;
    /* 0063afd7: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63afdcu); f_0077a1f4();
    /* 0063afdc: fld dword ptr [0x933f48] */ FPUSH(R_F32((u32)(0x933f48u)));
    /* 0063afe2: fadd dword ptr [esi + 0x35c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x35cu));
    /* 0063afe8: fcom dword ptr [0x933f44] */ fx_compare(ST(0), R_F32((u32)(0x933f44u))); 
    /* 0063afee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063aff0: fstp dword ptr [esi + 0x35c] */ W_F32((u32)(r_esi+0x35cu), ST(0)); FPOP();
    /* 0063aff6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063aff7: jae 0x63b09b */ if (!fC) goto L_0063b09b;
L_0063affd:; BB(0x0063affd);
    /* 0063affd: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b002: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b004: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0063b00a: mov ecx, esi */ r_ecx = r_esi;
    /* 0063b00c: mov dword ptr [eax + 0xc], 0x41700000 */ W32((u32)(r_eax+0xcu), 0x41700000u);
    /* 0063b013: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63b018u); f_007b52c4();
    /* 0063b018: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x63b01du); f_007b51c4();
    /* 0063b01d: mov ecx, esi */ r_ecx = r_esi;
    /* 0063b01f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x63b024u); f_007b6894();
    /* 0063b024: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b026: mov ebx, eax */ r_ebx = r_eax;
L_0063b028:; BB(0x0063b028);
    /* 0063b028: mov edi, dword ptr [ebx + 0xaad6e0] */ r_edi = R32((u32)(r_ebx+0xaad6e0u));
    /* 0063b02e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063b031: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b033: je 0x63b085 */ if (fZ) goto L_0063b085;
L_0063b035:; BB(0x0063b035);
    /* 0063b035: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 0063b03c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b03f: jne 0x63b085 */ if (!fZ) goto L_0063b085;
L_0063b041:; BB(0x0063b041);
    /* 0063b041: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0063b044: cmp edx, dword ptr [0x9cb9a8] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b04a: jne 0x63b085 */ if (!fZ) goto L_0063b085;
L_0063b04c:; BB(0x0063b04c);
    /* 0063b04c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063b04e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0063b053: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b054: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b056: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b057: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b059: push dword ptr [esi + 0x350] */ { u32 v = R32((u32)(r_esi+0x350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063b05f: push dword ptr [esi + 0x34c] */ { u32 v = R32((u32)(r_esi+0x34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063b065: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b066: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x63b069u); call_ind(t); }
    /* 0063b069: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063b06b: mov edx, dword ptr [esi + 0x34c] */ r_edx = R32((u32)(r_esi+0x34cu));
    /* 0063b071: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b074: jge 0x63b080 */ if ((fS==fO)) goto L_0063b080;
L_0063b076:; BB(0x0063b076);
    /* 0063b076: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b078: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b079: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0063b07b: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b07d: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x63b080u); call_ind(t); }
L_0063b080:; BB(0x0063b080);
    /* 0063b080: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b083: jl 0x63b028 */ if ((fS!=fO)) goto L_0063b028;
L_0063b085:; BB(0x0063b085);
    /* 0063b085: mov ecx, esi */ r_ecx = r_esi;
    /* 0063b087: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63b08cu); f_00770738();
    /* 0063b08c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b091: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b092: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0063b094: mov ecx, esi */ r_ecx = r_esi;
    /* 0063b096: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x63b099u); call_ind(t); }
    /* 0063b099: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0063b09b:; BB(0x0063b09b);
    /* 0063b09b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b09d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b09e: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x63b0a3u); f_006946a8();
    /* 0063b0a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b0a6: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x63b0abu); f_00807ac0();
    /* 0063b0ab: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063b0ae: ja 0x63b0e9 */ if ((!fC&&!fZ)) goto L_0063b0e9;
L_0063b0b0:; BB(0x0063b0b0);
    /* 0063b0b0: mov eax, dword ptr [eax*4 + 0x933e80] */ r_eax = R32((u32)(r_eax*4+0x933e80u));
    /* 0063b0b7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0063b0e9:; BB(0x0063b0e9);
    /* 0063b0e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b0ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b0eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b0ec: ret  */ FN_RET(0x0063afd0); r_esp += 4; return;
}

