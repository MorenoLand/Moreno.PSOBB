#include "protos.h"

void f_0063c050(void) /* sub_63C050 */
{
    FN_ENTER(0x0063c050);
    /* 0063c050: mov ecx, dword ptr [0xa8f1d4] */ r_ecx = R32((u32)(0xa8f1d4u));
    /* 0063c056: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c058: je 0x63c06c */ if (fZ) goto L_0063c06c;
L_0063c05a:; BB(0x0063c05a);
    /* 0063c05a: je 0x63c062 */ if (fZ) goto L_0063c062;
L_0063c05c:; BB(0x0063c05c);
    /* 0063c05c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c05e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063c060: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x63c062u); call_ind(t); }
L_0063c062:; BB(0x0063c062);
    /* 0063c062: mov dword ptr [0xa8f1d4], 0 */ W32((u32)(0xa8f1d4u), 0x0u);
L_0063c06c:; BB(0x0063c06c);
    /* 0063c06c: mov ecx, dword ptr [0xa8f1d0] */ r_ecx = R32((u32)(0xa8f1d0u));
    /* 0063c072: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c074: je 0x63c089 */ if (fZ) goto L_0063c089;
L_0063c076:; BB(0x0063c076);
    /* 0063c076: je 0x63c07f */ if (fZ) goto L_0063c07f;
L_0063c078:; BB(0x0063c078);
    /* 0063c078: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c07a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63c07fu); f_004066a8();
L_0063c07f:; BB(0x0063c07f);
    /* 0063c07f: mov dword ptr [0xa8f1d0], 0 */ W32((u32)(0xa8f1d0u), 0x0u);
L_0063c089:; BB(0x0063c089);
    /* 0063c089: ret  */ FN_RET(0x0063c050); r_esp += 4; return;
}

