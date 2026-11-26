#include "protos.h"

void f_0040e004(void) /* sub_40E004 */
{
    FN_ENTER(0x0040e004);
    /* 0040e004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e005: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e007: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e009: push 0x8cc966 */ { u32 v = 0x8cc966u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e00e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040e014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e015: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040e01c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e01f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040e022: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0040e025: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0040e028: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0040e02b: mov eax, dword ptr [0xa3ae24] */ r_eax = R32((u32)(0xa3ae24u));
    /* 0040e030: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e032: je 0x40e044 */ if (fZ) goto L_0040e044;
L_0040e034:; BB(0x0040e034);
    /* 0040e034: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040e036: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e039: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040e040: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e042: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e043: ret  */ FN_RET(0x0040e004); r_esp += 4; return;
L_0040e044:; BB(0x0040e044);
    /* 0040e044: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0040e04b: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e04d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40e052u); f_005caba4();
    /* 0040e052: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040e055: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e058: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040e05b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e05d: je 0x40e13e */ if (fZ) goto L_0040e13e;
L_0040e063:; BB(0x0040e063);
    /* 0040e063: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0040e06a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e071: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040e074: mov ecx, eax */ r_ecx = r_eax;
    /* 0040e076: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0040e079: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40e07eu); f_008193cc();
    /* 0040e07e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040e085: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e088: mov dword ptr [eax], 0xaf2c38 */ W32((u32)(r_eax), 0xaf2c38u);
    /* 0040e08e: call 0x40e1f8 */ r_esp -= 4; W32(r_esp, 0x40e093u); f_0040e1f8();
    /* 0040e093: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040e096: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e099: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0040e09c: mov esi, dword ptr [ebx*4 + 0x8fa268] */ r_esi = R32((u32)(r_ebx*4+0x8fa268u));
    /* 0040e0a3: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0040e0a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e0a8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040e0ab: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040e0ad: jle 0x40e111 */ if ((fZ||fS!=fO)) goto L_0040e111;
L_0040e0af:; BB(0x0040e0af);
    /* 0040e0af: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0040e0b6: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40e0bdu); f_005caba4();
    /* 0040e0bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040e0c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e0c3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040e0c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e0c8: je 0x40e137 */ if (fZ) goto L_0040e137;
L_0040e0ca:; BB(0x0040e0ca);
    /* 0040e0ca: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0040e0d1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0040e0d8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e0db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e0de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0df: call 0x40de04 */ r_esp -= 4; W32(r_esp, 0x40e0e4u); f_0040de04();
    /* 0040e0e4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0040e0eb:; BB(0x0040e0eb);
    /* 0040e0eb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040e0f2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e0f5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e0f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e0fb: mov dword ptr [edx + ecx*4 + 0x20], eax */ W32((u32)(r_edx+r_ecx*4+0x20u), r_eax);
    /* 0040e0ff: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 0040e102: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e105: cmp ecx, dword ptr [ebx*4 + 0x8fa268] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx*4+0x8fa268u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040e10c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040e10f: jl 0x40e0af */ if ((fS!=fO)) goto L_0040e0af;
L_0040e111:; BB(0x0040e111);
    /* 0040e111: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0040e118:; BB(0x0040e118);
    /* 0040e118: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e11b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040e11e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040e121: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040e124: mov dword ptr [0xa3ae24], eax */ W32((u32)(0xa3ae24u), r_eax);
    /* 0040e129: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e12c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040e133: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e135: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e136: ret  */ FN_RET(0x0040e004); r_esp += 4; return;
L_0040e137:; BB(0x0040e137);
    /* 0040e137: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e139: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040e13c: jmp 0x40e0eb */ goto L_0040e0eb;
L_0040e13e:; BB(0x0040e13e);
    /* 0040e13e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040e140: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040e143: jmp 0x40e118 */ goto L_0040e118;
}

void f_0040e0c0(void)
{
    FN_ENTER(0x0040e0c0);
    goto L_0040e0c0;
L_0040e0af:; BB(0x0040e0af);
    /* 0040e0af: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0040e0b6: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40e0bdu); f_005caba4();
    /* 0040e0bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0040e0c0:; BB(0x0040e0c0);
    /* 0040e0c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e0c3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040e0c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e0c8: je 0x40e137 */ if (fZ) goto L_0040e137;
L_0040e0ca:; BB(0x0040e0ca);
    /* 0040e0ca: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0040e0d1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0040e0d8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e0db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e0de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0df: call 0x40de04 */ r_esp -= 4; W32(r_esp, 0x40e0e4u); f_0040de04();
    /* 0040e0e4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0040e0eb:; BB(0x0040e0eb);
    /* 0040e0eb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040e0f2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e0f5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e0f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e0fb: mov dword ptr [edx + ecx*4 + 0x20], eax */ W32((u32)(r_edx+r_ecx*4+0x20u), r_eax);
    /* 0040e0ff: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 0040e102: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e105: cmp ecx, dword ptr [ebx*4 + 0x8fa268] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx*4+0x8fa268u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040e10c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040e10f: jl 0x40e0af */ if ((fS!=fO)) goto L_0040e0af;
L_0040e111:; BB(0x0040e111);
    /* 0040e111: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0040e118: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e11b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040e11e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040e121: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040e124: mov dword ptr [0xa3ae24], eax */ W32((u32)(0xa3ae24u), r_eax);
    /* 0040e129: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e12c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040e133: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e135: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e136: ret  */ FN_RET(0x0040e0c0); r_esp += 4; return;
L_0040e137:; BB(0x0040e137);
    /* 0040e137: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e139: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040e13c: jmp 0x40e0eb */ goto L_0040e0eb;
}

void f_0040e148(void) /* sub_40E148 */
{
    FN_ENTER(0x0040e148);
    /* 0040e148: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0040e14c: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040e150: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040e154: call 0x40e15c */ r_esp -= 4; W32(r_esp, 0x40e159u); f_0040e15c();
    /* 0040e159: ret 8 */ FN_RET(0x0040e148); r_esp += 12; return;
}

void f_0040e15c(void) /* sub_40E15C */
{
    FN_ENTER(0x0040e15c);
    /* 0040e15c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0040e160: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040e162: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0040e165: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0040e168: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0040e16b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040e16e: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0040e171: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0040e174: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0040e177: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0040e17a: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0040e17d: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0040e180: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0040e183: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0040e186: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0040e189: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0040e18c: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0040e193: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0040e196: ret 4 */ FN_RET(0x0040e15c); r_esp += 8; return;
}

void f_0040e19c(void) /* sub_40E19C */
{
    FN_ENTER(0x0040e19c);
    /* 0040e19c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0040e1a0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040e1a4: mov edx, dword ptr [ecx + edx*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x20u));
    /* 0040e1a8: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0040e1ab: ret 8 */ FN_RET(0x0040e19c); r_esp += 12; return;
}

void f_0040e1b0(void) /* sub_40E1B0 */
{
    FN_ENTER(0x0040e1b0);
    /* 0040e1b0: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0040e1b7: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
    /* 0040e1be: mov dword ptr [ecx + 0x50], 0x43340000 */ W32((u32)(r_ecx+0x50u), 0x43340000u);
    /* 0040e1c5: mov dword ptr [ecx + 0x54], 0x42180000 */ W32((u32)(r_ecx+0x54u), 0x42180000u);
    /* 0040e1cc: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 0040e1d3: mov dword ptr [ecx + 0x5c], 0x3f180000 */ W32((u32)(r_ecx+0x5cu), 0x3f180000u);
    /* 0040e1da: mov dword ptr [ecx + 0x60], 0x3f340000 */ W32((u32)(r_ecx+0x60u), 0x3f340000u);
    /* 0040e1e1: mov dword ptr [ecx + 0x64], 0x3f3e0000 */ W32((u32)(r_ecx+0x64u), 0x3f3e0000u);
    /* 0040e1e8: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 0040e1ef: mov dword ptr [ecx + 0x1c], 1 */ W32((u32)(r_ecx+0x1cu), 0x1u);
    /* 0040e1f6: ret  */ FN_RET(0x0040e1b0); r_esp += 4; return;
}

void f_0040e1f8(void) /* sub_40E1F8 */
{
    FN_ENTER(0x0040e1f8);
    /* 0040e1f8: mov eax, dword ptr [0xa3ae2c] */ r_eax = R32((u32)(0xa3ae2cu));
    /* 0040e1fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040e1ff: je 0x40e202 */ if (fZ) goto L_0040e202;
L_0040e201:; BB(0x0040e201);
    /* 0040e201: ret  */ FN_RET(0x0040e1f8); r_esp += 4; return;
L_0040e202:; BB(0x0040e202);
    /* 0040e202: mov eax, dword ptr [0xa3b1d4] */ r_eax = R32((u32)(0xa3b1d4u));
    /* 0040e207: mov dword ptr [0xa3ae2c], eax */ W32((u32)(0xa3ae2cu), r_eax);
    /* 0040e20c: ret  */ FN_RET(0x0040e1f8); r_esp += 4; return;
}

void f_0040e210(void) /* sub_40E210 */
{
    FN_ENTER(0x0040e210);
    /* 0040e210: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040e214: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 0040e219: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x40e21eu); f_007c1160();
    /* 0040e21e: ret  */ FN_RET(0x0040e210); r_esp += 4; return;
}

void f_0040e220(void) /* sub_40E220 */
{
    FN_ENTER(0x0040e220);
    /* 0040e220: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e222: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e224: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 0040e229: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040e22d: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x40e232u); f_007c09fc();
    /* 0040e232: ret  */ FN_RET(0x0040e220); r_esp += 4; return;
}

void f_0040e234(void) /* sub_40E234 */
{
    FN_ENTER(0x0040e234);
    /* 0040e234: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e236: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e238: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 0040e23d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040e241: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x40e246u); f_007c0c6c();
    /* 0040e246: ret  */ FN_RET(0x0040e234); r_esp += 4; return;
}

void f_0040e248(void) /* sub_40E248 */
{
    FN_ENTER(0x0040e248);
    /* 0040e248: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040e24c: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 0040e251: call 0x7c1120 */ r_esp -= 4; W32(r_esp, 0x40e256u); f_007c1120();
    /* 0040e256: ret  */ FN_RET(0x0040e248); r_esp += 4; return;
}

void f_0040e258(void) /* sub_40E258 */
{
    FN_ENTER(0x0040e258);
    /* 0040e258: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e259: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e25b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e25d: push 0x8cc980 */ { u32 v = 0x8cc980u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e262: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040e268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e269: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040e270: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e273: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040e276: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040e279: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040e27c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040e27f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040e282: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040e285: mov eax, ecx */ r_eax = r_ecx;
    /* 0040e287: mov dword ptr [eax], 0xaf2ca8 */ W32((u32)(r_eax), 0xaf2ca8u);
    /* 0040e28d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040e28f: mov dword ptr [0xa3ae40], edx */ W32((u32)(0xa3ae40u), r_edx);
    /* 0040e295: mov dword ptr [0xa3ae44], edx */ W32((u32)(0xa3ae44u), r_edx);
    /* 0040e29b: mov dword ptr [0xa3ae48], edx */ W32((u32)(0xa3ae48u), r_edx);
    /* 0040e2a1: mov dword ptr [0xa3ae4c], edx */ W32((u32)(0xa3ae4cu), r_edx);
    /* 0040e2a7: mov dword ptr [0xa3ae50], edx */ W32((u32)(0xa3ae50u), r_edx);
    /* 0040e2ad: mov dword ptr [0xa3ae54], edx */ W32((u32)(0xa3ae54u), r_edx);
    /* 0040e2b3: mov dword ptr [0xa3ae58], edx */ W32((u32)(0xa3ae58u), r_edx);
    /* 0040e2b9: mov dword ptr [0xa3ae5c], edx */ W32((u32)(0xa3ae5cu), r_edx);
    /* 0040e2bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040e2c6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40e2cbu); f_008171e8();
    /* 0040e2cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040e2ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040e2d0: jne 0x40e2e2 */ if (!fZ) goto L_0040e2e2;
L_0040e2d2:; BB(0x0040e2d2);
    /* 0040e2d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e2d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040e2dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e2de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e2df: ret 4 */ FN_RET(0x0040e258); r_esp += 8; return;
L_0040e2e2:; BB(0x0040e2e2);
    /* 0040e2e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e2e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2e6: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40e2ebu); f_005c2f74();
    /* 0040e2eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040e2ec: jmp 0x40e2d2 */ goto L_0040e2d2;
}

void f_0040e2f0(void) /* sub_40E2F0 */
{
    FN_ENTER(0x0040e2f0);
    /* 0040e2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e2f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2f5: push 0x8cc9a8 */ { u32 v = 0x8cc9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040e300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e301: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040e308: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e30b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040e30e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0040e311: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0040e314: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0040e317: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e319: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0040e31c:; BB(0x0040e31c);
    /* 0040e31c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e31f: mov edx, dword ptr [eax*4 + 0xa3ae40] */ r_edx = R32((u32)(r_eax*4+0xa3ae40u));
    /* 0040e326: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040e328: je 0x40e341 */ if (fZ) goto L_0040e341;
L_0040e32a:; BB(0x0040e32a);
    /* 0040e32a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040e32d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040e330: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e333: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e336: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040e33d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e33f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e340: ret  */ FN_RET(0x0040e2f0); r_esp += 4; return;
L_0040e341:; BB(0x0040e341);
    /* 0040e341: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0040e348: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e34d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40e352u); f_005caba4();
    /* 0040e352: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040e355: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e358: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040e35b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e35d: je 0x40e3f0 */ if (fZ) goto L_0040e3f0;
L_0040e363:; BB(0x0040e363);
    /* 0040e363: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0040e36a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e371: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040e374: mov ecx, eax */ r_ecx = r_eax;
    /* 0040e376: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40e37bu); f_008193cc();
    /* 0040e37b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e37e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e381: mov dword ptr [ebx], 0xaf2ca8 */ W32((u32)(r_ebx), 0xaf2ca8u);
    /* 0040e387: mov eax, dword ptr [0x9a31ac] */ r_eax = R32((u32)(0x9a31acu));
    /* 0040e38c: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e393: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0040e396: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 0040e399: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e39b: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 0040e39e: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 0040e3a1: lea esi, [ebx + 0x28] */ r_esi = (u32)(r_ebx+0x28u);
    /* 0040e3a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3a5: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x40e3aau); f_0086b688();
    /* 0040e3aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e3ad: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0040e3b4:; BB(0x0040e3b4);
    /* 0040e3b4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e3b7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e3ba: mov dword ptr [edx*4 + 0xa3ae40], eax */ W32((u32)(r_edx*4+0xa3ae40u), r_eax);
    /* 0040e3c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040e3c8: mov eax, edx */ r_eax = r_edx;
    /* 0040e3ca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040e3cd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040e3d0: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040e3d3: jl 0x40e31c */ if ((fS!=fO)) goto L_0040e31c;
L_0040e3d9:; BB(0x0040e3d9);
    /* 0040e3d9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040e3dc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040e3df: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e3e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e3e5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040e3ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e3ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e3ef: ret  */ FN_RET(0x0040e2f0); r_esp += 4; return;
L_0040e3f0:; BB(0x0040e3f0);
    /* 0040e3f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e3f2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040e3f5: jmp 0x40e3b4 */ goto L_0040e3b4;
}

void f_0040e3f8(void) /* sub_40E3F8 */
{
    FN_ENTER(0x0040e3f8);
    /* 0040e3f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3fa: mov eax, ecx */ r_eax = r_ecx;
    /* 0040e3fc: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0040e400: lea edi, [eax + 0x28] */ r_edi = (u32)(r_eax+0x28u);
    /* 0040e403: mov ecx, 0x224 */ r_ecx = 0x224u;
    /* 0040e408: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e409: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0040e40c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0040e40e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040e40f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e412: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0040e414: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0040e417: or edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040e41a: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0040e41d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040e41e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040e41f: ret 4 */ FN_RET(0x0040e3f8); r_esp += 8; return;
}

void f_0040e424(void) /* sub_40E424 */
{
    FN_ENTER(0x0040e424);
    /* 0040e424: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e425: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e426: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e427: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e428: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040e42a: lea ecx, [ebx + 0x48] */ r_ecx = (u32)(r_ebx+0x48u);
    /* 0040e42d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040e42f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0040e433: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0040e437: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0040e43b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0040e43f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0040e441: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0040e444: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0040e447: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0040e44a: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0040e44d: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0040e450: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0040e453: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0040e456: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0040e459: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0040e45c: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0040e45f: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0040e462: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0040e465: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0040e468: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0040e46b: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0040e46e: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0040e471: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0040e474: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0040e477: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0040e47a: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0040e47d: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0040e480: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 0040e483: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0040e486: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 0040e489: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0040e48c: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 0040e48f: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 0040e492: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 0040e495: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0040e498: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0040e49b: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0040e49e: lea ecx, [ebx + 0xc8] */ r_ecx = (u32)(r_ebx+0xc8u);
    /* 0040e4a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040e4a6: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0040e4a8: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0040e4ab: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0040e4ae: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0040e4b1: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0040e4b4: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0040e4b7: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0040e4ba: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0040e4bd: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0040e4c0: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0040e4c3: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0040e4c6: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0040e4c9: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0040e4cc: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0040e4cf: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0040e4d2: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0040e4d5: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0040e4d8: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0040e4db: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0040e4de: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0040e4e1: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0040e4e4: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0040e4e7: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 0040e4ea: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0040e4ed: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 0040e4f0: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0040e4f3: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 0040e4f6: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 0040e4f9: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 0040e4fc: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0040e4ff: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0040e502: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0040e505: lea ecx, [ebx + 0x148] */ r_ecx = (u32)(r_ebx+0x148u);
    /* 0040e50b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040e50d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0040e50f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0040e512: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0040e515: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0040e518: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0040e51b: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0040e51e: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0040e521: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0040e524: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0040e527: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0040e52a: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0040e52d: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0040e530: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0040e533: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0040e536: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0040e539: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0040e53c: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0040e53f: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0040e542: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0040e545: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0040e548: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0040e54b: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0040e54e: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 0040e551: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0040e554: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 0040e557: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0040e55a: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 0040e55d: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 0040e560: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 0040e563: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0040e566: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0040e569: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0040e56c: lea ecx, [ebx + 0x1c8] */ r_ecx = (u32)(r_ebx+0x1c8u);
    /* 0040e572: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040e574: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0040e576: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0040e579: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0040e57c: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0040e57f: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0040e582: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0040e585: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0040e588: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0040e58b: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0040e58e: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0040e591: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0040e594: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0040e597: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0040e59a: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0040e59d: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0040e5a0: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0040e5a3: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0040e5a6: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0040e5a9: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0040e5ac: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0040e5af: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0040e5b2: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0040e5b5: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 0040e5b8: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0040e5bb: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 0040e5be: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0040e5c1: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 0040e5c4: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 0040e5c7: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 0040e5ca: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0040e5cd: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0040e5d0: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0040e5d3: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5d6: lea edx, [ebx + 0x48] */ r_edx = (u32)(r_ebx+0x48u);
    /* 0040e5d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5da: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x40e5dfu); f_00857dec();
    /* 0040e5df: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5e2: lea eax, [ebx + 0xc8] */ r_eax = (u32)(r_ebx+0xc8u);
    /* 0040e5e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5e9: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x40e5eeu); f_00857dec();
    /* 0040e5ee: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5f1: lea eax, [ebx + 0x148] */ r_eax = (u32)(r_ebx+0x148u);
    /* 0040e5f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5f8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x40e5fdu); f_00857dec();
    /* 0040e5fd: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e600: add ebx, 0x1c8 */ {  u32 a = r_ebx; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040e606: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e607: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x40e60cu); f_00857dec();
    /* 0040e60c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040e60f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040e610: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e611: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040e612: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040e613: ret 0x10 */ FN_RET(0x0040e424); r_esp += 20; return;
}

void f_0040e618(void) /* sub_40E618 */
{
    FN_ENTER(0x0040e618);
    /* 0040e618: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e619: mov edi, ecx */ r_edi = r_ecx;
    /* 0040e61b: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0040e61e: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040e621: je 0x40e691 */ if (fZ) goto L_0040e691;
L_0040e623:; BB(0x0040e623);
    /* 0040e623: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 0040e626: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e629: jl 0x40e63d */ if ((fS!=fO)) goto L_0040e63d;
L_0040e62b:; BB(0x0040e62b);
    /* 0040e62b: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0040e62e: and ecx, 0xfffffffd */ {  u32 a = r_ecx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e631: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 0040e634: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0040e637: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0040e63a: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
L_0040e63d:; BB(0x0040e63d);
    /* 0040e63d: fld dword ptr [0x8fa29c] */ FPUSH(R_F32((u32)(0x8fa29cu)));
    /* 0040e643: fadd dword ptr [edi + 0x248] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x248u));
    /* 0040e649: fld dword ptr [0x8fa2a4] */ FPUSH(R_F32((u32)(0x8fa2a4u)));
    /* 0040e64f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040e651: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040e653: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040e654: ja 0x40e658 */ if ((!fC&&!fZ)) goto L_0040e658;
L_0040e656:; BB(0x0040e656);
    /* 0040e656: fst st(1) */ ST(1) = ST(0);
L_0040e658:; BB(0x0040e658);
    /* 0040e658: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040e65a: fstp dword ptr [edi + 0x248] */ W_F32((u32)(r_edi+0x248u), ST(0)); FPOP();
    /* 0040e660: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0040e663: je 0x40e68b */ if (fZ) goto L_0040e68b;
L_0040e665:; BB(0x0040e665);
    /* 0040e665: fld dword ptr [0x8fa2a0] */ FPUSH(R_F32((u32)(0x8fa2a0u)));
    /* 0040e66b: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0040e66e: fsub dword ptr [edi + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x30u));
    /* 0040e671: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040e673: fadd dword ptr [edi + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x28u));
    /* 0040e676: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0040e679: fsub dword ptr [edi + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x34u));
    /* 0040e67c: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 0040e67e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040e680: fadd dword ptr [edi + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2cu));
    /* 0040e683: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040e685: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 0040e688: fstp dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0)); FPOP();
L_0040e68b:; BB(0x0040e68b);
    /* 0040e68b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040e68e: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
L_0040e691:; BB(0x0040e691);
    /* 0040e691: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040e692: ret  */ FN_RET(0x0040e618); r_esp += 4; return;
}

void f_0040e694(void) /* sub_40E694 */
{
    FN_ENTER(0x0040e694);
    /* 0040e694: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e695: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e696: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e699: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040e69b: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0040e6a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e6a2: je 0x40ea34 */ if (fZ) goto L_0040ea34;
L_0040e6a8:; BB(0x0040e6a8);
    /* 0040e6a8: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0040e6ab: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0040e6ad: je 0x40ea34 */ if (fZ) goto L_0040ea34;
L_0040e6b3:; BB(0x0040e6b3);
    /* 0040e6b3: fld dword ptr [0x8fa290] */ FPUSH(R_F32((u32)(0x8fa290u)));
    /* 0040e6b9: fadd dword ptr [ebx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x28u));
    /* 0040e6bc: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0040e6bf: fld dword ptr [ebx + 0x248] */ FPUSH(R_F32((u32)(r_ebx+0x248u)));
    /* 0040e6c5: fmul dword ptr [0x8fa294] */ ST(0) = ST(0) * R_F32((u32)(0x8fa294u));
    /* 0040e6cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040e6cd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0040e6d0: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040e6d4: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040e6d9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e6de: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040e6e2: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040e6e6: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040e6ea: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040e6ee: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040e6f2: mov dword ptr [esp + 0x10], 0x3ec7ae14 */ W32((u32)(r_esp+0x10u), 0x3ec7ae14u);
    /* 0040e6fa: lea edi, [ebx + 0x48] */ r_edi = (u32)(r_ebx+0x48u);
    /* 0040e6fd: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0040e701: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0040e705: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040e708: or eax, 0x111111 */ {  u32 a = r_eax; u32 b = 0x111111u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e70d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0040e711: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x40e716u); f_007ac150();
    /* 0040e716: fld dword ptr [ebx + 0x248] */ FPUSH(R_F32((u32)(r_ebx+0x248u)));
    /* 0040e71c: fmul dword ptr [0x8fa294] */ ST(0) = ST(0) * R_F32((u32)(0x8fa294u));
    /* 0040e722: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040e726: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040e72b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e730: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040e734: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040e738: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040e73c: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040e740: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040e744: push 0x3ecccccd */ { u32 v = 0x3ecccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e749: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040e74c: or eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e752: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e753: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040e756: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040e759: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x40e75eu); f_007ac150();
    /* 0040e75e: lea edi, [ebx + 0xc8] */ r_edi = (u32)(r_ebx+0xc8u);
    /* 0040e764: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e765: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x40e76au); f_007ac344();
    /* 0040e76a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e76d: fld dword ptr [0x8fa290] */ FPUSH(R_F32((u32)(0x8fa290u)));
    /* 0040e773: fadd dword ptr [ebx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x28u));
    /* 0040e776: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0040e779: fld dword ptr [0x8fa288] */ FPUSH(R_F32((u32)(0x8fa288u)));
    /* 0040e77f: fadd dword ptr [ebx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2cu));
    /* 0040e782: fld dword ptr [ebx + 0x248] */ FPUSH(R_F32((u32)(r_ebx+0x248u)));
    /* 0040e788: fmul dword ptr [0x8fa294] */ ST(0) = ST(0) * R_F32((u32)(0x8fa294u));
    /* 0040e78e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040e790: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040e794: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0040e798: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0040e79c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0040e79f: fadd dword ptr [eax*4 + 0x8fa280] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fa280u));
    /* 0040e7a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040e7a8: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040e7ac: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040e7b1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e7b6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040e7ba: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040e7be: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040e7c2: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040e7c6: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040e7ca: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0040e7cc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0040e7cf: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040e7d2: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0040e7d6: mov dword ptr [esp + 0x10], 0x3ec7ae14 */ W32((u32)(r_esp+0x10u), 0x3ec7ae14u);
    /* 0040e7de: or eax, 0x111111 */ {  u32 a = r_eax; u32 b = 0x111111u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e7e3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0040e7e7: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x40e7ecu); f_007ac150();
    /* 0040e7ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e7ed: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x40e7f2u); f_007ac344();
    /* 0040e7f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040e7f3: fld dword ptr [0x8fa288] */ FPUSH(R_F32((u32)(0x8fa288u)));
    /* 0040e7f9: fadd dword ptr [ebx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2cu));
    /* 0040e7fc: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0040e7ff: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0040e802: fld dword ptr [ebx + 0x248] */ FPUSH(R_F32((u32)(r_ebx+0x248u)));
    /* 0040e808: fmul dword ptr [0x8fa294] */ ST(0) = ST(0) * R_F32((u32)(0x8fa294u));
    /* 0040e80e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040e810: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040e814: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0040e818: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0040e81c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0040e81f: fadd dword ptr [eax*4 + 0x8fa280] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fa280u));
    /* 0040e826: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040e828: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040e82c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040e831: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e836: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040e83a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040e83e: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040e842: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040e846: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040e84a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0040e84c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0040e84f: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040e852: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0040e856: mov dword ptr [esp + 0x10], 0x3ecccccd */ W32((u32)(r_esp+0x10u), 0x3ecccccdu);
    /* 0040e85e: or eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e863: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0040e867: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x40e86cu); f_007ac150();
    /* 0040e86c: lea edi, [ebx + 0x148] */ r_edi = (u32)(r_ebx+0x148u);
    /* 0040e872: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e873: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x40e878u); f_007ac344();
    /* 0040e878: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040e879: fld dword ptr [0x8fa290] */ FPUSH(R_F32((u32)(0x8fa290u)));
    /* 0040e87f: fadd dword ptr [ebx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x28u));
    /* 0040e882: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0040e885: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0040e888: fld dword ptr [ebx + 0x248] */ FPUSH(R_F32((u32)(r_ebx+0x248u)));
    /* 0040e88e: fmul dword ptr [0x8fa294] */ ST(0) = ST(0) * R_F32((u32)(0x8fa294u));
    /* 0040e894: mov dword ptr [esp + 0x10], 0x3ec7ae14 */ W32((u32)(r_esp+0x10u), 0x3ec7ae14u);
    /* 0040e89c: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0040e8a0: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0040e8a4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0040e8a7: fadd dword ptr [eax*4 + 0x8fa280] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fa280u));
    /* 0040e8ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040e8b0: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040e8b4: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040e8b9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e8be: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040e8c2: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040e8c6: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040e8ca: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040e8ce: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040e8d2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0040e8d4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0040e8d7: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040e8da: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0040e8de: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0040e8e2: or eax, 0x111111 */ {  u32 a = r_eax; u32 b = 0x111111u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e8e7: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0040e8eb: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x40e8f0u); f_007ac150();
    /* 0040e8f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e8f1: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x40e8f6u); f_007ac344();
    /* 0040e8f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040e8f7: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0040e8fa: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0040e8fd: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0040e900: fld dword ptr [ebx + 0x248] */ FPUSH(R_F32((u32)(r_ebx+0x248u)));
    /* 0040e906: fmul dword ptr [0x8fa294] */ ST(0) = ST(0) * R_F32((u32)(0x8fa294u));
    /* 0040e90c: mov dword ptr [esp + 0x10], 0x3ecccccd */ W32((u32)(r_esp+0x10u), 0x3ecccccdu);
    /* 0040e914: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0040e918: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0040e91c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0040e920: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0040e923: fadd dword ptr [eax*4 + 0x8fa280] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fa280u));
    /* 0040e92a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040e92c: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040e930: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040e935: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e93a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040e93e: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040e942: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040e946: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040e94a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040e94e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0040e950: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0040e953: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040e956: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0040e95a: or eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e95f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0040e963: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x40e968u); f_007ac150();
    /* 0040e968: fld dword ptr [0x8fa290] */ FPUSH(R_F32((u32)(0x8fa290u)));
    /* 0040e96e: fadd dword ptr [ebx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x28u));
    /* 0040e971: fld dword ptr [0x8fa288] */ FPUSH(R_F32((u32)(0x8fa288u)));
    /* 0040e977: fadd dword ptr [ebx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2cu));
    /* 0040e97a: fld dword ptr [ebx + 0x248] */ FPUSH(R_F32((u32)(r_ebx+0x248u)));
    /* 0040e980: fmul dword ptr [0x8fa294] */ ST(0) = ST(0) * R_F32((u32)(0x8fa294u));
    /* 0040e986: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040e988: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0040e98b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040e98f: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040e993: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040e998: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e99d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040e9a1: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040e9a5: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040e9a9: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040e9ad: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040e9b1: lea edi, [ebx + 0x1c8] */ r_edi = (u32)(r_ebx+0x1c8u);
    /* 0040e9b7: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040e9ba: mov dword ptr [esp + 0x10], 0x3ec7ae14 */ W32((u32)(r_esp+0x10u), 0x3ec7ae14u);
    /* 0040e9c2: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0040e9c6: or eax, 0x111111 */ {  u32 a = r_eax; u32 b = 0x111111u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040e9cb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0040e9cf: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x40e9d4u); f_007ac150();
    /* 0040e9d4: fld dword ptr [0x8fa288] */ FPUSH(R_F32((u32)(0x8fa288u)));
    /* 0040e9da: fadd dword ptr [ebx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2cu));
    /* 0040e9dd: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0040e9e0: fld dword ptr [ebx + 0x248] */ FPUSH(R_F32((u32)(r_ebx+0x248u)));
    /* 0040e9e6: fmul dword ptr [0x8fa294] */ ST(0) = ST(0) * R_F32((u32)(0x8fa294u));
    /* 0040e9ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040e9ee: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040e9f2: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040e9f6: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040e9fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040ea00: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040ea04: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040ea08: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040ea0c: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040ea10: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040ea14: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040ea17: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0040ea1a: mov dword ptr [esp + 0x10], 0x3ecccccd */ W32((u32)(r_esp+0x10u), 0x3ecccccdu);
    /* 0040ea22: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0040ea26: or eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040ea2b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0040ea2f: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x40ea34u); f_007ac150();
L_0040ea34:; BB(0x0040ea34);
    /* 0040ea34: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040ea37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ea38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040ea39: ret  */ FN_RET(0x0040e694); r_esp += 4; return;
}

void f_0040ea3c(void) /* sub_40EA3C */
{
    FN_ENTER(0x0040ea3c);
    /* 0040ea3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040ea3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040ea41: call 0x40ea60 */ r_esp -= 4; W32(r_esp, 0x40ea46u); f_0040ea60();
    /* 0040ea46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040ea4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ea4c: jne 0x40ea52 */ if (!fZ) goto L_0040ea52;
L_0040ea4e:; BB(0x0040ea4e);
    /* 0040ea4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ea4f: ret 4 */ FN_RET(0x0040ea3c); r_esp += 8; return;
L_0040ea52:; BB(0x0040ea52);
    /* 0040ea52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40ea58u); f_005c2f74();
    /* 0040ea58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ea59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ea5a: ret 4 */ FN_RET(0x0040ea3c); r_esp += 8; return;
}

void f_0040ea60(void) /* sub_40EA60 */
{
    FN_ENTER(0x0040ea60);
    /* 0040ea60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea61: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ea63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea65: push 0x8cc9c4 */ { u32 v = 0x8cc9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040ea70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040ea78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040ea7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040ea7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040ea81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040ea84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040ea87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040ea8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040ea8d: mov dword ptr [ecx], 0xaf2ce0 */ W32((u32)(r_ecx), 0xaf2ce0u);
    /* 0040ea93: mov dword ptr [0xa3ae64], 0 */ W32((u32)(0xa3ae64u), 0x0u);
    /* 0040ea9d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040eaa4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40eaa9u); f_008171e8();
    /* 0040eaa9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040eaac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040eab3: mov esp, ebp */ r_esp = r_ebp;
    /* 0040eab5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040eab6: ret  */ FN_RET(0x0040ea60); r_esp += 4; return;
}

void f_0040eab8(void) /* sub_40EAB8 */
{
    FN_ENTER(0x0040eab8);
    /* 0040eab8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040eab9: mov edi, ecx */ r_edi = r_ecx;
    /* 0040eabb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040eabf: mov ecx, edi */ r_ecx = r_edi;
    /* 0040eac1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40eac6u); f_008193cc();
    /* 0040eac6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0040eaca: mov dword ptr [edi], 0xaf2ce0 */ W32((u32)(r_edi), 0xaf2ce0u);
    /* 0040ead0: mov edx, dword ptr [0x9a31b0] */ r_edx = R32((u32)(0x9a31b0u));
    /* 0040ead6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0040ead9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040eadb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040eae1: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 0040eae4: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0040eae7: mov eax, edi */ r_eax = r_edi;
    /* 0040eae9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040eaea: ret 8 */ FN_RET(0x0040eab8); r_esp += 12; return;
}

void f_0040eaf0(void) /* sub_40EAF0 */
{
    FN_ENTER(0x0040eaf0);
    /* 0040eaf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040eaf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040eaf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eaf5: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40eafau); f_0082c204();
    /* 0040eafa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eafb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eafd: jne 0x40eb0a */ if (!fZ) goto L_0040eb0a;
L_0040eaff:; BB(0x0040eaff);
    /* 0040eaff: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 0040eb06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040eb08: jmp 0x40eb0d */ goto L_0040eb0d;
L_0040eb0a:; BB(0x0040eb0a);
    /* 0040eb0a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_0040eb0d:; BB(0x0040eb0d);
    /* 0040eb0d: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040eb10: ja 0x40ef01 */ if ((!fC&&!fZ)) goto L_0040ef01;
L_0040eb16:; BB(0x0040eb16);
    /* 0040eb16: mov eax, dword ptr [eax*4 + 0x8fa2c0] */ r_eax = R32((u32)(r_eax*4+0x8fa2c0u));
    /* 0040eb1d: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040eaf0); r_esp += 4; return;
}

void f_0040eb1f(void)
{
    FN_ENTER(0x0040eb1f);
    /* 0040eb1f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb21: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40eb26u); f_0082c204();
    /* 0040eb26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eb27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb29: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040eb2f:; BB(0x0040eb2f);
    /* 0040eb2f: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040eb36: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040eb1f); r_esp += 4; return;
}

void f_0040eb3b(void)
{
    FN_ENTER(0x0040eb3b);
    /* 0040eb3b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb3d: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40eb42u); f_0082c204();
    /* 0040eb42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb45: jne 0x40eb53 */ if (!fZ) goto L_0040eb53;
L_0040eb47:; BB(0x0040eb47);
    /* 0040eb47: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040eb4e: jmp 0x40ef01 */ goto L_0040ef01;
L_0040eb53:; BB(0x0040eb53);
    /* 0040eb53: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40eb58u); f_006dc358();
    /* 0040eb58: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb5b: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040eb61:; BB(0x0040eb61);
    /* 0040eb61: mov dword ptr [ebx + 0x1c], 0x19 */ W32((u32)(r_ebx+0x1cu), 0x19u);
    /* 0040eb68: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040eb3b); r_esp += 4; return;
}

void f_0040eb6d(void)
{
    FN_ENTER(0x0040eb6d);
    /* 0040eb6d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb6f: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40eb74u); f_0082c204();
    /* 0040eb74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eb75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb77: jne 0x40eb85 */ if (!fZ) goto L_0040eb85;
L_0040eb79:; BB(0x0040eb79);
    /* 0040eb79: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040eb80: jmp 0x40ef01 */ goto L_0040ef01;
L_0040eb85:; BB(0x0040eb85);
    /* 0040eb85: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40eb8au); f_006dc358();
    /* 0040eb8a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb8d: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040eb93:; BB(0x0040eb93);
    /* 0040eb93: mov dword ptr [ebx + 0x1c], 0x18 */ W32((u32)(r_ebx+0x1cu), 0x18u);
    /* 0040eb9a: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040eb6d); r_esp += 4; return;
}

void f_0040eb9f(void)
{
    FN_ENTER(0x0040eb9f);
    /* 0040eb9f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eba1: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40eba6u); f_0082c204();
    /* 0040eba6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eba7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eba9: jne 0x40ebb7 */ if (!fZ) goto L_0040ebb7;
L_0040ebab:; BB(0x0040ebab);
    /* 0040ebab: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ebb2: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ebb7:; BB(0x0040ebb7);
    /* 0040ebb7: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 0040ebbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ebbe: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040ebc4:; BB(0x0040ebc4);
    /* 0040ebc4: mov dword ptr [ebx + 0x1c], 0x17 */ W32((u32)(r_ebx+0x1cu), 0x17u);
    /* 0040ebcb: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040eb9f); r_esp += 4; return;
}

void f_0040ebd0(void)
{
    FN_ENTER(0x0040ebd0);
    /* 0040ebd0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ebd2: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40ebd7u); f_0082c204();
    /* 0040ebd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ebd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ebda: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040ebe0:; BB(0x0040ebe0);
    /* 0040ebe0: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ebe7: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ebd0); r_esp += 4; return;
}

void f_0040ebec(void)
{
    FN_ENTER(0x0040ebec);
    /* 0040ebec: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ebee: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40ebf3u); f_0082c204();
    /* 0040ebf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ebf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ebf6: jne 0x40ec04 */ if (!fZ) goto L_0040ec04;
L_0040ebf8:; BB(0x0040ebf8);
    /* 0040ebf8: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ebff: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ec04:; BB(0x0040ec04);
    /* 0040ec04: call 0x6c44bc */ r_esp -= 4; W32(r_esp, 0x40ec09u); f_006c44bc();
    /* 0040ec09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec0a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec0c: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40ec11u); f_0082c198();
    /* 0040ec11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ec14: cmp eax, 0xffffff41 */ {  u32 a = r_eax; u32 b = 0xffffff41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ec19: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040ec1f:; BB(0x0040ec1f);
    /* 0040ec1f: mov dword ptr [ebx + 0x1c], 0x15 */ W32((u32)(r_ebx+0x1cu), 0x15u);
    /* 0040ec26: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ebec); r_esp += 4; return;
}

void f_0040ec2b(void)
{
    FN_ENTER(0x0040ec2b);
    /* 0040ec2b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec2d: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40ec32u); f_0082c204();
    /* 0040ec32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ec33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ec35: jne 0x40ec43 */ if (!fZ) goto L_0040ec43;
L_0040ec37:; BB(0x0040ec37);
    /* 0040ec37: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ec3e: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ec43:; BB(0x0040ec43);
    /* 0040ec43: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x40ec48u); f_006c44ac();
    /* 0040ec48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec49: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec4b: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40ec50u); f_0082c198();
    /* 0040ec50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ec53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ec55: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040ec5b:; BB(0x0040ec5b);
    /* 0040ec5b: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 0040ec60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ec62: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040ec68:; BB(0x0040ec68);
    /* 0040ec68: mov dword ptr [ebx + 0x1c], 0x14 */ W32((u32)(r_ebx+0x1cu), 0x14u);
    /* 0040ec6f: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ec2b); r_esp += 4; return;
}

void f_0040ec74(void)
{
    FN_ENTER(0x0040ec74);
    /* 0040ec74: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec76: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40ec7bu); f_0082c204();
    /* 0040ec7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ec7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ec7e: jne 0x40ec8c */ if (!fZ) goto L_0040ec8c;
L_0040ec80:; BB(0x0040ec80);
    /* 0040ec80: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ec87: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ec8c:; BB(0x0040ec8c);
    /* 0040ec8c: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x40ec91u); f_006c44ac();
    /* 0040ec91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec92: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec94: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40ec99u); f_0082c198();
    /* 0040ec99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ec9c: cmp eax, 0xffffff41 */ {  u32 a = r_eax; u32 b = 0xffffff41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eca1: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040eca7:; BB(0x0040eca7);
    /* 0040eca7: mov dword ptr [ebx + 0x1c], 0x13 */ W32((u32)(r_ebx+0x1cu), 0x13u);
    /* 0040ecae: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ec74); r_esp += 4; return;
}

void f_0040ecb3(void)
{
    FN_ENTER(0x0040ecb3);
    /* 0040ecb3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ecb5: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40ecbau); f_0082c204();
    /* 0040ecba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ecbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ecbd: jne 0x40eccb */ if (!fZ) goto L_0040eccb;
L_0040ecbf:; BB(0x0040ecbf);
    /* 0040ecbf: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ecc6: jmp 0x40ef01 */ goto L_0040ef01;
L_0040eccb:; BB(0x0040eccb);
    /* 0040eccb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eccd: call 0x82c1e0 */ r_esp -= 4; W32(r_esp, 0x40ecd2u); f_0082c1e0();
    /* 0040ecd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ecd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ecd5: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040ecdb:; BB(0x0040ecdb);
    /* 0040ecdb: mov dword ptr [ebx + 0x1c], 0x12 */ W32((u32)(r_ebx+0x1cu), 0x12u);
    /* 0040ece2: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ecb3); r_esp += 4; return;
}

void f_0040ece7(void)
{
    FN_ENTER(0x0040ece7);
    /* 0040ece7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ece9: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40eceeu); f_0082c204();
    /* 0040ecee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ecef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ecf1: jne 0x40ecfc */ if (!fZ) goto L_0040ecfc;
L_0040ecf3:; BB(0x0040ecf3);
    /* 0040ecf3: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ecfa: jmp 0x40ed13 */ goto L_0040ed13;
L_0040ecfc:; BB(0x0040ecfc);
    /* 0040ecfc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ecfe: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40ed03u); f_007083d4();
    /* 0040ed03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ed04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed06: je 0x40ef16 */ if (fZ) goto L_0040ef16;
L_0040ed0c:; BB(0x0040ed0c);
    /* 0040ed0c: mov dword ptr [ebx + 0x1c], 0x10 */ W32((u32)(r_ebx+0x1cu), 0x10u);
L_0040ed13:; BB(0x0040ed13);
    /* 0040ed13: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed15: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40ed1au); f_0082c204();
    /* 0040ed1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ed1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed1d: jne 0x40ed2b */ if (!fZ) goto L_0040ed2b;
L_0040ed1f:; BB(0x0040ed1f);
    /* 0040ed1f: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ed26: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ed2b:; BB(0x0040ed2b);
    /* 0040ed2b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed2d: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40ed32u); f_007083d4();
    /* 0040ed32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ed33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed35: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040ed3b:; BB(0x0040ed3b);
    /* 0040ed3b: mov dword ptr [ebx + 0x1c], 0x11 */ W32((u32)(r_ebx+0x1cu), 0x11u);
    /* 0040ed42: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ece7); r_esp += 4; return;
L_0040ef16:; BB(0x0040ef16);
    /* 0040ef16: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef18: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x40ef1du); f_0082c3a8();
    /* 0040ef1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ef1e: cmp eax, 0xffffff21 */ {  u32 a = r_eax; u32 b = 0xffffff21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ef23: je 0x40ed13 */ if (fZ) goto L_0040ed13;
L_0040ef29:; BB(0x0040ef29);
    /* 0040ef29: jmp 0x40ed0c */ goto L_0040ed0c;
}

void f_0040ed13(void)
{
    FN_ENTER(0x0040ed13);
    /* 0040ed13: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed15: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40ed1au); f_0082c204();
    /* 0040ed1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ed1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed1d: jne 0x40ed2b */ if (!fZ) goto L_0040ed2b;
L_0040ed1f:; BB(0x0040ed1f);
    /* 0040ed1f: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ed26: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ed2b:; BB(0x0040ed2b);
    /* 0040ed2b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed2d: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40ed32u); f_007083d4();
    /* 0040ed32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ed33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed35: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040ed3b:; BB(0x0040ed3b);
    /* 0040ed3b: mov dword ptr [ebx + 0x1c], 0x11 */ W32((u32)(r_ebx+0x1cu), 0x11u);
    /* 0040ed42: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ed13); r_esp += 4; return;
}

void f_0040ed47(void)
{
    FN_ENTER(0x0040ed47);
    /* 0040ed47: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed49: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40ed4eu); f_0082c204();
    /* 0040ed4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ed4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed51: jne 0x40ed5f */ if (!fZ) goto L_0040ed5f;
L_0040ed53:; BB(0x0040ed53);
    /* 0040ed53: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ed5a: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ed5f:; BB(0x0040ed5f);
    /* 0040ed5f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed61: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40ed66u); f_007083d4();
    /* 0040ed66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ed67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed69: je 0x40ef2e */ if (fZ) goto L_0040ef2e;
L_0040ed6f:; BB(0x0040ed6f);
    /* 0040ed6f: mov dword ptr [ebx + 0x1c], 0xf */ W32((u32)(r_ebx+0x1cu), 0xfu);
    /* 0040ed76: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ed47); r_esp += 4; return;
L_0040ef2e:; BB(0x0040ef2e);
    /* 0040ef2e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef30: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x40ef35u); f_0082c3a8();
    /* 0040ef35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ef36: cmp eax, -0x7d */ {  u32 a = r_eax; u32 b = 0xffffff83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ef39: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040ef3b:; BB(0x0040ef3b);
    /* 0040ef3b: jmp 0x40ed6f */ goto L_0040ed6f;
}

void f_0040ed7b(void)
{
    FN_ENTER(0x0040ed7b);
    /* 0040ed7b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed7d: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40ed82u); f_0082c204();
    /* 0040ed82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ed83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed85: jne 0x40ed93 */ if (!fZ) goto L_0040ed93;
L_0040ed87:; BB(0x0040ed87);
    /* 0040ed87: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040ed8e: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ed93:; BB(0x0040ed93);
    /* 0040ed93: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 0040ed9a: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ed7b); r_esp += 4; return;
}

void f_0040ed9f(void)
{
    FN_ENTER(0x0040ed9f);
    /* 0040ed9f: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0040eda2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eda5: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040edab:; BB(0x0040edab);
    /* 0040edab: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 0040edb2: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ed9f); r_esp += 4; return;
}

void f_0040edb7(void)
{
    FN_ENTER(0x0040edb7);
    /* 0040edb7: call 0x6c1bdc */ r_esp -= 4; W32(r_esp, 0x40edbcu); f_006c1bdc();
    /* 0040edbc: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040edbf: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040edc5:; BB(0x0040edc5);
    /* 0040edc5: mov dword ptr [ebx + 0x1c], 0xc */ W32((u32)(r_ebx+0x1cu), 0xcu);
    /* 0040edcc: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040edb7); r_esp += 4; return;
}

void f_0040edd1(void)
{
    FN_ENTER(0x0040edd1);
    /* 0040edd1: call 0x6c1bdc */ r_esp -= 4; W32(r_esp, 0x40edd6u); f_006c1bdc();
    /* 0040edd6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040edd9: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040eddf:; BB(0x0040eddf);
    /* 0040eddf: mov dword ptr [ebx + 0x1c], 0xb */ W32((u32)(r_ebx+0x1cu), 0xbu);
    /* 0040ede6: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040edd1); r_esp += 4; return;
}

void f_0040edd5(void)
{
    FN_ENTER(0x0040edd5);
    /* 0040edd5: add byte ptr [ebx - 0x7bf0fe08], al */ { u32 ad = (u32)(r_ebx+0x840f01f8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0040eddb: and al, byte ptr [ecx] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx)); u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040eddd: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0040eddf: mov dword ptr [ebx + 0x1c], 0xb */ W32((u32)(r_ebx+0x1cu), 0xbu);
    /* 0040ede6: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040edd5); r_esp += 4; return;
}

void f_0040edeb(void)
{
    FN_ENTER(0x0040edeb);
    /* 0040edeb: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 0040edf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040edf2: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040edf8:; BB(0x0040edf8);
    /* 0040edf8: mov dword ptr [ebx + 0x1c], 0xa */ W32((u32)(r_ebx+0x1cu), 0xau);
    /* 0040edff: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040edeb); r_esp += 4; return;
}

void f_0040ee04(void)
{
    FN_ENTER(0x0040ee04);
    /* 0040ee04: call 0x6c3158 */ r_esp -= 4; W32(r_esp, 0x40ee09u); f_006c3158();
    /* 0040ee09: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee0e: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040ee14:; BB(0x0040ee14);
    /* 0040ee14: mov dword ptr [ebx + 0x1c], 9 */ W32((u32)(r_ebx+0x1cu), 0x9u);
    /* 0040ee1b: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ee04); r_esp += 4; return;
}

void f_0040ee20(void)
{
    FN_ENTER(0x0040ee20);
    /* 0040ee20: call 0x6c44bc */ r_esp -= 4; W32(r_esp, 0x40ee25u); f_006c44bc();
    /* 0040ee25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ee26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ee28: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40ee2du); f_0082c198();
    /* 0040ee2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ee30: cmp eax, 0xffffff41 */ {  u32 a = r_eax; u32 b = 0xffffff41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee35: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040ee3b:; BB(0x0040ee3b);
    /* 0040ee3b: mov dword ptr [ebx + 0x1c], 8 */ W32((u32)(r_ebx+0x1cu), 0x8u);
    /* 0040ee42: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ee20); r_esp += 4; return;
}

void f_0040ee47(void)
{
    FN_ENTER(0x0040ee47);
    /* 0040ee47: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x40ee4cu); f_006c44ac();
    /* 0040ee4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ee4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ee4f: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40ee54u); f_0082c198();
    /* 0040ee54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ee57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee59: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040ee5f:; BB(0x0040ee5f);
    /* 0040ee5f: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 0040ee64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee66: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040ee6c:; BB(0x0040ee6c);
    /* 0040ee6c: mov dword ptr [ebx + 0x1c], 7 */ W32((u32)(r_ebx+0x1cu), 0x7u);
    /* 0040ee73: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ee47); r_esp += 4; return;
}

void f_0040ee78(void)
{
    FN_ENTER(0x0040ee78);
    /* 0040ee78: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x40ee7du); f_006c44ac();
    /* 0040ee7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ee7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ee80: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40ee85u); f_0082c198();
    /* 0040ee85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ee88: cmp eax, 0xffffff41 */ {  u32 a = r_eax; u32 b = 0xffffff41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee8d: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040ee8f:; BB(0x0040ee8f);
    /* 0040ee8f: mov dword ptr [ebx + 0x1c], 6 */ W32((u32)(r_ebx+0x1cu), 0x6u);
    /* 0040ee96: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ee78); r_esp += 4; return;
}

void f_0040ee98(void)
{
    FN_ENTER(0x0040ee98);
    /* 0040ee98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ee9a: call 0x82c1e0 */ r_esp -= 4; W32(r_esp, 0x40ee9fu); f_0082c1e0();
    /* 0040ee9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eea0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eea2: jne 0x40ef01 */ if (!fZ) goto L_0040ef01;
L_0040eea4:; BB(0x0040eea4);
    /* 0040eea4: mov dword ptr [ebx + 0x1c], 5 */ W32((u32)(r_ebx+0x1cu), 0x5u);
    /* 0040eeab: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040ee98); r_esp += 4; return;
}

void f_0040eead(void)
{
    FN_ENTER(0x0040eead);
    /* 0040eead: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eeaf: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40eeb4u); f_007083d4();
    /* 0040eeb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eeb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eeb7: je 0x40ef40 */ if (fZ) goto L_0040ef40;
L_0040eebd:; BB(0x0040eebd);
    /* 0040eebd: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
L_0040eec4:; BB(0x0040eec4);
    /* 0040eec4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eec6: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40eecbu); f_007083d4();
    /* 0040eecb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eecc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eece: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040eed0:; BB(0x0040eed0);
    /* 0040eed0: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 0040eed7: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040eead); r_esp += 4; return;
L_0040ef40:; BB(0x0040ef40);
    /* 0040ef40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef42: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x40ef47u); f_0082c3a8();
    /* 0040ef47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ef48: cmp eax, 0xffffff21 */ {  u32 a = r_eax; u32 b = 0xffffff21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ef4d: je 0x40eec4 */ if (fZ) goto L_0040eec4;
L_0040ef53:; BB(0x0040ef53);
    /* 0040ef53: jmp 0x40eebd */ goto L_0040eebd;
}

void f_0040eec4(void)
{
    FN_ENTER(0x0040eec4);
    /* 0040eec4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eec6: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40eecbu); f_007083d4();
    /* 0040eecb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eecc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eece: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040eed0:; BB(0x0040eed0);
    /* 0040eed0: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 0040eed7: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040eec4); r_esp += 4; return;
}

void f_0040eed9(void)
{
    FN_ENTER(0x0040eed9);
    /* 0040eed9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eedb: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40eee0u); f_007083d4();
    /* 0040eee0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eee3: je 0x40ef58 */ if (fZ) goto L_0040ef58;
L_0040eee5:; BB(0x0040eee5);
    /* 0040eee5: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
    /* 0040eeec: jmp 0x40ef01 */ goto L_0040ef01;
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040eed9); r_esp += 4; return;
L_0040ef58:; BB(0x0040ef58);
    /* 0040ef58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef5a: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x40ef5fu); f_0082c3a8();
    /* 0040ef5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ef60: cmp eax, -0x7d */ {  u32 a = r_eax; u32 b = 0xffffff83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ef63: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040ef65:; BB(0x0040ef65);
    /* 0040ef65: jmp 0x40eee5 */ goto L_0040eee5;
}

void f_0040eeee(void)
{
    FN_ENTER(0x0040eeee);
    /* 0040eeee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eef0: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40eef5u); f_0082c204();
    /* 0040eef5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eef8: je 0x40ef01 */ if (fZ) goto L_0040ef01;
L_0040eefa:; BB(0x0040eefa);
    /* 0040eefa: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
L_0040ef01:; BB(0x0040ef01);
    /* 0040ef01: mov eax, dword ptr [0xaca4d8] */ r_eax = R32((u32)(0xaca4d8u));
    /* 0040ef06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef08: je 0x40ef14 */ if (fZ) goto L_0040ef14;
L_0040ef0a:; BB(0x0040ef0a);
    /* 0040ef0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef0c: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 0040ef11: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_0040ef14:; BB(0x0040ef14);
    /* 0040ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef15: ret  */ FN_RET(0x0040eeee); r_esp += 4; return;
}

void f_0040ef6c(void) /* sub_40EF6C */
{
    FN_ENTER(0x0040ef6c);
    /* 0040ef6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040ef6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040ef71: call 0x40ef90 */ r_esp -= 4; W32(r_esp, 0x40ef76u); f_0040ef90();
    /* 0040ef76: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040ef7a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ef7c: jne 0x40ef82 */ if (!fZ) goto L_0040ef82;
L_0040ef7e:; BB(0x0040ef7e);
    /* 0040ef7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef7f: ret 4 */ FN_RET(0x0040ef6c); r_esp += 8; return;
L_0040ef82:; BB(0x0040ef82);
    /* 0040ef82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef83: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40ef88u); f_005c2f74();
    /* 0040ef88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ef89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ef8a: ret 4 */ FN_RET(0x0040ef6c); r_esp += 8; return;
}

void f_0040ef90(void) /* sub_40EF90 */
{
    FN_ENTER(0x0040ef90);
    /* 0040ef90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef91: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ef93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef95: push 0x8cc9e0 */ { u32 v = 0x8cc9e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040efa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040efa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040efa8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040efab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040efae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040efb1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040efb4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040efb7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040efba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040efbd: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0040efc0: mov dword ptr [ecx], 0xaf2d40 */ W32((u32)(r_ecx), 0xaf2d40u);
    /* 0040efc6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040efc8: je 0x40efe1 */ if (fZ) goto L_0040efe1;
L_0040efca:; BB(0x0040efca);
    /* 0040efca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040efcd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040efd1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040efd6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040efda: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_0040efe1:; BB(0x0040efe1);
    /* 0040efe1: mov dword ptr [0xa3ae6c], 0 */ W32((u32)(0xa3ae6cu), 0x0u);
    /* 0040efeb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040eff2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40eff7u); f_008171e8();
    /* 0040eff7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040effa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040f001: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f003: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f004: ret  */ FN_RET(0x0040ef90); r_esp += 4; return;
}

