#include "protos.h"

void f_00746036(void)
{
    FN_ENTER(0x00746036);
    /* 00746036: mov eax, ecx */ r_eax = r_ecx;
    /* 00746038: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0074603b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074603d: je 0x74604e */ if (fZ) goto L_0074604e;
L_0074603f:; BB(0x0074603f);
    /* 0074603f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x746044u); f_007127b0();
    /* 00746044: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746047: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_0074604e:; BB(0x0074604e);
    /* 0074604e: mov ebx, dword ptr [eax + 0x8c] */ r_ebx = R32((u32)(r_eax+0x8cu));
    /* 00746054: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746056: je 0x74718b */ if (fZ) goto L_0074718b;
L_0074605c:; BB(0x0074605c);
    /* 0074605c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074605f: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00746062: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746064: je 0x747166 */ if (fZ) goto L_00747166;
L_0074606a:; BB(0x0074606a);
    /* 0074606a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074606c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746071u); f_007365f4();
    /* 00746071: mov word ptr [ebx + 0x8e], ax */ W16((u32)(r_ebx+0x8eu), (u16)r_eax);
    /* 00746078: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074607b: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00746081: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746088: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074608e: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00746095: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00746098: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074609a: je 0x7460a3 */ if (fZ) goto L_007460a3;
L_0074609c:; BB(0x0074609c);
    /* 0074609c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074609e: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7460a3u); f_00760acc();
L_007460a3:; BB(0x007460a3);
    /* 007460a3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007460a6: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 007460aa: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007460ad: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 007460b3: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 007460b6: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007460b9: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 007460bc: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x7460c1u); f_00747dac();
    /* 007460c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007460c4: mov eax, ebx */ r_eax = r_ebx;
    /* 007460c6: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 007460cc: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007460d3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007460d5: je 0x7460fa */ if (fZ) goto L_007460fa;
L_007460d7:; BB(0x007460d7);
    /* 007460d7: mov edx, ebx */ r_edx = r_ebx;
    /* 007460d9: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007460dc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007460e1: mov word ptr [ecx + 0x8e], ax */ W16((u32)(r_ecx+0x8eu), (u16)r_eax);
    /* 007460e8: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 007460ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007460ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007460f6: mov esp, ebp */ r_esp = r_ebp;
    /* 007460f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007460f9: ret  */ FN_RET(0x00746036); r_esp += 4; return;
L_007460fa:; BB(0x007460fa);
    /* 007460fa: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007460fc: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746102:; BB(0x00746102);
    /* 00746102: movsx ebx, word ptr [ecx + 0x8e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8eu));
    /* 00746109: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74610eu); f_007365f4();
    /* 0074610e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074610f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746110: call 0x781d44 */ r_esp -= 4; W32(r_esp, 0x746115u); f_00781d44();
    /* 00746115: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746118: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074611b: mov edx, dword ptr [ebx + 0x8c] */ r_edx = R32((u32)(r_ebx+0x8cu));
    /* 00746121: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00746126: mov word ptr [edx + 0x8e], ax */ W16((u32)(r_edx+0x8eu), (u16)r_eax);
    /* 0074612d: mov ecx, dword ptr [ebx + 0x8c] */ r_ecx = R32((u32)(r_ebx+0x8cu));
    /* 00746133: call 0x748430 */ r_esp -= 4; W32(r_esp, 0x746138u); f_00748430();
    /* 00746138: mov eax, ebx */ r_eax = r_ebx;
    /* 0074613a: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0074613e: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746036); r_esp += 4; return;
L_00747166:; BB(0x00747166);
    /* 00747166: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00747168: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74716du); f_007365f4();
    /* 0074716d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747170: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00747173: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747174: call 0x747d84 */ r_esp -= 4; W32(r_esp, 0x747179u); f_00747d84();
    /* 00747179: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074717a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074717d: mov ebx, dword ptr [edx + 0x8c] */ r_ebx = R32((u32)(r_edx+0x8cu));
    /* 00747183: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 00747186: jmp 0x74606a */ goto L_0074606a;
L_0074718b:; BB(0x0074718b);
    /* 0074718b: call 0x747d6c */ r_esp -= 4; W32(r_esp, 0x747190u); f_00747d6c();
    /* 00747190: mov ebx, eax */ r_ebx = r_eax;
    /* 00747192: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747195: mov dword ptr [edx + 0x8c], ebx */ W32((u32)(r_edx+0x8cu), r_ebx);
    /* 0074719b: jmp 0x74605c */ goto L_0074605c;
}

