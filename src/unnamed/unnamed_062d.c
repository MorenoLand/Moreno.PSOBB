#include "protos.h"

void f_0062d02c(void) /* sub_62D02C */
{
    FN_ENTER(0x0062d02c);
    /* 0062d02c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062d02d: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0062d030: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0062d033: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 0062d036: mov dword ptr [ecx + 0xd8], 0 */ W32((u32)(r_ecx+0xd8u), 0x0u);
    /* 0062d040: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 0062d046: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 0062d04c: mov dword ptr [ecx + 0xdc], 0 */ W32((u32)(r_ecx+0xdcu), 0x0u);
    /* 0062d056: mov dword ptr [ecx + 0xd4], edi */ W32((u32)(r_ecx+0xd4u), r_edi);
    /* 0062d05c: mov dword ptr [ecx + 0xe4], eax */ W32((u32)(r_ecx+0xe4u), r_eax);
    /* 0062d062: mov dword ptr [ecx + 0xe8], edx */ W32((u32)(r_ecx+0xe8u), r_edx);
    /* 0062d068: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
    /* 0062d072: mov dword ptr [ecx + 0xec], edi */ W32((u32)(r_ecx+0xecu), r_edi);
    /* 0062d078: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d07a: mov byte ptr [ecx + 0x100], dl */ W8((u32)(r_ecx+0x100u), (u8)r_edx);
    /* 0062d080: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
    /* 0062d08a: mov byte ptr [ecx + 0x101], dl */ W8((u32)(r_ecx+0x101u), (u8)r_edx);
    /* 0062d090: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0062d095: mov word ptr [ecx + 0xfc], ax */ W16((u32)(r_ecx+0xfcu), (u16)r_eax);
    /* 0062d09c: mov dword ptr [ecx + 0x104], 0x3f800000 */ W32((u32)(r_ecx+0x104u), 0x3f800000u);
    /* 0062d0a6: mov word ptr [ecx + 0xfe], dx */ W16((u32)(r_ecx+0xfeu), (u16)r_edx);
    /* 0062d0ad: mov dword ptr [ecx + 0x108], 0x3f800000 */ W32((u32)(r_ecx+0x108u), 0x3f800000u);
    /* 0062d0b7: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 0062d0c1: mov dword ptr [ecx + 0x110], 0x3f800000 */ W32((u32)(r_ecx+0x110u), 0x3f800000u);
    /* 0062d0cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062d0cc: ret  */ FN_RET(0x0062d02c); r_esp += 4; return;
}

void f_0062d0d0(void) /* sub_62D0D0 */
{
    FN_ENTER(0x0062d0d0);
    /* 0062d0d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062d0d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062d0d5: call 0x62d0f4 */ r_esp -= 4; W32(r_esp, 0x62d0dau); f_0062d0f4();
    /* 0062d0da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062d0de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d0e0: jne 0x62d0e6 */ if (!fZ) goto L_0062d0e6;
L_0062d0e2:; BB(0x0062d0e2);
    /* 0062d0e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d0e3: ret 4 */ FN_RET(0x0062d0d0); r_esp += 8; return;
L_0062d0e6:; BB(0x0062d0e6);
    /* 0062d0e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62d0ecu); f_005c2f74();
    /* 0062d0ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d0ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d0ee: ret 4 */ FN_RET(0x0062d0d0); r_esp += 8; return;
}