void f_0063c08c(void) /* sub_63C08C */
{
    FN_ENTER(0x0063c08c);
    /* 0063c08c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c08d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063c08f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c091: push 0x8e4c76 */ { u32 v = 0x8e4c76u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c096: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063c09c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c09d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063c0a4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063c0a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063c0aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063c0ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063c0b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063c0b3: mov dword ptr [0xa8f1d4], 0 */ W32((u32)(0xa8f1d4u), 0x0u);
    /* 0063c0bd: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x63c0c2u); f_00807ac0();
    /* 0063c0c2: lea edx, [eax - 0x13] */ r_edx = (u32)(r_eax+0xffffffedu);
    /* 0063c0c5: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063c0c8: ja 0x63c208 */ if ((!fC&&!fZ)) goto L_0063c208;
L_0063c0ce:; BB(0x0063c0ce);
    /* 0063c0ce: mov eax, dword ptr [eax*4 + 0x933ff4] */ r_eax = R32((u32)(r_eax*4+0x933ff4u));
    /* 0063c0d5: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0063c208:; BB(0x0063c208);
    /* 0063c208: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063c20f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c214: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63c219u); f_008581c5();
    /* 0063c219: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c21a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063c21d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c21f: je 0x63c2b7 */ if (fZ) goto L_0063c2b7;
L_0063c225:; BB(0x0063c225);
    /* 0063c225: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063c22c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0063c233: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c236: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063c238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c23a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c23b: push 0x9c6804 */ { u32 v = 0x9c6804u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c240: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c242: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x63c247u); f_005b7a84();
    /* 0063c247: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c24a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063c251:; BB(0x0063c251);
    /* 0063c251: mov dword ptr [0xa8f1d0], ecx */ W32((u32)(0xa8f1d0u), r_ecx);
    /* 0063c257: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063c25e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c260: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63c265u); f_005b8610();
    /* 0063c265: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c267: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c268: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63c26du); f_0078e9b0();
    /* 0063c26d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0063c270: mov dword ptr [0xa8f1cc], 0 */ W32((u32)(0xa8f1ccu), 0x0u);
    /* 0063c27a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0063c27f: mov dword ptr [0xa8f1c8], edx */ W32((u32)(0xa8f1c8u), r_edx);
    /* 0063c285: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c286: mov dword ptr [0xa8f1c4], ecx */ W32((u32)(0xa8f1c4u), r_ecx);
    /* 0063c28c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c28d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c28e: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x63c293u); f_0066f3d4();
    /* 0063c293: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063c296: mov dword ptr [0xa8f1d4], eax */ W32((u32)(0xa8f1d4u), r_eax);
    /* 0063c29b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c29e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063c2a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c2a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c2a8: ret  */ FN_RET(0x0063c08c); r_esp += 4; return;
L_0063c2b7:; BB(0x0063c2b7);
    /* 0063c2b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c2b9: jmp 0x63c251 */ goto L_0063c251;
}

void f_0063c0d7(void)
{
    FN_ENTER(0x0063c0d7);
    /* 0063c0d7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0063c0de: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c0e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63c0e8u); f_008581c5();
    /* 0063c0e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c0e9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063c0ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c0ee: je 0x63c2a9 */ if (fZ) goto L_0063c2a9;
L_0063c0f4:; BB(0x0063c0f4);
    /* 0063c0f4: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0063c0fb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063c102: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063c105: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063c107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c10a: push 0x9c6834 */ { u32 v = 0x9c6834u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c10f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c111: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x63c116u); f_005b7a84();
    /* 0063c116: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063c119: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0063c120:; BB(0x0063c120);
    /* 0063c120: mov dword ptr [0xa8f1d0], ecx */ W32((u32)(0xa8f1d0u), r_ecx);
    /* 0063c126: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063c12d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c12f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63c134u); f_005b8610();
    /* 0063c134: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c137: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63c13cu); f_0078e9b0();
    /* 0063c13c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0063c13f: mov dword ptr [0xa8f1cc], 0 */ W32((u32)(0xa8f1ccu), 0x0u);
    /* 0063c149: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0063c14e: mov dword ptr [0xa8f1c8], edx */ W32((u32)(0xa8f1c8u), r_edx);
    /* 0063c154: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c155: mov dword ptr [0xa8f1c4], ecx */ W32((u32)(0xa8f1c4u), r_ecx);
    /* 0063c15b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c15c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c15d: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x63c162u); f_0066f3d4();
    /* 0063c162: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063c165: mov dword ptr [0xa8f1d4], eax */ W32((u32)(0xa8f1d4u), r_eax);
    /* 0063c16a: jmp 0x63c29b */ goto L_0063c29b;
L_0063c29b:; BB(0x0063c29b);
    /* 0063c29b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c29e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063c2a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c2a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c2a8: ret  */ FN_RET(0x0063c0d7); r_esp += 4; return;
L_0063c2a9:; BB(0x0063c2a9);
    /* 0063c2a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c2ab: jmp 0x63c120 */ goto L_0063c120;
}

void f_0063c16f(void)
{
    FN_ENTER(0x0063c16f);
    /* 0063c16f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0063c176: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c17b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63c180u); f_008581c5();
    /* 0063c180: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c181: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0063c184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c186: je 0x63c2b0 */ if (fZ) goto L_0063c2b0;
L_0063c18c:; BB(0x0063c18c);
    /* 0063c18c: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0063c193: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063c19a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0063c19d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063c19f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1a2: push 0x9c681c */ { u32 v = 0x9c681cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1a9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x63c1aeu); f_005b7a84();
    /* 0063c1ae: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0063c1b1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0063c1b8:; BB(0x0063c1b8);
    /* 0063c1b8: mov dword ptr [0xa8f1d0], ecx */ W32((u32)(0xa8f1d0u), r_ecx);
    /* 0063c1be: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063c1c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1c7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63c1ccu); f_005b8610();
    /* 0063c1cc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1cf: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63c1d4u); f_0078e9b0();
    /* 0063c1d4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0063c1d7: mov dword ptr [0xa8f1cc], 0 */ W32((u32)(0xa8f1ccu), 0x0u);
    /* 0063c1e1: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0063c1e6: mov dword ptr [0xa8f1c8], edx */ W32((u32)(0xa8f1c8u), r_edx);
    /* 0063c1ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1ed: mov dword ptr [0xa8f1c4], ecx */ W32((u32)(0xa8f1c4u), r_ecx);
    /* 0063c1f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1f6: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x63c1fbu); f_0066f3d4();
    /* 0063c1fb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063c1fe: mov dword ptr [0xa8f1d4], eax */ W32((u32)(0xa8f1d4u), r_eax);
    /* 0063c203: jmp 0x63c29b */ goto L_0063c29b;
L_0063c29b:; BB(0x0063c29b);
    /* 0063c29b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c29e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063c2a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c2a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c2a8: ret  */ FN_RET(0x0063c16f); r_esp += 4; return;
L_0063c2b0:; BB(0x0063c2b0);
    /* 0063c2b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c2b2: jmp 0x63c1b8 */ goto L_0063c1b8;
}

void f_0063c208(void)
{
    FN_ENTER(0x0063c208);
    /* 0063c208: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063c20f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c214: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63c219u); f_008581c5();
    /* 0063c219: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c21a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063c21d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c21f: je 0x63c2b7 */ if (fZ) goto L_0063c2b7;
L_0063c225:; BB(0x0063c225);
    /* 0063c225: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063c22c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0063c233: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c236: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063c238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c23a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c23b: push 0x9c6804 */ { u32 v = 0x9c6804u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c240: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c242: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x63c247u); f_005b7a84();
    /* 0063c247: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c24a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063c251:; BB(0x0063c251);
    /* 0063c251: mov dword ptr [0xa8f1d0], ecx */ W32((u32)(0xa8f1d0u), r_ecx);
    /* 0063c257: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063c25e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c260: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63c265u); f_005b8610();
    /* 0063c265: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c267: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c268: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63c26du); f_0078e9b0();
    /* 0063c26d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0063c270: mov dword ptr [0xa8f1cc], 0 */ W32((u32)(0xa8f1ccu), 0x0u);
    /* 0063c27a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0063c27f: mov dword ptr [0xa8f1c8], edx */ W32((u32)(0xa8f1c8u), r_edx);
    /* 0063c285: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c286: mov dword ptr [0xa8f1c4], ecx */ W32((u32)(0xa8f1c4u), r_ecx);
    /* 0063c28c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c28d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c28e: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x63c293u); f_0066f3d4();
    /* 0063c293: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063c296: mov dword ptr [0xa8f1d4], eax */ W32((u32)(0xa8f1d4u), r_eax);
    /* 0063c29b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c29e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063c2a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c2a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c2a8: ret  */ FN_RET(0x0063c208); r_esp += 4; return;
L_0063c2b7:; BB(0x0063c2b7);
    /* 0063c2b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c2b9: jmp 0x63c251 */ goto L_0063c251;
}

void f_0063c2bc(void) /* sub_63C2BC */
{
    FN_ENTER(0x0063c2bc);
    /* 0063c2bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c2bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c2be: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063c2c0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63c2c5u); f_0082d7b0();
    /* 0063c2c5: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0063c2c8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63c2cdu); f_0082d838();
    /* 0063c2cd: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0063c2d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c2d2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63c2d7u); f_0082d8bc();
    /* 0063c2d7: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 0063c2da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063c2dd: fld dword ptr [ebx + 0x34c] */ FPUSH(R_F32((u32)(r_ebx+0x34cu)));
    /* 0063c2e3: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 0063c2e6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0063c2e9: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c2ec: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0063c2f0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0063c2f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c2f5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063c2f9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63c2feu); f_00830b74();
    /* 0063c2fe: mov eax, 1 */ r_eax = 0x1u;
    /* 0063c303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c305: call 0x50212c */ r_esp -= 4; W32(r_esp, 0x63c30au); f_0050212c();
    /* 0063c30a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c30d: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0063c310: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63c315u); f_00829cc8();
    /* 0063c315: push 0x38e */ { u32 v = 0x38eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c31a: call 0x5022dc */ r_esp -= 4; W32(r_esp, 0x63c31fu); f_005022dc();
    /* 0063c31f: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c322: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63c327u); f_008321d8();
    /* 0063c327: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c32a: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x63c32fu); f_005022a0();
    /* 0063c32f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63c334u); f_0082d7b0();
    /* 0063c334: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 0063c337: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063c33a: fld dword ptr [ebx + 0x350] */ FPUSH(R_F32((u32)(r_ebx+0x350u)));
    /* 0063c340: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 0063c343: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0063c346: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c349: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0063c34d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0063c350: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c352: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063c356: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63c35bu); f_00830b74();
    /* 0063c35b: mov eax, 1 */ r_eax = 0x1u;
    /* 0063c360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c362: call 0x50212c */ r_esp -= 4; W32(r_esp, 0x63c367u); f_0050212c();
    /* 0063c367: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c36a: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0063c36d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63c372u); f_00829cc8();
    /* 0063c372: push 0x38e */ { u32 v = 0x38eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c377: call 0x5022dc */ r_esp -= 4; W32(r_esp, 0x63c37cu); f_005022dc();
    /* 0063c37c: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c37f: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63c384u); f_008321d8();
    /* 0063c384: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c387: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x63c38cu); f_005022a0();
    /* 0063c38c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63c391u); f_0082dbac();
    /* 0063c391: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63c396u); f_0082d7b0();
    /* 0063c396: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 0063c399: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0063c39c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63c3a1u); f_0082d838();
    /* 0063c3a1: mov eax, 1 */ r_eax = 0x1u;
    /* 0063c3a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3a8: call 0x50212c */ r_esp -= 4; W32(r_esp, 0x63c3adu); f_0050212c();
    /* 0063c3ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c3b0: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0063c3b3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63c3b8u); f_00829cc8();
    /* 0063c3b8: push 0x38e */ { u32 v = 0x38eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3bd: call 0x5022dc */ r_esp -= 4; W32(r_esp, 0x63c3c2u); f_005022dc();
    /* 0063c3c2: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c3c5: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63c3cau); f_008321d8();
    /* 0063c3ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c3cd: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x63c3d2u); f_005022a0();
    /* 0063c3d2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63c3d7u); f_0082da80();
    /* 0063c3d7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63c3dcu); f_0082d7b0();
    /* 0063c3dc: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0063c3df: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0063c3e2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63c3e7u); f_0082d838();
    /* 0063c3e7: mov edx, dword ptr [ebx + 0x354] */ r_edx = R32((u32)(r_ebx+0x354u));
    /* 0063c3ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c3ef: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63c3f4u); f_0082d8bc();
    /* 0063c3f4: mov eax, 1 */ r_eax = 0x1u;
    /* 0063c3f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3fb: call 0x50212c */ r_esp -= 4; W32(r_esp, 0x63c400u); f_0050212c();
    /* 0063c400: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c403: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0063c406: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63c40bu); f_00829cc8();
    /* 0063c40b: push 0x38e */ { u32 v = 0x38eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c410: call 0x5022dc */ r_esp -= 4; W32(r_esp, 0x63c415u); f_005022dc();
    /* 0063c415: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c418: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63c41du); f_008321d8();
    /* 0063c41d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c420: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x63c425u); f_005022a0();
    /* 0063c425: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63c42au); f_0082da80();
    /* 0063c42a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63c42fu); f_0082dab0();
    /* 0063c42f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63c434u); f_0082da80();
    /* 0063c434: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63c439u); f_0082da80();
    /* 0063c439: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c43a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c43b: ret  */ FN_RET(0x0063c2bc); r_esp += 4; return;
}

void f_0063c43c(void) /* sub_63C43C */
{
    FN_ENTER(0x0063c43c);
    /* 0063c43c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063c43d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c43e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063c440: mov eax, dword ptr [0xa8f1d4] */ r_eax = R32((u32)(0xa8f1d4u));
    /* 0063c445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c447: je 0x63c461 */ if (fZ) goto L_0063c461;
L_0063c449:; BB(0x0063c449);
    /* 0063c449: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c44b: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x63c450u); f_00835f78();
    /* 0063c450: push dword ptr [0xa8f1c4] */ { u32 v = R32((u32)(0xa8f1c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c456: mov ecx, dword ptr [0xa8f1d4] */ r_ecx = R32((u32)(0xa8f1d4u));
    /* 0063c45c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063c45e: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x63c461u); call_ind(t); }
L_0063c461:; BB(0x0063c461);
    /* 0063c461: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63c466u); f_0082d7b0();
    /* 0063c466: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0063c469: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63c46eu); f_00829cc8();
    /* 0063c46e: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0063c471: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63c476u); f_0082d838();
    /* 0063c476: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0063c479: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c47b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63c480u); f_0082d8bc();
    /* 0063c480: mov edi, dword ptr [ebx + 0x34] */ r_edi = R32((u32)(r_ebx+0x34u));
    /* 0063c483: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0063c486: fld dword ptr [ebx + 0x34c] */ FPUSH(R_F32((u32)(r_ebx+0x34cu)));
    /* 0063c48c: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 0063c48f: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0063c492: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c495: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0063c499: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0063c49c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c49e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063c4a2: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63c4a7u); f_00830b74();
    /* 0063c4a7: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c4aa: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63c4afu); f_008321d8();
    /* 0063c4af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c4b0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63c4b5u); f_0082d7b0();
    /* 0063c4b5: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0063c4b8: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0063c4bb: fld dword ptr [ebx + 0x350] */ FPUSH(R_F32((u32)(r_ebx+0x350u)));
    /* 0063c4c1: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 0063c4c4: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0063c4c7: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c4ca: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0063c4ce: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0063c4d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c4d3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063c4d7: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63c4dcu); f_00830b74();
    /* 0063c4dc: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c4df: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63c4e4u); f_008321d8();
    /* 0063c4e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c4e5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63c4eau); f_0082dbac();
    /* 0063c4ea: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63c4efu); f_0082d7b0();
    /* 0063c4ef: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0063c4f2: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0063c4f5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63c4fau); f_0082d838();
    /* 0063c4fa: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c4fd: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63c502u); f_008321d8();
    /* 0063c502: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c503: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63c508u); f_0082da80();
    /* 0063c508: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63c50du); f_0082d7b0();
    /* 0063c50d: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0063c510: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0063c513: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63c518u); f_0082d838();
    /* 0063c518: mov edx, dword ptr [ebx + 0x354] */ r_edx = R32((u32)(r_ebx+0x354u));
    /* 0063c51e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c520: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63c525u); f_0082d8bc();
    /* 0063c525: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c528: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63c52du); f_008321d8();
    /* 0063c52d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c52e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63c533u); f_0082da80();
    /* 0063c533: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63c538u); f_0082dab0();
    /* 0063c538: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63c53du); f_0082da80();
    /* 0063c53d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63c542u); f_0082da80();
    /* 0063c542: mov ecx, dword ptr [0xa8f1d4] */ r_ecx = R32((u32)(0xa8f1d4u));
    /* 0063c548: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c54a: je 0x63c556 */ if (fZ) goto L_0063c556;
L_0063c54c:; BB(0x0063c54c);
    /* 0063c54c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063c54e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x63c551u); call_ind(t); }
    /* 0063c551: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x63c556u); f_0083603c();
L_0063c556:; BB(0x0063c556);
    /* 0063c556: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c557: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063c558: ret  */ FN_RET(0x0063c43c); r_esp += 4; return;
}

void f_0063c55c(void) /* sub_63C55C */
{
    FN_ENTER(0x0063c55c);
    /* 0063c55c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063c55d: mov edi, ecx */ r_edi = r_ecx;
    /* 0063c55f: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0063c564: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063c567: je 0x63c5cc */ if (fZ) goto L_0063c5cc;
L_0063c569:; BB(0x0063c569);
    /* 0063c569: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c56e: mov ecx, edi */ r_ecx = r_edi;
    /* 0063c570: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063c572: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c577: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63c57au); call_ind(t); }
    /* 0063c57a: mov dword ptr [edi + 0x348], eax */ W32((u32)(r_edi+0x348u), r_eax);
    /* 0063c580: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063c583: jne 0x63c5ad */ if (!fZ) goto L_0063c5ad;
L_0063c585:; BB(0x0063c585);
    /* 0063c585: mov eax, dword ptr [edi + 0x360] */ r_eax = R32((u32)(r_edi+0x360u));
    /* 0063c58b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c58d: jne 0x63c5b8 */ if (!fZ) goto L_0063c5b8;
L_0063c58f:; BB(0x0063c58f);
    /* 0063c58f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c591: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x63c596u); f_007a94a0();
    /* 0063c596: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c597: mov eax, dword ptr [edi + 0x360] */ r_eax = R32((u32)(r_edi+0x360u));
    /* 0063c59d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c59f: jne 0x63c5af */ if (!fZ) goto L_0063c5af;
L_0063c5a1:; BB(0x0063c5a1);
    /* 0063c5a1: mov ecx, edi */ r_ecx = r_edi;
    /* 0063c5a3: call 0x63c43c */ r_esp -= 4; W32(r_esp, 0x63c5a8u); f_0063c43c();
L_0063c5a8:; BB(0x0063c5a8);
    /* 0063c5a8: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x63c5adu); f_007a94b0();
L_0063c5ad:; BB(0x0063c5ad);
    /* 0063c5ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063c5ae: ret  */ FN_RET(0x0063c55c); r_esp += 4; return;
L_0063c5af:; BB(0x0063c5af);
    /* 0063c5af: mov ecx, edi */ r_ecx = r_edi;
    /* 0063c5b1: call 0x63c2bc */ r_esp -= 4; W32(r_esp, 0x63c5b6u); f_0063c2bc();
    /* 0063c5b6: jmp 0x63c5a8 */ goto L_0063c5a8;
L_0063c5b8:; BB(0x0063c5b8);
    /* 0063c5b8: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x63c5bdu); f_00482a10();
    /* 0063c5bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c5bf: je 0x63c58f */ if (fZ) goto L_0063c58f;
L_0063c5c1:; BB(0x0063c5c1);
    /* 0063c5c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5c2: call 0x506798 */ r_esp -= 4; W32(r_esp, 0x63c5c7u); f_00506798();
    /* 0063c5c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c5c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c5ca: je 0x63c58f */ if (fZ) goto L_0063c58f;
L_0063c5cc:; BB(0x0063c5cc);
    /* 0063c5cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063c5cd: ret  */ FN_RET(0x0063c55c); r_esp += 4; return;
}

void f_0063c5d0(void) /* sub_63C5D0 */
{
    FN_ENTER(0x0063c5d0);
    /* 0063c5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063c5d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5d5: push 0x8e4c90 */ { u32 v = 0x8e4c90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063c5e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063c5e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063c5eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063c5ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063c5f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063c5f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063c5f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063c5fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063c601: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c604: mov dword ptr [eax], 0xb2d7c0 */ W32((u32)(r_eax), 0xb2d7c0u);
    /* 0063c60a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c60b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x63c610u); f_007b4e84();
    /* 0063c610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c611: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c614: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x63c619u); f_007b9c8c();
    /* 0063c619: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063c620: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c623: call 0x63a148 */ r_esp -= 4; W32(r_esp, 0x63c628u); f_0063a148();
    /* 0063c628: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c62b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063c632: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c634: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c635: ret  */ FN_RET(0x0063c5d0); r_esp += 4; return;
}

void f_0063c638(void) /* sub_63C638 */
{
    FN_ENTER(0x0063c638);
    /* 0063c638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c639: mov ebp, esp */ r_ebp = r_esp;
    /* 0063c63b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c63d: push 0x8e4cac */ { u32 v = 0x8e4cacu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c642: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063c648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c649: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063c650: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063c653: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063c656: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063c659: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063c65c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063c65f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063c662: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c665: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063c668: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063c66b: call 0x63a198 */ r_esp -= 4; W32(r_esp, 0x63c670u); f_0063a198();
    /* 0063c670: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063c677: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c67a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063c67d: mov dword ptr [ecx], 0xb2d7c0 */ W32((u32)(r_ecx), 0xb2d7c0u);
    /* 0063c683: mov eax, dword ptr [0x9c6844] */ r_eax = R32((u32)(0x9c6844u));
    /* 0063c688: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c689: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063c68c: call dword ptr [0xb2d7d4] */ { u32 t = R32((u32)(0xb2d7d4u)); r_esp -= 4; W32(r_esp, 0x63c692u); call_ind(t); }
    /* 0063c692: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c695: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0063c698: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0063c69b: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0063c69e: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0063c6a4: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0063c6aa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c6ad: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0063c6b3: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0063c6b9: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0063c6bf: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0063c6c5: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0063c6cb: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0063c6d1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c6d4: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0063c6da: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c6dd: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0063c6e3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0063c6e6: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0063c6ec: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0063c6ef: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0063c6f5: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0063c6f8: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63c6fdu); f_0077a1f4();
    /* 0063c6fd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c700: mov ebx, dword ptr [0xa8f1d0] */ r_ebx = R32((u32)(0xa8f1d0u));
    /* 0063c706: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c708: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0063c70e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0063c711: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 0063c714: fmul dword ptr [0x934128] */ ST(0) = ST(0) * R_F32((u32)(0x934128u));
    /* 0063c71a: fadd dword ptr [0x934160] */ ST(0) = ST(0) + R_F32((u32)(0x934160u));
    /* 0063c720: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0063c723: push 0x9c684c */ { u32 v = 0x9c684cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c728: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0063c72e: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0063c731: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0063c737: fst dword ptr [ecx + 0x33c] */ W_F32((u32)(r_ecx+0x33cu), ST(0));
    /* 0063c73d: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 0063c743: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0063c746: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063c748: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0063c74f: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0063c756: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c759: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063c75b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063c75d: jg 0x63c761 */ if ((!fZ&&fS==fO)) goto L_0063c761;
L_0063c75f:; BB(0x0063c75f);
    /* 0063c75f: mov edx, eax */ r_edx = r_eax;
L_0063c761:; BB(0x0063c761);
    /* 0063c761: mov dword ptr [ecx + 0x358], edx */ W32((u32)(r_ecx+0x358u), r_edx);
    /* 0063c767: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063c76c: mov dword ptr [ecx + 0x35c], edx */ W32((u32)(r_ecx+0x35cu), r_edx);
    /* 0063c772: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 0063c779: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63c77eu); f_007b9a88();
    /* 0063c77e: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c781: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x63c786u); f_007b999c();
    /* 0063c786: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c787: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c78a: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0063c78d: or eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063c792: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0063c795: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63c79au); f_007b4f54();
    /* 0063c79a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c79d: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0063c7a0: mov dword ptr [edx + 0x350], 0 */ W32((u32)(r_edx+0x350u), 0x0u);
    /* 0063c7aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c7ac: mov dword ptr [edx + 0x34c], 0 */ W32((u32)(r_edx+0x34cu), 0x0u);
    /* 0063c7b6: mov dword ptr [edx + 0x354], 0 */ W32((u32)(r_edx+0x354u), 0x0u);
    /* 0063c7c0: jle 0x63c7e7 */ if ((fZ||fS!=fO)) goto L_0063c7e7;
L_0063c7c2:; BB(0x0063c7c2);
    /* 0063c7c2: mov dword ptr [edx + 0x360], 1 */ W32((u32)(r_edx+0x360u), 0x1u);
L_0063c7cc:; BB(0x0063c7cc);
    /* 0063c7cc: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c7cf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063c7d2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063c7d5: mov eax, edx */ r_eax = r_edx;
    /* 0063c7d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c7da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063c7e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c7e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c7e4: ret 8 */ FN_RET(0x0063c638); r_esp += 12; return;
L_0063c7e7:; BB(0x0063c7e7);
    /* 0063c7e7: mov dword ptr [edx + 0x360], 0 */ W32((u32)(r_edx+0x360u), 0x0u);
    /* 0063c7f1: jmp 0x63c7cc */ goto L_0063c7cc;
}

void f_0063c7f4(void) /* sub_63C7F4 */
{
    FN_ENTER(0x0063c7f4);
    /* 0063c7f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7f6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063c7f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063c7fa: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63c7ffu); f_00770738();
    /* 0063c7ff: mov ebx, eax */ r_ebx = r_eax;
    /* 0063c801: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c803: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c804: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x63c809u); f_006946a8();
    /* 0063c809: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c80c: movsx edx, word ptr [ebp + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0063c813: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c815: jge 0x63c81a */ if ((fS==fO)) goto L_0063c81a;
L_0063c817:; BB(0x0063c817);
    /* 0063c817: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c818: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c819: ret  */ FN_RET(0x0063c7f4); r_esp += 4; return;
L_0063c81a:; BB(0x0063c81a);
    /* 0063c81a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c81d: jg 0x63c830 */ if ((!fZ&&fS==fO)) goto L_0063c830;
L_0063c81f:; BB(0x0063c81f);
    /* 0063c81f: mov edx, 2 */ r_edx = 0x2u;
    /* 0063c824: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 0063c82b: jmp 0x63c8d1 */ goto L_0063c8d1;
L_0063c830:; BB(0x0063c830);
    /* 0063c830: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c833: je 0x63c8d1 */ if (fZ) goto L_0063c8d1;
L_0063c839:; BB(0x0063c839);
    /* 0063c839: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c83c: jne 0x63c879 */ if (!fZ) goto L_0063c879;
L_0063c83e:; BB(0x0063c83e);
    /* 0063c83e: fld dword ptr [ebp + 0x350] */ FPUSH(R_F32((u32)(r_ebp+0x350u)));
    /* 0063c844: fcom dword ptr [0x934120] */ fx_compare(ST(0), R_F32((u32)(0x934120u))); 
    /* 0063c84a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063c84c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063c84d: jbe 0x63c860 */ if ((fC||fZ)) goto L_0063c860;
L_0063c84f:; BB(0x0063c84f);
    /* 0063c84f: fld dword ptr [0x934158] */ FPUSH(R_F32((u32)(0x934158u)));
    /* 0063c855: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0063c857: fstp dword ptr [ebp + 0x350] */ W_F32((u32)(r_ebp+0x350u), ST(0)); FPOP();
    /* 0063c85d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c85e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c85f: ret  */ FN_RET(0x0063c7f4); r_esp += 4; return;
L_0063c860:; BB(0x0063c860);
    /* 0063c860: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063c862: mov eax, 4 */ r_eax = 0x4u;
    /* 0063c867: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0063c86e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c870: mov dword ptr [ebp + 0x350], edx */ W32((u32)(r_ebp+0x350u), r_edx);
    /* 0063c876: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c877: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c878: ret  */ FN_RET(0x0063c7f4); r_esp += 4; return;
L_0063c879:; BB(0x0063c879);
    /* 0063c879: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063c87c: jne 0x63c817 */ if (!fZ) goto L_0063c817;
L_0063c87e:; BB(0x0063c87e);
    /* 0063c87e: fld dword ptr [ebp + 0x34c] */ FPUSH(R_F32((u32)(r_ebp+0x34cu)));
    /* 0063c884: fcom dword ptr [0x934120] */ fx_compare(ST(0), R_F32((u32)(0x934120u))); 
    /* 0063c88a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063c88c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063c88d: jbe 0x63c8a0 */ if ((fC||fZ)) goto L_0063c8a0;
L_0063c88f:; BB(0x0063c88f);
    /* 0063c88f: fld dword ptr [0x934158] */ FPUSH(R_F32((u32)(0x934158u)));
    /* 0063c895: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0063c897: fstp dword ptr [ebp + 0x34c] */ W_F32((u32)(r_ebp+0x34cu), ST(0)); FPOP();
    /* 0063c89d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c89e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c89f: ret  */ FN_RET(0x0063c7f4); r_esp += 4; return;
L_0063c8a0:; BB(0x0063c8a0);
    /* 0063c8a0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063c8a2: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0063c8a7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0063c8a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c8aa: mov word ptr [ebp + 0x32e], bx */ W16((u32)(r_ebp+0x32eu), (u16)r_ebx);
    /* 0063c8b1: mov word ptr [ebp + 0x330], bx */ W16((u32)(r_ebp+0x330u), (u16)r_ebx);
    /* 0063c8b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063c8ba: mov dword ptr [ebp + 0x34c], eax */ W32((u32)(r_ebp+0x34cu), r_eax);
    /* 0063c8c0: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 0063c8c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063c8c9: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63c8ceu); f_007706b0();
    /* 0063c8ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c8cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c8d0: ret  */ FN_RET(0x0063c7f4); r_esp += 4; return;
L_0063c8d1:; BB(0x0063c8d1);
    /* 0063c8d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c8d3: je 0x63c916 */ if (fZ) goto L_0063c916;
L_0063c8d5:; BB(0x0063c8d5);
    /* 0063c8d5: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0063c8d8: mov dword ptr [ebx + 0xd0], 0x3f800000 */ W32((u32)(r_ebx+0xd0u), 0x3f800000u);
    /* 0063c8e2: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0063c8e8: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0063c8eb: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0063c8f1: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0063c8f4: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0063c8fa: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 0063c900: mov edx, dword ptr [ebp + 0x35c] */ r_edx = R32((u32)(r_ebp+0x35cu));
    /* 0063c906: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c909: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c90b: jl 0x63c931 */ if ((fS!=fO)) goto L_0063c931;
L_0063c90d:; BB(0x0063c90d);
    /* 0063c90d: mov dword ptr [ebp + 0x35c], edx */ W32((u32)(r_ebp+0x35cu), r_edx);
    /* 0063c913: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c915: ret  */ FN_RET(0x0063c7f4); r_esp += 4; return;
L_0063c916:; BB(0x0063c916);
    /* 0063c916: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0063c91c: mov eax, 3 */ r_eax = 0x3u;
    /* 0063c921: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0063c928: mov dword ptr [ebp + 0x35c], edx */ W32((u32)(r_ebp+0x35cu), r_edx);
    /* 0063c92e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c92f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c930: ret  */ FN_RET(0x0063c7f4); r_esp += 4; return;
L_0063c931:; BB(0x0063c931);
    /* 0063c931: mov edx, 3 */ r_edx = 0x3u;
    /* 0063c936: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 0063c93d: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0063c943: mov dword ptr [ebp + 0x35c], edx */ W32((u32)(r_ebp+0x35cu), r_edx);
    /* 0063c949: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0063c94d: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0063c953: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063c955: jne 0x63c817 */ if (!fZ) goto L_0063c817;
L_0063c95b:; BB(0x0063c95b);
    /* 0063c95b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c95c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63c961u); f_0068d5a8();
    /* 0063c961: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c964: je 0x63c817 */ if (fZ) goto L_0063c817;
L_0063c96a:; BB(0x0063c96a);
    /* 0063c96a: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 0063c970: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063c973: je 0x63c97c */ if (fZ) goto L_0063c97c;
L_0063c975:; BB(0x0063c975);
    /* 0063c975: mov edx, 1 */ r_edx = 0x1u;
    /* 0063c97a: jmp 0x63c97e */ goto L_0063c97e;
L_0063c97c:; BB(0x0063c97c);
    /* 0063c97c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063c97e:; BB(0x0063c97e);
    /* 0063c97e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c980: je 0x63c817 */ if (fZ) goto L_0063c817;
L_0063c986:; BB(0x0063c986);
    /* 0063c986: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c988: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x63c98du); f_00685514();
    /* 0063c98d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063c98e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c98f: ret  */ FN_RET(0x0063c7f4); r_esp += 4; return;
}

void f_0063c990(void) /* sub_63C990 */
{
    FN_ENTER(0x0063c990);
    /* 0063c990: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063c991: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063c992: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c993: mov edi, ecx */ r_edi = r_ecx;
    /* 0063c995: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c997: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063c998: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x63c99du); f_006946a8();
    /* 0063c99d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c9a0: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0063c9a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0063c9a9: je 0x63cba3 */ if (fZ) goto L_0063cba3;
L_0063c9af:; BB(0x0063c9af);
    /* 0063c9af: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c9b2: je 0x63cb65 */ if (fZ) goto L_0063cb65;
L_0063c9b8:; BB(0x0063c9b8);
    /* 0063c9b8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c9bb: je 0x63ca61 */ if (fZ) goto L_0063ca61;
L_0063c9c1:; BB(0x0063c9c1);
    /* 0063c9c1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c9c4: jne 0x63ca03 */ if (!fZ) goto L_0063ca03;
L_0063c9c6:; BB(0x0063c9c6);
    /* 0063c9c6: fld dword ptr [edi + 0x350] */ FPUSH(R_F32((u32)(r_edi+0x350u)));
    /* 0063c9cc: fcom dword ptr [0x934118] */ fx_compare(ST(0), R_F32((u32)(0x934118u))); 
    /* 0063c9d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063c9d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063c9d5: jbe 0x63c9e9 */ if ((fC||fZ)) goto L_0063c9e9;
L_0063c9d7:; BB(0x0063c9d7);
    /* 0063c9d7: fld dword ptr [0x934158] */ FPUSH(R_F32((u32)(0x934158u)));
    /* 0063c9dd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0063c9df: fstp dword ptr [edi + 0x350] */ W_F32((u32)(r_edi+0x350u), ST(0)); FPOP();
    /* 0063c9e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c9e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063c9e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063c9e8: ret  */ FN_RET(0x0063c990); r_esp += 4; return;
L_0063c9e9:; BB(0x0063c9e9);
    /* 0063c9e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063c9eb: mov eax, 4 */ r_eax = 0x4u;
    /* 0063c9f0: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0063c9f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c9f9: mov dword ptr [edi + 0x350], edx */ W32((u32)(r_edi+0x350u), r_edx);
    /* 0063c9ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ca00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ca01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063ca02: ret  */ FN_RET(0x0063c990); r_esp += 4; return;
L_0063ca03:; BB(0x0063ca03);
    /* 0063ca03: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063ca06: jne 0x63cb56 */ if (!fZ) goto L_0063cb56;
L_0063ca0c:; BB(0x0063ca0c);
    /* 0063ca0c: fld dword ptr [edi + 0x34c] */ FPUSH(R_F32((u32)(r_edi+0x34cu)));
    /* 0063ca12: fcom dword ptr [0x934118] */ fx_compare(ST(0), R_F32((u32)(0x934118u))); 
    /* 0063ca18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063ca1a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063ca1b: jbe 0x63ca2f */ if ((fC||fZ)) goto L_0063ca2f;
L_0063ca1d:; BB(0x0063ca1d);
    /* 0063ca1d: fld dword ptr [0x934158] */ FPUSH(R_F32((u32)(0x934158u)));
    /* 0063ca23: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0063ca25: fstp dword ptr [edi + 0x34c] */ W_F32((u32)(r_edi+0x34cu), ST(0)); FPOP();
    /* 0063ca2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ca2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ca2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063ca2e: ret  */ FN_RET(0x0063c990); r_esp += 4; return;
L_0063ca2f:; BB(0x0063ca2f);
    /* 0063ca2f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063ca31: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0063ca36: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0063ca38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca39: mov word ptr [edi + 0x32e], bp */ W16((u32)(r_edi+0x32eu), (u16)r_ebp);
    /* 0063ca40: mov word ptr [edi + 0x330], bp */ W16((u32)(r_edi+0x330u), (u16)r_ebp);
    /* 0063ca47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063ca49: mov dword ptr [edi + 0x34c], eax */ W32((u32)(r_edi+0x34cu), r_eax);
    /* 0063ca4f: mov word ptr [edi + 0x344], dx */ W16((u32)(r_edi+0x344u), (u16)r_edx);
    /* 0063ca56: mov ecx, edi */ r_ecx = r_edi;
    /* 0063ca58: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63ca5du); f_007706b0();
    /* 0063ca5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ca5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ca5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063ca60: ret  */ FN_RET(0x0063c990); r_esp += 4; return;
L_0063ca61:; BB(0x0063ca61);
    /* 0063ca61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca63: push dword ptr [edi + 0x33c] */ { u32 v = R32((u32)(r_edi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ca69: mov ecx, edi */ r_ecx = r_edi;
    /* 0063ca6b: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x63ca70u); f_007714cc();
    /* 0063ca70: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0063ca77: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0063ca7a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ca7f: je 0x63cb5a */ if (fZ) goto L_0063cb5a;
L_0063ca85:; BB(0x0063ca85);
    /* 0063ca85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca86: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63ca8bu); f_0068d5a8();
    /* 0063ca8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ca8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca8d: mov ecx, edi */ r_ecx = r_edi;
    /* 0063ca8f: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63ca94u); f_007706b0();
    /* 0063ca94: mov ecx, edi */ r_ecx = r_edi;
    /* 0063ca96: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63ca9bu); f_00770738();
    /* 0063ca9b: mov esi, eax */ r_esi = r_eax;
    /* 0063ca9d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ca9f: je 0x63cb3f */ if (fZ) goto L_0063cb3f;
L_0063caa5:; BB(0x0063caa5);
    /* 0063caa5: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0063caa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063caa9: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0063caac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063caad: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x63cab2u); f_007a9180();
    /* 0063cab2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063cab5: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0063cabb: fld dword ptr [edi + 0x33c] */ FPUSH(R_F32((u32)(r_edi+0x33cu)));
    /* 0063cac1: fsub dword ptr [edx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0xcu));
    /* 0063cac4: fst dword ptr [edi + 0x340] */ W_F32((u32)(r_edi+0x340u), ST(0));
    /* 0063caca: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0063cacc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0063cace: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0063cad0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063cad2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063cad4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063cad6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063cad7: jbe 0x63cb28 */ if ((fC||fZ)) goto L_0063cb28;
L_0063cad9:; BB(0x0063cad9);
    /* 0063cad9: movzx edx, word ptr [edi + 0x344] */ r_edx = (u32)R16((u32)(r_edi+0x344u));
    /* 0063cae0: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063cae6: je 0x63caec */ if (fZ) goto L_0063caec;
L_0063cae8:; BB(0x0063cae8);
    /* 0063cae8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063caea: jmp 0x63cb0e */ goto L_0063cb0e;
L_0063caec:; BB(0x0063caec);
    /* 0063caec: mov edx, dword ptr [edi + 0x35c] */ r_edx = R32((u32)(r_edi+0x35cu));
    /* 0063caf2: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063caf5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0063caf9: mov ecx, esi */ r_ecx = r_esi;
    /* 0063cafb: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0063cafe: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063cb02: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0063cb04: mov word ptr [esp + 0xc], bp */ W16((u32)(r_esp+0xcu), (u16)r_ebp);
    /* 0063cb09: call 0x6937c8 */ r_esp -= 4; W32(r_esp, 0x63cb0eu); f_006937c8();
L_0063cb0e:; BB(0x0063cb0e);
    /* 0063cb0e: mov eax, 3 */ r_eax = 0x3u;
    /* 0063cb13: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0063cb1a: mov edx, 2 */ r_edx = 0x2u;
    /* 0063cb1f: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 0063cb26: jmp 0x63cb3f */ goto L_0063cb3f;
L_0063cb28:; BB(0x0063cb28);
    /* 0063cb28: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063cb2a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063cb2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb31: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0063cb38: mov ecx, edi */ r_ecx = r_edi;
    /* 0063cb3a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63cb3fu); f_007706b0();
L_0063cb3f:; BB(0x0063cb3f);
    /* 0063cb3f: mov ecx, edi */ r_ecx = r_edi;
    /* 0063cb41: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63cb46u); f_00770738();
    /* 0063cb46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063cb48: jne 0x63cb56 */ if (!fZ) goto L_0063cb56;
L_0063cb4a:; BB(0x0063cb4a);
    /* 0063cb4a: mov eax, 3 */ r_eax = 0x3u;
    /* 0063cb4f: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
L_0063cb56:; BB(0x0063cb56);
    /* 0063cb56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063cb57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063cb58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063cb59: ret  */ FN_RET(0x0063c990); r_esp += 4; return;
L_0063cb5a:; BB(0x0063cb5a);
    /* 0063cb5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb5c: mov ecx, edi */ r_ecx = r_edi;
    /* 0063cb5e: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63cb63u); f_007706b0();
    /* 0063cb63: jmp 0x63cb3f */ goto L_0063cb3f;
L_0063cb65:; BB(0x0063cb65);
    /* 0063cb65: fld dword ptr [0x934158] */ FPUSH(R_F32((u32)(0x934158u)));
    /* 0063cb6b: fadd dword ptr [edi + 0x350] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x350u));
    /* 0063cb71: fcom dword ptr [0x93413c] */ fx_compare(ST(0), R_F32((u32)(0x93413cu))); 
    /* 0063cb77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063cb79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063cb7a: jb 0x63cb99 */ if (fC) goto L_0063cb99;
L_0063cb7c:; BB(0x0063cb7c);
    /* 0063cb7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063cb7e: mov edx, 0x41226666 */ r_edx = 0x41226666u;
    /* 0063cb83: mov eax, 2 */ r_eax = 0x2u;
    /* 0063cb88: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0063cb8f: mov dword ptr [edi + 0x350], edx */ W32((u32)(r_edi+0x350u), r_edx);
    /* 0063cb95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063cb96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063cb97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063cb98: ret  */ FN_RET(0x0063c990); r_esp += 4; return;
L_0063cb99:; BB(0x0063cb99);
    /* 0063cb99: fstp dword ptr [edi + 0x350] */ W_F32((u32)(r_edi+0x350u), ST(0)); FPOP();
    /* 0063cb9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063cba0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063cba1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063cba2: ret  */ FN_RET(0x0063c990); r_esp += 4; return;
L_0063cba3:; BB(0x0063cba3);
    /* 0063cba3: fld dword ptr [edi + 0x34c] */ FPUSH(R_F32((u32)(r_edi+0x34cu)));
    /* 0063cba9: fcom dword ptr [0x934138] */ fx_compare(ST(0), R_F32((u32)(0x934138u))); 
    /* 0063cbaf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063cbb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063cbb2: jae 0x63cbc6 */ if (!fC) goto L_0063cbc6;
L_0063cbb4:; BB(0x0063cbb4);
    /* 0063cbb4: fld dword ptr [0x934158] */ FPUSH(R_F32((u32)(0x934158u)));
    /* 0063cbba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0063cbbc: fstp dword ptr [edi + 0x34c] */ W_F32((u32)(r_edi+0x34cu), ST(0)); FPOP();
    /* 0063cbc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063cbc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063cbc4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063cbc5: ret  */ FN_RET(0x0063c990); r_esp += 4; return;
L_0063cbc6:; BB(0x0063cbc6);
    /* 0063cbc6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063cbc8: mov edx, 0x40e00000 */ r_edx = 0x40e00000u;
    /* 0063cbcd: mov eax, 1 */ r_eax = 0x1u;
    /* 0063cbd2: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0063cbd9: mov dword ptr [edi + 0x34c], edx */ W32((u32)(r_edi+0x34cu), r_edx);
    /* 0063cbdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063cbe0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063cbe1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063cbe2: ret  */ FN_RET(0x0063c990); r_esp += 4; return;
}

void f_0063cbe4(void) /* sub_63CBE4 */
{
    FN_ENTER(0x0063cbe4);
    /* 0063cbe4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063cbe5: mov esi, ecx */ r_esi = r_ecx;
    /* 0063cbe7: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 0063cbed: cmp edx, dword ptr [0xa8f1cc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa8f1ccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063cbf3: je 0x63cc17 */ if (fZ) goto L_0063cc17;
L_0063cbf5:; BB(0x0063cbf5);
    /* 0063cbf5: mov eax, dword ptr [0xa8f1c8] */ r_eax = R32((u32)(0xa8f1c8u));
    /* 0063cbfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063cbfc: je 0x63cc17 */ if (fZ) goto L_0063cc17;
L_0063cbfe:; BB(0x0063cbfe);
    /* 0063cbfe: mov ecx, dword ptr [0xa8f1d4] */ r_ecx = R32((u32)(0xa8f1d4u));
    /* 0063cc04: mov dword ptr [0xa8f1cc], edx */ W32((u32)(0xa8f1ccu), r_edx);
    /* 0063cc0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063cc0c: je 0x63cc17 */ if (fZ) goto L_0063cc17;
L_0063cc0e:; BB(0x0063cc0e);
    /* 0063cc0e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc12: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063cc14: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x63cc17u); call_ind(t); }
L_0063cc17:; BB(0x0063cc17);
    /* 0063cc17: mov eax, dword ptr [esi + 0x354] */ r_eax = R32((u32)(r_esi+0x354u));
    /* 0063cc1d: add eax, 0x888 */ {  u32 a = r_eax; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063cc22: mov dword ptr [esi + 0x354], eax */ W32((u32)(r_esi+0x354u), r_eax);
    /* 0063cc28: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0063cc2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063cc31: jle 0x63cca9 */ if ((fZ||fS!=fO)) goto L_0063cca9;
L_0063cc33:; BB(0x0063cc33);
    /* 0063cc33: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063cc36: jg 0x63cca9 */ if ((!fZ&&fS==fO)) goto L_0063cca9;
L_0063cc38:; BB(0x0063cc38);
    /* 0063cc38: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x63cc3du); f_00807ac0();
    /* 0063cc3d: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063cc40: ja 0x63cca9 */ if ((!fC&&!fZ)) goto L_0063cca9;
L_0063cc42:; BB(0x0063cc42);
    /* 0063cc42: mov eax, dword ptr [eax*4 + 0x9340a0] */ r_eax = R32((u32)(r_eax*4+0x9340a0u));
    /* 0063cc49: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0063cca9:; BB(0x0063cca9);
    /* 0063cca9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ccaa: ret  */ FN_RET(0x0063cbe4); r_esp += 4; return;
}

void f_0063cc4b(void)
{
    FN_ENTER(0x0063cc4b);
    /* 0063cc4b: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0063cc4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063cc50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc54: push 0x4b5 */ { u32 v = 0x4b5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc59: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63cc5eu); f_008144b0();
    /* 0063cc5e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063cc61: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063cc62: ret  */ FN_RET(0x0063cc4b); r_esp += 4; return;
}

void f_0063cc63(void)
{
    FN_ENTER(0x0063cc63);
    /* 0063cc63: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0063cc66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063cc68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc6c: push 0x489 */ { u32 v = 0x489u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc71: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63cc76u); f_008144b0();
    /* 0063cc76: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063cc79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063cc7a: ret  */ FN_RET(0x0063cc63); r_esp += 4; return;
}

void f_0063cc7b(void)
{
    FN_ENTER(0x0063cc7b);
    /* 0063cc7b: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0063cc7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063cc80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc84: push 0x46b */ { u32 v = 0x46bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc89: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63cc8eu); f_008144b0();
    /* 0063cc8e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063cc91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063cc92: ret  */ FN_RET(0x0063cc7b); r_esp += 4; return;
}

void f_0063cc93(void)
{
    FN_ENTER(0x0063cc93);
    /* 0063cc93: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0063cc96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063cc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc9c: push 0x456 */ { u32 v = 0x456u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cca1: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63cca6u); f_008144b0();
    /* 0063cca6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063cca9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ccaa: ret  */ FN_RET(0x0063cc93); r_esp += 4; return;
}

void f_0063cca9(void)
{
    FN_ENTER(0x0063cca9);
    /* 0063cca9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ccaa: ret  */ FN_RET(0x0063cca9); r_esp += 4; return;
}

void f_0063ccac(void) /* sub_63CCAC */
{
    FN_ENTER(0x0063ccac);
    /* 0063ccac: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccb1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063ccb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccb5: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x63ccb8u); call_ind(t); }
    /* 0063ccb8: ret 8 */ FN_RET(0x0063ccac); r_esp += 12; return;
}

void f_0063ccbc(void) /* sub_63CCBC */
{
    FN_ENTER(0x0063ccbc);
    /* 0063ccbc: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccc1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063ccc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccc5: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x63ccc8u); call_ind(t); }
    /* 0063ccc8: ret 0x18 */ FN_RET(0x0063ccbc); r_esp += 28; return;
}

void f_0063cccc(void) /* sub_63CCCC */
{
    FN_ENTER(0x0063cccc);
    /* 0063cccc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063ccce: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x63ccd4u); call_ind(t); }
    /* 0063ccd4: ret  */ FN_RET(0x0063cccc); r_esp += 4; return;
}

void f_0063ccd8(void) /* sub_63CCD8 */
{
    FN_ENTER(0x0063ccd8);
    /* 0063ccd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccd9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063ccdb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063ccdd: call 0x63b564 */ r_esp -= 4; W32(r_esp, 0x63cce2u); f_0063b564();
    /* 0063cce2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063cce6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063cce8: jne 0x63ccee */ if (!fZ) goto L_0063ccee;
L_0063ccea:; BB(0x0063ccea);
    /* 0063ccea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063cceb: ret 4 */ FN_RET(0x0063ccd8); r_esp += 8; return;
L_0063ccee:; BB(0x0063ccee);
    /* 0063ccee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63ccf4u); f_005c2f74();
    /* 0063ccf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ccf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063ccf6: ret 4 */ FN_RET(0x0063ccd8); r_esp += 8; return;
}

void f_0063ccfc(void) /* sub_63CCFC */
{
    FN_ENTER(0x0063ccfc);
    /* 0063ccfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063ccff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063cd01: call 0x63c5d0 */ r_esp -= 4; W32(r_esp, 0x63cd06u); f_0063c5d0();
    /* 0063cd06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063cd0a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063cd0c: jne 0x63cd12 */ if (!fZ) goto L_0063cd12;
L_0063cd0e:; BB(0x0063cd0e);
    /* 0063cd0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063cd0f: ret 4 */ FN_RET(0x0063ccfc); r_esp += 8; return;
L_0063cd12:; BB(0x0063cd12);
    /* 0063cd12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cd13: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63cd18u); f_005c2f74();
    /* 0063cd18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063cd19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063cd1a: ret 4 */ FN_RET(0x0063ccfc); r_esp += 8; return;
}

void f_0063cd20(void) /* sub_63CD20 */
{
    FN_ENTER(0x0063cd20);
    /* 0063cd20: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063cd22: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0063cd25: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_0063cd28(void) /* sub_63CD28 */
{
    FN_ENTER(0x0063cd28);
    /* 0063cd28: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063cd2a: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0063cd2d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_0063cd30(void) /* sub_63CD30 */
{
    FN_ENTER(0x0063cd30);
    /* 0063cd30: mov dword ptr [0xa8f1ec], 0x3f800000 */ W32((u32)(0xa8f1ecu), 0x3f800000u);
    /* 0063cd3a: mov dword ptr [0xa8f1f0], 0x41000000 */ W32((u32)(0xa8f1f0u), 0x41000000u);
    /* 0063cd44: mov dword ptr [0xa8f1f4], 0x3fc00000 */ W32((u32)(0xa8f1f4u), 0x3fc00000u);
    /* 0063cd4e: ret  */ FN_RET(0x0063cd30); r_esp += 4; return;
}

void f_0063cd50(void) /* sub_63CD50 */
{
    FN_ENTER(0x0063cd50);
    /* 0063cd50: mov eax, dword ptr [ecx + 0xf0] */ r_eax = R32((u32)(r_ecx+0xf0u));
    /* 0063cd56: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063cd59: jne 0x63cd5c */ if (!fZ) goto L_0063cd5c;
L_0063cd5b:; BB(0x0063cd5b);
    /* 0063cd5b: ret  */ FN_RET(0x0063cd50); r_esp += 4; return;
L_0063cd5c:; BB(0x0063cd5c);
    /* 0063cd5c: call 0x63dcd0 */ r_esp -= 4; W32(r_esp, 0x63cd61u); f_0063dcd0();
    /* 0063cd61: ret  */ FN_RET(0x0063cd50); r_esp += 4; return;
}

void f_0063cd64(void) /* sub_63CD64 */
{
    FN_ENTER(0x0063cd64);
    /* 0063cd64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063cd65: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063cd67: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x63cd6cu); f_00835068();
    /* 0063cd6c: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0063cd6f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63cd74u); f_00829cc8();
    /* 0063cd74: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63cd79u); f_0082d7b0();
    /* 0063cd79: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0063cd7c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63cd81u); f_0082d838();
    /* 0063cd81: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63cd86u); f_0082d7b0();
    /* 0063cd86: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0063cd89: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cd8b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63cd90u); f_0082d8bc();
    /* 0063cd90: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 0063cd96: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cd98: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63cd9du); f_0082d8bc();
    /* 0063cd9d: push 0x63d0e0 */ { u32 v = 0x63d0e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cda2: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x63cda7u); f_0083a308();
    /* 0063cda7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063cda8: push dword ptr [ebp + 0xb4] */ { u32 v = R32((u32)(r_ebp+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063cdae: mov ecx, dword ptr [ebp + 0xc8] */ r_ecx = R32((u32)(r_ebp+0xc8u));
    /* 0063cdb4: mov edx, dword ptr [ebp + 0xbc] */ r_edx = R32((u32)(r_ebp+0xbcu));
    /* 0063cdba: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x63cdbfu); f_00835574();
    /* 0063cdbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdc1: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x63cdc6u); f_0083a308();
    /* 0063cdc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063cdc7: mov eax, dword ptr [ebp + 0xf0] */ r_eax = R32((u32)(r_ebp+0xf0u));
    /* 0063cdcd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063cdd0: je 0x63cde8 */ if (fZ) goto L_0063cde8;
L_0063cdd2:; BB(0x0063cdd2);
    /* 0063cdd2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63cdd7u); f_0082da80();
    /* 0063cdd7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63cddcu); f_0082da80();
    /* 0063cddc: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63cde1u); f_0082dab0();
    /* 0063cde1: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x63cde6u); f_00835078();
    /* 0063cde6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063cde7: ret  */ FN_RET(0x0063cd64); r_esp += 4; return;
L_0063cde8:; BB(0x0063cde8);
    /* 0063cde8: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63cdedu); f_0082dbac();
    /* 0063cded: push dword ptr [ebp + 0x104] */ { u32 v = R32((u32)(r_ebp+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063cdf3: mov ecx, dword ptr [ebp + 0xfc] */ r_ecx = R32((u32)(r_ebp+0xfcu));
    /* 0063cdf9: mov edx, dword ptr [ebp + 0x100] */ r_edx = R32((u32)(r_ebp+0x100u));
    /* 0063cdff: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x63ce04u); f_00835574();
    /* 0063ce04: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63ce09u); f_0082dab0();
    /* 0063ce09: jmp 0x63cdd2 */ goto L_0063cdd2;
}

void f_0063ce0c(void) /* sub_63CE0C */
{
    FN_ENTER(0x0063ce0c);
    /* 0063ce0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce0e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ce11: mov edi, ecx */ r_edi = r_ecx;
    /* 0063ce13: mov ecx, edi */ r_ecx = r_edi;
    /* 0063ce15: call 0x63da54 */ r_esp -= 4; W32(r_esp, 0x63ce1au); f_0063da54();
    /* 0063ce1a: fld dword ptr [edi + 0x104] */ FPUSH(R_F32((u32)(r_edi+0x104u)));
    /* 0063ce20: fadd dword ptr [edi + 0x108] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x108u));
    /* 0063ce26: mov edx, dword ptr [edi + 0x100] */ r_edx = R32((u32)(r_edi+0x100u));
    /* 0063ce2c: fst dword ptr [edi + 0x104] */ W_F32((u32)(r_edi+0x104u), ST(0));
    /* 0063ce32: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 0063ce35: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0063ce38: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0063ce3b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0063ce3e: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0063ce41: fadd dword ptr [ebp*4 + 0x934250] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x934250u));
    /* 0063ce48: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0063ce4a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063ce4c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063ce4d: jae 0x63ce59 */ if (!fC) goto L_0063ce59;
L_0063ce4f:; BB(0x0063ce4f);
    /* 0063ce4f: mov dword ptr [edi + 0x104], 0 */ W32((u32)(r_edi+0x104u), 0x0u);
L_0063ce59:; BB(0x0063ce59);
    /* 0063ce59: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce5b: mov ecx, edi */ r_ecx = r_edi;
    /* 0063ce5d: call 0x63d9a8 */ r_esp -= 4; W32(r_esp, 0x63ce62u); f_0063d9a8();
    /* 0063ce62: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0063ce65: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063ce67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce6c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63ce71u); f_008144b0();
    /* 0063ce71: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ce74: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063ce7a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ce7d: je 0x63ce85 */ if (fZ) goto L_0063ce85;
L_0063ce7f:; BB(0x0063ce7f);
    /* 0063ce7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063ce82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ce83: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063ce84: ret  */ FN_RET(0x0063ce0c); r_esp += 4; return;
L_0063ce85:; BB(0x0063ce85);
    /* 0063ce85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce87: mov ecx, edi */ r_ecx = r_edi;
    /* 0063ce89: call 0x63d9a8 */ r_esp -= 4; W32(r_esp, 0x63ce8eu); f_0063d9a8();
    /* 0063ce8e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063ce90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce93: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce95: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63ce9au); f_008144b0();
    /* 0063ce9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ce9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063cea0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063cea1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063cea2: ret  */ FN_RET(0x0063ce0c); r_esp += 4; return;
}

void f_0063cea4(void) /* sub_63CEA4 */
{
    FN_ENTER(0x0063cea4);
    /* 0063cea4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063cea7: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 0063ceab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063cead: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0063ceb2: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0063ceb7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063cebc: mov byte ptr [esp + 0xb], 1 */ W8((u32)(r_esp+0xbu), 0x1u);
    /* 0063cec1: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0063cec6: mov eax, dword ptr [ecx + 0xe8] */ r_eax = R32((u32)(r_ecx+0xe8u));
    /* 0063cecc: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0063ced1: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0063ced6: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 0063cedb: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 0063cedf: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0063cee2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x63cee7u); f_008003e0();
    /* 0063cee7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063ceea: ret 4 */ FN_RET(0x0063cea4); r_esp += 8; return;
}

void f_0063cef0(void) /* sub_63CEF0 */
{
    FN_ENTER(0x0063cef0);
    /* 0063cef0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063cef1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063cef4: mov edi, ecx */ r_edi = r_ecx;
    /* 0063cef6: fld dword ptr [edi + 0x70] */ FPUSH(R_F32((u32)(r_edi+0x70u)));
    /* 0063cef9: mov edx, 3 */ r_edx = 0x3u;
    /* 0063cefe: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0063cf01: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063cf05: mov eax, 4 */ r_eax = 0x4u;
    /* 0063cf0a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0063cf0e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0063cf12: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0063cf16: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0063cf1b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063cf20: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0063cf24: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0063cf28: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063cf2c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0063cf30: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0063cf34: mov eax, 1 */ r_eax = 0x1u;
    /* 0063cf39: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063cf3c: jl 0x63cf40 */ if ((fS!=fO)) goto L_0063cf40;
L_0063cf3e:; BB(0x0063cf3e);
    /* 0063cf3e: mov edx, eax */ r_edx = r_eax;
L_0063cf40:; BB(0x0063cf40);
    /* 0063cf40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063cf42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063cf44: jg 0x63cf48 */ if ((!fZ&&fS==fO)) goto L_0063cf48;
L_0063cf46:; BB(0x0063cf46);
    /* 0063cf46: mov edx, eax */ r_edx = r_eax;
L_0063cf48:; BB(0x0063cf48);
    /* 0063cf48: push dword ptr [esp + edx*4] */ { u32 v = R32((u32)(r_esp+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0063cf4b: mov dword ptr [edi + 0xf8], edx */ W32((u32)(r_edi+0xf8u), r_edx);
    /* 0063cf51: call 0x63dfe4 */ r_esp -= 4; W32(r_esp, 0x63cf56u); f_0063dfe4();
    /* 0063cf56: mov dword ptr [edi + 0xc8], eax */ W32((u32)(r_edi+0xc8u), r_eax);
    /* 0063cf5c: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 0063cf62: push dword ptr [esp + eax*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_eax*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063cf66: call 0x63dfcc */ r_esp -= 4; W32(r_esp, 0x63cf6bu); f_0063dfcc();
    /* 0063cf6b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf6d: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 0063cf73: call 0x63dfb4 */ r_esp -= 4; W32(r_esp, 0x63cf78u); f_0063dfb4();
    /* 0063cf78: mov dword ptr [edi + 0xb4], 0 */ W32((u32)(r_edi+0xb4u), 0x0u);
    /* 0063cf82: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf84: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0063cf87: mov dword ptr [edi + 0xb8], 0x3f800000 */ W32((u32)(r_edi+0xb8u), 0x3f800000u);
    /* 0063cf91: call 0x63dfe4 */ r_esp -= 4; W32(r_esp, 0x63cf96u); f_0063dfe4();
    /* 0063cf96: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf98: mov dword ptr [edi + 0xfc], eax */ W32((u32)(r_edi+0xfcu), r_eax);
    /* 0063cf9e: call 0x63dfcc */ r_esp -= 4; W32(r_esp, 0x63cfa3u); f_0063dfcc();
    /* 0063cfa3: mov dword ptr [edi + 0x104], 0 */ W32((u32)(r_edi+0x104u), 0x0u);
    /* 0063cfad: mov dword ptr [edi + 0x100], eax */ W32((u32)(r_edi+0x100u), r_eax);
    /* 0063cfb3: mov dword ptr [edi + 0x108], 0x3f800000 */ W32((u32)(r_edi+0x108u), 0x3f800000u);
    /* 0063cfbd: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063cfc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063cfc1: ret  */ FN_RET(0x0063cef0); r_esp += 4; return;
}

void f_0063cfc4(void) /* sub_63CFC4 */
{
    FN_ENTER(0x0063cfc4);
    /* 0063cfc4: call 0x63ddc0 */ r_esp -= 4; W32(r_esp, 0x63cfc9u); f_0063ddc0();
    /* 0063cfc9: ret  */ FN_RET(0x0063cfc4); r_esp += 4; return;
}

void f_0063cfcc(void) /* sub_63CFCC */
{
    FN_ENTER(0x0063cfcc);
    /* 0063cfcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063cfcd: mov ebp, esp */ r_ebp = r_esp;
    /* 0063cfcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cfd1: push 0x8e4cc8 */ { u32 v = 0x8e4cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cfd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063cfdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cfdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063cfe4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063cfe7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063cfea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063cfed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063cff0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063cff3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063cff6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063cffd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d000: mov dword ptr [eax], 0xb2de20 */ W32((u32)(r_eax), 0xb2de20u);
    /* 0063d006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d007: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x63d00cu); f_007b4e84();
    /* 0063d00c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063d00d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d010: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x63d015u); f_007b9c8c();
    /* 0063d015: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063d01c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d01f: call 0x63de5c */ r_esp -= 4; W32(r_esp, 0x63d024u); f_0063de5c();
    /* 0063d024: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d027: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063d02e: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d030: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d031: ret  */ FN_RET(0x0063cfcc); r_esp += 4; return;
}