void f_007460aa(void)
{
    FN_ENTER(0x007460aa);
    /* 007460aa: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007460ad: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 007460b3: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 007460b6: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007460b9: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 007460bc: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x7460c1u); f_00747dac();
    /* 007460c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007460c4: mov eax, ebx */ r_eax = r_ebx;
    /* 007460c6: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 007460cc: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007460d3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007460d5: je 0x7460fa */ if (fZ) goto L_007460fa;
L_007460d7:; BB(0x007460d7);
    /* 007460d7: mov edx, ebx */ r_edx = r_ebx;
    /* 007460d9: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007460dc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007460e1: mov word ptr [ecx + 0x8e], ax */ W16((u32)(r_ecx+0x8eu), (u16)r_eax);
    /* 007460e8: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 007460ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007460ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007460f6: mov esp, ebp */ r_esp = r_ebp;
    /* 007460f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007460f9: ret  */ FN_RET(0x007460aa); r_esp += 4; return;
L_007460fa:; BB(0x007460fa);
    /* 007460fa: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007460fc: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746102:; BB(0x00746102);
    /* 00746102: movsx ebx, word ptr [ecx + 0x8e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8eu));
    /* 00746109: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74610eu); f_007365f4();
    /* 0074610e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074610f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746110: call 0x781d44 */ r_esp -= 4; W32(r_esp, 0x746115u); f_00781d44();
    /* 00746115: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746118: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074611b: mov edx, dword ptr [ebx + 0x8c] */ r_edx = R32((u32)(r_ebx+0x8cu));
    /* 00746121: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00746126: mov word ptr [edx + 0x8e], ax */ W16((u32)(r_edx+0x8eu), (u16)r_eax);
    /* 0074612d: mov ecx, dword ptr [ebx + 0x8c] */ r_ecx = R32((u32)(r_ebx+0x8cu));
    /* 00746133: call 0x748430 */ r_esp -= 4; W32(r_esp, 0x746138u); f_00748430();
    /* 00746138: mov eax, ebx */ r_eax = r_ebx;
    /* 0074613a: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0074613e: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007460aa); r_esp += 4; return;
}

void f_00746143(void)
{
    FN_ENTER(0x00746143);
    /* 00746143: mov eax, ecx */ r_eax = r_ecx;
    /* 00746145: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0074614b: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746152: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00746158: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0074615f: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00746162: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746164: je 0x74616d */ if (fZ) goto L_0074616d;
L_00746166:; BB(0x00746166);
    /* 00746166: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00746168: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74616du); f_00760acc();
L_0074616d:; BB(0x0074616d);
    /* 0074616d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746170: mov byte ptr [eax + 0x1c], 0x1a */ W8((u32)(r_eax+0x1cu), 0x1au);
    /* 00746174: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746177: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0074617d: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 00746180: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746183: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00746186: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x74618bu); f_00747dac();
    /* 0074618b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074618e: mov eax, ebx */ r_eax = r_ebx;
    /* 00746190: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00746196: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074619d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074619f: je 0x7461b8 */ if (fZ) goto L_007461b8;
L_007461a1:; BB(0x007461a1);
    /* 007461a1: mov eax, ebx */ r_eax = r_ebx;
    /* 007461a3: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007461a6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007461aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007461ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007461b4: mov esp, ebp */ r_esp = r_ebp;
    /* 007461b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007461b7: ret  */ FN_RET(0x00746143); r_esp += 4; return;
L_007461b8:; BB(0x007461b8);
    /* 007461b8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007461ba: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007461c0:; BB(0x007461c0);
    /* 007461c0: mov eax, ebx */ r_eax = r_ebx;
    /* 007461c2: mov byte ptr [eax + 0x1c], 0x1b */ W8((u32)(r_eax+0x1cu), 0x1bu);
    /* 007461c6: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746143); r_esp += 4; return;
}

void f_00746153(void)
{
    FN_ENTER(0x00746153);
    goto L_00746153;
L_00746152:; BB(0x00746152);
    /* 00746152: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
L_00746153:; BB(0x00746153);
    /* 00746153: loop 0x746152 */ r_ecx--; if (r_ecx) goto L_00746152;
    /* 00746155: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00746157: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00746158: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0074615a: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    /* 0074615b: test byte ptr [eax], al */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 0074615d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0074615f: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00746162: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746164: je 0x74616d */ if (fZ) goto L_0074616d;
L_00746166:; BB(0x00746166);
    /* 00746166: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00746168: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74616du); f_00760acc();
L_0074616d:; BB(0x0074616d);
    /* 0074616d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746170: mov byte ptr [eax + 0x1c], 0x1a */ W8((u32)(r_eax+0x1cu), 0x1au);
    /* 00746174: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746177: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0074617d: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 00746180: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746183: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00746186: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x74618bu); f_00747dac();
    /* 0074618b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074618e: mov eax, ebx */ r_eax = r_ebx;
    /* 00746190: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00746196: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074619d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074619f: je 0x7461b8 */ if (fZ) goto L_007461b8;
L_007461a1:; BB(0x007461a1);
    /* 007461a1: mov eax, ebx */ r_eax = r_ebx;
    /* 007461a3: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007461a6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007461aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007461ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007461b4: mov esp, ebp */ r_esp = r_ebp;
    /* 007461b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007461b7: ret  */ FN_RET(0x00746153); r_esp += 4; return;
L_007461b8:; BB(0x007461b8);
    /* 007461b8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007461ba: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007461c0:; BB(0x007461c0);
    /* 007461c0: mov eax, ebx */ r_eax = r_ebx;
    /* 007461c2: mov byte ptr [eax + 0x1c], 0x1b */ W8((u32)(r_eax+0x1cu), 0x1bu);
    /* 007461c6: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746153); r_esp += 4; return;
}

void f_00746164(void)
{
    FN_ENTER(0x00746164);
    /* 00746164: je 0x74616d */ if (fZ) goto L_0074616d;
L_00746166:; BB(0x00746166);
    /* 00746166: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00746168: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74616du); f_00760acc();
L_0074616d:; BB(0x0074616d);
    /* 0074616d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746170: mov byte ptr [eax + 0x1c], 0x1a */ W8((u32)(r_eax+0x1cu), 0x1au);
    /* 00746174: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746177: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0074617d: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 00746180: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746183: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00746186: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x74618bu); f_00747dac();
    /* 0074618b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074618e: mov eax, ebx */ r_eax = r_ebx;
    /* 00746190: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00746196: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074619d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074619f: je 0x7461b8 */ if (fZ) goto L_007461b8;
L_007461a1:; BB(0x007461a1);
    /* 007461a1: mov eax, ebx */ r_eax = r_ebx;
    /* 007461a3: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007461a6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007461aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007461ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007461b4: mov esp, ebp */ r_esp = r_ebp;
    /* 007461b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007461b7: ret  */ FN_RET(0x00746164); r_esp += 4; return;
L_007461b8:; BB(0x007461b8);
    /* 007461b8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007461ba: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007461c0:; BB(0x007461c0);
    /* 007461c0: mov eax, ebx */ r_eax = r_ebx;
    /* 007461c2: mov byte ptr [eax + 0x1c], 0x1b */ W8((u32)(r_eax+0x1cu), 0x1bu);
    /* 007461c6: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746164); r_esp += 4; return;
}

void f_00746173(void)
{
    FN_ENTER(0x00746173);
    /* 00746173: sbb cl, byte ptr [ebx - 0x7c7417a3] */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = R8((u32)(r_ebx+0x838be85du)); u32 r = (a - b - c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00746179: mov word ptr [eax], es */ W16((u32)(r_eax), 0x2bu);
    /* 0074617b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0074617d: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 00746180: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746183: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00746186: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x74618bu); f_00747dac();
    /* 0074618b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074618e: mov eax, ebx */ r_eax = r_ebx;
    /* 00746190: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00746196: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074619d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074619f: je 0x7461b8 */ if (fZ) goto L_007461b8;
L_007461a1:; BB(0x007461a1);
    /* 007461a1: mov eax, ebx */ r_eax = r_ebx;
    /* 007461a3: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007461a6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007461aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007461ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007461b4: mov esp, ebp */ r_esp = r_ebp;
    /* 007461b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007461b7: ret  */ FN_RET(0x00746173); r_esp += 4; return;
L_007461b8:; BB(0x007461b8);
    /* 007461b8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007461ba: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007461c0:; BB(0x007461c0);
    /* 007461c0: mov eax, ebx */ r_eax = r_ebx;
    /* 007461c2: mov byte ptr [eax + 0x1c], 0x1b */ W8((u32)(r_eax+0x1cu), 0x1bu);
    /* 007461c6: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746173); r_esp += 4; return;
}

void f_00746174(void)
{
    FN_ENTER(0x00746174);
    /* 00746174: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746177: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0074617d: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 00746180: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746183: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00746186: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x74618bu); f_00747dac();
    /* 0074618b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074618e: mov eax, ebx */ r_eax = r_ebx;
    /* 00746190: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00746196: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074619d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074619f: je 0x7461b8 */ if (fZ) goto L_007461b8;
L_007461a1:; BB(0x007461a1);
    /* 007461a1: mov eax, ebx */ r_eax = r_ebx;
    /* 007461a3: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007461a6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007461aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007461ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007461b4: mov esp, ebp */ r_esp = r_ebp;
    /* 007461b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007461b7: ret  */ FN_RET(0x00746174); r_esp += 4; return;
L_007461b8:; BB(0x007461b8);
    /* 007461b8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007461ba: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007461c0:; BB(0x007461c0);
    /* 007461c0: mov eax, ebx */ r_eax = r_ebx;
    /* 007461c2: mov byte ptr [eax + 0x1c], 0x1b */ W8((u32)(r_eax+0x1cu), 0x1bu);
    /* 007461c6: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746174); r_esp += 4; return;
}

void f_007461cb(void)
{
    FN_ENTER(0x007461cb);
    /* 007461cb: mov eax, ecx */ r_eax = r_ecx;
    /* 007461cd: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 007461d0: jmp 0x7461ee */ goto L_007461ee;
L_007461ee:; BB(0x007461ee);
    /* 007461ee: mov ecx, eax */ r_ecx = r_eax;
    /* 007461f0: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7461f5u); f_0073d114();
    /* 007461f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007461f7: je 0x74620e */ if (fZ) goto L_0074620e;
L_007461f9:; BB(0x007461f9);
    /* 007461f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007461fc: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 00746200: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746203: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074620a: mov esp, ebp */ r_esp = r_ebp;
    /* 0074620c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074620d: ret  */ FN_RET(0x007461cb); r_esp += 4; return;
L_0074620e:; BB(0x0074620e);
    /* 0074620e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746211: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00746214: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x746219u); f_0073ce50();
    /* 00746219: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074621b: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746221:; BB(0x00746221);
    /* 00746221: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746224: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00746227: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x74622cu); f_0073d134();
    /* 0074622c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074622e: je 0x74623c */ if (fZ) goto L_0074623c;
L_00746230:; BB(0x00746230);
    /* 00746230: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746233: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 00746237: jmp 0x7469c9 */ goto L_007469c9;
L_0074623c:; BB(0x0074623c);
    /* 0074623c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074623f: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00746245: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74624au); f_007365f4();
    /* 0074624a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074624b: call 0x781c3c */ r_esp -= 4; W32(r_esp, 0x746250u); f_00781c3c();
    /* 00746250: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746251: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746254: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00746258: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007461cb); r_esp += 4; return;
}

void f_007461d2(void)
{
    FN_ENTER(0x007461d2);
    /* 007461d2: mov eax, ecx */ r_eax = r_ecx;
    /* 007461d4: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007461d7: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x7461dcu); f_0073600c();
    /* 007461dc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007461df: call 0x747854 */ r_esp -= 4; W32(r_esp, 0x7461e4u); f_00747854();
    /* 007461e4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007461e7: mov byte ptr [edx + 0x1c], 0x16 */ W8((u32)(r_edx+0x1cu), 0x16u);
    /* 007461eb: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 007461ee: mov ecx, eax */ r_ecx = r_eax;
    /* 007461f0: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7461f5u); f_0073d114();
    /* 007461f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007461f7: je 0x74620e */ if (fZ) goto L_0074620e;
L_007461f9:; BB(0x007461f9);
    /* 007461f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007461fc: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 00746200: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746203: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074620a: mov esp, ebp */ r_esp = r_ebp;
    /* 0074620c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074620d: ret  */ FN_RET(0x007461d2); r_esp += 4; return;
L_0074620e:; BB(0x0074620e);
    /* 0074620e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746211: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00746214: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x746219u); f_0073ce50();
    /* 00746219: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074621b: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746221:; BB(0x00746221);
    /* 00746221: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746224: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00746227: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x74622cu); f_0073d134();
    /* 0074622c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074622e: je 0x74623c */ if (fZ) goto L_0074623c;
L_00746230:; BB(0x00746230);
    /* 00746230: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746233: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 00746237: jmp 0x7469c9 */ goto L_007469c9;
L_0074623c:; BB(0x0074623c);
    /* 0074623c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074623f: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00746245: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74624au); f_007365f4();
    /* 0074624a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074624b: call 0x781c3c */ r_esp -= 4; W32(r_esp, 0x746250u); f_00781c3c();
    /* 00746250: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746251: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746254: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00746258: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007461d2); r_esp += 4; return;
}

void f_0074625d(void)
{
    FN_ENTER(0x0074625d);
    /* 0074625d: mov eax, ecx */ r_eax = r_ecx;
    /* 0074625f: mov eax, dword ptr [eax + 0x88] */ r_eax = R32((u32)(r_eax+0x88u));
    /* 00746265: jmp 0x7462d9 */ goto L_007462d9;
L_007462d9:; BB(0x007462d9);
    /* 007462d9: mov ecx, eax */ r_ecx = r_eax;
    /* 007462db: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x7462e0u); f_0078ed20();
    /* 007462e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007462e2: je 0x7462f9 */ if (fZ) goto L_007462f9;
L_007462e4:; BB(0x007462e4);
    /* 007462e4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007462e7: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007462eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007462ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007462f5: mov esp, ebp */ r_esp = r_ebp;
    /* 007462f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007462f8: ret  */ FN_RET(0x0074625d); r_esp += 4; return;
L_007462f9:; BB(0x007462f9);
    /* 007462f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007462fc: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00746302: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x746307u); f_0078ed14();
    /* 00746307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746309: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074630f:; BB(0x0074630f);
    /* 0074630f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746312: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00746318: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x74631du); f_0078ed4c();
    /* 0074631d: mov ebx, eax */ r_ebx = r_eax;
    /* 0074631f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00746324: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746325: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x74632au); f_00813a78();
    /* 0074632a: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074632f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746332: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00746335: call 0x781e68 */ r_esp -= 4; W32(r_esp, 0x74633au); f_00781e68();
    /* 0074633a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074633b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x746340u); f_00857e98();
    /* 00746340: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00746343: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746346: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074634a: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x0074625d); r_esp += 4; return;
}

void f_00746267(void)
{
    FN_ENTER(0x00746267);
    /* 00746267: mov eax, ecx */ r_eax = r_ecx;
    /* 00746269: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0074626c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074626e: je 0x74627f */ if (fZ) goto L_0074627f;
L_00746270:; BB(0x00746270);
    /* 00746270: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x746275u); f_007127b0();
    /* 00746275: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746278: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_0074627f:; BB(0x0074627f);
    /* 0074627f: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00746285: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746287: je 0x7462ac */ if (fZ) goto L_007462ac;
L_00746289:; BB(0x00746289);
    /* 00746289: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74628eu); f_007365f4();
    /* 0074628e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746291: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 00746297: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0074629a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74629fu); f_007127b0();
    /* 0074629f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007462a2: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
L_007462ac:; BB(0x007462ac);
    /* 007462ac: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007462af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007462b1: je 0x7462c2 */ if (fZ) goto L_007462c2;
L_007462b3:; BB(0x007462b3);
    /* 007462b3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7462b8u); f_007127b0();
    /* 007462b8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007462bb: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_007462c2:; BB(0x007462c2);
    /* 007462c2: mov ecx, eax */ r_ecx = r_eax;
    /* 007462c4: push dword ptr [ecx + 0x2c] */ { u32 v = R32((u32)(r_ecx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007462c7: call 0x747784 */ r_esp -= 4; W32(r_esp, 0x7462ccu); f_00747784();
    /* 007462cc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007462cf: mov byte ptr [edx + 0x1c], 0x14 */ W8((u32)(r_edx+0x1cu), 0x14u);
    /* 007462d3: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 007462d9: mov ecx, eax */ r_ecx = r_eax;
    /* 007462db: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x7462e0u); f_0078ed20();
    /* 007462e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007462e2: je 0x7462f9 */ if (fZ) goto L_007462f9;
L_007462e4:; BB(0x007462e4);
    /* 007462e4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007462e7: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007462eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007462ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007462f5: mov esp, ebp */ r_esp = r_ebp;
    /* 007462f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007462f8: ret  */ FN_RET(0x00746267); r_esp += 4; return;
L_007462f9:; BB(0x007462f9);
    /* 007462f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007462fc: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00746302: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x746307u); f_0078ed14();
    /* 00746307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746309: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074630f:; BB(0x0074630f);
    /* 0074630f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746312: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00746318: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x74631du); f_0078ed4c();
    /* 0074631d: mov ebx, eax */ r_ebx = r_eax;
    /* 0074631f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00746324: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746325: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x74632au); f_00813a78();
    /* 0074632a: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074632f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746332: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00746335: call 0x781e68 */ r_esp -= 4; W32(r_esp, 0x74633au); f_00781e68();
    /* 0074633a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074633b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x746340u); f_00857e98();
    /* 00746340: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00746343: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746346: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074634a: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746267); r_esp += 4; return;
}

void f_0074634f(void)
{
    FN_ENTER(0x0074634f);
    /* 0074634f: mov eax, ecx */ r_eax = r_ecx;
    /* 00746351: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00746354: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746356: je 0x746367 */ if (fZ) goto L_00746367;
L_00746358:; BB(0x00746358);
    /* 00746358: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74635du); f_007127b0();
    /* 0074635d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746360: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_00746367:; BB(0x00746367);
    /* 00746367: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0074636a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074636c: je 0x7471a0 */ if (fZ) goto L_007471a0;
L_00746372:; BB(0x00746372);
    /* 00746372: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746375: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0074637b: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746380u); f_007365f4();
    /* 00746380: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746384: call 0x747758 */ r_esp -= 4; W32(r_esp, 0x746389u); f_00747758();
    /* 00746389: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074638c: mov byte ptr [eax + 0x1c], 0x12 */ W8((u32)(r_eax+0x1cu), 0x12u);
    /* 00746390: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00746395: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074639b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074639c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 007463a1: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7463a6u); f_007c1160();
    /* 007463a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007463a8: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007463ae:; BB(0x007463ae);
    /* 007463ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007463b1: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 007463b5: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x0074634f); r_esp += 4; return;
L_007471a0:; BB(0x007471a0);
    /* 007471a0: mov ecx, eax */ r_ecx = r_eax;
    /* 007471a2: call 0x747728 */ r_esp -= 4; W32(r_esp, 0x7471a7u); f_00747728();
    /* 007471a7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007471aa: mov dword ptr [edx + 0x30], 0xffffffff */ W32((u32)(r_edx+0x30u), 0xffffffffu);
    /* 007471b1: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 007471b4: jmp 0x746372 */ goto L_00746372;
}

void f_0074635f(void)
{
    FN_ENTER(0x0074635f);
    /* 0074635f: call 0xe0a42b */ r_esp -= 4; W32(r_esp, 0x746364u); f_00e0a42b();
    /* 00746364: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00746366: add byte ptr [ebx - 0x2d7a8bb0], cl */ { u32 ad = (u32)(r_ebx+0xd2857450u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0074636c: je 0x7471a0 */ if (fZ) goto L_007471a0;
L_00746372:; BB(0x00746372);
    /* 00746372: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746375: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0074637b: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746380u); f_007365f4();
    /* 00746380: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746384: call 0x747758 */ r_esp -= 4; W32(r_esp, 0x746389u); f_00747758();
    /* 00746389: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074638c: mov byte ptr [eax + 0x1c], 0x12 */ W8((u32)(r_eax+0x1cu), 0x12u);
    /* 00746390: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00746395: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074639b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074639c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 007463a1: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7463a6u); f_007c1160();
    /* 007463a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007463a8: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007463ae:; BB(0x007463ae);
    /* 007463ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007463b1: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 007463b5: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x0074635f); r_esp += 4; return;
L_007471a0:; BB(0x007471a0);
    /* 007471a0: mov ecx, eax */ r_ecx = r_eax;
    /* 007471a2: call 0x747728 */ r_esp -= 4; W32(r_esp, 0x7471a7u); f_00747728();
    /* 007471a7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007471aa: mov dword ptr [edx + 0x30], 0xffffffff */ W32((u32)(r_edx+0x30u), 0xffffffffu);
    /* 007471b1: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 007471b4: jmp 0x746372 */ goto L_00746372;
}

void f_00746365(void)
{
    FN_ENTER(0x00746365);
    /* 00746365: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00746367: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0074636a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074636c: je 0x7471a0 */ if (fZ) goto L_007471a0;
L_00746372:; BB(0x00746372);
    /* 00746372: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746375: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0074637b: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746380u); f_007365f4();
    /* 00746380: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746384: call 0x747758 */ r_esp -= 4; W32(r_esp, 0x746389u); f_00747758();
    /* 00746389: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074638c: mov byte ptr [eax + 0x1c], 0x12 */ W8((u32)(r_eax+0x1cu), 0x12u);
    /* 00746390: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00746395: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074639b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074639c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 007463a1: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7463a6u); f_007c1160();
    /* 007463a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007463a8: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007463ae:; BB(0x007463ae);
    /* 007463ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007463b1: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 007463b5: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746365); r_esp += 4; return;
L_007471a0:; BB(0x007471a0);
    /* 007471a0: mov ecx, eax */ r_ecx = r_eax;
    /* 007471a2: call 0x747728 */ r_esp -= 4; W32(r_esp, 0x7471a7u); f_00747728();
    /* 007471a7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007471aa: mov dword ptr [edx + 0x30], 0xffffffff */ W32((u32)(r_edx+0x30u), 0xffffffffu);
    /* 007471b1: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 007471b4: jmp 0x746372 */ goto L_00746372;
}

void f_00746390(void)
{
    FN_ENTER(0x00746390);
    /* 00746390: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00746395: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074639b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074639c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 007463a1: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7463a6u); f_007c1160();
    /* 007463a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007463a8: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007463ae:; BB(0x007463ae);
    /* 007463ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007463b1: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 007463b5: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746390); r_esp += 4; return;
}

void f_007463ba(void)
{
    FN_ENTER(0x007463ba);
    /* 007463ba: call 0x74770c */ r_esp -= 4; W32(r_esp, 0x7463bfu); f_0074770c();
    /* 007463bf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007463c2: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 007463c6: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007463ba); r_esp += 4; return;
}

void f_007463bf(void)
{
    FN_ENTER(0x007463bf);
    /* 007463bf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007463c2: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 007463c6: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007463bf); r_esp += 4; return;
}

void f_007463cb(void)
{
    FN_ENTER(0x007463cb);
    /* 007463cb: mov eax, ecx */ r_eax = r_ecx;
    /* 007463cd: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007463d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007463d2: je 0x7463e3 */ if (fZ) goto L_007463e3;
L_007463d4:; BB(0x007463d4);
    /* 007463d4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7463d9u); f_007127b0();
    /* 007463d9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007463dc: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_007463e3:; BB(0x007463e3);
    /* 007463e3: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 007463e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007463e8: je 0x7463f9 */ if (fZ) goto L_007463f9;
L_007463ea:; BB(0x007463ea);
    /* 007463ea: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7463efu); f_0073d160();
    /* 007463ef: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007463f2: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
L_007463f9:; BB(0x007463f9);
    /* 007463f9: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 007463fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007463fe: je 0x74640f */ if (fZ) goto L_0074640f;
L_00746400:; BB(0x00746400);
    /* 00746400: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x746405u); f_007127b0();
    /* 00746405: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746408: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_0074640f:; BB(0x0074640f);
    /* 0074640f: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00746412: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746414: je 0x746425 */ if (fZ) goto L_00746425;
L_00746416:; BB(0x00746416);
    /* 00746416: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74641bu); f_007127b0();
    /* 0074641b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074641e: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_00746425:; BB(0x00746425);
    /* 00746425: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00746428: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074642a: je 0x7471b9 */ if (fZ) goto L_007471b9;
L_00746430:; BB(0x00746430);
    /* 00746430: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x746435u); f_0073605c();
    /* 00746435: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746438: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0074643b: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746442: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00746448: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0074644f: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00746452: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746454: je 0x74645d */ if (fZ) goto L_0074645d;
L_00746456:; BB(0x00746456);
    /* 00746456: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00746458: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74645du); f_00760acc();
L_0074645d:; BB(0x0074645d);
    /* 0074645d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746460: mov byte ptr [eax + 0x1c], 0xe */ W8((u32)(r_eax+0x1cu), 0xeu);
    /* 00746464: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746467: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0074646a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746471: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746473: je 0x74648a */ if (fZ) goto L_0074648a;
L_00746475:; BB(0x00746475);
    /* 00746475: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746478: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 0074647c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074647f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746486: mov esp, ebp */ r_esp = r_ebp;
    /* 00746488: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00746489: ret  */ FN_RET(0x007463cb); r_esp += 4; return;
L_0074648a:; BB(0x0074648a);
    /* 0074648a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074648c: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746492:; BB(0x00746492);
    /* 00746492: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746497u); f_007365f4();
    /* 00746497: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074649a: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0074649d: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007463cb); r_esp += 4; return;
L_007471b9:; BB(0x007471b9);
    /* 007471b9: mov ecx, eax */ r_ecx = r_eax;
    /* 007471bb: call 0x74762c */ r_esp -= 4; W32(r_esp, 0x7471c0u); f_0074762c();
    /* 007471c0: mov ecx, eax */ r_ecx = r_eax;
    /* 007471c2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007471c5: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 007471c8: jmp 0x746430 */ goto L_00746430;
}

void f_00746464(void)
{
    FN_ENTER(0x00746464);
    /* 00746464: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746467: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0074646a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746471: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746473: je 0x74648a */ if (fZ) goto L_0074648a;
L_00746475:; BB(0x00746475);
    /* 00746475: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746478: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 0074647c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074647f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746486: mov esp, ebp */ r_esp = r_ebp;
    /* 00746488: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00746489: ret  */ FN_RET(0x00746464); r_esp += 4; return;
L_0074648a:; BB(0x0074648a);
    /* 0074648a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074648c: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746492:; BB(0x00746492);
    /* 00746492: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746497u); f_007365f4();
    /* 00746497: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074649a: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0074649d: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746464); r_esp += 4; return;
}

void f_007464a2(void)
{
    FN_ENTER(0x007464a2);
    /* 007464a2: mov eax, ecx */ r_eax = r_ecx;
    /* 007464a4: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007464a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007464a9: je 0x7464ba */ if (fZ) goto L_007464ba;
L_007464ab:; BB(0x007464ab);
    /* 007464ab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7464b0u); f_007127b0();
    /* 007464b0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007464b3: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_007464ba:; BB(0x007464ba);
    /* 007464ba: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 007464bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007464bf: je 0x7471ff */ if (fZ) goto L_007471ff;
L_007464c5:; BB(0x007464c5);
    /* 007464c5: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 007464cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007464cd: je 0x7471ea */ if (fZ) goto L_007471ea;
L_007464d3:; BB(0x007464d3);
    /* 007464d3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007464d6: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 007464d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007464db: je 0x7471cd */ if (fZ) goto L_007471cd;
L_007464e1:; BB(0x007464e1);
    /* 007464e1: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 007464e6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7464ebu); f_0073ec50();
    /* 007464eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007464ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007464ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007464f0: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007464f3: call 0x712c2c */ r_esp -= 4; W32(r_esp, 0x7464f8u); f_00712c2c();
    /* 007464f8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007464fb: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007464fe: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x746503u); f_007127c8();
    /* 00746503: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746506: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0074650c: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746513: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00746519: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00746520: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00746523: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746525: je 0x74652e */ if (fZ) goto L_0074652e;
L_00746527:; BB(0x00746527);
    /* 00746527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00746529: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74652eu); f_00760acc();
L_0074652e:; BB(0x0074652e);
    /* 0074652e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746531: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 00746535: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746538: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0074653e: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 00746541: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746544: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00746547: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x74654cu); f_00747dac();
    /* 0074654c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074654f: mov eax, ebx */ r_eax = r_ebx;
    /* 00746551: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00746557: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74655cu); f_007365f4();
    /* 0074655c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074655e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074655f: call 0x747758 */ r_esp -= 4; W32(r_esp, 0x746564u); f_00747758();
    /* 00746564: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074656a: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0074656f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x746574u); f_007c1160();
    /* 00746574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746576: je 0x74659c */ if (fZ) goto L_0074659c;
L_00746578:; BB(0x00746578);
    /* 00746578: mov eax, ebx */ r_eax = r_ebx;
    /* 0074657a: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0074657d: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x746582u); f_00712480();
    /* 00746582: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746584: je 0x746592 */ if (fZ) goto L_00746592;
L_00746586:; BB(0x00746586);
    /* 00746586: mov eax, ebx */ r_eax = r_ebx;
    /* 00746588: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0074658b: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x746590u); f_007127c8();
    /* 00746590: jmp 0x74659c */ goto L_0074659c;
L_00746592:; BB(0x00746592);
    /* 00746592: mov eax, ebx */ r_eax = r_ebx;
    /* 00746594: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00746597: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x74659cu); f_00712714();
L_0074659c:; BB(0x0074659c);
    /* 0074659c: mov eax, ebx */ r_eax = r_ebx;
    /* 0074659e: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 007465a4: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007465ab: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007465ad: je 0x7465c6 */ if (fZ) goto L_007465c6;
L_007465af:; BB(0x007465af);
    /* 007465af: mov eax, ebx */ r_eax = r_ebx;
    /* 007465b1: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007465b4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007465b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007465bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007465c2: mov esp, ebp */ r_esp = r_ebp;
    /* 007465c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007465c5: ret  */ FN_RET(0x007464a2); r_esp += 4; return;
L_007465c6:; BB(0x007465c6);
    /* 007465c6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007465c8: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007465ce:; BB(0x007465ce);
    /* 007465ce: mov eax, ebx */ r_eax = r_ebx;
    /* 007465d0: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 007465d4: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007464a2); r_esp += 4; return;
L_007471cd:; BB(0x007471cd);
    /* 007471cd: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7471d2u); f_007365f4();
    /* 007471d2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007471d5: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 007471d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007471d9: call 0x747d84 */ r_esp -= 4; W32(r_esp, 0x7471deu); f_00747d84();
    /* 007471de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007471df: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007471e2: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 007471e5: jmp 0x7464e1 */ goto L_007464e1;
L_007471ea:; BB(0x007471ea);
    /* 007471ea: call 0x747d6c */ r_esp -= 4; W32(r_esp, 0x7471efu); f_00747d6c();
    /* 007471ef: mov ecx, eax */ r_ecx = r_eax;
    /* 007471f1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007471f4: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
    /* 007471fa: jmp 0x7464d3 */ goto L_007464d3;
L_007471ff:; BB(0x007471ff);
    /* 007471ff: mov ecx, eax */ r_ecx = r_eax;
    /* 00747201: call 0x747728 */ r_esp -= 4; W32(r_esp, 0x747206u); f_00747728();
    /* 00747206: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747209: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 0074720c: mov ecx, eax */ r_ecx = r_eax;
    /* 0074720e: call 0x71280c */ r_esp -= 4; W32(r_esp, 0x747213u); f_0071280c();
    /* 00747213: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747216: mov dword ptr [eax + 0x30], 0xffffffff */ W32((u32)(r_eax+0x30u), 0xffffffffu);
    /* 0074721d: jmp 0x7464c5 */ goto L_007464c5;
}

void f_00746535(void)
{
    FN_ENTER(0x00746535);
    /* 00746535: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746538: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0074653e: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 00746541: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746544: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00746547: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x74654cu); f_00747dac();
    /* 0074654c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074654f: mov eax, ebx */ r_eax = r_ebx;
    /* 00746551: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00746557: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74655cu); f_007365f4();
    /* 0074655c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074655e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074655f: call 0x747758 */ r_esp -= 4; W32(r_esp, 0x746564u); f_00747758();
    /* 00746564: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074656a: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0074656f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x746574u); f_007c1160();
    /* 00746574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746576: je 0x74659c */ if (fZ) goto L_0074659c;
L_00746578:; BB(0x00746578);
    /* 00746578: mov eax, ebx */ r_eax = r_ebx;
    /* 0074657a: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0074657d: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x746582u); f_00712480();
    /* 00746582: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746584: je 0x746592 */ if (fZ) goto L_00746592;
L_00746586:; BB(0x00746586);
    /* 00746586: mov eax, ebx */ r_eax = r_ebx;
    /* 00746588: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0074658b: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x746590u); f_007127c8();
    /* 00746590: jmp 0x74659c */ goto L_0074659c;
L_00746592:; BB(0x00746592);
    /* 00746592: mov eax, ebx */ r_eax = r_ebx;
    /* 00746594: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00746597: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x74659cu); f_00712714();
L_0074659c:; BB(0x0074659c);
    /* 0074659c: mov eax, ebx */ r_eax = r_ebx;
    /* 0074659e: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 007465a4: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007465ab: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007465ad: je 0x7465c6 */ if (fZ) goto L_007465c6;
L_007465af:; BB(0x007465af);
    /* 007465af: mov eax, ebx */ r_eax = r_ebx;
    /* 007465b1: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007465b4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007465b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007465bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007465c2: mov esp, ebp */ r_esp = r_ebp;
    /* 007465c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007465c5: ret  */ FN_RET(0x00746535); r_esp += 4; return;
L_007465c6:; BB(0x007465c6);
    /* 007465c6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007465c8: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007465ce:; BB(0x007465ce);
    /* 007465ce: mov eax, ebx */ r_eax = r_ebx;
    /* 007465d0: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 007465d4: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746535); r_esp += 4; return;
}

void f_00746579(void)
{
    FN_ENTER(0x00746579);
    /* 00746579: ret  */ FN_RET(0x00746579); r_esp += 4; return;
}

void f_007465d9(void)
{
    FN_ENTER(0x007465d9);
    /* 007465d9: mov eax, ecx */ r_eax = r_ecx;
    /* 007465db: mov eax, dword ptr [eax + 0x88] */ r_eax = R32((u32)(r_eax+0x88u));
    /* 007465e1: jmp 0x74663b */ goto L_0074663b;
L_0074663b:; BB(0x0074663b);
    /* 0074663b: mov ecx, eax */ r_ecx = r_eax;
    /* 0074663d: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x746642u); f_0078ed20();
    /* 00746642: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746644: je 0x74665b */ if (fZ) goto L_0074665b;
L_00746646:; BB(0x00746646);
    /* 00746646: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746649: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074664d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746650: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746657: mov esp, ebp */ r_esp = r_ebp;
    /* 00746659: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074665a: ret  */ FN_RET(0x007465d9); r_esp += 4; return;
L_0074665b:; BB(0x0074665b);
    /* 0074665b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074665e: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00746664: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x746669u); f_0078ed14();
    /* 00746669: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074666b: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746671:; BB(0x00746671);
    /* 00746671: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746674: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0074667a: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x74667fu); f_0078ed4c();
    /* 0074667f: mov ebx, eax */ r_ebx = r_eax;
    /* 00746681: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00746686: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746687: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x74668cu); f_00813a78();
    /* 0074668c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074668f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00746694: mov esi, dword ptr [0xa9c0ec] */ r_esi = R32((u32)(0xa9c0ecu));
    /* 0074669a: mov ecx, esi */ r_ecx = r_esi;
    /* 0074669c: call 0x7814bc */ r_esp -= 4; W32(r_esp, 0x7466a1u); f_007814bc();
    /* 007466a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007466a2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7466a7u); f_00857e98();
    /* 007466a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007466a8: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 007466ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007466af: je 0x7466b9 */ if (fZ) goto L_007466b9;
L_007466b1:; BB(0x007466b1);
    /* 007466b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007466b2: mov ecx, eax */ r_ecx = r_eax;
    /* 007466b4: call 0x7f2fb4 */ r_esp -= 4; W32(r_esp, 0x7466b9u); f_007f2fb4();
L_007466b9:; BB(0x007466b9);
    /* 007466b9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007466bc: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007466c0: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007465d9); r_esp += 4; return;
}

void f_007465e3(void)
{
    FN_ENTER(0x007465e3);
    /* 007465e3: mov eax, ecx */ r_eax = r_ecx;
    /* 007465e5: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007465e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007465ea: je 0x7465fb */ if (fZ) goto L_007465fb;
L_007465ec:; BB(0x007465ec);
    /* 007465ec: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7465f1u); f_007127b0();
    /* 007465f1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007465f4: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_007465fb:; BB(0x007465fb);
    /* 007465fb: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 007465fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746600: je 0x746611 */ if (fZ) goto L_00746611;
L_00746602:; BB(0x00746602);
    /* 00746602: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x746607u); f_007127b0();
    /* 00746607: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074660a: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_00746611:; BB(0x00746611);
    /* 00746611: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00746614: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746616: je 0x746627 */ if (fZ) goto L_00746627;
L_00746618:; BB(0x00746618);
    /* 00746618: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74661du); f_007127b0();
    /* 0074661d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746620: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_00746627:; BB(0x00746627);
    /* 00746627: mov ecx, eax */ r_ecx = r_eax;
    /* 00746629: call 0x747548 */ r_esp -= 4; W32(r_esp, 0x74662eu); f_00747548();
    /* 0074662e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746631: mov byte ptr [edx + 0x1c], 0xa */ W8((u32)(r_edx+0x1cu), 0xau);
    /* 00746635: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 0074663b: mov ecx, eax */ r_ecx = r_eax;
    /* 0074663d: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x746642u); f_0078ed20();
    /* 00746642: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746644: je 0x74665b */ if (fZ) goto L_0074665b;
L_00746646:; BB(0x00746646);
    /* 00746646: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746649: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074664d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746650: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746657: mov esp, ebp */ r_esp = r_ebp;
    /* 00746659: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074665a: ret  */ FN_RET(0x007465e3); r_esp += 4; return;
L_0074665b:; BB(0x0074665b);
    /* 0074665b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074665e: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00746664: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x746669u); f_0078ed14();
    /* 00746669: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074666b: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746671:; BB(0x00746671);
    /* 00746671: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746674: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0074667a: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x74667fu); f_0078ed4c();
    /* 0074667f: mov ebx, eax */ r_ebx = r_eax;
    /* 00746681: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00746686: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746687: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x74668cu); f_00813a78();
    /* 0074668c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074668f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00746694: mov esi, dword ptr [0xa9c0ec] */ r_esi = R32((u32)(0xa9c0ecu));
    /* 0074669a: mov ecx, esi */ r_ecx = r_esi;
    /* 0074669c: call 0x7814bc */ r_esp -= 4; W32(r_esp, 0x7466a1u); f_007814bc();
    /* 007466a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007466a2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7466a7u); f_00857e98();
    /* 007466a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007466a8: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 007466ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007466af: je 0x7466b9 */ if (fZ) goto L_007466b9;
L_007466b1:; BB(0x007466b1);
    /* 007466b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007466b2: mov ecx, eax */ r_ecx = r_eax;
    /* 007466b4: call 0x7f2fb4 */ r_esp -= 4; W32(r_esp, 0x7466b9u); f_007f2fb4();
L_007466b9:; BB(0x007466b9);
    /* 007466b9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007466bc: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007466c0: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007465e3); r_esp += 4; return;
}

void f_007466c5(void)
{
    FN_ENTER(0x007466c5);
    /* 007466c5: mov eax, ecx */ r_eax = r_ecx;
    /* 007466c7: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 007466ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007466cc: je 0x7466df */ if (fZ) goto L_007466df;
L_007466ce:; BB(0x007466ce);
    /* 007466ce: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7466d3u); f_007127b0();
    /* 007466d3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007466d6: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 007466dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007466df:; BB(0x007466df);
    /* 007466df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007466e1: je 0x747222 */ if (fZ) goto L_00747222;
L_007466e7:; BB(0x007466e7);
    /* 007466e7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007466ea: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 007466ee: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 007466f3: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007466f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007466fa: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 007466ff: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x746704u); f_007c1160();
    /* 00746704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746706: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074670c:; BB(0x0074670c);
    /* 0074670c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074670f: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00746713: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007466c5); r_esp += 4; return;
L_00747222:; BB(0x00747222);
    /* 00747222: mov ecx, eax */ r_ecx = r_eax;
    /* 00747224: call 0x7474f4 */ r_esp -= 4; W32(r_esp, 0x747229u); f_007474f4();
    /* 00747229: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074722c: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 0074722f: jmp 0x7466e7 */ goto L_007466e7;
}

void f_007466ee(void)
{
    FN_ENTER(0x007466ee);
    /* 007466ee: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 007466f3: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007466f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007466fa: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 007466ff: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x746704u); f_007c1160();
    /* 00746704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746706: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074670c:; BB(0x0074670c);
    /* 0074670c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074670f: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00746713: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007466ee); r_esp += 4; return;
}

void f_00746718(void)
{
    FN_ENTER(0x00746718);
    /* 00746718: mov eax, ecx */ r_eax = r_ecx;
    /* 0074671a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0074671d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074671f: je 0x747234 */ if (fZ) goto L_00747234;
L_00746725:; BB(0x00746725);
    /* 00746725: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746728: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0074672b: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x746730u); f_0073600c();
    /* 00746730: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746733: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 00746737: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074673a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0074673d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746744: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746746: je 0x746766 */ if (fZ) goto L_00746766;
L_00746748:; BB(0x00746748);
    /* 00746748: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074674b: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0074674e: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00746751: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00746754: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00746758: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074675b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746762: mov esp, ebp */ r_esp = r_ebp;
    /* 00746764: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00746765: ret  */ FN_RET(0x00746718); r_esp += 4; return;
L_00746766:; BB(0x00746766);
    /* 00746766: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746768: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074676e:; BB(0x0074676e);
    /* 0074676e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746773u); f_007365f4();
    /* 00746773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746774: call 0x78193c */ r_esp -= 4; W32(r_esp, 0x746779u); f_0078193c();
    /* 00746779: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074677a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074677d: mov byte ptr [eax + 0x1c], 7 */ W8((u32)(r_eax+0x1cu), 0x7u);
    /* 00746781: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746718); r_esp += 4; return;
L_00747234:; BB(0x00747234);
    /* 00747234: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 00747239: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74723eu); f_0073ec50();
    /* 0074723e: mov ebx, eax */ r_ebx = r_eax;
    /* 00747240: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00747242: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747247u); f_0079317c();
    /* 00747247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747248: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074724a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074724b: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x747250u); f_00735460();
    /* 00747250: mov esi, eax */ r_esi = r_eax;
    /* 00747252: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747255: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00747257:; BB(0x00747257);
    /* 00747257: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074725d: je 0x7472a7 */ if (fZ) goto L_007472a7;
L_0074725f:; BB(0x0074725f);
    /* 0074725f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747260: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x747265u); f_0068d5a8();
    /* 00747265: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747266: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747268: je 0x7472a7 */ if (fZ) goto L_007472a7;
L_0074726a:; BB(0x0074726a);
    /* 0074726a: movsx edi, word ptr [eax + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00747271: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747274: jne 0x74727d */ if (!fZ) goto L_0074727d;
L_00747276:; BB(0x00747276);
    /* 00747276: mov edx, 1 */ r_edx = 0x1u;
    /* 0074727b: jmp 0x74727f */ goto L_0074727f;
L_0074727d:; BB(0x0074727d);
    /* 0074727d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0074727f:; BB(0x0074727f);
    /* 0074727f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747281: jne 0x7472a7 */ if (!fZ) goto L_007472a7;
L_00747283:; BB(0x00747283);
    /* 00747283: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747286: jne 0x74728f */ if (!fZ) goto L_0074728f;
L_00747288:; BB(0x00747288);
    /* 00747288: mov edx, 1 */ r_edx = 0x1u;
    /* 0074728d: jmp 0x747291 */ goto L_00747291;
L_0074728f:; BB(0x0074728f);
    /* 0074728f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00747291:; BB(0x00747291);
    /* 00747291: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747293: jne 0x7472a7 */ if (!fZ) goto L_007472a7;
L_00747295:; BB(0x00747295);
    /* 00747295: mov ecx, eax */ r_ecx = r_eax;
    /* 00747297: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x74729cu); f_006936b4();
    /* 0074729c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074729d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0074729f: mov ecx, esi */ r_ecx = r_esi;
    /* 007472a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007472a2: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7472a7u); f_00735c90();
L_007472a7:; BB(0x007472a7);
    /* 007472a7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007472aa: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007472ad: jl 0x747257 */ if ((fS!=fO)) goto L_00747257;
L_007472af:; BB(0x007472af);
    /* 007472af: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 007472b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007472b8: jle 0x7472ea */ if ((fZ||fS!=fO)) goto L_007472ea;
L_007472ba:; BB(0x007472ba);
    /* 007472ba: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 007472bf: mov ecx, esi */ r_ecx = r_esi;
    /* 007472c1: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007472c8: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007472ce: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 007472d5: push 0x43550000 */ { u32 v = 0x43550000u; r_esp -= 4; W32(r_esp, v); }
    /* 007472da: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7472dfu); f_007361d0();
    /* 007472df: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007472e2: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 007472e5: jmp 0x746725 */ goto L_00746725;
L_007472ea:; BB(0x007472ea);
    /* 007472ea: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 007472ef: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7472f4u); f_0079317c();
    /* 007472f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007472f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007472f7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007472f9: mov ecx, esi */ r_ecx = r_esi;
    /* 007472fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007472fc: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x747301u); f_00735ee0();
    /* 00747301: jmp 0x7472ba */ goto L_007472ba;
}

void f_00746737(void)
{
    FN_ENTER(0x00746737);
    /* 00746737: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074673a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0074673d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746744: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746746: je 0x746766 */ if (fZ) goto L_00746766;
L_00746748:; BB(0x00746748);
    /* 00746748: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074674b: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0074674e: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00746751: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00746754: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00746758: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074675b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746762: mov esp, ebp */ r_esp = r_ebp;
    /* 00746764: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00746765: ret  */ FN_RET(0x00746737); r_esp += 4; return;
L_00746766:; BB(0x00746766);
    /* 00746766: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746768: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074676e:; BB(0x0074676e);
    /* 0074676e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746773u); f_007365f4();
    /* 00746773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746774: call 0x78193c */ r_esp -= 4; W32(r_esp, 0x746779u); f_0078193c();
    /* 00746779: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074677a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074677d: mov byte ptr [eax + 0x1c], 7 */ W8((u32)(r_eax+0x1cu), 0x7u);
    /* 00746781: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746737); r_esp += 4; return;
}

void f_00746786(void)
{
    FN_ENTER(0x00746786);
    /* 00746786: mov eax, ecx */ r_eax = r_ecx;
    /* 00746788: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0074678b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074678d: je 0x74679e */ if (fZ) goto L_0074679e;
L_0074678f:; BB(0x0074678f);
    /* 0074678f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x746794u); f_007127b0();
    /* 00746794: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746797: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_0074679e:; BB(0x0074679e);
    /* 0074679e: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 007467a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007467a3: je 0x747317 */ if (fZ) goto L_00747317;
L_007467a9:; BB(0x007467a9);
    /* 007467a9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007467ac: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 007467af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007467b1: je 0x747303 */ if (fZ) goto L_00747303;
L_007467b7:; BB(0x007467b7);
    /* 007467b7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007467be: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007467c3: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 007467c6: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007467cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007467cf: je 0x7467d8 */ if (fZ) goto L_007467d8;
L_007467d1:; BB(0x007467d1);
    /* 007467d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007467d3: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7467d8u); f_00760acc();
L_007467d8:; BB(0x007467d8);
    /* 007467d8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007467db: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007467de: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x7467e3u); f_0073605c();
    /* 007467e3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007467e6: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 007467ea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007467ed: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007467f0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007467f7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007467f9: je 0x746810 */ if (fZ) goto L_00746810;
L_007467fb:; BB(0x007467fb);
    /* 007467fb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007467fe: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00746802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074680c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074680e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074680f: ret  */ FN_RET(0x00746786); r_esp += 4; return;
L_00746810:; BB(0x00746810);
    /* 00746810: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746812: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746818:; BB(0x00746818);
    /* 00746818: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74681du); f_007365f4();
    /* 0074681d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746820: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00746823: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746786); r_esp += 4; return;
L_00747303:; BB(0x00747303);
    /* 00747303: mov ecx, eax */ r_ecx = r_eax;
    /* 00747305: call 0x747480 */ r_esp -= 4; W32(r_esp, 0x74730au); f_00747480();
    /* 0074730a: mov edx, eax */ r_edx = r_eax;
    /* 0074730c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074730f: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00747312: jmp 0x7467b7 */ goto L_007467b7;
L_00747317:; BB(0x00747317);
    /* 00747317: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0074731c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747321u); f_0073ec50();
    /* 00747321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747322: call 0x7153e0 */ r_esp -= 4; W32(r_esp, 0x747327u); f_007153e0();
    /* 00747327: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074732a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074732d: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 00747330: jmp 0x7467a9 */ goto L_007467a9;
}

void f_007467ea(void)
{
    FN_ENTER(0x007467ea);
    /* 007467ea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007467ed: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007467f0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007467f7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007467f9: je 0x746810 */ if (fZ) goto L_00746810;
L_007467fb:; BB(0x007467fb);
    /* 007467fb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007467fe: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00746802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074680c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074680e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074680f: ret  */ FN_RET(0x007467ea); r_esp += 4; return;
L_00746810:; BB(0x00746810);
    /* 00746810: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00746812: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00746818:; BB(0x00746818);
    /* 00746818: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74681du); f_007365f4();
    /* 0074681d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746820: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00746823: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007467ea); r_esp += 4; return;
}

void f_00746828(void)
{
    FN_ENTER(0x00746828);
    /* 00746828: call 0x744a40 */ r_esp -= 4; W32(r_esp, 0x74682du); f_00744a40();
    /* 0074682d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746830: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 00746836: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746838: je 0x746854 */ if (fZ) goto L_00746854;
L_0074683a:; BB(0x0074683a);
    /* 0074683a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074683e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00746843: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00746847: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074684a: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
L_00746854:; BB(0x00746854);
    /* 00746854: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746857: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0074685d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074685f: je 0x746873 */ if (fZ) goto L_00746873;
L_00746861:; BB(0x00746861);
    /* 00746861: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x746866u); f_007127b0();
    /* 00746866: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746869: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
L_00746873:; BB(0x00746873);
    /* 00746873: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00746876: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746878: je 0x746889 */ if (fZ) goto L_00746889;
L_0074687a:; BB(0x0074687a);
    /* 0074687a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74687fu); f_0073d160();
    /* 0074687f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746882: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
L_00746889:; BB(0x00746889);
    /* 00746889: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0074688f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746891: je 0x7468a5 */ if (fZ) goto L_007468a5;
L_00746893:; BB(0x00746893);
    /* 00746893: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x746898u); f_007127b0();
    /* 00746898: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074689b: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
L_007468a5:; BB(0x007468a5);
    /* 007468a5: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 007468a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007468aa: je 0x7468bb */ if (fZ) goto L_007468bb;
L_007468ac:; BB(0x007468ac);
    /* 007468ac: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7468b1u); f_007127b0();
    /* 007468b1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007468b4: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_007468bb:; BB(0x007468bb);
    /* 007468bb: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007468be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007468c0: je 0x7468d1 */ if (fZ) goto L_007468d1;
L_007468c2:; BB(0x007468c2);
    /* 007468c2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7468c7u); f_007127b0();
    /* 007468c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007468ca: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_007468d1:; BB(0x007468d1);
    /* 007468d1: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 007468d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007468d9: je 0x7468ed */ if (fZ) goto L_007468ed;
L_007468db:; BB(0x007468db);
    /* 007468db: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7468e0u); f_007127b0();
    /* 007468e0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007468e3: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
L_007468ed:; BB(0x007468ed);
    /* 007468ed: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 007468f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007468f2: je 0x746903 */ if (fZ) goto L_00746903;
L_007468f4:; BB(0x007468f4);
    /* 007468f4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7468f9u); f_007127b0();
    /* 007468f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007468fc: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_00746903:; BB(0x00746903);
    /* 00746903: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00746906: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746908: je 0x74691d */ if (fZ) goto L_0074691d;
L_0074690a:; BB(0x0074690a);
    /* 0074690a: mov ecx, edx */ r_ecx = r_edx;
    /* 0074690c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x746911u); f_007127b0();
    /* 00746911: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746914: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 0074691b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0074691d:; BB(0x0074691d);
    /* 0074691d: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00746920: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746922: je 0x747352 */ if (fZ) goto L_00747352;
L_00746928:; BB(0x00746928);
    /* 00746928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074692a: je 0x747335 */ if (fZ) goto L_00747335;
L_00746930:; BB(0x00746930);
    /* 00746930: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746937: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074693c: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00746943: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00746946: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746948: je 0x746951 */ if (fZ) goto L_00746951;
L_0074694a:; BB(0x0074694a);
    /* 0074694a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074694c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x746951u); f_00760acc();
L_00746951:; BB(0x00746951);
    /* 00746951: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746954: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00746958: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074695b: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0074695e: movsx edx, word ptr [eax + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 00746965: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00746966: call 0x74744c */ r_esp -= 4; W32(r_esp, 0x74696bu); f_0074744c();
    /* 0074696b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074696e: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00746971: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00746978: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074697a: je 0x74699c */ if (fZ) goto L_0074699c;
L_0074697c:; BB(0x0074697c);
    /* 0074697c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074697f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00746982: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00746984: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x746987u); call_ind(t); }
    /* 00746987: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074698a: mov byte ptr [eax + 0x1c], 0x4f */ W8((u32)(r_eax+0x1cu), 0x4fu);
    /* 0074698e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746991: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746998: mov esp, ebp */ r_esp = r_ebp;
    /* 0074699a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074699b: ret  */ FN_RET(0x00746828); r_esp += 4; return;
L_0074699c:; BB(0x0074699c);
    /* 0074699c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074699e: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007469a0:; BB(0x007469a0);
    /* 007469a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469a3: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007469a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007469a8: je 0x7469bc */ if (fZ) goto L_007469bc;
L_007469aa:; BB(0x007469aa);
    /* 007469aa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7469afu); f_007127b0();
    /* 007469af: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469b2: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 007469b5: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_007469bc:; BB(0x007469bc);
    /* 007469bc: mov ecx, edx */ r_ecx = r_edx;
    /* 007469be: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7469c3u); f_007365f4();
    /* 007469c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469c6: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746828); r_esp += 4; return;
L_00747335:; BB(0x00747335);
    /* 00747335: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747338: call 0x747430 */ r_esp -= 4; W32(r_esp, 0x74733du); f_00747430();
    /* 0074733d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747340: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 00747343: mov dword ptr [edx + 0x30], 0xffffffff */ W32((u32)(r_edx+0x30u), 0xffffffffu);
    /* 0074734a: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 0074734d: jmp 0x746930 */ goto L_00746930;
L_00747352:; BB(0x00747352);
    /* 00747352: mov ecx, eax */ r_ecx = r_eax;
    /* 00747354: call 0x74736c */ r_esp -= 4; W32(r_esp, 0x747359u); f_0074736c();
    /* 00747359: mov ecx, eax */ r_ecx = r_eax;
    /* 0074735b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074735e: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 00747361: mov edx, dword ptr [edx + 0x74] */ r_edx = R32((u32)(r_edx+0x74u));
    /* 00747364: jmp 0x746928 */ goto L_00746928;
}

void f_00746938(void)
{
    FN_ENTER(0x00746938);
    /* 00746938: std  */ rt_df = 1;
    /* 00746939: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0074693b: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0074693e: add dword ptr [eax + eax + 0x498b0000], 0x74c98560 */ { u32 ad = (u32)(r_eax+r_eax+0x498b0000u);  u32 a = R32(ad); u32 b = 0x74c98560u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00746949: pop es */ UNSUP(0x00746949, "pop es");
    /* 0074694a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074694c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x746951u); f_00760acc();
    /* 00746951: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746954: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00746958: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074695b: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0074695e: movsx edx, word ptr [eax + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 00746965: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00746966: call 0x74744c */ r_esp -= 4; W32(r_esp, 0x74696bu); f_0074744c();
    /* 0074696b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074696e: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00746971: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00746978: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074697a: je 0x74699c */ if (fZ) goto L_0074699c;
L_0074697c:; BB(0x0074697c);
    /* 0074697c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074697f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00746982: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00746984: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x746987u); call_ind(t); }
    /* 00746987: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074698a: mov byte ptr [eax + 0x1c], 0x4f */ W8((u32)(r_eax+0x1cu), 0x4fu);
    /* 0074698e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746991: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746998: mov esp, ebp */ r_esp = r_ebp;
    /* 0074699a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074699b: ret  */ FN_RET(0x00746938); r_esp += 4; return;
L_0074699c:; BB(0x0074699c);
    /* 0074699c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074699e: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007469a0:; BB(0x007469a0);
    /* 007469a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469a3: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007469a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007469a8: je 0x7469bc */ if (fZ) goto L_007469bc;
L_007469aa:; BB(0x007469aa);
    /* 007469aa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7469afu); f_007127b0();
    /* 007469af: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469b2: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 007469b5: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_007469bc:; BB(0x007469bc);
    /* 007469bc: mov ecx, edx */ r_ecx = r_edx;
    /* 007469be: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7469c3u); f_007365f4();
    /* 007469c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469c6: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746938); r_esp += 4; return;
}

void f_00746958(void)
{
    FN_ENTER(0x00746958);
    /* 00746958: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074695b: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0074695e: movsx edx, word ptr [eax + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 00746965: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00746966: call 0x74744c */ r_esp -= 4; W32(r_esp, 0x74696bu); f_0074744c();
    /* 0074696b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074696e: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00746971: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00746978: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074697a: je 0x74699c */ if (fZ) goto L_0074699c;
L_0074697c:; BB(0x0074697c);
    /* 0074697c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074697f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00746982: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00746984: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x746987u); call_ind(t); }
    /* 00746987: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074698a: mov byte ptr [eax + 0x1c], 0x4f */ W8((u32)(r_eax+0x1cu), 0x4fu);
    /* 0074698e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746991: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746998: mov esp, ebp */ r_esp = r_ebp;
    /* 0074699a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074699b: ret  */ FN_RET(0x00746958); r_esp += 4; return;
L_0074699c:; BB(0x0074699c);
    /* 0074699c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074699e: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007469a0:; BB(0x007469a0);
    /* 007469a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469a3: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007469a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007469a8: je 0x7469bc */ if (fZ) goto L_007469bc;
L_007469aa:; BB(0x007469aa);
    /* 007469aa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7469afu); f_007127b0();
    /* 007469af: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469b2: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 007469b5: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_007469bc:; BB(0x007469bc);
    /* 007469bc: mov ecx, edx */ r_ecx = r_edx;
    /* 007469be: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7469c3u); f_007365f4();
    /* 007469c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469c6: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746958); r_esp += 4; return;
}

void f_00746968(void)
{
    FN_ENTER(0x00746968);
    /* 00746968: or al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0074696a: add byte ptr [ebx + 0x508be845], cl */ { u32 ad = (u32)(r_ebx+0x508be845u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00746970: push 0x8482b70f */ { u32 v = 0x8482b70fu; r_esp -= 4; W32(r_esp, v); }
    /* 00746975: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00746977: add byte ptr [eax - 0x74df8bfc], ch */ { u32 ad = (u32)(r_eax+0x8b207404u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0074697d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074697e: call 0x8bd8b20e */ r_esp -= 4; W32(r_esp, 0x746983u); f_8bd8b20e();
    /* 00746983: adc edi, edi */ { u32 c = fC; u32 a = r_edi; u32 b = r_edi; u32 r = (a + b + c) & 0xffffffffu; r_edi = r; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00746985: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00746986: sbb al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00746988: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00746989: call 0x4f90aa54 */ r_esp -= 4; W32(r_esp, 0x74698eu); f_4f90aa54();
    /* 0074698e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746991: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746998: mov esp, ebp */ r_esp = r_ebp;
    /* 0074699a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074699b: ret  */ FN_RET(0x00746968); r_esp += 4; return;
}

void f_0074696c(void)
{
    FN_ENTER(0x0074696c);
    /* 0074696c: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074696d: call 0xfdcb9fd */ r_esp -= 4; W32(r_esp, 0x746972u); f_0fdcb9fd();
    /* 00746972: mov bh, 0x82 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x82u) & 0xffu) << 8);
    /* 00746974: test byte ptr [eax], al */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 00746976: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00746978: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074697a: je 0x74699c */ if (fZ) goto L_0074699c;
L_0074697c:; BB(0x0074697c);
    /* 0074697c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074697f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00746982: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00746984: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x746987u); call_ind(t); }
    /* 00746987: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074698a: mov byte ptr [eax + 0x1c], 0x4f */ W8((u32)(r_eax+0x1cu), 0x4fu);
    /* 0074698e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746991: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746998: mov esp, ebp */ r_esp = r_ebp;
    /* 0074699a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074699b: ret  */ FN_RET(0x0074696c); r_esp += 4; return;
L_0074699c:; BB(0x0074699c);
    /* 0074699c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074699e: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007469a0:; BB(0x007469a0);
    /* 007469a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469a3: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007469a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007469a8: je 0x7469bc */ if (fZ) goto L_007469bc;
L_007469aa:; BB(0x007469aa);
    /* 007469aa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7469afu); f_007127b0();
    /* 007469af: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469b2: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 007469b5: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_007469bc:; BB(0x007469bc);
    /* 007469bc: mov ecx, edx */ r_ecx = r_edx;
    /* 007469be: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7469c3u); f_007365f4();
    /* 007469c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469c6: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x0074696c); r_esp += 4; return;
}

void f_007469c9(void)
{
    FN_ENTER(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007469c9); r_esp += 4; return;
}

void f_00746c73(void)
{
    FN_ENTER(0x00746c73);
    goto L_00746c73;
L_0074553d:; BB(0x0074553d);
    /* 0074553d: push 0x43140000 */ { u32 v = 0x43140000u; r_esp -= 4; W32(r_esp, v); }
    /* 00745542: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00745544: call 0x71522c */ r_esp -= 4; W32(r_esp, 0x745549u); f_0071522c();
    /* 00745549: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074554c: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745552: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745559: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074555f: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00745566: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00745569: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074556b: je 0x745574 */ if (fZ) goto L_00745574;
L_0074556d:; BB(0x0074556d);
    /* 0074556d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074556f: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x745574u); f_00760acc();
L_00745574:; BB(0x00745574);
    /* 00745574: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745577: mov byte ptr [eax + 0x1c], 0x36 */ W8((u32)(r_eax+0x1cu), 0x36u);
    /* 0074557b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074557e: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00745584: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074558b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074558d: je 0x7455ad */ if (fZ) goto L_007455ad;
L_0074558f:; BB(0x0074558f);
    /* 0074558f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745592: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00745595: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00745598: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0074559b: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074559f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007455a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007455a9: mov esp, ebp */ r_esp = r_ebp;
    /* 007455ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007455ac: ret  */ FN_RET(0x00746c73); r_esp += 4; return;
L_007455ad:; BB(0x007455ad);
    /* 007455ad: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007455af: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007455b5:; BB(0x007455b5);
    /* 007455b5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007455b8: mov byte ptr [eax + 0x1c], 0x37 */ W8((u32)(r_eax+0x1cu), 0x37u);
    /* 007455bc: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746c73); r_esp += 4; return;
L_00746c73:; BB(0x00746c73);
    /* 00746c73: add byte ptr [ebx - 0x3baa7410], cl */ { u32 ad = (u32)(r_ebx+0xc4558bf0u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00746c79: lea edi, [edx + 0xc4] */ r_edi = (u32)(r_edx+0xc4u);
    /* 00746c7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00746c80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746c85u); f_0079317c();
    /* 00746c85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746c88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746c8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746c8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746c8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00746c8e: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x746c93u); f_00738a04();
    /* 00746c93: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746c96: mov esi, dword ptr [edx + 0x60] */ r_esi = R32((u32)(r_edx+0x60u));
    /* 00746c99: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00746c9c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00746c9f: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00746ca2: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 00746ca5: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00746caa: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00746cad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00746caf: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00746cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746cb4: jle 0x746d4d */ if ((fZ||fS!=fO)) goto L_00746d4d;
L_00746cba:; BB(0x00746cba);
    /* 00746cba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00746cbd: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00746cc0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746cc2: jne 0x746d35 */ if (!fZ) goto L_00746d35;
L_00746cc4:; BB(0x00746cc4);
    /* 00746cc4: movzx esi, word ptr [edx + 2] */ r_esi = (u32)R16((u32)(r_edx+0x2u));
    /* 00746cc8: add dword ptr [ebp - 0x34], 1 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00746ccc: cmp esi, 0x1f4 */ {  u32 a = r_esi; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746cd2: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00746cd5: jl 0x746d35 */ if ((fS!=fO)) goto L_00746d35;
L_00746cd7:; BB(0x00746cd7);
    /* 00746cd7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00746cda: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746cdd: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00746ce0: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00746ce3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00746ce5: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00746ce8: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00746ceb: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00746cee: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00746cf1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746cf3: jle 0x746d9d */ if ((fZ||fS!=fO)) goto L_00746d9d;
L_00746cf9:; BB(0x00746cf9);
    /* 00746cf9: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00746cfc: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00746cff: mov esi, dword ptr [esi + edi*4 + 0x2944] */ r_esi = R32((u32)(r_esi+r_edi*4+0x2944u));
    /* 00746d06: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
L_00746d09:; BB(0x00746d09);
    /* 00746d09: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00746d0c: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 00746d0f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746d11: jne 0x746d26 */ if (!fZ) goto L_00746d26;
L_00746d13:; BB(0x00746d13);
    /* 00746d13: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00746d16: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00746d19: movzx esi, word ptr [eax + 2] */ r_esi = (u32)R16((u32)(r_eax+0x2u));
    /* 00746d1d: cmp esi, dword ptr [edi + ecx*4 + 0x2948] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+r_ecx*4+0x2948u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746d24: je 0x746d6f */ if (fZ) goto L_00746d6f;
L_00746d26:; BB(0x00746d26);
    /* 00746d26: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00746d29: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746d2c: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00746d2f: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746d31: jl 0x746d09 */ if ((fS!=fO)) goto L_00746d09;
L_00746d33:; BB(0x00746d33);
    /* 00746d33: jmp 0x746d9d */ goto L_00746d9d;
L_00746d35:; BB(0x00746d35);
    /* 00746d35: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00746d38: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00746d3b: add dword ptr [ebp - 0x14], 0x3c */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00746d3f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746d42: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00746d45: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746d47: jl 0x746cba */ if ((fS!=fO)) goto L_00746cba;
L_00746d4d:; BB(0x00746d4d);
    /* 00746d4d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746d50: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00746d57: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00746d5d: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00746d64: mov dword ptr [esi + 0x84], ebx */ W32((u32)(r_esi+0x84u), r_ebx);
    /* 00746d6a: jmp 0x74553d */ goto L_0074553d;
L_00746d6f:; BB(0x00746d6f);
    /* 00746d6f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00746d72:; BB(0x00746d72);
    /* 00746d72: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00746d75: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00746d78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00746d79: lea edi, [edx + 4] */ r_edi = (u32)(r_edx+0x4u);
    /* 00746d7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746d7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00746d80: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x746d85u); f_00738a04();
    /* 00746d85: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00746d88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746d8a: je 0x746d35 */ if (fZ) goto L_00746d35;
L_00746d8c:; BB(0x00746d8c);
    /* 00746d8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00746d8f: movzx esi, word ptr [edx + 2] */ r_esi = (u32)R16((u32)(r_edx+0x2u));
    /* 00746d93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00746d94: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746d96: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x746d9bu); f_00738a9c();
    /* 00746d9b: jmp 0x746d35 */ goto L_00746d35;
L_00746d9d:; BB(0x00746d9d);
    /* 00746d9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00746d9f: jmp 0x746d72 */ goto L_00746d72;
}

void f_00746e65(void)
{
    FN_ENTER(0x00746e65);
    goto L_00746e65;
L_0074566c:; BB(0x0074566c);
    /* 0074566c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074566f: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00745672: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745674: je 0x746de9 */ if (fZ) goto L_00746de9;
L_0074567a:; BB(0x0074567a);
    /* 0074567a: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00745681: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00745686: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00745689: mov word ptr [edi + 0x84], ax */ W16((u32)(r_edi+0x84u), (u16)r_eax);
    /* 00745690: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745692: je 0x74569b */ if (fZ) goto L_0074569b;
L_00745694:; BB(0x00745694);
    /* 00745694: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00745696: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74569bu); f_00760acc();
L_0074569b:; BB(0x0074569b);
    /* 0074569b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074569e: mov byte ptr [eax + 0x1c], 0x30 */ W8((u32)(r_eax+0x1cu), 0x30u);
    /* 007456a2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456a5: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 007456a8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7456adu); f_007365f4();
    /* 007456ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007456b1: call 0x7479f4 */ r_esp -= 4; W32(r_esp, 0x7456b6u); f_007479f4();
    /* 007456b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456b9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 007456bc: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007456c3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007456c5: je 0x7456e5 */ if (fZ) goto L_007456e5;
L_007456c7:; BB(0x007456c7);
    /* 007456c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456ca: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007456cd: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007456d0: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007456d3: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007456d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007456da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007456e1: mov esp, ebp */ r_esp = r_ebp;
    /* 007456e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007456e4: ret  */ FN_RET(0x00746e65); r_esp += 4; return;
L_007456e5:; BB(0x007456e5);
    /* 007456e5: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007456e7: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007456ed:; BB(0x007456ed);
    /* 007456ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456f0: mov byte ptr [eax + 0x1c], 0x31 */ W8((u32)(r_eax+0x1cu), 0x31u);
    /* 007456f4: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00746e65); r_esp += 4; return;
L_00746de9:; BB(0x00746de9);
    /* 00746de9: mov ecx, eax */ r_ecx = r_eax;
    /* 00746deb: call 0x7479d8 */ r_esp -= 4; W32(r_esp, 0x746df0u); f_007479d8();
    /* 00746df0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746df3: mov edi, dword ptr [edx + 0x70] */ r_edi = R32((u32)(r_edx+0x70u));
    /* 00746df6: mov dword ptr [edx + 0x30], 0xffffffff */ W32((u32)(r_edx+0x30u), 0xffffffffu);
    /* 00746dfd: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 00746e00: jmp 0x74567a */ goto L_0074567a;
L_00746e65:; BB(0x00746e65);
    /* 00746e65: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746e6a: mov ecx, edi */ r_ecx = r_edi;
    /* 00746e6c: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 00746e73: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00746e79: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 00746e80: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746e85: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x746e8au); f_007361d0();
    /* 00746e8a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746e8d: mov dword ptr [edx + 0x70], edi */ W32((u32)(r_edx+0x70u), r_edi);
    /* 00746e90: jmp 0x74566c */ goto L_0074566c;
}