void f_0062d0f4(void) /* sub_62D0F4 */
{
    FN_ENTER(0x0062d0f4);
    /* 0062d0f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d0f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0f9: push 0x8e33c0 */ { u32 v = 0x8e33c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d105: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d10c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d10f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d112: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062d115: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062d118: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062d11b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062d11e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d121: mov dword ptr [ecx], 0xb2a010 */ W32((u32)(r_ecx), 0xb2a010u);
    /* 0062d127: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062d12e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x62d133u); f_007ba1f0();
    /* 0062d133: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d136: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d13d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d13f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d140: ret  */ FN_RET(0x0062d0f4); r_esp += 4; return;
}

void f_0062d144(void) /* sub_62D144 */
{
    FN_ENTER(0x0062d144);
    /* 0062d144: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062d145: mov edi, ecx */ r_edi = r_ecx;
    /* 0062d147: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062d149: mov ecx, edi */ r_ecx = r_edi;
    /* 0062d14b: push dword ptr [edi + 0x94] */ { u32 v = R32((u32)(r_edi+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062d151: push dword ptr [edi + 0x90] */ { u32 v = R32((u32)(r_edi+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062d157: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62d15au); call_ind(t); }
    /* 0062d15a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d15c: je 0x62d1e9 */ if (fZ) goto L_0062d1e9;
L_0062d162:; BB(0x0062d162);
    /* 0062d162: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62d167u); f_0082d7b0();
    /* 0062d167: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0062d16a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62d16fu); f_0082d838();
    /* 0062d16f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0062d172: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d174: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62d179u); f_0082d8bc();
    /* 0062d179: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0062d17c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62d181u); f_00829cc8();
    /* 0062d181: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 0062d184: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062d187: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62d18cu); f_008321d8();
    /* 0062d18c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d18d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62d192u); f_0082d7b0();
    /* 0062d192: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d194: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062d19a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d19c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d19e: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x62d1a3u); f_00830b74();
    /* 0062d1a3: mov edx, dword ptr [edi + 0xac] */ r_edx = R32((u32)(r_edi+0xacu));
    /* 0062d1a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d1ab: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62d1b0u); f_0082d8bc();
    /* 0062d1b0: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 0062d1b3: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0062d1b6: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062d1b9: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62d1beu); f_008321d8();
    /* 0062d1be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d1bf: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62d1c4u); f_0082dbac();
    /* 0062d1c4: mov ecx, dword ptr [0xa8ee84] */ r_ecx = R32((u32)(0xa8ee84u));
    /* 0062d1ca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62d1cfu); f_00829cc8();
    /* 0062d1cf: mov ecx, dword ptr [0xa8ee88] */ r_ecx = R32((u32)(0xa8ee88u));
    /* 0062d1d5: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x62d1dau); f_00831758();
    /* 0062d1da: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62d1dfu); f_0082dab0();
    /* 0062d1df: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62d1e4u); f_0082da80();
    /* 0062d1e4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62d1e9u); f_0082da80();
L_0062d1e9:; BB(0x0062d1e9);
    /* 0062d1e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062d1ea: ret  */ FN_RET(0x0062d144); r_esp += 4; return;
}

void f_0062d1ec(void) /* sub_62D1EC */
{
    FN_ENTER(0x0062d1ec);
    /* 0062d1ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062d1ed: mov esi, ecx */ r_esi = r_ecx;
    /* 0062d1ef: mov ecx, dword ptr [esi + 0xa8] */ r_ecx = R32((u32)(r_esi+0xa8u));
    /* 0062d1f5: add ecx, dword ptr [esi + 0xa4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d1fb: mov dword ptr [esi + 0xa8], ecx */ W32((u32)(r_esi+0xa8u), r_ecx);
    /* 0062d201: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x62d206u); f_0082dcbc();
    /* 0062d206: fld dword ptr [esi + 0x98] */ FPUSH(R_F32((u32)(r_esi+0x98u)));
    /* 0062d20c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062d20e: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0062d214: fstp dword ptr [esi + 0x9c] */ W_F32((u32)(r_esi+0x9cu), ST(0)); FPOP();
    /* 0062d21a: add dword ptr [esi + 0xac], eax */ { u32 ad = (u32)(r_esi+0xacu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062d220: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062d221: ret  */ FN_RET(0x0062d1ec); r_esp += 4; return;
}

void f_0062d224(void) /* sub_62D224 */
{
    FN_ENTER(0x0062d224);
    /* 0062d224: mov ecx, dword ptr [0xa8ee8c] */ r_ecx = R32((u32)(0xa8ee8cu));
    /* 0062d22a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d22c: je 0x62d241 */ if (fZ) goto L_0062d241;
L_0062d22e:; BB(0x0062d22e);
    /* 0062d22e: je 0x62d237 */ if (fZ) goto L_0062d237;
L_0062d230:; BB(0x0062d230);
    /* 0062d230: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d232: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62d237u); f_004066a8();
L_0062d237:; BB(0x0062d237);
    /* 0062d237: mov dword ptr [0xa8ee8c], 0 */ W32((u32)(0xa8ee8cu), 0x0u);
L_0062d241:; BB(0x0062d241);
    /* 0062d241: ret  */ FN_RET(0x0062d224); r_esp += 4; return;
}

void f_0062d244(void)
{
    FN_ENTER(0x0062d244);
    /* 0062d244: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d245: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d247: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d249: push 0x8e33e8 */ { u32 v = 0x8e33e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d24e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d254: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d255: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d25c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d25f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d262: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062d265: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062d268: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062d26b: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d270: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062d277: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62d27cu); f_005caba4();
    /* 0062d27c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d27d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062d280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d282: je 0x62d2b5 */ if (fZ) goto L_0062d2b5;
L_0062d284:; BB(0x0062d284);
    /* 0062d284: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062d28b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062d292: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062d295: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d298: call 0x62d2bc */ r_esp -= 4; W32(r_esp, 0x62d29du); f_0062d2bc();
    /* 0062d29d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d2a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062d2a7:; BB(0x0062d2a7);
    /* 0062d2a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d2aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d2b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d2b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d2b4: ret  */ FN_RET(0x0062d244); r_esp += 4; return;
L_0062d2b5:; BB(0x0062d2b5);
    /* 0062d2b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d2b7: jmp 0x62d2a7 */ goto L_0062d2a7;
}

void f_0062d2bc(void) /* sub_62D2BC */
{
    FN_ENTER(0x0062d2bc);
    /* 0062d2bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d2bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d2bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d2c1: push 0x8e3404 */ { u32 v = 0x8e3404u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d2c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d2cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d2d4: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d2d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d2da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062d2dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062d2e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062d2e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062d2e6: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062d2ec: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0062d2ef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062d2f2: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x62d2f7u); f_007ba278();
    /* 0062d2f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062d2fe: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d301: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d304: mov dword ptr [ecx], 0xb2a010 */ W32((u32)(r_ecx), 0xb2a010u);
    /* 0062d30a: mov eax, dword ptr [0x9c5fb4] */ r_eax = R32((u32)(0x9c5fb4u));
    /* 0062d30f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d310: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062d313: call dword ptr [0xb2a024] */ { u32 t = R32((u32)(0xb2a024u)); r_esp -= 4; W32(r_esp, 0x62d319u); call_ind(t); }
    /* 0062d319: mov ecx, dword ptr [0xa8ee8c] */ r_ecx = R32((u32)(0xa8ee8cu));
    /* 0062d31f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d321: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62d326u); f_005b8610();
    /* 0062d326: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d329: mov ecx, dword ptr [0xa8ee8c] */ r_ecx = R32((u32)(0xa8ee8cu));
    /* 0062d32f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d331: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062d334: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62d339u); f_005b8624();
    /* 0062d339: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d33c: fild dword ptr [edx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x84u)));
    /* 0062d342: fmul dword ptr [0x9328b4] */ ST(0) = ST(0) * R_F32((u32)(0x9328b4u));
    /* 0062d348: fadd dword ptr [0x93289c] */ ST(0) = ST(0) + R_F32((u32)(0x93289cu));
    /* 0062d34e: fld dword ptr [0x9328b0] */ FPUSH(R_F32((u32)(0x9328b0u)));
    /* 0062d354: fld dword ptr [0x9328ac] */ FPUSH(R_F32((u32)(0x9328acu)));
    /* 0062d35a: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0062d35d: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 0062d360: mov dword ptr [edx + 0x90], 0x43fa0000 */ W32((u32)(r_edx+0x90u), 0x43fa0000u);
    /* 0062d36a: or edi, 0x40000000 */ {  u32 a = r_edi; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0062d370: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0062d373: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0062d376: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0062d379: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062d37b: fst dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0));
    /* 0062d381: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0062d383: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 0062d385: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d387: fmul dword ptr [0x9328a8] */ ST(0) = ST(0) * R_F32((u32)(0x9328a8u));
    /* 0062d38d: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062d38f: mov dword ptr [edx + 0x94], esi */ W32((u32)(r_edx+0x94u), r_esi);
    /* 0062d395: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0062d398: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0062d39c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062d3a1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062d3a4: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0062d3a7: fistp dword ptr [edx + 0xa4] */ W32((u32)(r_edx+0xa4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062d3ad: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0062d3b0: mov dword ptr [edx + 0x30], edi */ W32((u32)(r_edx+0x30u), r_edi);
    /* 0062d3b3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62d3b8u); f_008587a5();
    /* 0062d3b8: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d3bb: fild dword ptr [edx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x88u)));
    /* 0062d3c1: fmul dword ptr [0x9328b4] */ ST(0) = ST(0) * R_F32((u32)(0x9328b4u));
    /* 0062d3c7: fadd dword ptr [0x932898] */ ST(0) = ST(0) + R_F32((u32)(0x932898u));
    /* 0062d3cd: fld dword ptr [0x9328b0] */ FPUSH(R_F32((u32)(0x9328b0u)));
    /* 0062d3d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d3d5: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 0062d3db: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0062d3de: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0062d3e1: fdiv dword ptr [0x9328a4] */ ST(0) = ST(0) / R_F32((u32)(0x9328a4u));
    /* 0062d3e7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062d3e9: fmul dword ptr [0x9328a8] */ ST(0) = ST(0) * R_F32((u32)(0x9328a8u));
    /* 0062d3ef: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062d3f1: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0062d3f4: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0062d3f8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062d3fd: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062d400: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0062d403: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062d406: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0062d409: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062d40c: mov dword ptr [edx + 0xa8], ecx */ W32((u32)(r_edx+0xa8u), r_ecx);
    /* 0062d412: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x62d417u); f_0082dcbc();
    /* 0062d417: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d41a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d41d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062d420: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062d423: fld dword ptr [eax + 0x98] */ FPUSH(R_F32((u32)(r_eax+0x98u)));
    /* 0062d429: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062d42b: fstp dword ptr [eax + 0x9c] */ W_F32((u32)(r_eax+0x9cu), ST(0)); FPOP();
    /* 0062d431: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 0062d43b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d43e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d445: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d447: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d448: ret 4 */ FN_RET(0x0062d2bc); r_esp += 8; return;
}

void f_0062d44c(void) /* sub_62D44C */
{
    FN_ENTER(0x0062d44c);
    /* 0062d44c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d44d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d44f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d451: push 0x8e342c */ { u32 v = 0x8e342cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d456: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d45c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d45d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d464: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d467: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d46a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062d46d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062d470: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062d473: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d478: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062d47f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62d484u); f_008581c5();
    /* 0062d484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d485: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062d488: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d48a: je 0x62d4f1 */ if (fZ) goto L_0062d4f1;
L_0062d48c:; BB(0x0062d48c);
    /* 0062d48c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062d493: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062d49a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d49d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062d49f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4a2: push 0x9c5fa4 */ { u32 v = 0x9c5fa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4a9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62d4aeu); f_005b7a84();
    /* 0062d4ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d4b1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062d4b8:; BB(0x0062d4b8);
    /* 0062d4b8: mov dword ptr [0xa8ee8c], ecx */ W32((u32)(0xa8ee8cu), r_ecx);
    /* 0062d4be: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062d4c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4c7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62d4ccu); f_005b8610();
    /* 0062d4cc: mov ecx, dword ptr [0xa8ee8c] */ r_ecx = R32((u32)(0xa8ee8cu));
    /* 0062d4d2: mov dword ptr [0xa8ee88], eax */ W32((u32)(0xa8ee88u), r_eax);
    /* 0062d4d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4d9: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62d4deu); f_005b8624();
    /* 0062d4de: mov dword ptr [0xa8ee84], eax */ W32((u32)(0xa8ee84u), r_eax);
    /* 0062d4e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d4e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d4ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d4ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d4f0: ret  */ FN_RET(0x0062d44c); r_esp += 4; return;
L_0062d4f1:; BB(0x0062d4f1);
    /* 0062d4f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d4f3: jmp 0x62d4b8 */ goto L_0062d4b8;
}

void f_0062d4f8(void) /* sub_62D4F8 */
{
    FN_ENTER(0x0062d4f8);
    /* 0062d4f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062d4fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062d4fd: call 0x62d51c */ r_esp -= 4; W32(r_esp, 0x62d502u); f_0062d51c();
    /* 0062d502: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062d506: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d508: jne 0x62d50e */ if (!fZ) goto L_0062d50e;
L_0062d50a:; BB(0x0062d50a);
    /* 0062d50a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d50b: ret 4 */ FN_RET(0x0062d4f8); r_esp += 8; return;
L_0062d50e:; BB(0x0062d50e);
    /* 0062d50e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d50f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62d514u); f_005c2f74();
    /* 0062d514: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d515: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d516: ret 4 */ FN_RET(0x0062d4f8); r_esp += 8; return;
}

void f_0062d51c(void) /* sub_62D51C */
{
    FN_ENTER(0x0062d51c);
    /* 0062d51c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d51d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d51f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d521: push 0x8e3448 */ { u32 v = 0x8e3448u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d526: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d52c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d52d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d534: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d537: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d53a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062d53d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062d540: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062d543: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062d546: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d549: mov dword ptr [ecx], 0xb2a220 */ W32((u32)(r_ecx), 0xb2a220u);
    /* 0062d54f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062d556: call 0x622f58 */ r_esp -= 4; W32(r_esp, 0x62d55bu); f_00622f58();
    /* 0062d55b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d55e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d565: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d567: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d568: ret  */ FN_RET(0x0062d51c); r_esp += 4; return;
}

void f_0062d56c(void) /* sub_62D56C */
{
    FN_ENTER(0x0062d56c);
    /* 0062d56c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d56d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062d56f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062d571: call 0x62d590 */ r_esp -= 4; W32(r_esp, 0x62d576u); f_0062d590();
    /* 0062d576: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062d57a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d57c: jne 0x62d582 */ if (!fZ) goto L_0062d582;
L_0062d57e:; BB(0x0062d57e);
    /* 0062d57e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d57f: ret 4 */ FN_RET(0x0062d56c); r_esp += 8; return;
L_0062d582:; BB(0x0062d582);
    /* 0062d582: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d583: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62d588u); f_005c2f74();
    /* 0062d588: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d589: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d58a: ret 4 */ FN_RET(0x0062d56c); r_esp += 8; return;
}

void f_0062d590(void) /* sub_62D590 */
{
    FN_ENTER(0x0062d590);
    /* 0062d590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d591: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d593: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d595: push 0x8e3464 */ { u32 v = 0x8e3464u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d59a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d5a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d5a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d5ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d5ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062d5b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062d5b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062d5b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062d5ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d5bd: mov dword ptr [ecx], 0xb2a254 */ W32((u32)(r_ecx), 0xb2a254u);
    /* 0062d5c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062d5ca: call 0x622f58 */ r_esp -= 4; W32(r_esp, 0x62d5cfu); f_00622f58();
    /* 0062d5cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d5d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d5d9: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d5db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d5dc: ret  */ FN_RET(0x0062d590); r_esp += 4; return;
}

void f_0062d5e0(void) /* sub_62D5E0 */
{
    FN_ENTER(0x0062d5e0);
    /* 0062d5e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062d5e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062d5e5: call 0x62d604 */ r_esp -= 4; W32(r_esp, 0x62d5eau); f_0062d604();
    /* 0062d5ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062d5ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d5f0: jne 0x62d5f6 */ if (!fZ) goto L_0062d5f6;
L_0062d5f2:; BB(0x0062d5f2);
    /* 0062d5f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d5f3: ret 4 */ FN_RET(0x0062d5e0); r_esp += 8; return;
L_0062d5f6:; BB(0x0062d5f6);
    /* 0062d5f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62d5fcu); f_005c2f74();
    /* 0062d5fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d5fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d5fe: ret 4 */ FN_RET(0x0062d5e0); r_esp += 8; return;
}

void f_0062d604(void) /* sub_62D604 */
{
    FN_ENTER(0x0062d604);
    /* 0062d604: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d605: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d607: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d609: push 0x8e3480 */ { u32 v = 0x8e3480u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d60e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d615: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d61c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d61f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d622: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062d625: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062d628: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062d62b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062d62e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d631: mov dword ptr [ecx], 0xb2a288 */ W32((u32)(r_ecx), 0xb2a288u);
    /* 0062d637: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062d63e: call 0x622f58 */ r_esp -= 4; W32(r_esp, 0x62d643u); f_00622f58();
    /* 0062d643: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d646: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d64d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d64f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d650: ret  */ FN_RET(0x0062d604); r_esp += 4; return;
}

void f_0062d654(void) /* sub_62D654 */
{
    FN_ENTER(0x0062d654);
    /* 0062d654: mov ecx, dword ptr [0xa8eea0] */ r_ecx = R32((u32)(0xa8eea0u));
    /* 0062d65a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d65c: je 0x62d671 */ if (fZ) goto L_0062d671;
L_0062d65e:; BB(0x0062d65e);
    /* 0062d65e: je 0x62d667 */ if (fZ) goto L_0062d667;
L_0062d660:; BB(0x0062d660);
    /* 0062d660: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d662: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62d667u); f_004066a8();
L_0062d667:; BB(0x0062d667);
    /* 0062d667: mov dword ptr [0xa8eea0], 0 */ W32((u32)(0xa8eea0u), 0x0u);
L_0062d671:; BB(0x0062d671);
    /* 0062d671: ret  */ FN_RET(0x0062d654); r_esp += 4; return;
}

void f_0062d674(void)
{
    FN_ENTER(0x0062d674);
    /* 0062d674: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d675: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d677: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d679: push 0x8e34a8 */ { u32 v = 0x8e34a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d67e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d685: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d68c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d68f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d692: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062d695: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062d698: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062d69b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062d6a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62d6acu); f_005caba4();
    /* 0062d6ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d6ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062d6b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d6b2: je 0x62d6e5 */ if (fZ) goto L_0062d6e5;
L_0062d6b4:; BB(0x0062d6b4);
    /* 0062d6b4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062d6bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062d6c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062d6c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d6c8: call 0x62d6ec */ r_esp -= 4; W32(r_esp, 0x62d6cdu); f_0062d6ec();
    /* 0062d6cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d6d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062d6d7:; BB(0x0062d6d7);
    /* 0062d6d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d6da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d6e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d6e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d6e4: ret  */ FN_RET(0x0062d674); r_esp += 4; return;
L_0062d6e5:; BB(0x0062d6e5);
    /* 0062d6e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d6e7: jmp 0x62d6d7 */ goto L_0062d6d7;
}

void f_0062d6ec(void) /* sub_62D6EC */
{
    FN_ENTER(0x0062d6ec);
    /* 0062d6ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d6ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6f1: push 0x8e34c4 */ { u32 v = 0x8e34c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d704: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d707: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d70a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062d70d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062d710: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062d713: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062d716: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0062d719: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062d71c: call 0x623690 */ r_esp -= 4; W32(r_esp, 0x62d721u); f_00623690();
    /* 0062d721: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062d728: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d72b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d72e: mov dword ptr [ecx], 0xb2a220 */ W32((u32)(r_ecx), 0xb2a220u);
    /* 0062d734: mov eax, dword ptr [0x9c6018] */ r_eax = R32((u32)(0x9c6018u));
    /* 0062d739: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d73a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062d73d: call dword ptr [0xb2a234] */ { u32 t = R32((u32)(0xb2a234u)); r_esp -= 4; W32(r_esp, 0x62d743u); call_ind(t); }
    /* 0062d743: mov ecx, dword ptr [0xa8eea0] */ r_ecx = R32((u32)(0xa8eea0u));
    /* 0062d749: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d74b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62d750u); f_005b8610();
    /* 0062d750: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d753: mov ecx, dword ptr [0xa8eea0] */ r_ecx = R32((u32)(0xa8eea0u));
    /* 0062d759: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d75b: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062d75e: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62d763u); f_005b8624();
    /* 0062d763: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d766: mov ecx, dword ptr [0xa8eea0] */ r_ecx = R32((u32)(0xa8eea0u));
    /* 0062d76c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d76e: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0062d771: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x62d776u); f_005b8638();
    /* 0062d776: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d779: fild dword ptr [edx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x84u)));
    /* 0062d77f: fmul dword ptr [0x93296c] */ ST(0) = ST(0) * R_F32((u32)(0x93296cu));
    /* 0062d785: fadd dword ptr [0x932954] */ ST(0) = ST(0) + R_F32((u32)(0x932954u));
    /* 0062d78b: fld dword ptr [0x932968] */ FPUSH(R_F32((u32)(0x932968u)));
    /* 0062d791: fld dword ptr [0x932964] */ FPUSH(R_F32((u32)(0x932964u)));
    /* 0062d797: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 0062d79a: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0062d7a0: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0062d7a3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0062d7a6: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062d7a9: fadd dword ptr [ecx*4 + 0x932910] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x932910u));
    /* 0062d7b0: fadd dword ptr [0x932974] */ ST(0) = ST(0) + R_F32((u32)(0x932974u));
    /* 0062d7b6: mov dword ptr [edx + 0xb8], 0x3f8ccccd */ W32((u32)(r_edx+0xb8u), 0x3f8ccccdu);
    /* 0062d7c0: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 0062d7c6: mov dword ptr [edx + 0xc0], 0x43fa0000 */ W32((u32)(r_edx+0xc0u), 0x43fa0000u);
    /* 0062d7d0: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0062d7d3: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 0062d7d6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062d7d8: fst dword ptr [edx + 0xf4] */ W_F32((u32)(r_edx+0xf4u), ST(0));
    /* 0062d7de: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0062d7e0: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 0062d7e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d7e4: fmul dword ptr [0x932960] */ ST(0) = ST(0) * R_F32((u32)(0x932960u));
    /* 0062d7ea: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062d7ec: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 0062d7f6: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0062d7f9: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0062d7fd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062d802: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062d805: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0062d808: fistp dword ptr [edx + 0xf8] */ W32((u32)(r_edx+0xf8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062d80e: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0062d811: mov dword ptr [edx + 0xc4], edi */ W32((u32)(r_edx+0xc4u), r_edi);
    /* 0062d817: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62d81cu); f_008587a5();
    /* 0062d81c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d81f: fild dword ptr [edx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x88u)));
    /* 0062d825: fmul dword ptr [0x93296c] */ ST(0) = ST(0) * R_F32((u32)(0x93296cu));
    /* 0062d82b: fadd dword ptr [0x932950] */ ST(0) = ST(0) + R_F32((u32)(0x932950u));
    /* 0062d831: fld dword ptr [0x932968] */ FPUSH(R_F32((u32)(0x932968u)));
    /* 0062d837: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d839: fstp dword ptr [edx + 0xec] */ W_F32((u32)(r_edx+0xecu), ST(0)); FPOP();
    /* 0062d83f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0062d842: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0062d845: fdiv dword ptr [0x93295c] */ ST(0) = ST(0) / R_F32((u32)(0x93295cu));
    /* 0062d84b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062d84d: fmul dword ptr [0x932960] */ ST(0) = ST(0) * R_F32((u32)(0x932960u));
    /* 0062d853: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062d855: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0062d858: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0062d85c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062d861: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062d864: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0062d867: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062d86a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0062d86d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062d870: mov dword ptr [edx + 0xfc], ecx */ W32((u32)(r_edx+0xfcu), r_ecx);
    /* 0062d876: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x62d87bu); f_0082dcbc();
    /* 0062d87b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d87e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d881: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062d884: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062d887: fld dword ptr [eax + 0xec] */ FPUSH(R_F32((u32)(r_eax+0xecu)));
    /* 0062d88d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062d88f: fstp dword ptr [eax + 0xf0] */ W_F32((u32)(r_eax+0xf0u), ST(0)); FPOP();
    /* 0062d895: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d898: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d89f: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d8a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d8a2: ret 4 */ FN_RET(0x0062d6ec); r_esp += 8; return;
}

void f_0062d8a8(void) /* sub_62D8A8 */
{
    FN_ENTER(0x0062d8a8);
    /* 0062d8a8: mov ecx, dword ptr [0xa8ee9c] */ r_ecx = R32((u32)(0xa8ee9cu));
    /* 0062d8ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d8b0: je 0x62d8c5 */ if (fZ) goto L_0062d8c5;
L_0062d8b2:; BB(0x0062d8b2);
    /* 0062d8b2: je 0x62d8bb */ if (fZ) goto L_0062d8bb;
L_0062d8b4:; BB(0x0062d8b4);
    /* 0062d8b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8b6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62d8bbu); f_004066a8();
L_0062d8bb:; BB(0x0062d8bb);
    /* 0062d8bb: mov dword ptr [0xa8ee9c], 0 */ W32((u32)(0xa8ee9cu), 0x0u);
L_0062d8c5:; BB(0x0062d8c5);
    /* 0062d8c5: ret  */ FN_RET(0x0062d8a8); r_esp += 4; return;
}

void f_0062d8c8(void)
{
    FN_ENTER(0x0062d8c8);
    /* 0062d8c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d8cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8cd: push 0x8e34ec */ { u32 v = 0x8e34ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d8e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d8e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d8e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062d8e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062d8ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062d8ef: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8f4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062d8fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62d900u); f_005caba4();
    /* 0062d900: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d901: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062d904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d906: je 0x62d939 */ if (fZ) goto L_0062d939;
L_0062d908:; BB(0x0062d908);
    /* 0062d908: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062d90f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062d916: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062d919: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d91c: call 0x62d940 */ r_esp -= 4; W32(r_esp, 0x62d921u); f_0062d940();
    /* 0062d921: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d924: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062d92b:; BB(0x0062d92b);
    /* 0062d92b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d92e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d935: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d937: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d938: ret  */ FN_RET(0x0062d8c8); r_esp += 4; return;
L_0062d939:; BB(0x0062d939);
    /* 0062d939: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d93b: jmp 0x62d92b */ goto L_0062d92b;
}

void f_0062d940(void) /* sub_62D940 */
{
    FN_ENTER(0x0062d940);
    /* 0062d940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d941: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d943: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d945: push 0x8e3508 */ { u32 v = 0x8e3508u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d94a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062d950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d951: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062d958: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d95b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062d95e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062d961: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062d964: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062d967: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062d96a: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0062d96d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062d970: call 0x623690 */ r_esp -= 4; W32(r_esp, 0x62d975u); f_00623690();
    /* 0062d975: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062d97c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d97f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d982: mov dword ptr [ecx], 0xb2a254 */ W32((u32)(r_ecx), 0xb2a254u);
    /* 0062d988: mov eax, dword ptr [0x9c601c] */ r_eax = R32((u32)(0x9c601cu));
    /* 0062d98d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d98e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062d991: call dword ptr [0xb2a268] */ { u32 t = R32((u32)(0xb2a268u)); r_esp -= 4; W32(r_esp, 0x62d997u); call_ind(t); }
    /* 0062d997: mov ecx, dword ptr [0xa8ee9c] */ r_ecx = R32((u32)(0xa8ee9cu));
    /* 0062d99d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d99f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62d9a4u); f_005b8610();
    /* 0062d9a4: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d9a7: mov ecx, dword ptr [0xa8ee9c] */ r_ecx = R32((u32)(0xa8ee9cu));
    /* 0062d9ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d9af: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062d9b2: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62d9b7u); f_005b8624();
    /* 0062d9b7: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d9ba: mov ecx, dword ptr [0xa8ee9c] */ r_ecx = R32((u32)(0xa8ee9cu));
    /* 0062d9c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d9c2: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0062d9c5: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x62d9cau); f_005b8638();
    /* 0062d9ca: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062d9cd: fild dword ptr [edx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x84u)));
    /* 0062d9d3: fmul dword ptr [0x932944] */ ST(0) = ST(0) * R_F32((u32)(0x932944u));
    /* 0062d9d9: fadd dword ptr [0x932954] */ ST(0) = ST(0) + R_F32((u32)(0x932954u));
    /* 0062d9df: fld dword ptr [0x932940] */ FPUSH(R_F32((u32)(0x932940u)));
    /* 0062d9e5: fld dword ptr [0x93293c] */ FPUSH(R_F32((u32)(0x93293cu)));
    /* 0062d9eb: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 0062d9ee: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0062d9f4: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0062d9f7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0062d9fa: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062d9fd: fadd dword ptr [ecx*4 + 0x932908] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x932908u));
    /* 0062da04: fadd dword ptr [0x93294c] */ ST(0) = ST(0) + R_F32((u32)(0x93294cu));
    /* 0062da0a: mov dword ptr [edx + 0xb8], 0x3f8ccccd */ W32((u32)(r_edx+0xb8u), 0x3f8ccccdu);
    /* 0062da14: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 0062da1a: mov dword ptr [edx + 0xc0], 0x43fa0000 */ W32((u32)(r_edx+0xc0u), 0x43fa0000u);
    /* 0062da24: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0062da27: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 0062da2a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062da2c: fst dword ptr [edx + 0xf4] */ W_F32((u32)(r_edx+0xf4u), ST(0));
    /* 0062da32: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0062da34: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 0062da36: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062da38: fmul dword ptr [0x932938] */ ST(0) = ST(0) * R_F32((u32)(0x932938u));
    /* 0062da3e: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062da40: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 0062da4a: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0062da4d: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0062da51: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062da56: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062da59: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0062da5c: fistp dword ptr [edx + 0xf8] */ W32((u32)(r_edx+0xf8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062da62: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0062da65: mov dword ptr [edx + 0xc4], edi */ W32((u32)(r_edx+0xc4u), r_edi);
    /* 0062da6b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62da70u); f_008587a5();
    /* 0062da70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062da73: fild dword ptr [edx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x88u)));
    /* 0062da79: fmul dword ptr [0x932944] */ ST(0) = ST(0) * R_F32((u32)(0x932944u));
    /* 0062da7f: fadd dword ptr [0x932950] */ ST(0) = ST(0) + R_F32((u32)(0x932950u));
    /* 0062da85: fld dword ptr [0x932940] */ FPUSH(R_F32((u32)(0x932940u)));
    /* 0062da8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062da8d: fstp dword ptr [edx + 0xec] */ W_F32((u32)(r_edx+0xecu), ST(0)); FPOP();
    /* 0062da93: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0062da96: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0062da99: fdiv dword ptr [0x932934] */ ST(0) = ST(0) / R_F32((u32)(0x932934u));
    /* 0062da9f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062daa1: fmul dword ptr [0x932938] */ ST(0) = ST(0) * R_F32((u32)(0x932938u));
    /* 0062daa7: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062daa9: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0062daac: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0062dab0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062dab5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062dab8: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0062dabb: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062dabe: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0062dac1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062dac4: mov dword ptr [edx + 0xfc], ecx */ W32((u32)(r_edx+0xfcu), r_ecx);
    /* 0062daca: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x62dacfu); f_0082dcbc();
    /* 0062dacf: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062dad2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062dad5: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062dad8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062dadb: fld dword ptr [eax + 0xec] */ FPUSH(R_F32((u32)(r_eax+0xecu)));
    /* 0062dae1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062dae3: fstp dword ptr [eax + 0xf0] */ W_F32((u32)(r_eax+0xf0u), ST(0)); FPOP();
    /* 0062dae9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062daec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062daf3: mov esp, ebp */ r_esp = r_ebp;
    /* 0062daf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062daf6: ret 4 */ FN_RET(0x0062d940); r_esp += 8; return;
}

void f_0062dafc(void) /* sub_62DAFC */
{
    FN_ENTER(0x0062dafc);
    /* 0062dafc: mov ecx, dword ptr [0xa8ee98] */ r_ecx = R32((u32)(0xa8ee98u));
    /* 0062db02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062db04: je 0x62db19 */ if (fZ) goto L_0062db19;
L_0062db06:; BB(0x0062db06);
    /* 0062db06: je 0x62db0f */ if (fZ) goto L_0062db0f;
L_0062db08:; BB(0x0062db08);
    /* 0062db08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062db0a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62db0fu); f_004066a8();
L_0062db0f:; BB(0x0062db0f);
    /* 0062db0f: mov dword ptr [0xa8ee98], 0 */ W32((u32)(0xa8ee98u), 0x0u);
L_0062db19:; BB(0x0062db19);
    /* 0062db19: ret  */ FN_RET(0x0062dafc); r_esp += 4; return;
}

void f_0062db1c(void)
{
    FN_ENTER(0x0062db1c);
    /* 0062db1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062db1d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062db1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062db21: push 0x8e3530 */ { u32 v = 0x8e3530u; r_esp -= 4; W32(r_esp, v); }
    /* 0062db26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062db2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062db2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062db34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062db37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062db3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062db3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062db40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062db43: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062db48: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062db4f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62db54u); f_005caba4();
    /* 0062db54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062db55: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062db58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062db5a: je 0x62db8d */ if (fZ) goto L_0062db8d;
L_0062db5c:; BB(0x0062db5c);
    /* 0062db5c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062db63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062db6a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062db6d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062db70: call 0x62db94 */ r_esp -= 4; W32(r_esp, 0x62db75u); f_0062db94();
    /* 0062db75: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062db78: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062db7f:; BB(0x0062db7f);
    /* 0062db7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062db82: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062db89: mov esp, ebp */ r_esp = r_ebp;
    /* 0062db8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062db8c: ret  */ FN_RET(0x0062db1c); r_esp += 4; return;
L_0062db8d:; BB(0x0062db8d);
    /* 0062db8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062db8f: jmp 0x62db7f */ goto L_0062db7f;
}

void f_0062db94(void) /* sub_62DB94 */
{
    FN_ENTER(0x0062db94);
    /* 0062db94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062db95: mov ebp, esp */ r_ebp = r_esp;
    /* 0062db97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062db99: push 0x8e354c */ { u32 v = 0x8e354cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062db9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062dba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dba5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062dbac: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062dbaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062dbb2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062dbb5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062dbb8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062dbbb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062dbbe: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0062dbc1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062dbc4: call 0x623690 */ r_esp -= 4; W32(r_esp, 0x62dbc9u); f_00623690();
    /* 0062dbc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062dbd0: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062dbd3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062dbd6: mov dword ptr [ecx], 0xb2a288 */ W32((u32)(r_ecx), 0xb2a288u);
    /* 0062dbdc: mov eax, dword ptr [0x9c6020] */ r_eax = R32((u32)(0x9c6020u));
    /* 0062dbe1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dbe2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062dbe5: call dword ptr [0xb2a29c] */ { u32 t = R32((u32)(0xb2a29cu)); r_esp -= 4; W32(r_esp, 0x62dbebu); call_ind(t); }
    /* 0062dbeb: mov ecx, dword ptr [0xa8ee98] */ r_ecx = R32((u32)(0xa8ee98u));
    /* 0062dbf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062dbf3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62dbf8u); f_005b8610();
    /* 0062dbf8: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062dbfb: mov ecx, dword ptr [0xa8ee98] */ r_ecx = R32((u32)(0xa8ee98u));
    /* 0062dc01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062dc03: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062dc06: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62dc0bu); f_005b8624();
    /* 0062dc0b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062dc0e: mov ecx, dword ptr [0xa8ee98] */ r_ecx = R32((u32)(0xa8ee98u));
    /* 0062dc14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062dc16: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0062dc19: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x62dc1eu); f_005b8638();
    /* 0062dc1e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062dc21: fild dword ptr [edx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x84u)));
    /* 0062dc27: fmul dword ptr [0x932928] */ ST(0) = ST(0) * R_F32((u32)(0x932928u));
    /* 0062dc2d: fadd dword ptr [0x932954] */ ST(0) = ST(0) + R_F32((u32)(0x932954u));
    /* 0062dc33: fld dword ptr [0x932924] */ FPUSH(R_F32((u32)(0x932924u)));
    /* 0062dc39: fld dword ptr [0x932920] */ FPUSH(R_F32((u32)(0x932920u)));
    /* 0062dc3f: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 0062dc42: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0062dc48: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0062dc4b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0062dc4e: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062dc51: fadd dword ptr [ecx*4 + 0x932900] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x932900u));
    /* 0062dc58: fadd dword ptr [0x932930] */ ST(0) = ST(0) + R_F32((u32)(0x932930u));
    /* 0062dc5e: mov dword ptr [edx + 0xb8], 0x3f8ccccd */ W32((u32)(r_edx+0xb8u), 0x3f8ccccdu);
    /* 0062dc68: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 0062dc6e: mov dword ptr [edx + 0xc0], 0x43fa0000 */ W32((u32)(r_edx+0xc0u), 0x43fa0000u);
    /* 0062dc78: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0062dc7b: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 0062dc7e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062dc80: fst dword ptr [edx + 0xf4] */ W_F32((u32)(r_edx+0xf4u), ST(0));
    /* 0062dc86: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0062dc88: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 0062dc8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062dc8c: fmul dword ptr [0x93291c] */ ST(0) = ST(0) * R_F32((u32)(0x93291cu));
    /* 0062dc92: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062dc94: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 0062dc9e: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0062dca1: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0062dca5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062dcaa: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062dcad: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0062dcb0: fistp dword ptr [edx + 0xf8] */ W32((u32)(r_edx+0xf8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062dcb6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0062dcb9: mov dword ptr [edx + 0xc4], edi */ W32((u32)(r_edx+0xc4u), r_edi);
    /* 0062dcbf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62dcc4u); f_008587a5();
    /* 0062dcc4: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062dcc7: fild dword ptr [edx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x88u)));
    /* 0062dccd: fmul dword ptr [0x932928] */ ST(0) = ST(0) * R_F32((u32)(0x932928u));
    /* 0062dcd3: fadd dword ptr [0x932950] */ ST(0) = ST(0) + R_F32((u32)(0x932950u));
    /* 0062dcd9: fld dword ptr [0x932924] */ FPUSH(R_F32((u32)(0x932924u)));
    /* 0062dcdf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062dce1: fstp dword ptr [edx + 0xec] */ W_F32((u32)(r_edx+0xecu), ST(0)); FPOP();
    /* 0062dce7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0062dcea: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0062dced: fdiv dword ptr [0x932918] */ ST(0) = ST(0) / R_F32((u32)(0x932918u));
    /* 0062dcf3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062dcf5: fmul dword ptr [0x93291c] */ ST(0) = ST(0) * R_F32((u32)(0x93291cu));
    /* 0062dcfb: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062dcfd: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0062dd00: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0062dd04: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062dd09: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062dd0c: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0062dd0f: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062dd12: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0062dd15: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062dd18: mov dword ptr [edx + 0xfc], ecx */ W32((u32)(r_edx+0xfcu), r_ecx);
    /* 0062dd1e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x62dd23u); f_0082dcbc();
    /* 0062dd23: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062dd26: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062dd29: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062dd2c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062dd2f: fld dword ptr [eax + 0xec] */ FPUSH(R_F32((u32)(r_eax+0xecu)));
    /* 0062dd35: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062dd37: fstp dword ptr [eax + 0xf0] */ W_F32((u32)(r_eax+0xf0u), ST(0)); FPOP();
    /* 0062dd3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062dd40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062dd47: mov esp, ebp */ r_esp = r_ebp;
    /* 0062dd49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062dd4a: ret 4 */ FN_RET(0x0062db94); r_esp += 8; return;
}

void f_0062dd50(void) /* sub_62DD50 */
{
    FN_ENTER(0x0062dd50);
    /* 0062dd50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd51: mov ebp, esp */ r_ebp = r_esp;
    /* 0062dd53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd55: push 0x8e3574 */ { u32 v = 0x8e3574u; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062dd60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062dd68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062dd6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062dd6e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062dd71: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062dd74: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062dd77: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd7c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062dd83: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62dd88u); f_008581c5();
    /* 0062dd88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062dd89: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062dd8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dd8e: je 0x62ddcf */ if (fZ) goto L_0062ddcf;
L_0062dd90:; BB(0x0062dd90);
    /* 0062dd90: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062dd97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062dd9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062dda1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062dda3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dda4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dda5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dda6: push 0x9c6008 */ { u32 v = 0x9c6008u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ddab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ddad: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62ddb2u); f_005b7a84();
    /* 0062ddb2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062ddb5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062ddbc:; BB(0x0062ddbc);
    /* 0062ddbc: mov dword ptr [0xa8ee98], eax */ W32((u32)(0xa8ee98u), r_eax);
    /* 0062ddc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ddc4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062ddcb: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ddcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ddce: ret  */ FN_RET(0x0062dd50); r_esp += 4; return;
L_0062ddcf:; BB(0x0062ddcf);
    /* 0062ddcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062ddd1: jmp 0x62ddbc */ goto L_0062ddbc;
}

void f_0062ddd4(void) /* sub_62DDD4 */
{
    FN_ENTER(0x0062ddd4);
    /* 0062ddd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ddd5: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ddd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ddd9: push 0x8e359c */ { u32 v = 0x8e359cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ddde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062dde4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dde5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062ddec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ddef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062ddf2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062ddf5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062ddf8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062ddfb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062de00: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062de07: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62de0cu); f_008581c5();
    /* 0062de0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062de0d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062de10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062de12: je 0x62de53 */ if (fZ) goto L_0062de53;
L_0062de14:; BB(0x0062de14);
    /* 0062de14: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062de1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062de22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062de25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062de27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062de28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062de29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062de2a: push 0x9c5fe8 */ { u32 v = 0x9c5fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062de2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062de31: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62de36u); f_005b7a84();
    /* 0062de36: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062de39: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062de40:; BB(0x0062de40);
    /* 0062de40: mov dword ptr [0xa8ee9c], eax */ W32((u32)(0xa8ee9cu), r_eax);
    /* 0062de45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062de48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062de4f: mov esp, ebp */ r_esp = r_ebp;
    /* 0062de51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062de52: ret  */ FN_RET(0x0062ddd4); r_esp += 4; return;
L_0062de53:; BB(0x0062de53);
    /* 0062de53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062de55: jmp 0x62de40 */ goto L_0062de40;
}

void f_0062de58(void) /* sub_62DE58 */
{
    FN_ENTER(0x0062de58);
    /* 0062de58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062de59: mov ebp, esp */ r_ebp = r_esp;
    /* 0062de5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062de5d: push 0x8e35c4 */ { u32 v = 0x8e35c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062de62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062de68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062de69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062de70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062de73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062de76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062de79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062de7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062de7f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062de84: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062de8b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62de90u); f_008581c5();
    /* 0062de90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062de91: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062de94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062de96: je 0x62ded7 */ if (fZ) goto L_0062ded7;
L_0062de98:; BB(0x0062de98);
    /* 0062de98: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062de9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062dea6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062dea9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062deab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062deac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dead: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062deae: push 0x9c5fc8 */ { u32 v = 0x9c5fc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062deb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062deb5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62debau); f_005b7a84();
    /* 0062deba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062debd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062dec4:; BB(0x0062dec4);
    /* 0062dec4: mov dword ptr [0xa8eea0], eax */ W32((u32)(0xa8eea0u), r_eax);
    /* 0062dec9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062decc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062ded3: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ded5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ded6: ret  */ FN_RET(0x0062de58); r_esp += 4; return;
L_0062ded7:; BB(0x0062ded7);
    /* 0062ded7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062ded9: jmp 0x62dec4 */ goto L_0062dec4;
}

void f_0062dedc(void) /* sub_62DEDC */
{
    FN_ENTER(0x0062dedc);
    /* 0062dedc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dedd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062dedf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062dee1: call 0x62ee7c */ r_esp -= 4; W32(r_esp, 0x62dee6u); f_0062ee7c();
    /* 0062dee6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062deea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062deec: jne 0x62def2 */ if (!fZ) goto L_0062def2;
L_0062deee:; BB(0x0062deee);
    /* 0062deee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062deef: ret 4 */ FN_RET(0x0062dedc); r_esp += 8; return;
L_0062def2:; BB(0x0062def2);
    /* 0062def2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062def3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62def8u); f_005c2f74();
    /* 0062def8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062def9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062defa: ret 4 */ FN_RET(0x0062dedc); r_esp += 8; return;
}

void f_0062df00(void) /* sub_62DF00 */
{
    FN_ENTER(0x0062df00);
    /* 0062df00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062df01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062df03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062df05: call 0x62eecc */ r_esp -= 4; W32(r_esp, 0x62df0au); f_0062eecc();
    /* 0062df0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062df0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062df10: jne 0x62df16 */ if (!fZ) goto L_0062df16;
L_0062df12:; BB(0x0062df12);
    /* 0062df12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062df13: ret 4 */ FN_RET(0x0062df00); r_esp += 8; return;
L_0062df16:; BB(0x0062df16);
    /* 0062df16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062df17: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62df1cu); f_005c2f74();
    /* 0062df1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062df1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062df1e: ret 4 */ FN_RET(0x0062df00); r_esp += 8; return;
}

void f_0062df24(void) /* sub_62DF24 */
{
    FN_ENTER(0x0062df24);
    /* 0062df24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062df25: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062df28: mov esi, ecx */ r_esi = r_ecx;
    /* 0062df2a: fld dword ptr [esi + 0x70] */ FPUSH(R_F32((u32)(r_esi+0x70u)));
    /* 0062df2d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0062df30: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0062df34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062df39: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0062df3d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0062df41: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062df45: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0062df48: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062df4c: mov dword ptr [esi + 0x350], eax */ W32((u32)(r_esi+0x350u), r_eax);
    /* 0062df52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062df54: jl 0x62df99 */ if ((fS!=fO)) goto L_0062df99;
L_0062df56:; BB(0x0062df56);
    /* 0062df56: jle 0x62df67 */ if ((fZ||fS!=fO)) goto L_0062df67;
L_0062df58:; BB(0x0062df58);
    /* 0062df58: mov dword ptr [esi + 0x34c], 1 */ W32((u32)(r_esi+0x34cu), 0x1u);
    /* 0062df62: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062df65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062df66: ret  */ FN_RET(0x0062df24); r_esp += 4; return;
L_0062df67:; BB(0x0062df67);
    /* 0062df67: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x62df6cu); f_007a61a4();
    /* 0062df6c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062df6f: je 0x62df80 */ if (fZ) goto L_0062df80;
L_0062df71:; BB(0x0062df71);
    /* 0062df71: mov dword ptr [esi + 0x34c], 2 */ W32((u32)(r_esi+0x34cu), 0x2u);
    /* 0062df7b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062df7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062df7f: ret  */ FN_RET(0x0062df24); r_esp += 4; return;
L_0062df80:; BB(0x0062df80);
    /* 0062df80: mov dword ptr [esi + 0x34c], 0 */ W32((u32)(r_esi+0x34cu), 0x0u);
    /* 0062df8a: mov dword ptr [esi + 0x8c], 0x1e */ W32((u32)(r_esi+0x8cu), 0x1eu);
    /* 0062df94: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062df97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062df98: ret  */ FN_RET(0x0062df24); r_esp += 4; return;
L_0062df99:; BB(0x0062df99);
    /* 0062df99: mov dword ptr [esi + 0x34c], 0 */ W32((u32)(r_esi+0x34cu), 0x0u);
    /* 0062dfa3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062dfa6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dfa7: ret  */ FN_RET(0x0062df24); r_esp += 4; return;
}

void f_0062dfa8(void) /* sub_62DFA8 */
{
    FN_ENTER(0x0062dfa8);
    /* 0062dfa8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfa9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062dfab: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x62dfb0u); f_00807e78();
    /* 0062dfb0: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062dfb3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062dfb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfb7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfb8: push dword ptr [eax*4 + 0x932b00] */ { u32 v = R32((u32)(r_eax*4+0x932b00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062dfbf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x62dfc4u); f_00814298();
    /* 0062dfc4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062dfc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062dfc8: ret  */ FN_RET(0x0062dfa8); r_esp += 4; return;
}

void f_0062dfcc(void) /* sub_62DFCC */
{
    FN_ENTER(0x0062dfcc);
    /* 0062dfcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfcd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062dfcf: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x62dfd4u); f_00807e78();
    /* 0062dfd4: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062dfd7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062dfd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfdb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfdc: push dword ptr [eax*4 + 0x932aa0] */ { u32 v = R32((u32)(r_eax*4+0x932aa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062dfe3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x62dfe8u); f_00814298();
    /* 0062dfe8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062dfec: ret  */ FN_RET(0x0062dfcc); r_esp += 4; return;
}

void f_0062dff0(void) /* sub_62DFF0 */
{
    FN_ENTER(0x0062dff0);
    /* 0062dff0: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0062dff2: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dff8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dff9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x62dffeu); f_0050b510();
    /* 0062dffe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e001: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e003: je 0x62e013 */ if (fZ) goto L_0062e013;
L_0062e005:; BB(0x0062e005);
    /* 0062e005: mov dword ptr [eax + 0x44], 0x3fa00000 */ W32((u32)(r_eax+0x44u), 0x3fa00000u);
    /* 0062e00c: mov dword ptr [eax + 0x48], 0x3fa00000 */ W32((u32)(r_eax+0x48u), 0x3fa00000u);
L_0062e013:; BB(0x0062e013);
    /* 0062e013: ret  */ FN_RET(0x0062dff0); r_esp += 4; return;
}

