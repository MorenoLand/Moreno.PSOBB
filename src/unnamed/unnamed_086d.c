#include "protos.h"

void f_0086d720(void) /* sub_86D720 */
{
    FN_ENTER(0x0086d720);
    /* 0086d720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086d721: mov ebp, esp */ r_ebp = r_esp;
    /* 0086d723: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086d726: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0086d72d: mov eax, 0x99a4c8 */ r_eax = 0x99a4c8u;
    /* 0086d732: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0086d734: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0086d737: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0086d73a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0086d73d: movzx eax, byte ptr [eax + 0xc] */ r_eax = (u32)R8((u32)(r_eax+0xcu));
    /* 0086d741: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0086d744: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0086d747: mov byte ptr [ebp - 0x64], al */ W8((u32)(r_ebp+0xffffff9cu), (u8)r_eax);
    /* 0086d74a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0086d74c:; BB(0x0086d74c);
    /* 0086d74c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086d74e: mov byte ptr [ebp + eax - 0x60], dl */ W8((u32)(r_ebp+r_eax+0xffffffa0u), (u8)r_edx);
    /* 0086d752: mov byte ptr [ebp + eax - 0x5f], dl */ W8((u32)(r_ebp+r_eax+0xffffffa1u), (u8)r_edx);
    /* 0086d756: mov byte ptr [ebp + eax - 0x5e], dl */ W8((u32)(r_ebp+r_eax+0xffffffa2u), (u8)r_edx);
    /* 0086d75a: mov byte ptr [ebp + eax - 0x5d], dl */ W8((u32)(r_ebp+r_eax+0xffffffa3u), (u8)r_edx);
    /* 0086d75e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086d761: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d764: jl 0x86d74c */ if ((fS!=fO)) goto L_0086d74c;
L_0086d766:; BB(0x0086d766);
    /* 0086d766: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0086d769: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086d76a: mov eax, 1 */ r_eax = 0x1u;
    /* 0086d76f: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0086d771: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0086d774: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0086d777: mov eax, 0 */ r_eax = 0x0u;
    /* 0086d77c: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0086d77e: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0086d781: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0086d784: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0086d787: cmp dword ptr [ebp - 0x70], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d78a: jne 0x86d81f */ if (!fZ) goto L_0086d81f;
L_0086d790:; BB(0x0086d790);
    /* 0086d790: cmp dword ptr [ebp - 0x6c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d793: jne 0x86d81f */ if (!fZ) goto L_0086d81f;
L_0086d799:; BB(0x0086d799);
    /* 0086d799: cmp dword ptr [ebp - 0x68], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d79c: jne 0x86d81f */ if (!fZ) goto L_0086d81f;
L_0086d7a2:; BB(0x0086d7a2);
    /* 0086d7a2: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 0086d7a9: cmp ax, 2 */ {  u32 a = (u16)r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0086d7ad: jl 0x86d81f */ if ((fS!=fO)) goto L_0086d81f;
L_0086d7b3:; BB(0x0086d7b3);
    /* 0086d7b3: mov eax, 2 */ r_eax = 0x2u;
    /* 0086d7b8: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0086d7ba: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0086d7bd: mov dword ptr [ebp - 0x5c], ebx */ W32((u32)(r_ebp+0xffffffa4u), r_ebx);
    /* 0086d7c0: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0086d7c3: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0086d7c6: cmp al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0086d7c8: jle 0x86d81f */ if ((fZ||fS!=fO)) goto L_0086d81f;
L_0086d7ce:; BB(0x0086d7ce);
    /* 0086d7ce: mov eax, 2 */ r_eax = 0x2u;
    /* 0086d7d3: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0086d7d5: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0086d7d8: mov dword ptr [ebp - 0x4c], ebx */ W32((u32)(r_ebp+0xffffffb4u), r_ebx);
    /* 0086d7db: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0086d7de: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0086d7e1: cmp al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0086d7e3: jle 0x86d81f */ if ((fZ||fS!=fO)) goto L_0086d81f;
L_0086d7e9:; BB(0x0086d7e9);
    /* 0086d7e9: mov eax, 2 */ r_eax = 0x2u;
    /* 0086d7ee: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0086d7f0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0086d7f3: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 0086d7f6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0086d7f9: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0086d7fc: cmp al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0086d7fe: jle 0x86d81f */ if ((fZ||fS!=fO)) goto L_0086d81f;
L_0086d804:; BB(0x0086d804);
    /* 0086d804: mov eax, 2 */ r_eax = 0x2u;
    /* 0086d809: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0086d80b: cmp al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0086d80d: jle 0x86d81f */ if ((fZ||fS!=fO)) goto L_0086d81f;
L_0086d813:; BB(0x0086d813);
    /* 0086d813: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0086d816: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0086d819: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0086d81c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_0086d81f:; BB(0x0086d81f);
    /* 0086d81f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086d820: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086d823: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0086d826: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d828: jne 0x86d83b */ if (!fZ) goto L_0086d83b;
L_0086d82a:; BB(0x0086d82a);
    /* 0086d82a: mov dword ptr [0xae7f08], 0 */ W32((u32)(0xae7f08u), 0x0u);
    /* 0086d834: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086d836: jmp 0x86d8dc */ goto L_0086d8dc;
L_0086d83b:; BB(0x0086d83b);
    /* 0086d83b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086d83d: mov byte ptr [ebp - 0x60], al */ W8((u32)(r_ebp+0xffffffa0u), (u8)r_eax);
    /* 0086d840: mov byte ptr [ebp - 0x50], al */ W8((u32)(r_ebp+0xffffffb0u), (u8)r_eax);
    /* 0086d843: mov byte ptr [ebp - 0x40], al */ W8((u32)(r_ebp+0xffffffc0u), (u8)r_eax);
    /* 0086d846: mov byte ptr [ebp - 0x30], al */ W8((u32)(r_ebp+0xffffffd0u), (u8)r_eax);
    /* 0086d849: mov eax, 3 */ r_eax = 0x3u;
L_0086d84e:; BB(0x0086d84e);
    /* 0086d84e: movzx edx, byte ptr [ebp + eax - 0x60] */ r_edx = (u32)R8((u32)(r_ebp+r_eax+0xffffffa0u));
    /* 0086d853: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d859: je 0x86d870 */ if (fZ) goto L_0086d870;
L_0086d85b:; BB(0x0086d85b);
    /* 0086d85b: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 0086d85e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d860: jge 0x86d873 */ if ((fS==fO)) goto L_0086d873;
L_0086d862:; BB(0x0086d862);
    /* 0086d862: mov byte ptr [ebp + eax - 0x60], 0 */ W8((u32)(r_ebp+r_eax+0xffffffa0u), 0x0u);
    /* 0086d867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086d86a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d86c: jl 0x86d862 */ if ((fS!=fO)) goto L_0086d862;
L_0086d86e:; BB(0x0086d86e);
    /* 0086d86e: jmp 0x86d873 */ goto L_0086d873;
L_0086d870:; BB(0x0086d870);
    /* 0086d870: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
L_0086d873:; BB(0x0086d873);
    /* 0086d873: mov eax, edx */ r_eax = r_edx;
    /* 0086d875: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d878: jl 0x86d84e */ if ((fS!=fO)) goto L_0086d84e;
L_0086d87a:; BB(0x0086d87a);
    /* 0086d87a: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0086d87d: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0086d880: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0086d883: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086d885: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0086d887:; BB(0x0086d887);
    /* 0086d887: movzx ebx, byte ptr [ebp + ecx - 0x60] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffffa0u));
    /* 0086d88c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0086d88e:; BB(0x0086d88e);
    /* 0086d88e: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0086d891: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0086d894: cmp ebx, dword ptr [edi + 0xa247e0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0xa247e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d89a: je 0x86d8e5 */ if (fZ) goto L_0086d8e5;
L_0086d89c:; BB(0x0086d89c);
    /* 0086d89c: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d89f: cmp esi, 0x195 */ {  u32 a = r_esi; u32 b = 0x195u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d8a5: jl 0x86d88e */ if ((fS!=fO)) goto L_0086d88e;
L_0086d8a7:; BB(0x0086d8a7);
    /* 0086d8a7: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086d8aa: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086d8ad: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086d8b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0086d8b2:; BB(0x0086d8b2);
    /* 0086d8b2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0086d8b5: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0086d8b8: mov dword ptr [0xae7f08], edx */ W32((u32)(0xae7f08u), r_edx);
    /* 0086d8be: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086d8c3: je 0x86d8cc */ if (fZ) goto L_0086d8cc;
L_0086d8c5:; BB(0x0086d8c5);
    /* 0086d8c5: mov eax, 2 */ r_eax = 0x2u;
    /* 0086d8ca: jmp 0x86d8dc */ goto L_0086d8dc;
L_0086d8cc:; BB(0x0086d8cc);
    /* 0086d8cc: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086d8d1: je 0x86d8da */ if (fZ) goto L_0086d8da;
L_0086d8d3:; BB(0x0086d8d3);
    /* 0086d8d3: mov eax, 1 */ r_eax = 0x1u;
    /* 0086d8d8: jmp 0x86d8dc */ goto L_0086d8dc;
L_0086d8da:; BB(0x0086d8da);
    /* 0086d8da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0086d8dc:; BB(0x0086d8dc);
    /* 0086d8dc: mov dword ptr [0xa24e34], eax */ W32((u32)(0xa24e34u), r_eax);
    /* 0086d8e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0086d8e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086d8e4: ret  */ FN_RET(0x0086d720); r_esp += 4; return;
L_0086d8e5:; BB(0x0086d8e5);
    /* 0086d8e5: mov ebx, dword ptr [eax*2 + 0xa247e8] */ r_ebx = R32((u32)(r_eax*2+0xa247e8u));
    /* 0086d8ec: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086d8ee: jbe 0x86d915 */ if ((fC||fZ)) goto L_0086d915;
L_0086d8f0:; BB(0x0086d8f0);
    /* 0086d8f0: mov edx, ebx */ r_edx = r_ebx;
    /* 0086d8f2: mov ebx, dword ptr [eax*2 + 0xa247ec] */ r_ebx = R32((u32)(r_eax*2+0xa247ecu));
    /* 0086d8f9: mov eax, dword ptr [eax*2 + 0xa247f0] */ r_eax = R32((u32)(r_eax*2+0xa247f0u));
    /* 0086d900: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d903: jne 0x86d90f */ if (!fZ) goto L_0086d90f;
L_0086d905:; BB(0x0086d905);
    /* 0086d905: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086d907: mov dword ptr [0xae7f04], ebx */ W32((u32)(0xae7f04u), r_ebx);
    /* 0086d90d: jmp 0x86d915 */ goto L_0086d915;
L_0086d90f:; BB(0x0086d90f);
    /* 0086d90f: mov dword ptr [0xae7f04], ebx */ W32((u32)(0xae7f04u), r_ebx);
L_0086d915:; BB(0x0086d915);
    /* 0086d915: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d918: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d91b: jl 0x86d887 */ if ((fS!=fO)) goto L_0086d887;
L_0086d921:; BB(0x0086d921);
    /* 0086d921: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086d924: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086d927: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086d92a: jmp 0x86d8b2 */ goto L_0086d8b2;
}

void f_0086d92c(void) /* sub_86D92C */
{
    FN_ENTER(0x0086d92c);
    /* 0086d92c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086d92d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086d92e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086d92f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086d930: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086d933: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0086d937: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0086d93b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d93d: je 0x86d94e */ if (fZ) goto L_0086d94e;
L_0086d93f:; BB(0x0086d93f);
    /* 0086d93f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d941: je 0x86d94e */ if (fZ) goto L_0086d94e;
L_0086d943:; BB(0x0086d943);
    /* 0086d943: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0086d947: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d94c: jl 0x86d95b */ if ((fS!=fO)) goto L_0086d95b;
L_0086d94e:; BB(0x0086d94e);
    /* 0086d94e: mov eax, 0xfffffffd */ r_eax = 0xfffffffdu;
    /* 0086d953: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086d956: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086d957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086d958: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d959: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086d95a: ret  */ FN_RET(0x0086d92c); r_esp += 4; return;
L_0086d95b:; BB(0x0086d95b);
    /* 0086d95b: mov ecx, edi */ r_ecx = r_edi;
    /* 0086d95d: call 0x83ea38 */ r_esp -= 4; W32(r_esp, 0x86d962u); f_0083ea38();
    /* 0086d962: mov ebx, eax */ r_ebx = r_eax;
    /* 0086d964: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d966: je 0x86d94e */ if (fZ) goto L_0086d94e;
L_0086d968:; BB(0x0086d968);
    /* 0086d968: mov ebp, 4 */ r_ebp = 0x4u;
    /* 0086d96d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0086d96f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086d970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086d971: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0086d975: call 0x83e368 */ r_esp -= 4; W32(r_esp, 0x86d97au); f_0083e368();
    /* 0086d97a: mov ebp, 8 */ r_ebp = 0x8u;
    /* 0086d97f: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0086d983: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0086d986: mov dword ptr [edx*4 + 0xae92a0], esi */ W32((u32)(r_edx*4+0xae92a0u), r_esi);
    /* 0086d98d: lea edx, [eax + eax + 0x118] */ r_edx = (u32)(r_eax+r_eax+0x118u);
    /* 0086d994: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0086d997: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d999: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d99b: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0086d99e: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 0086d9a1: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0086d9a4: mov word ptr [esi + 0xc], ax */ W16((u32)(r_esi+0xcu), (u16)r_eax);
    /* 0086d9a8: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0086d9ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086d9ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086d9af: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x86d9b4u); f_00858900();
    /* 0086d9b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086d9b7: lea edi, [esi + 0x114] */ r_edi = (u32)(r_esi+0x114u);
    /* 0086d9bd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086d9bf: cmp dword ptr [esp], 0 */ {  u32 a = R32((u32)(r_esp)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d9c3: je 0x86d9fa */ if (fZ) goto L_0086d9fa;
L_0086d9c5:; BB(0x0086d9c5);
    /* 0086d9c5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086d9c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0086d9c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086d9ca: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0086d9ce: call 0x83e368 */ r_esp -= 4; W32(r_esp, 0x86d9d3u); f_0083e368();
    /* 0086d9d3: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 0086d9d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0086d9d8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086d9da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086d9db: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0086d9df: call 0x83e368 */ r_esp -= 4; W32(r_esp, 0x86d9e4u); f_0083e368();
    /* 0086d9e4: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0086d9e7: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086d9eb: shr edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0086d9ee: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 0086d9f1: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086d9f4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d9f5: cmp esi, dword ptr [esp] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086d9f8: jb 0x86d9c5 */ if (fC) goto L_0086d9c5;
L_0086d9fa:; BB(0x0086d9fa);
    /* 0086d9fa: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086d9fe: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0086da02: lea esi, [edx + ebp + 0x7ff] */ r_esi = (u32)(r_edx+r_ebp+0x7ffu);
    /* 0086da09: shr esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0086da0c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0086da0e: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0086da11: call 0x83e330 */ r_esp -= 4; W32(r_esp, 0x86da16u); f_0083e330();
    /* 0086da16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086da18: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086da1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086da1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086da1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086da1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086da1f: ret  */ FN_RET(0x0086d92c); r_esp += 4; return;
}

void f_0086da20(void) /* sub_86DA20 */
{
    FN_ENTER(0x0086da20);
    /* 0086da20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086da21: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0086da25: mov ebp, 0xae7f20 */ r_ebp = 0xae7f20u;
    /* 0086da2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0086da2c:; BB(0x0086da2c);
    /* 0086da2c: movsx ecx, byte ptr [ebp] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp));
    /* 0086da30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086da32: je 0x86da42 */ if (fZ) goto L_0086da42;
L_0086da34:; BB(0x0086da34);
    /* 0086da34: add ebp, 0x138 */ {  u32 a = r_ebp; u32 b = 0x138u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0086da3a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086da3b: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086da3e: jl 0x86da2c */ if ((fS!=fO)) goto L_0086da2c;
L_0086da40:; BB(0x0086da40);
    /* 0086da40: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0086da42:; BB(0x0086da42);
    /* 0086da42: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086da44: je 0x86daa8 */ if (fZ) goto L_0086daa8;
L_0086da46:; BB(0x0086da46);
    /* 0086da46: mov ecx, eax */ r_ecx = r_eax;
    /* 0086da48: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0086da4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086da4d: je 0x86da60 */ if (fZ) goto L_0086da60;
L_0086da4f:; BB(0x0086da4f);
    /* 0086da4f: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
L_0086da52:; BB(0x0086da52);
    /* 0086da52: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086da55: je 0x86da60 */ if (fZ) goto L_0086da60;
L_0086da57:; BB(0x0086da57);
    /* 0086da57: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 0086da5b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086da5c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086da5e: jne 0x86da52 */ if (!fZ) goto L_0086da52;
L_0086da60:; BB(0x0086da60);
    /* 0086da60: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086da62: je 0x86da6e */ if (fZ) goto L_0086da6e;
L_0086da64:; BB(0x0086da64);
    /* 0086da64: cmp byte ptr [ecx], 0x5c */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086da67: je 0x86daac */ if (fZ) goto L_0086daac;
L_0086da69:; BB(0x0086da69);
    /* 0086da69: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086da6a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086da6c: jne 0x86da64 */ if (!fZ) goto L_0086da64;
L_0086da6e:; BB(0x0086da6e);
    /* 0086da6e: call 0x83ea38 */ r_esp -= 4; W32(r_esp, 0x86da73u); f_0083ea38();
    /* 0086da73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086da75: je 0x86daa6 */ if (fZ) goto L_0086daa6;
L_0086da77:; BB(0x0086da77);
    /* 0086da77: mov byte ptr [ebp], 1 */ W8((u32)(r_ebp), 0x1u);
    /* 0086da7b: mov ecx, eax */ r_ecx = r_eax;
    /* 0086da7d: mov dword ptr [ebp + 0x134], eax */ W32((u32)(r_ebp+0x134u), r_eax);
    /* 0086da83: call 0x83e354 */ r_esp -= 4; W32(r_esp, 0x86da88u); f_0083e354();
    /* 0086da88: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0086da8b: lea edx, [eax + 0x7ff] */ r_edx = (u32)(r_eax+0x7ffu);
    /* 0086da91: sar edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0086da94: shr edx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0086da97: lea eax, [edx + eax + 0x7ff] */ r_eax = (u32)(r_edx+r_eax+0x7ffu);
    /* 0086da9e: sar eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086daa1: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0086daa4: jmp 0x86daa8 */ goto L_0086daa8;
L_0086daa6:; BB(0x0086daa6);
    /* 0086daa6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0086daa8:; BB(0x0086daa8);
    /* 0086daa8: mov eax, ebp */ r_eax = r_ebp;
    /* 0086daaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086daab: ret  */ FN_RET(0x0086da20); r_esp += 4; return;
L_0086daac:; BB(0x0086daac);
    /* 0086daac: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086daad: jmp 0x86da6e */ goto L_0086da6e;
}

void f_0086dab0(void) /* sub_86DAB0 */
{
    FN_ENTER(0x0086dab0);
    /* 0086dab0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086dab1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086dab2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086dab3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0086dab7: mov ebp, 0xae7f20 */ r_ebp = 0xae7f20u;
    /* 0086dabc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0086dabe:; BB(0x0086dabe);
    /* 0086dabe: movsx ecx, byte ptr [ebp] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp));
    /* 0086dac2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dac4: je 0x86dad4 */ if (fZ) goto L_0086dad4;
L_0086dac6:; BB(0x0086dac6);
    /* 0086dac6: add ebp, 0x138 */ {  u32 a = r_ebp; u32 b = 0x138u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0086dacc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086dacd: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086dad0: jl 0x86dabe */ if ((fS!=fO)) goto L_0086dabe;
L_0086dad2:; BB(0x0086dad2);
    /* 0086dad2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0086dad4:; BB(0x0086dad4);
    /* 0086dad4: mov ebx, dword ptr [edx*4 + 0xae92a0] */ r_ebx = R32((u32)(r_edx*4+0xae92a0u));
    /* 0086dadb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dadd: je 0x86db37 */ if (fZ) goto L_0086db37;
L_0086dadf:; BB(0x0086dadf);
    /* 0086dadf: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 0086dae2: call 0x83ea38 */ r_esp -= 4; W32(r_esp, 0x86dae7u); f_0083ea38();
    /* 0086dae7: mov esi, eax */ r_esi = r_eax;
    /* 0086dae9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086daeb: je 0x86db35 */ if (fZ) goto L_0086db35;
L_0086daed:; BB(0x0086daed);
    /* 0086daed: mov ecx, esi */ r_ecx = r_esi;
    /* 0086daef: call 0x83e354 */ r_esp -= 4; W32(r_esp, 0x86daf4u); f_0083e354();
    /* 0086daf4: mov byte ptr [ebp], 1 */ W8((u32)(r_ebp), 0x1u);
    /* 0086daf8: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0086dafc: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0086db00: mov dword ptr [ebp + 0x134], esi */ W32((u32)(r_ebp+0x134u), r_esi);
    /* 0086db06: movsx esi, word ptr [ebx + eax*2 + 0x116] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x116u));
    /* 0086db0e: movsx ecx, word ptr [ebx + edx*2 + 0x114] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_edx*2+0x114u));
    /* 0086db16: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086db18: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0086db1c: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 0086db1f: shl esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0086db22: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0086db25: movsx ebx, word ptr [ebx + eax*2 + 0x114] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x114u));
    /* 0086db2d: shl ebx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086db30: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
    /* 0086db33: jmp 0x86db37 */ goto L_0086db37;
L_0086db35:; BB(0x0086db35);
    /* 0086db35: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0086db37:; BB(0x0086db37);
    /* 0086db37: mov eax, ebp */ r_eax = r_ebp;
    /* 0086db39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086db3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086db3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086db3c: ret  */ FN_RET(0x0086dab0); r_esp += 4; return;
}

void f_0086db40(void) /* sub_86DB40 */
{
    FN_ENTER(0x0086db40);
    /* 0086db40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086db41: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0086db45: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086db47: je 0x86db62 */ if (fZ) goto L_0086db62;
L_0086db49:; BB(0x0086db49);
    /* 0086db49: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0086db4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086db4e: je 0x86db5b */ if (fZ) goto L_0086db5b;
L_0086db50:; BB(0x0086db50);
    /* 0086db50: mov ecx, dword ptr [esi + 0x134] */ r_ecx = R32((u32)(r_esi+0x134u));
    /* 0086db56: call 0x83e330 */ r_esp -= 4; W32(r_esp, 0x86db5bu); f_0083e330();
L_0086db5b:; BB(0x0086db5b);
    /* 0086db5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086db5c: call 0x86dcb0 */ r_esp -= 4; W32(r_esp, 0x86db61u); f_0086dcb0();
    /* 0086db61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086db62:; BB(0x0086db62);
    /* 0086db62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086db63: ret  */ FN_RET(0x0086db40); r_esp += 4; return;
}

void f_0086db64(void) /* sub_86DB64 */
{
    FN_ENTER(0x0086db64);
    /* 0086db64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086db65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086db66: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0086db6a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0086db6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086db70: je 0x86dbab */ if (fZ) goto L_0086dbab;
L_0086db72:; BB(0x0086db72);
    /* 0086db72: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086db74: je 0x86dbab */ if (fZ) goto L_0086dbab;
L_0086db76:; BB(0x0086db76);
    /* 0086db76: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0086db7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086db7c: je 0x86dbab */ if (fZ) goto L_0086dbab;
L_0086db7e:; BB(0x0086db7e);
    /* 0086db7e: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 0086db85: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0086db89: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0086db8c: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0086db8f: mov esi, ebx */ r_esi = r_ebx;
    /* 0086db91: shl esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0086db94: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0086db97: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 0086db9a: mov byte ptr [eax + 1], 2 */ W8((u32)(r_eax+0x1u), 0x2u);
    /* 0086db9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086db9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086dba0: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 0086dba6: call 0x83e3ac */ r_esp -= 4; W32(r_esp, 0x86dbabu); f_0083e3ac();
L_0086dbab:; BB(0x0086dbab);
    /* 0086dbab: mov eax, ebx */ r_eax = r_ebx;
    /* 0086dbad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086dbae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086dbaf: ret  */ FN_RET(0x0086db64); r_esp += 4; return;
}

void f_0086dbb0(void) /* sub_86DBB0 */
{
    FN_ENTER(0x0086dbb0);
    /* 0086dbb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086dbb1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086dbb2: mov edx, 0xae7f20 */ r_edx = 0xae7f20u;
    /* 0086dbb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086dbb9: mov ebx, eax */ r_ebx = r_eax;
    /* 0086dbbb: mov esi, edx */ r_esi = r_edx;
L_0086dbbd:; BB(0x0086dbbd);
    /* 0086dbbd: movsx ecx, byte ptr [esi] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0086dbc0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dbc2: je 0x86dbca */ if (fZ) goto L_0086dbca;
L_0086dbc4:; BB(0x0086dbc4);
    /* 0086dbc4: cmp byte ptr [esi + 1], 2 */ {  u32 a = R8((u32)(r_esi+0x1u)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086dbc8: je 0x86dbd9 */ if (fZ) goto L_0086dbd9;
L_0086dbca:; BB(0x0086dbca);
    /* 0086dbca: add esi, 0x138 */ {  u32 a = r_esi; u32 b = 0x138u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086dbd0: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086dbd1: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086dbd4: jl 0x86dbbd */ if ((fS!=fO)) goto L_0086dbbd;
L_0086dbd6:; BB(0x0086dbd6);
    /* 0086dbd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086dbd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086dbd8: ret  */ FN_RET(0x0086dbb0); r_esp += 4; return;
L_0086dbd9:; BB(0x0086dbd9);
    /* 0086dbd9: mov ecx, dword ptr [esi + 0x134] */ r_ecx = R32((u32)(r_esi+0x134u));
    /* 0086dbdf: call 0x83e414 */ r_esp -= 4; W32(r_esp, 0x86dbe4u); f_0083e414();
    /* 0086dbe4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dbe7: je 0x86dbca */ if (fZ) goto L_0086dbca;
L_0086dbe9:; BB(0x0086dbe9);
    /* 0086dbe9: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0086dbec: lea ecx, [eax + 0x7ff] */ r_ecx = (u32)(r_eax+0x7ffu);
    /* 0086dbf2: sar ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0086dbf5: shr ecx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086dbf8: lea eax, [ecx + eax + 0x7ff] */ r_eax = (u32)(r_ecx+r_eax+0x7ffu);
    /* 0086dbff: and eax, 0xfffff800 */ {  u32 a = r_eax; u32 b = 0xfffff800u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086dc04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dc06: je 0x86dc12 */ if (fZ) goto L_0086dc12;
L_0086dc08:; BB(0x0086dc08);
    /* 0086dc08: movsx ecx, byte ptr [esi] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0086dc0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dc0d: je 0x86dc12 */ if (fZ) goto L_0086dc12;
L_0086dc0f:; BB(0x0086dc0f);
    /* 0086dc0f: add dword ptr [esi + 0x14], eax */ { u32 ad = (u32)(r_esi+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086dc12:; BB(0x0086dc12);
    /* 0086dc12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086dc13: call 0x86dcf4 */ r_esp -= 4; W32(r_esp, 0x86dc18u); f_0086dcf4();
    /* 0086dc18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086dc19: mov byte ptr [esi + 1], 3 */ W8((u32)(r_esi+0x1u), 0x3u);
    /* 0086dc1d: jmp 0x86dbca */ goto L_0086dbca;
}

void f_0086dc20(void) /* sub_86DC20 */
{
    FN_ENTER(0x0086dc20);
    /* 0086dc20: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0086dc24: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0086dc28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dc2a: je 0x86dc5e */ if (fZ) goto L_0086dc5e;
L_0086dc2c:; BB(0x0086dc2c);
    /* 0086dc2c: movsx eax, byte ptr [ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0086dc2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dc31: je 0x86dc5e */ if (fZ) goto L_0086dc5e;
L_0086dc33:; BB(0x0086dc33);
    /* 0086dc33: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0086dc37: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086dc3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dc3c: je 0x86dc5a */ if (fZ) goto L_0086dc5a;
L_0086dc3e:; BB(0x0086dc3e);
    /* 0086dc3e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dc41: jne 0x86dc4a */ if (!fZ) goto L_0086dc4a;
L_0086dc43:; BB(0x0086dc43);
    /* 0086dc43: add eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086dc46: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0086dc49: ret  */ FN_RET(0x0086dc20); r_esp += 4; return;
L_0086dc4a:; BB(0x0086dc4a);
    /* 0086dc4a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dc4d: jne 0x86dc5e */ if (!fZ) goto L_0086dc5e;
L_0086dc4f:; BB(0x0086dc4f);
    /* 0086dc4f: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0086dc52: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086dc54: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086dc56: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0086dc59: ret  */ FN_RET(0x0086dc20); r_esp += 4; return;
L_0086dc5a:; BB(0x0086dc5a);
    /* 0086dc5a: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0086dc5d: ret  */ FN_RET(0x0086dc20); r_esp += 4; return;
L_0086dc5e:; BB(0x0086dc5e);
    /* 0086dc5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dc60: ret  */ FN_RET(0x0086dc20); r_esp += 4; return;
}

void f_0086dc64(void) /* sub_86DC64 */
{
    FN_ENTER(0x0086dc64);
    /* 0086dc64: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086dc68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dc6a: je 0x86dc73 */ if (fZ) goto L_0086dc73;
L_0086dc6c:; BB(0x0086dc6c);
    /* 0086dc6c: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0086dc6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dc71: jne 0x86dc76 */ if (!fZ) goto L_0086dc76;
L_0086dc73:; BB(0x0086dc73);
    /* 0086dc73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dc75: ret  */ FN_RET(0x0086dc64); r_esp += 4; return;
L_0086dc76:; BB(0x0086dc76);
    /* 0086dc76: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0086dc79: ret  */ FN_RET(0x0086dc64); r_esp += 4; return;
}

void f_0086dc7c(void) /* sub_86DC7C */
{
    FN_ENTER(0x0086dc7c);
    /* 0086dc7c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086dc80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dc82: je 0x86dc8b */ if (fZ) goto L_0086dc8b;
L_0086dc84:; BB(0x0086dc84);
    /* 0086dc84: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0086dc87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dc89: jne 0x86dc8e */ if (!fZ) goto L_0086dc8e;
L_0086dc8b:; BB(0x0086dc8b);
    /* 0086dc8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dc8d: ret  */ FN_RET(0x0086dc7c); r_esp += 4; return;
L_0086dc8e:; BB(0x0086dc8e);
    /* 0086dc8e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0086dc91: ret  */ FN_RET(0x0086dc7c); r_esp += 4; return;
}

void f_0086dc94(void) /* sub_86DC94 */
{
    FN_ENTER(0x0086dc94);
    /* 0086dc94: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086dc98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dc9a: je 0x86dca3 */ if (fZ) goto L_0086dca3;
L_0086dc9c:; BB(0x0086dc9c);
    /* 0086dc9c: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0086dc9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dca1: jne 0x86dca9 */ if (!fZ) goto L_0086dca9;
L_0086dca3:; BB(0x0086dca3);
    /* 0086dca3: mov eax, 1 */ r_eax = 0x1u;
    /* 0086dca8: ret  */ FN_RET(0x0086dc94); r_esp += 4; return;
L_0086dca9:; BB(0x0086dca9);
    /* 0086dca9: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0086dcad: ret  */ FN_RET(0x0086dc94); r_esp += 4; return;
}

void f_0086dcb0(void) /* sub_86DCB0 */
{
    FN_ENTER(0x0086dcb0);
    /* 0086dcb0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086dcb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dcb6: je 0x86dcf0 */ if (fZ) goto L_0086dcf0;
L_0086dcb8:; BB(0x0086dcb8);
    /* 0086dcb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dcba: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0086dcbc: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 0086dcc0: mov byte ptr [edx + 2], al */ W8((u32)(r_edx+0x2u), (u8)r_eax);
    /* 0086dcc3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0086dcc6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0086dcc9: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0086dccc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0086dccf: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0086dcd2: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0086dcd5: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0086dcd8: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0086dcdb: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0086dcde: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0086dce1: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0086dce4: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0086dce7: mov byte ptr [edx + 0x34], al */ W8((u32)(r_edx+0x34u), (u8)r_eax);
    /* 0086dcea: mov dword ptr [edx + 0x134], eax */ W32((u32)(r_edx+0x134u), r_eax);
L_0086dcf0:; BB(0x0086dcf0);
    /* 0086dcf0: ret  */ FN_RET(0x0086dcb0); r_esp += 4; return;
}

void f_0086dcf4(void) /* sub_86DCF4 */
{
    FN_ENTER(0x0086dcf4);
    /* 0086dcf4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0086dcf8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dcfa: je 0x86dd03 */ if (fZ) goto L_0086dd03;
L_0086dcfc:; BB(0x0086dcfc);
    /* 0086dcfc: movsx eax, byte ptr [ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0086dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dd01: jne 0x86dd06 */ if (!fZ) goto L_0086dd06;
L_0086dd03:; BB(0x0086dd03);
    /* 0086dd03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dd05: ret  */ FN_RET(0x0086dcf4); r_esp += 4; return;
L_0086dd06:; BB(0x0086dd06);
    /* 0086dd06: mov byte ptr [ecx + 1], 1 */ W8((u32)(r_ecx+0x1u), 0x1u);
    /* 0086dd0a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dd0c: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0086dd0f: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0086dd12: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0086dd15: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0086dd18: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0086dd1b: ret  */ FN_RET(0x0086dcf4); r_esp += 4; return;
}

void f_0086dd1c(void) /* sub_86DD1C */
{
    FN_ENTER(0x0086dd1c);
    /* 0086dd1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086dd1d: mov esi, ecx */ r_esi = r_ecx;
    /* 0086dd1f: mov ecx, esi */ r_ecx = r_esi;
    /* 0086dd21: call 0x86e7e4 */ r_esp -= 4; W32(r_esp, 0x86dd26u); f_0086e7e4();
    /* 0086dd26: test dword ptr [esp + 8], 1 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dd2e: jne 0x86dd34 */ if (!fZ) goto L_0086dd34;
L_0086dd30:; BB(0x0086dd30);
    /* 0086dd30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086dd31: ret 4 */ FN_RET(0x0086dd1c); r_esp += 8; return;
L_0086dd34:; BB(0x0086dd34);
    /* 0086dd34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086dd35: call 0x86edf8 */ r_esp -= 4; W32(r_esp, 0x86dd3au); f_0086edf8();
    /* 0086dd3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086dd3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086dd3c: ret 4 */ FN_RET(0x0086dd1c); r_esp += 8; return;
}

void f_0086dd40(void) /* sub_86DD40 */
{
    FN_ENTER(0x0086dd40);
    /* 0086dd40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086dd41: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 0086dd46: mov ebx, eax */ r_ebx = r_eax;
L_0086dd48:; BB(0x0086dd48);
    /* 0086dd48: mov ecx, dword ptr [ebx + 0xae96a0] */ r_ecx = R32((u32)(r_ebx+0xae96a0u));
    /* 0086dd4e: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086dd51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dd53: je 0x86dd68 */ if (fZ) goto L_0086dd68;
L_0086dd55:; BB(0x0086dd55);
    /* 0086dd55: je 0x86dd5e */ if (fZ) goto L_0086dd5e;
L_0086dd57:; BB(0x0086dd57);
    /* 0086dd57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086dd59: call 0x86dd1c */ r_esp -= 4; W32(r_esp, 0x86dd5eu); f_0086dd1c();
L_0086dd5e:; BB(0x0086dd5e);
    /* 0086dd5e: mov dword ptr [ebx + 0xae96a4], 0 */ W32((u32)(r_ebx+0xae96a4u), 0x0u);
L_0086dd68:; BB(0x0086dd68);
    /* 0086dd68: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086dd6a: jge 0x86dd48 */ if ((fS==fO)) goto L_0086dd48;
L_0086dd6c:; BB(0x0086dd6c);
    /* 0086dd6c: mov dword ptr [0xae96c8], 0 */ W32((u32)(0xae96c8u), 0x0u);
    /* 0086dd76: call 0x86fa40 */ r_esp -= 4; W32(r_esp, 0x86dd7bu); f_0086fa40();
    /* 0086dd7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086dd7c: ret  */ FN_RET(0x0086dd40); r_esp += 4; return;
}

void f_0086dd80(void) /* sub_86DD80 */
{
    FN_ENTER(0x0086dd80);
    /* 0086dd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086dd81: mov ebp, esp */ r_ebp = r_esp;
    /* 0086dd83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086dd85: push 0x8f7a68 */ { u32 v = 0x8f7a68u; r_esp -= 4; W32(r_esp, v); }
    /* 0086dd8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0086dd90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086dd91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0086dd98: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086dd9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0086dd9e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0086dda1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0086dda4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0086dda7: cmp dword ptr [0xae96c8], 0 */ {  u32 a = R32((u32)(0xae96c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ddae: je 0x86dee8 */ if (fZ) goto L_0086dee8;
L_0086ddb4:; BB(0x0086ddb4);
    /* 0086ddb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ddb6: cmp dword ptr [0xae96a0], 0 */ {  u32 a = R32((u32)(0xae96a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ddbd: je 0x86ded7 */ if (fZ) goto L_0086ded7;
L_0086ddc3:; BB(0x0086ddc3);
    /* 0086ddc3: mov eax, 1 */ r_eax = 0x1u;
    /* 0086ddc8: cmp dword ptr [0xae96a4], 0 */ {  u32 a = R32((u32)(0xae96a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ddcf: je 0x86ded7 */ if (fZ) goto L_0086ded7;
L_0086ddd5:; BB(0x0086ddd5);
    /* 0086ddd5: mov eax, 2 */ r_eax = 0x2u;
    /* 0086ddda: cmp dword ptr [0xae96a8], 0 */ {  u32 a = R32((u32)(0xae96a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dde1: je 0x86ded7 */ if (fZ) goto L_0086ded7;
L_0086dde7:; BB(0x0086dde7);
    /* 0086dde7: mov eax, 3 */ r_eax = 0x3u;
    /* 0086ddec: cmp dword ptr [0xae96ac], 0 */ {  u32 a = R32((u32)(0xae96acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ddf3: je 0x86ded7 */ if (fZ) goto L_0086ded7;
L_0086ddf9:; BB(0x0086ddf9);
    /* 0086ddf9: mov eax, 4 */ r_eax = 0x4u;
    /* 0086ddfe: cmp dword ptr [0xae96b0], 0 */ {  u32 a = R32((u32)(0xae96b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086de05: je 0x86ded7 */ if (fZ) goto L_0086ded7;
L_0086de0b:; BB(0x0086de0b);
    /* 0086de0b: mov eax, 5 */ r_eax = 0x5u;
    /* 0086de10: cmp dword ptr [0xae96b4], 0 */ {  u32 a = R32((u32)(0xae96b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086de17: je 0x86ded7 */ if (fZ) goto L_0086ded7;
L_0086de1d:; BB(0x0086de1d);
    /* 0086de1d: mov eax, 6 */ r_eax = 0x6u;
    /* 0086de22: cmp dword ptr [0xae96b8], 0 */ {  u32 a = R32((u32)(0xae96b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086de29: je 0x86ded7 */ if (fZ) goto L_0086ded7;
L_0086de2f:; BB(0x0086de2f);
    /* 0086de2f: mov eax, 7 */ r_eax = 0x7u;
    /* 0086de34: cmp dword ptr [0xae96bc], 0 */ {  u32 a = R32((u32)(0xae96bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086de3b: je 0x86ded7 */ if (fZ) goto L_0086ded7;
L_0086de41:; BB(0x0086de41);
    /* 0086de41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086de43: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0086de46:; BB(0x0086de46);
    /* 0086de46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086de48: je 0x86debf */ if (fZ) goto L_0086debf;
L_0086de4a:; BB(0x0086de4a);
    /* 0086de4a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0086de51: push 0xb98 */ { u32 v = 0xb98u; r_esp -= 4; W32(r_esp, v); }
    /* 0086de56: call 0x86ed68 */ r_esp -= 4; W32(r_esp, 0x86de5bu); f_0086ed68();
    /* 0086de5b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0086de5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086de61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086de63: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0086de66: je 0x86ded0 */ if (fZ) goto L_0086ded0;
L_0086de68:; BB(0x0086de68);
    /* 0086de68: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0086de6f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0086de76: push dword ptr [0xae96c8] */ { u32 v = R32((u32)(0xae96c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086de7c: mov ecx, eax */ r_ecx = r_eax;
    /* 0086de7e: call 0x86e26c */ r_esp -= 4; W32(r_esp, 0x86de83u); f_0086e26c();
    /* 0086de83: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0086de8a:; BB(0x0086de8a);
    /* 0086de8a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086de8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0086de90: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086de92: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0086de99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086de9b: je 0x86debf */ if (fZ) goto L_0086debf;
L_0086de9d:; BB(0x0086de9d);
    /* 0086de9d: movzx eax, byte ptr [0xae96c4] */ r_eax = (u32)R8((u32)(0xae96c4u));
    /* 0086dea4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0086dea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086dea8: call 0x86eaf4 */ r_esp -= 4; W32(r_esp, 0x86deadu); f_0086eaf4();
    /* 0086dead: movzx eax, byte ptr [0xae96c0] */ r_eax = (u32)R8((u32)(0xae96c0u));
    /* 0086deb4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086deb7: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0086deb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086deba: call 0x86eb1c */ r_esp -= 4; W32(r_esp, 0x86debfu); f_0086eb1c();
L_0086debf:; BB(0x0086debf);
    /* 0086debf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086dec2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086dec5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086decc: mov esp, ebp */ r_esp = r_ebp;
    /* 0086dece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086decf: ret  */ FN_RET(0x0086dd80); r_esp += 4; return;
L_0086ded0:; BB(0x0086ded0);
    /* 0086ded0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ded2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0086ded5: jmp 0x86de8a */ goto L_0086de8a;
L_0086ded7:; BB(0x0086ded7);
    /* 0086ded7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086ded9: lea eax, [eax + eax + 0xae96a0] */ r_eax = (u32)(r_eax+r_eax+0xae96a0u);
    /* 0086dee0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0086dee3: jmp 0x86de46 */ goto L_0086de46;
L_0086dee8:; BB(0x0086dee8);
    /* 0086dee8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086deea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086deed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086def4: mov esp, ebp */ r_esp = r_ebp;
    /* 0086def6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086def7: ret  */ FN_RET(0x0086dd80); r_esp += 4; return;
}

void f_0086def8(void) /* sub_86DEF8 */
{
    FN_ENTER(0x0086def8);
    /* 0086def8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086def9: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0086defd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086deff: je 0x86df16 */ if (fZ) goto L_0086df16;
L_0086df01:; BB(0x0086df01);
    /* 0086df01: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0086df03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086df05: je 0x86df16 */ if (fZ) goto L_0086df16;
L_0086df07:; BB(0x0086df07);
    /* 0086df07: je 0x86df10 */ if (fZ) goto L_0086df10;
L_0086df09:; BB(0x0086df09);
    /* 0086df09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086df0b: call 0x86dd1c */ r_esp -= 4; W32(r_esp, 0x86df10u); f_0086dd1c();
L_0086df10:; BB(0x0086df10);
    /* 0086df10: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0086df16:; BB(0x0086df16);
    /* 0086df16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086df17: ret 4 */ FN_RET(0x0086def8); r_esp += 8; return;
}

void f_0086df1c(void) /* sub_86DF1C */
{
    FN_ENTER(0x0086df1c);
    /* 0086df1c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086df20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086df22: je 0x86df33 */ if (fZ) goto L_0086df33;
L_0086df24:; BB(0x0086df24);
    /* 0086df24: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086df26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086df28: je 0x86df33 */ if (fZ) goto L_0086df33;
L_0086df2a:; BB(0x0086df2a);
    /* 0086df2a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086df2e: call 0x86e9ac */ r_esp -= 4; W32(r_esp, 0x86df33u); f_0086e9ac();
L_0086df33:; BB(0x0086df33);
    /* 0086df33: ret 8 */ FN_RET(0x0086df1c); r_esp += 12; return;
}

void f_0086df38(void) /* sub_86DF38 */
{
    FN_ENTER(0x0086df38);
    /* 0086df38: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086df3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086df3e: je 0x86df4f */ if (fZ) goto L_0086df4f;
L_0086df40:; BB(0x0086df40);
    /* 0086df40: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086df42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086df44: je 0x86df4f */ if (fZ) goto L_0086df4f;
L_0086df46:; BB(0x0086df46);
    /* 0086df46: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086df4a: call 0x86ec14 */ r_esp -= 4; W32(r_esp, 0x86df4fu); f_0086ec14();
L_0086df4f:; BB(0x0086df4f);
    /* 0086df4f: ret 8 */ FN_RET(0x0086df38); r_esp += 12; return;
}

void f_0086df54(void) /* sub_86DF54 */
{
    FN_ENTER(0x0086df54);
    /* 0086df54: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086df58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086df5a: je 0x86df73 */ if (fZ) goto L_0086df73;
L_0086df5c:; BB(0x0086df5c);
    /* 0086df5c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086df5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086df60: je 0x86df73 */ if (fZ) goto L_0086df73;
L_0086df62:; BB(0x0086df62);
    /* 0086df62: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086df66: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086df6a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086df6e: call 0x86ec60 */ r_esp -= 4; W32(r_esp, 0x86df73u); f_0086ec60();
L_0086df73:; BB(0x0086df73);
    /* 0086df73: ret 0x10 */ FN_RET(0x0086df54); r_esp += 20; return;
}

void f_0086df78(void) /* sub_86DF78 */
{
    FN_ENTER(0x0086df78);
    /* 0086df78: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086df7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086df7e: je 0x86dfab */ if (fZ) goto L_0086dfab;
L_0086df80:; BB(0x0086df80);
    /* 0086df80: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086df82: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086df84: je 0x86dfab */ if (fZ) goto L_0086dfab;
L_0086df86:; BB(0x0086df86);
    /* 0086df86: call 0x86ea94 */ r_esp -= 4; W32(r_esp, 0x86df8bu); f_0086ea94();
    /* 0086df8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086df8d: je 0x86dfc0 */ if (fZ) goto L_0086dfc0;
L_0086df8f:; BB(0x0086df8f);
    /* 0086df8f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086df92: je 0x86dfc8 */ if (fZ) goto L_0086dfc8;
L_0086df94:; BB(0x0086df94);
    /* 0086df94: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086df97: je 0x86dfb8 */ if (fZ) goto L_0086dfb8;
L_0086df99:; BB(0x0086df99);
    /* 0086df99: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086df9c: jne 0x86dfa6 */ if (!fZ) goto L_0086dfa6;
L_0086df9e:; BB(0x0086df9e);
    /* 0086df9e: mov eax, 4 */ r_eax = 0x4u;
    /* 0086dfa3: ret 4 */ FN_RET(0x0086df78); r_esp += 8; return;
L_0086dfa6:; BB(0x0086dfa6);
    /* 0086dfa6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086dfa9: je 0x86dfb0 */ if (fZ) goto L_0086dfb0;
L_0086dfab:; BB(0x0086dfab);
    /* 0086dfab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086dfad: ret 4 */ FN_RET(0x0086df78); r_esp += 8; return;
L_0086dfb0:; BB(0x0086dfb0);
    /* 0086dfb0: mov eax, 5 */ r_eax = 0x5u;
    /* 0086dfb5: ret 4 */ FN_RET(0x0086df78); r_esp += 8; return;
L_0086dfb8:; BB(0x0086dfb8);
    /* 0086dfb8: mov eax, 3 */ r_eax = 0x3u;
    /* 0086dfbd: ret 4 */ FN_RET(0x0086df78); r_esp += 8; return;
L_0086dfc0:; BB(0x0086dfc0);
    /* 0086dfc0: mov eax, 1 */ r_eax = 0x1u;
    /* 0086dfc5: ret 4 */ FN_RET(0x0086df78); r_esp += 8; return;
L_0086dfc8:; BB(0x0086dfc8);
    /* 0086dfc8: mov eax, 2 */ r_eax = 0x2u;
    /* 0086dfcd: ret 4 */ FN_RET(0x0086df78); r_esp += 8; return;
}

void f_0086dfd0(void) /* sub_86DFD0 */
{
    FN_ENTER(0x0086dfd0);
L_0086dfd0:; BB(0x0086dfd0);
    /* 0086dfd0: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dfda: jne 0x86dff8 */ if (!fZ) goto L_0086dff8;
L_0086dfe0:; BB(0x0086dfe0);
    /* 0086dfe0: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dfea: jne 0x86e024 */ if (!fZ) goto L_0086e024;
L_0086dff0:; BB(0x0086dff0);
    /* 0086dff0: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x86dff5u); f_0086b8a0();
    /* 0086dff5: jmp 0x86dfd0 */ goto L_0086dfd0;
L_0086dff8:; BB(0x0086dff8);
    /* 0086dff8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086dffc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086dffe: je 0x86e01e */ if (fZ) goto L_0086e01e;
L_0086e000:; BB(0x0086e000);
    /* 0086e000: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086e002: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e004: je 0x86e01e */ if (fZ) goto L_0086e01e;
L_0086e006:; BB(0x0086e006);
    /* 0086e006: call 0x86eac8 */ r_esp -= 4; W32(r_esp, 0x86e00bu); f_0086eac8();
    /* 0086e00b: cvtsi2ss xmm3, eax */ xmm[3].fs[0] = (float)(i32)(r_eax);
    /* 0086e00f: mulss xmm3, dword ptr [0x99a4dc] */ { XMM s; s.d[0] = R32((u32)(0x99a4dcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 0086e017: cvttss2si eax, xmm3 */ { XMM s = xmm[3]; double v = (double)s.fs[0]; double r = trunc(v); r_eax = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0086e01b: ret 4 */ FN_RET(0x0086dfd0); r_esp += 8; return;
L_0086e01e:; BB(0x0086e01e);
    /* 0086e01e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e020: ret 4 */ FN_RET(0x0086dfd0); r_esp += 8; return;
L_0086e024:; BB(0x0086e024);
    /* 0086e024: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086e027: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0086e02b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e02d: je 0x86e06e */ if (fZ) goto L_0086e06e;
L_0086e02f:; BB(0x0086e02f);
    /* 0086e02f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086e031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e033: je 0x86e06e */ if (fZ) goto L_0086e06e;
L_0086e035:; BB(0x0086e035);
    /* 0086e035: call 0x86eac8 */ r_esp -= 4; W32(r_esp, 0x86e03au); f_0086eac8();
    /* 0086e03a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0086e03d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0086e040: fmul dword ptr [0x99a4d8] */ ST(0) = ST(0) * R_F32((u32)(0x99a4d8u));
    /* 0086e046: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0086e04a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0086e04f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0086e054: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0086e058: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0086e05c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0086e060: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0086e064: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0086e068: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086e06b: ret 4 */ FN_RET(0x0086dfd0); r_esp += 8; return;
L_0086e06e:; BB(0x0086e06e);
    /* 0086e06e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e070: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086e073: ret 4 */ FN_RET(0x0086dfd0); r_esp += 8; return;
}

