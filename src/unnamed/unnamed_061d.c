#include "protos.h"

void f_0061d034(void)
{
    FN_ENTER(0x0061d034);
    /* 0061d034: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d035: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d037: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d039: push 0x8e1d70 */ { u32 v = 0x8e1d70u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d03e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061d044: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d045: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061d04c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d04f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061d052: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061d055: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061d058: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061d05b: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d060: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061d067: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61d06cu); f_005caba4();
    /* 0061d06c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d06d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061d070: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d072: je 0x61d0ab */ if (fZ) goto L_0061d0ab;
L_0061d074:; BB(0x0061d074);
    /* 0061d074: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061d07b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061d082: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d085: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d08b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d08e: call 0x61d0b0 */ r_esp -= 4; W32(r_esp, 0x61d093u); f_0061d0b0();
    /* 0061d093: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d096: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061d09d:; BB(0x0061d09d);
    /* 0061d09d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d0a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061d0a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d0a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d0aa: ret  */ FN_RET(0x0061d034); r_esp += 4; return;
L_0061d0ab:; BB(0x0061d0ab);
    /* 0061d0ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061d0ad: jmp 0x61d09d */ goto L_0061d09d;
}

void f_0061d0b0(void) /* sub_61D0B0 */
{
    FN_ENTER(0x0061d0b0);
    /* 0061d0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d0b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0b5: push 0x8e1d8c */ { u32 v = 0x8e1d8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061d0c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061d0c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d0cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061d0ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061d0d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061d0d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061d0d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061d0da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d0dd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061d0e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061d0e3: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61d0e8u); f_00619df0();
    /* 0061d0e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061d0ef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d0f2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d0f5: mov dword ptr [ecx], 0xb27340 */ W32((u32)(r_ecx), 0xb27340u);
    /* 0061d0fb: mov eax, dword ptr [0x9c51b0] */ r_eax = R32((u32)(0x9c51b0u));
    /* 0061d100: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d101: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061d104: call dword ptr [0xb27354] */ { u32 t = R32((u32)(0xb27354u)); r_esp -= 4; W32(r_esp, 0x61d10au); call_ind(t); }
    /* 0061d10a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d10d: mov eax, dword ptr [0xa8ec08] */ r_eax = R32((u32)(0xa8ec08u));
    /* 0061d112: mov edi, dword ptr [0xa8ec0c] */ r_edi = R32((u32)(0xa8ec0cu));
    /* 0061d118: fld dword ptr [0x930d48] */ FPUSH(R_F32((u32)(0x930d48u)));
    /* 0061d11e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061d120: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0061d123: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d125: push 0x9c51b4 */ { u32 v = 0x9c51b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d12a: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 0061d130: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 0061d133: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 0061d136: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061d13c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061d13f: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061d145: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061d148: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061d14b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061d14e: fadd dword ptr [edx*4 + 0x930d40] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930d40u));
    /* 0061d155: fadd dword ptr [0x930d4c] */ ST(0) = ST(0) + R_F32((u32)(0x930d4cu));
    /* 0061d15b: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 0061d161: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0061d163: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 0061d169: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61d16eu); f_007b9a88();
    /* 0061d16e: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d171: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61d176u); f_007b999c();
    /* 0061d176: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d177: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d17a: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61d17fu); f_007b4f54();
    /* 0061d17f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d182: mov ebx, dword ptr [ecx + 0x84] */ r_ebx = R32((u32)(r_ecx+0x84u));
    /* 0061d188: mov eax, 0xfe */ r_eax = 0xfeu;
    /* 0061d18d: cmp ebx, 0xfe */ {  u32 a = r_ebx; u32 b = 0xfeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d193: mov edx, 0 */ r_edx = 0x0u;
    /* 0061d198: jl 0x61d19c */ if ((fS!=fO)) goto L_0061d19c;
L_0061d19a:; BB(0x0061d19a);
    /* 0061d19a: mov ebx, eax */ r_ebx = r_eax;
L_0061d19c:; BB(0x0061d19c);
    /* 0061d19c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061d19e: jg 0x61d1a2 */ if ((!fZ&&fS==fO)) goto L_0061d1a2;
L_0061d1a0:; BB(0x0061d1a0);
    /* 0061d1a0: mov ebx, edx */ r_ebx = r_edx;
L_0061d1a2:; BB(0x0061d1a2);
    /* 0061d1a2: mov dword ptr [ecx + 0x84], ebx */ W32((u32)(r_ecx+0x84u), r_ebx);
    /* 0061d1a8: call 0x61c84c */ r_esp -= 4; W32(r_esp, 0x61d1adu); f_0061c84c();
    /* 0061d1ad: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d1b0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d1b3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061d1b6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d1b9: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0061d1bf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d1c2: mov word ptr [eax + 0xd4], dx */ W16((u32)(r_eax+0xd4u), (u16)r_edx);
    /* 0061d1c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061d1cb: mov dword ptr [eax + 0xd8], ecx */ W32((u32)(r_eax+0xd8u), r_ecx);
    /* 0061d1d1: mov dword ptr [eax + 0xdc], ecx */ W32((u32)(r_eax+0xdcu), r_ecx);
    /* 0061d1d7: mov dword ptr [eax + 0xe0], ecx */ W32((u32)(r_eax+0xe0u), r_ecx);
    /* 0061d1dd: mov dword ptr [eax + 0xe4], ecx */ W32((u32)(r_eax+0xe4u), r_ecx);
    /* 0061d1e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d1e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061d1ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d1ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d1f0: ret 8 */ FN_RET(0x0061d0b0); r_esp += 12; return;
}

void f_0061d1f4(void) /* sub_61D1F4 */
{
    FN_ENTER(0x0061d1f4);
    /* 0061d1f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d1f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d1f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d1f9: push 0x8e1db4 */ { u32 v = 0x8e1db4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d1fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061d204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d205: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061d20c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d20f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061d212: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061d215: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061d218: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061d21b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d220: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061d227: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61d22cu); f_008581c5();
    /* 0061d22c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d22d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061d230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d232: je 0x61d2b0 */ if (fZ) goto L_0061d2b0;
L_0061d234:; BB(0x0061d234);
    /* 0061d234: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061d23b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061d242: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d245: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061d247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d249: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d24a: push 0x9c51a0 */ { u32 v = 0x9c51a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d24f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d251: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61d256u); f_005b7a84();
    /* 0061d256: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d259: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061d260:; BB(0x0061d260);
    /* 0061d260: mov dword ptr [0xa8ec0c], eax */ W32((u32)(0xa8ec0cu), r_eax);
    /* 0061d265: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061d26c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d26e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61d273u); f_008581c5();
    /* 0061d273: mov edx, dword ptr [0xa8ec0c] */ r_edx = R32((u32)(0xa8ec0cu));
    /* 0061d279: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0061d27f: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0061d282: mov dword ptr [0xa8ec08], eax */ W32((u32)(0xa8ec08u), r_eax);
    /* 0061d287: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0061d289: push 0x930da4 */ { u32 v = 0x930da4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d28e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61d293u); f_008009dc();
    /* 0061d293: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061d296: mov edx, dword ptr [0xa8ec08] */ r_edx = R32((u32)(0xa8ec08u));
    /* 0061d29c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d29f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061d2a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d2a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061d2ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d2ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d2af: ret  */ FN_RET(0x0061d1f4); r_esp += 4; return;
L_0061d2b0:; BB(0x0061d2b0);
    /* 0061d2b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061d2b2: jmp 0x61d260 */ goto L_0061d260;
}

void f_0061d2b4(void) /* sub_61D2B4 */
{
    FN_ENTER(0x0061d2b4);
    /* 0061d2b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061d2b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061d2b9: call 0x61d2d8 */ r_esp -= 4; W32(r_esp, 0x61d2beu); f_0061d2d8();
    /* 0061d2be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061d2c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061d2c4: jne 0x61d2ca */ if (!fZ) goto L_0061d2ca;
L_0061d2c6:; BB(0x0061d2c6);
    /* 0061d2c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061d2c7: ret 4 */ FN_RET(0x0061d2b4); r_esp += 8; return;
L_0061d2ca:; BB(0x0061d2ca);
    /* 0061d2ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61d2d0u); f_005c2f74();
    /* 0061d2d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d2d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061d2d2: ret 4 */ FN_RET(0x0061d2b4); r_esp += 8; return;
}

void f_0061d2d8(void) /* sub_61D2D8 */
{
    FN_ENTER(0x0061d2d8);
    /* 0061d2d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d2db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2dd: push 0x8e1dd0 */ { u32 v = 0x8e1dd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061d2e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061d2f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d2f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061d2f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061d2f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061d2fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061d2ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061d302: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061d309: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d30c: mov dword ptr [eax], 0xb27460 */ W32((u32)(r_eax), 0xb27460u);
    /* 0061d312: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d313: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61d318u); f_007b4e84();
    /* 0061d318: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d319: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d31c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61d321u); f_007b9c8c();
    /* 0061d321: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061d328: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d32b: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61d330u); f_00619b10();
    /* 0061d330: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d333: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061d33a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d33c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d33d: ret  */ FN_RET(0x0061d2d8); r_esp += 4; return;
}

void f_0061d340(void) /* sub_61D340 */
{
    FN_ENTER(0x0061d340);
    /* 0061d340: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061d341: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d342: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d345: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0061d347: mov eax, dword ptr [ebp + 0xcc] */ r_eax = R32((u32)(r_ebp+0xccu));
    /* 0061d34d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d350: je 0x61d4d3 */ if (fZ) goto L_0061d4d3;
L_0061d356:; BB(0x0061d356);
    /* 0061d356: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d359: jne 0x61d40c */ if (!fZ) goto L_0061d40c;
L_0061d35f:; BB(0x0061d35f);
    /* 0061d35f: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061d365: mov edx, dword ptr [ebp + 0xd8] */ r_edx = R32((u32)(r_ebp+0xd8u));
    /* 0061d36b: and eax, 0xfff0ffff */ {  u32 a = r_eax; u32 b = 0xfff0ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061d370: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0061d376: mov eax, edx */ r_eax = r_edx;
    /* 0061d378: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d37a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d37d: mov dword ptr [ebp + 0xd4], eax */ W32((u32)(r_ebp+0xd4u), r_eax);
    /* 0061d383: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0061d385: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061d387: jle 0x61d3bb */ if ((fZ||fS!=fO)) goto L_0061d3bb;
L_0061d389:; BB(0x0061d389);
    /* 0061d389: mov eax, edi */ r_eax = r_edi;
    /* 0061d38b: add eax, dword ptr [ebp + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d391: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0061d394: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d395: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61d39au); f_00816eec();
    /* 0061d39a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d39b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061d39e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d3a1: jne 0x61d3aa */ if (!fZ) goto L_0061d3aa;
L_0061d3a3:; BB(0x0061d3a3);
    /* 0061d3a3: add dword ptr [ebp + 0xd4], 1 */ { u32 ad = (u32)(r_ebp+0xd4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0061d3aa:; BB(0x0061d3aa);
    /* 0061d3aa: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061d3ad: cmp edi, dword ptr [ebp + 0xd8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d3b3: jl 0x61d389 */ if ((fS!=fO)) goto L_0061d389;
L_0061d3b5:; BB(0x0061d3b5);
    /* 0061d3b5: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
L_0061d3bb:; BB(0x0061d3bb);
    /* 0061d3bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061d3bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0061d3bf: jle 0x61d3ef */ if ((fZ||fS!=fO)) goto L_0061d3ef;
L_0061d3c1:; BB(0x0061d3c1);
    /* 0061d3c1: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 0061d3c7: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0061d3cb: lea ecx, [edx + 0x10] */ r_ecx = (u32)(r_edx+0x10u);
    /* 0061d3ce: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_0061d3d2:; BB(0x0061d3d2);
    /* 0061d3d2: mov esi, 1 */ r_esi = 0x1u;
    /* 0061d3d7: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0061d3d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d3dc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d3df: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0061d3e1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061d3e3: jl 0x61d3d2 */ if ((fS!=fO)) goto L_0061d3d2;
L_0061d3e5:; BB(0x0061d3e5);
    /* 0061d3e5: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0061d3e9: mov dword ptr [ebp + 0xd0], edi */ W32((u32)(r_ebp+0xd0u), r_edi);
L_0061d3ef:; BB(0x0061d3ef);
    /* 0061d3ef: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d3f2: je 0x61d4fb */ if (fZ) goto L_0061d4fb;
L_0061d3f8:; BB(0x0061d3f8);
    /* 0061d3f8: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061d3fe: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061d401: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0061d407: jmp 0x61d4f5 */ goto L_0061d4f5;
L_0061d40c:; BB(0x0061d40c);
    /* 0061d40c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d40f: jne 0x61d4c0 */ if (!fZ) goto L_0061d4c0;
L_0061d415:; BB(0x0061d415);
    /* 0061d415: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061d41b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061d41d: je 0x61d42f */ if (fZ) goto L_0061d42f;
L_0061d41f:; BB(0x0061d41f);
    /* 0061d41f: or eax, 0xf0000 */ {  u32 a = r_eax; u32 b = 0xf0000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061d424: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0061d42a: jmp 0x61d4f5 */ goto L_0061d4f5;
L_0061d42f:; BB(0x0061d42f);
    /* 0061d42f: mov edx, dword ptr [ebp + 0xd8] */ r_edx = R32((u32)(r_ebp+0xd8u));
    /* 0061d435: and eax, 0xfff0ffff */ {  u32 a = r_eax; u32 b = 0xfff0ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061d43a: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0061d440: mov eax, edx */ r_eax = r_edx;
    /* 0061d442: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d444: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d447: mov dword ptr [ebp + 0xd4], eax */ W32((u32)(r_ebp+0xd4u), r_eax);
    /* 0061d44d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0061d44f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061d451: jle 0x61d485 */ if ((fZ||fS!=fO)) goto L_0061d485;
L_0061d453:; BB(0x0061d453);
    /* 0061d453: mov eax, edi */ r_eax = r_edi;
    /* 0061d455: add eax, dword ptr [ebp + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d45b: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0061d45e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d45f: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61d464u); f_00816eec();
    /* 0061d464: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d465: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061d468: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d46b: jne 0x61d474 */ if (!fZ) goto L_0061d474;
L_0061d46d:; BB(0x0061d46d);
    /* 0061d46d: add dword ptr [ebp + 0xd4], 1 */ { u32 ad = (u32)(r_ebp+0xd4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0061d474:; BB(0x0061d474);
    /* 0061d474: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061d477: cmp edi, dword ptr [ebp + 0xd8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d47d: jl 0x61d453 */ if ((fS!=fO)) goto L_0061d453;
L_0061d47f:; BB(0x0061d47f);
    /* 0061d47f: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
L_0061d485:; BB(0x0061d485);
    /* 0061d485: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061d487: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0061d489: jle 0x61d4b9 */ if ((fZ||fS!=fO)) goto L_0061d4b9;
L_0061d48b:; BB(0x0061d48b);
    /* 0061d48b: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 0061d491: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0061d495: lea ecx, [edx + 0x10] */ r_ecx = (u32)(r_edx+0x10u);
    /* 0061d498: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_0061d49c:; BB(0x0061d49c);
    /* 0061d49c: mov esi, 1 */ r_esi = 0x1u;
    /* 0061d4a1: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0061d4a3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d4a6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d4a9: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0061d4ab: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061d4ad: jl 0x61d49c */ if ((fS!=fO)) goto L_0061d49c;
L_0061d4af:; BB(0x0061d4af);
    /* 0061d4af: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0061d4b3: mov dword ptr [ebp + 0xd0], edi */ W32((u32)(r_ebp+0xd0u), r_edi);
L_0061d4b9:; BB(0x0061d4b9);
    /* 0061d4b9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d4bc: jne 0x61d4f5 */ if (!fZ) goto L_0061d4f5;
L_0061d4be:; BB(0x0061d4be);
    /* 0061d4be: jmp 0x61d513 */ goto L_0061d513;
L_0061d4c0:; BB(0x0061d4c0);
    /* 0061d4c0: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061d4c6: and eax, 0xfff0fffe */ {  u32 a = r_eax; u32 b = 0xfff0fffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061d4cb: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0061d4d1: jmp 0x61d4f5 */ goto L_0061d4f5;
L_0061d4d3:; BB(0x0061d4d3);
    /* 0061d4d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061d4d5: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x61d4dau); f_00619c10();
    /* 0061d4da: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061d4e0: mov dword ptr [ebp + 0xd4], 4 */ W32((u32)(r_ebp+0xd4u), 0x4u);
    /* 0061d4ea: or eax, 0xf0001 */ {  u32 a = r_eax; u32 b = 0xf0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061d4ef: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
L_0061d4f5:; BB(0x0061d4f5);
    /* 0061d4f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061d4f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d4f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061d4fa: ret  */ FN_RET(0x0061d340); r_esp += 4; return;
L_0061d4fb:; BB(0x0061d4fb);
    /* 0061d4fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061d4fd: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x61d502u); f_00619c10();
    /* 0061d502: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061d508: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061d50b: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0061d511: jmp 0x61d4f5 */ goto L_0061d4f5;
L_0061d513:; BB(0x0061d513);
    /* 0061d513: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061d515: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x61d51au); f_00619c10();
    /* 0061d51a: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061d520: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061d523: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0061d529: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 0061d52f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d531: je 0x61d4f5 */ if (fZ) goto L_0061d4f5;
L_0061d533:; BB(0x0061d533);
    /* 0061d533: je 0x61d5c5 */ if (fZ) goto L_0061d5c5;
L_0061d539:; BB(0x0061d539);
    /* 0061d539: movsx edi, word ptr [eax + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0061d53d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0061d53f: jl 0x61d568 */ if ((fS!=fO)) goto L_0061d568;
L_0061d541:; BB(0x0061d541);
    /* 0061d541: cmp edi, 0xb9f */ {  u32 a = r_edi; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d547: jg 0x61d568 */ if ((!fZ&&fS==fO)) goto L_0061d568;
L_0061d549:; BB(0x0061d549);
    /* 0061d549: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 0061d54f: movzx eax, word ptr [edx + edi*4] */ r_eax = (u32)R16((u32)(r_edx+r_edi*4));
    /* 0061d553: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0061d557: movzx edi, word ptr [edx + edi*4 + 2] */ r_edi = (u32)R16((u32)(r_edx+r_edi*4+0x2u));
    /* 0061d55c: mov eax, 1 */ r_eax = 0x1u;
    /* 0061d561: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 0061d566: jmp 0x61d56a */ goto L_0061d56a;
L_0061d568:; BB(0x0061d568);
    /* 0061d568: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061d56a:; BB(0x0061d56a);
    /* 0061d56a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d56c: je 0x61d4f5 */ if (fZ) goto L_0061d4f5;
L_0061d56e:; BB(0x0061d56e);
    /* 0061d56e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0061d571: mov eax, 1 */ r_eax = 0x1u;
    /* 0061d576: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0061d57a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d57b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061d57d: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x61d582u); f_007b5038();
    /* 0061d582: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 0061d588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d58a: je 0x61d4f5 */ if (fZ) goto L_0061d4f5;
L_0061d590:; BB(0x0061d590);
    /* 0061d590: movsx ebp, word ptr [eax + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0061d594: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0061d596: jl 0x61d4f5 */ if ((fS!=fO)) goto L_0061d4f5;
L_0061d59c:; BB(0x0061d59c);
    /* 0061d59c: cmp ebp, 0xb9f */ {  u32 a = r_ebp; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d5a2: jg 0x61d4f5 */ if ((!fZ&&fS==fO)) goto L_0061d4f5;
L_0061d5a8:; BB(0x0061d5a8);
    /* 0061d5a8: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0061d5ae: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0061d5b2: mov word ptr [ecx + ebp*4], ax */ W16((u32)(r_ecx+r_ebp*4), (u16)r_eax);
    /* 0061d5b6: movzx edx, word ptr [esp + 2] */ r_edx = (u32)R16((u32)(r_esp+0x2u));
    /* 0061d5bb: mov word ptr [ecx + ebp*4 + 2], dx */ W16((u32)(r_ecx+r_ebp*4+0x2u), (u16)r_edx);
    /* 0061d5c0: jmp 0x61d4f5 */ goto L_0061d4f5;
L_0061d5c5:; BB(0x0061d5c5);
    /* 0061d5c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061d5c7: jmp 0x61d56a */ goto L_0061d56a;
}

void f_0061d5cc(void) /* sub_61D5CC */
{
    FN_ENTER(0x0061d5cc);
    /* 0061d5cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d5cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061d5cf: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061d5d5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061d5d8: jne 0x61d638 */ if (!fZ) goto L_0061d638;
L_0061d5da:; BB(0x0061d5da);
    /* 0061d5da: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0061d5e0: je 0x61d60d */ if (fZ) goto L_0061d60d;
L_0061d5e2:; BB(0x0061d5e2);
    /* 0061d5e2: fld dword ptr [0x930ddc] */ FPUSH(R_F32((u32)(0x930ddcu)));
    /* 0061d5e8: fadd dword ptr [ebx + 0xe0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xe0u));
    /* 0061d5ee: fcom dword ptr [0x930de0] */ fx_compare(ST(0), R_F32((u32)(0x930de0u))); 
    /* 0061d5f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061d5f6: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0061d5fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061d5fd: jb 0x61d636 */ if (fC) goto L_0061d636;
L_0061d5ff:; BB(0x0061d5ff);
    /* 0061d5ff: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061d605: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 0061d60b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061d60c: ret  */ FN_RET(0x0061d5cc); r_esp += 4; return;
L_0061d60d:; BB(0x0061d60d);
    /* 0061d60d: fld dword ptr [ebx + 0xe0] */ FPUSH(R_F32((u32)(r_ebx+0xe0u)));
    /* 0061d613: fsub dword ptr [0x930ddc] */ ST(0) = ST(0) - R_F32((u32)(0x930ddcu));
    /* 0061d619: fcom dword ptr [0x930de4] */ fx_compare(ST(0), R_F32((u32)(0x930de4u))); 
    /* 0061d61f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061d621: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0061d627: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061d628: ja 0x61d636 */ if ((!fC&&!fZ)) goto L_0061d636;
L_0061d62a:; BB(0x0061d62a);
    /* 0061d62a: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061d630: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
L_0061d636:; BB(0x0061d636);
    /* 0061d636: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061d637: ret  */ FN_RET(0x0061d5cc); r_esp += 4; return;
L_0061d638:; BB(0x0061d638);
    /* 0061d638: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d63d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061d63f: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61d644u); f_006134c8();
    /* 0061d644: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d647: je 0x61d651 */ if (fZ) goto L_0061d651;
L_0061d649:; BB(0x0061d649);
    /* 0061d649: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061d64f: jmp 0x61d5da */ goto L_0061d5da;
L_0061d651:; BB(0x0061d651);
    /* 0061d651: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 0061d65b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d65d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061d65f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d661: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61d666u); f_007b52c4();
    /* 0061d666: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0061d669: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061d66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d66c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d66d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d66e: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d673: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61d678u); f_00814298();
    /* 0061d678: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d67b: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061d681: jmp 0x61d5da */ goto L_0061d5da;
}

void f_0061d688(void) /* sub_61D688 */
{
    FN_ENTER(0x0061d688);
    /* 0061d688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d689: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0061d68b: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061d691: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061d693: jne 0x61d6c1 */ if (!fZ) goto L_0061d6c1;
L_0061d695:; BB(0x0061d695);
    /* 0061d695: mov dword ptr [ebp + 0xac], 3 */ W32((u32)(r_ebp+0xacu), 0x3u);
    /* 0061d69f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061d6a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6a5: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61d6aau); f_007b52ec();
    /* 0061d6aa: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0061d6ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061d6af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6b2: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6b7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61d6bcu); f_00814298();
    /* 0061d6bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0061d6bf:; BB(0x0061d6bf);
    /* 0061d6bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d6c0: ret  */ FN_RET(0x0061d688); r_esp += 4; return;
L_0061d6c1:; BB(0x0061d6c1);
    /* 0061d6c1: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061d6c8: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61d6cdu); f_006134c8();
    /* 0061d6cd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061d6d0: je 0x61d6bf */ if (fZ) goto L_0061d6bf;
L_0061d6d2:; BB(0x0061d6d2);
    /* 0061d6d2: jmp 0x61d695 */ goto L_0061d695;
}

void f_0061d6d4(void) /* sub_61D6D4 */
{
    FN_ENTER(0x0061d6d4);
    /* 0061d6d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6d5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d6d8: mov esi, ecx */ r_esi = r_ecx;
    /* 0061d6da: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061d6dc: mov ecx, esi */ r_ecx = r_esi;
    /* 0061d6de: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d6e4: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d6ea: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61d6edu); call_ind(t); }
    /* 0061d6ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d6ef: je 0x61d879 */ if (fZ) goto L_0061d879;
L_0061d6f5:; BB(0x0061d6f5);
    /* 0061d6f5: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0061d6fc: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61d701u); f_00613244();
    /* 0061d701: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d703: je 0x61d879 */ if (fZ) goto L_0061d879;
L_0061d709:; BB(0x0061d709);
    /* 0061d709: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61d70eu); f_0082d7b0();
    /* 0061d70e: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0061d711: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61d716u); f_0082d838();
    /* 0061d716: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0061d719: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d71b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61d720u); f_0082d8bc();
    /* 0061d720: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0061d726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0061d728: je 0x61d750 */ if (fZ) goto L_0061d750;
L_0061d72a:; BB(0x0061d72a);
    /* 0061d72a: mov eax, dword ptr [0xa8ec14] */ r_eax = R32((u32)(0xa8ec14u));
    /* 0061d72f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061d732: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61d737u); f_00829cc8();
    /* 0061d737: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d73d: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0061d740: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0061d746: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61d74bu); f_0083bd00();
    /* 0061d74b: jmp 0x61d874 */ goto L_0061d874;
L_0061d750:; BB(0x0061d750);
    /* 0061d750: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0061d753: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0061d756: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0061d75a: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0061d75e: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0061d762: mov edi, eax */ r_edi = r_eax;
    /* 0061d764: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0061d767: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 0061d76c: mov esi, ecx */ r_esi = r_ecx;
L_0061d76e:; BB(0x0061d76e);
    /* 0061d76e: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0061d772: mov ecx, esi */ r_ecx = r_esi;
    /* 0061d774: mov edx, 1 */ r_edx = 0x1u;
    /* 0061d779: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061d77b: test dword ptr [ebx + 0xd0], edx */ {  u32 a = R32((u32)(r_ebx+0xd0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d781: je 0x61d78a */ if (fZ) goto L_0061d78a;
L_0061d783:; BB(0x0061d783);
    /* 0061d783: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0061d788: jmp 0x61d78c */ goto L_0061d78c;
L_0061d78a:; BB(0x0061d78a);
    /* 0061d78a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0061d78c:; BB(0x0061d78c);
    /* 0061d78c: mov edx, dword ptr [0xa8ec14] */ r_edx = R32((u32)(0xa8ec14u));
    /* 0061d792: mov ecx, dword ptr [edx + ebp*4] */ r_ecx = R32((u32)(r_edx+r_ebp*4));
    /* 0061d795: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61d79au); f_00829cc8();
    /* 0061d79a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61d79fu); f_0082d7b0();
    /* 0061d79f: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d7a2: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d7a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d7a7: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d7aa: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x61d7afu); f_00830b74();
    /* 0061d7af: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d7b2: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61d7b7u); f_008321d8();
    /* 0061d7b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d7b8: mov ebx, dword ptr [edi + 0x2c] */ r_ebx = R32((u32)(r_edi+0x2cu));
    /* 0061d7bb: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d7be: je 0x61d7e6 */ if (fZ) goto L_0061d7e6;
L_0061d7c0:; BB(0x0061d7c0);
    /* 0061d7c0: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0061d7c6: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0061d7cc: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0061d7cf: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0061d7d5: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0061d7d9: lea edx, [edx + 0xdc] */ r_edx = (u32)(r_edx+0xdcu);
    /* 0061d7df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d7e0: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61d7e5u); f_0082d710();
    /* 0061d7e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0061d7e6:; BB(0x0061d7e6);
    /* 0061d7e6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61d7ebu); f_0082dbac();
    /* 0061d7eb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61d7f0u); f_0082d7b0();
    /* 0061d7f0: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d7f3: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d7f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d7f8: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d7fb: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x61d800u); f_00830b74();
    /* 0061d800: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d803: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61d808u); f_008321d8();
    /* 0061d808: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d809: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 0061d80c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61d811u); f_0082d7b0();
    /* 0061d811: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d814: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d817: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d819: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d81c: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x61d821u); f_00830b74();
    /* 0061d821: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d824: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61d829u); f_008321d8();
    /* 0061d829: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d82a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61d82fu); f_0082da80();
    /* 0061d82f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61d834u); f_0082da80();
    /* 0061d834: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61d839u); f_0082dab0();
    /* 0061d839: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d83c: je 0x61d855 */ if (fZ) goto L_0061d855;
L_0061d83e:; BB(0x0061d83e);
    /* 0061d83e: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d843: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61d848u); f_0082d710();
    /* 0061d848: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d849: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 0061d84f: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
L_0061d855:; BB(0x0061d855);
    /* 0061d855: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61d85au); f_0082da80();
    /* 0061d85a: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0061d85d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061d860: cmp esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061d863: jl 0x61d76e */ if ((fS!=fO)) goto L_0061d76e;
L_0061d869:; BB(0x0061d869);
    /* 0061d869: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0061d86d: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0061d871: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0061d874:; BB(0x0061d874);
    /* 0061d874: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61d879u); f_0082da80();
L_0061d879:; BB(0x0061d879);
    /* 0061d879: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061d87c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061d87d: ret  */ FN_RET(0x0061d6d4); r_esp += 4; return;
}

void f_0061d880(void) /* sub_61D880 */
{
    FN_ENTER(0x0061d880);
    /* 0061d880: mov eax, dword ptr [0xa8ec14] */ r_eax = R32((u32)(0xa8ec14u));
    /* 0061d885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d887: je 0x61d8ab */ if (fZ) goto L_0061d8ab;
L_0061d889:; BB(0x0061d889);
    /* 0061d889: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d88b: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61d890u); f_00800b5c();
    /* 0061d890: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d891: mov eax, dword ptr [0xa8ec14] */ r_eax = R32((u32)(0xa8ec14u));
    /* 0061d896: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d898: je 0x61d8ab */ if (fZ) goto L_0061d8ab;
L_0061d89a:; BB(0x0061d89a);
    /* 0061d89a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d89b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61d8a0u); f_00857e98();
    /* 0061d8a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d8a1: mov dword ptr [0xa8ec14], 0 */ W32((u32)(0xa8ec14u), 0x0u);
L_0061d8ab:; BB(0x0061d8ab);
    /* 0061d8ab: mov ecx, dword ptr [0xa8ec18] */ r_ecx = R32((u32)(0xa8ec18u));
    /* 0061d8b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061d8b3: je 0x61d8c8 */ if (fZ) goto L_0061d8c8;
L_0061d8b5:; BB(0x0061d8b5);
    /* 0061d8b5: je 0x61d8be */ if (fZ) goto L_0061d8be;
L_0061d8b7:; BB(0x0061d8b7);
    /* 0061d8b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d8b9: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61d8beu); f_004066a8();
L_0061d8be:; BB(0x0061d8be);
    /* 0061d8be: mov dword ptr [0xa8ec18], 0 */ W32((u32)(0xa8ec18u), 0x0u);
L_0061d8c8:; BB(0x0061d8c8);
    /* 0061d8c8: ret  */ FN_RET(0x0061d880); r_esp += 4; return;
}

void f_0061d8cc(void)
{
    FN_ENTER(0x0061d8cc);
    /* 0061d8cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d8cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d8cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d8d1: push 0x8e1df8 */ { u32 v = 0x8e1df8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d8d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061d8dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d8dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061d8e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d8e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061d8ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061d8ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061d8f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061d8f3: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d8f8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061d8ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61d904u); f_005caba4();
    /* 0061d904: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d905: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061d908: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d90a: je 0x61d943 */ if (fZ) goto L_0061d943;
L_0061d90c:; BB(0x0061d90c);
    /* 0061d90c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061d913: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061d91a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d91d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d923: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d926: call 0x61d948 */ r_esp -= 4; W32(r_esp, 0x61d92bu); f_0061d948();
    /* 0061d92b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d92e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061d935:; BB(0x0061d935);
    /* 0061d935: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d938: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061d93f: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d941: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d942: ret  */ FN_RET(0x0061d8cc); r_esp += 4; return;
L_0061d943:; BB(0x0061d943);
    /* 0061d943: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061d945: jmp 0x61d935 */ goto L_0061d935;
}

void f_0061d948(void) /* sub_61D948 */
{
    FN_ENTER(0x0061d948);
    /* 0061d948: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d949: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d94b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d94d: push 0x8e1e14 */ { u32 v = 0x8e1e14u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d952: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061d958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d959: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061d960: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d963: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061d966: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061d969: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061d96c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061d96f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061d972: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061d975: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061d978: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061d97b: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61d980u); f_00619df0();
    /* 0061d980: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061d987: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d98a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d98d: mov dword ptr [ecx], 0xb27460 */ W32((u32)(r_ecx), 0xb27460u);
    /* 0061d993: mov eax, dword ptr [0x9c5220] */ r_eax = R32((u32)(0x9c5220u));
    /* 0061d998: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d999: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061d99c: call dword ptr [0xb27474] */ { u32 t = R32((u32)(0xb27474u)); r_esp -= 4; W32(r_esp, 0x61d9a2u); call_ind(t); }
    /* 0061d9a2: mov ecx, dword ptr [0xa8ec18] */ r_ecx = R32((u32)(0xa8ec18u));
    /* 0061d9a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9aa: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x61d9afu); f_005b8610();
    /* 0061d9af: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d9b2: mov ecx, dword ptr [0xa8ec18] */ r_ecx = R32((u32)(0xa8ec18u));
    /* 0061d9b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9ba: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0061d9bd: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x61d9c2u); f_005b8624();
    /* 0061d9c2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d9c5: mov ecx, dword ptr [0xa8ec18] */ r_ecx = R32((u32)(0xa8ec18u));
    /* 0061d9cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9cd: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0061d9d0: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x61d9d5u); f_005b8638();
    /* 0061d9d5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d9d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9da: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061d9e0: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061d9e3: push 0x9c5224 */ { u32 v = 0x9c5224u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9e8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061d9eb: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061d9ee: fadd dword ptr [edx*4 + 0x930dc0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930dc0u));
    /* 0061d9f5: fadd dword ptr [0x930dd0] */ ST(0) = ST(0) + R_F32((u32)(0x930dd0u));
    /* 0061d9fb: mov dword ptr [ecx + 0xb8], 0x3f000000 */ W32((u32)(r_ecx+0xb8u), 0x3f000000u);
    /* 0061da05: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0061da0b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61da10u); f_007b9a88();
    /* 0061da10: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061da13: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61da18u); f_007b999c();
    /* 0061da18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061da19: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061da1c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61da21u); f_007b4f54();
    /* 0061da21: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061da24: call 0x61c84c */ r_esp -= 4; W32(r_esp, 0x61da29u); f_0061c84c();
    /* 0061da29: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061da2c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 0061da32: mov edx, 4 */ r_edx = 0x4u;
    /* 0061da37: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061da3a: mov dword ptr [ebx + 0xdc], 0x3f800000 */ W32((u32)(r_ebx+0xdcu), 0x3f800000u);
    /* 0061da44: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0061da49: jl 0x61da4d */ if ((fS!=fO)) goto L_0061da4d;
L_0061da4b:; BB(0x0061da4b);
    /* 0061da4b: mov eax, edx */ r_eax = r_edx;
L_0061da4d:; BB(0x0061da4d);
    /* 0061da4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061da4f: jg 0x61da53 */ if ((!fZ&&fS==fO)) goto L_0061da53;
L_0061da51:; BB(0x0061da51);
    /* 0061da51: mov eax, ecx */ r_eax = r_ecx;
L_0061da53:; BB(0x0061da53);
    /* 0061da53: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 0061da59: mov dword ptr [ebx + 0xe0], 0x3f800000 */ W32((u32)(r_ebx+0xe0u), 0x3f800000u);
    /* 0061da63: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 0061da69: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061da6b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061da6e: mov dword ptr [ebx + 0xe4], 0x3f800000 */ W32((u32)(r_ebx+0xe4u), 0x3f800000u);
    /* 0061da78: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 0061da7e: mov eax, ebx */ r_eax = r_ebx;
    /* 0061da80: mov dword ptr [ebx + 0xe8], 0x3f800000 */ W32((u32)(r_ebx+0xe8u), 0x3f800000u);
    /* 0061da8a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061da8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061da90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061da97: mov esp, ebp */ r_esp = r_ebp;
    /* 0061da99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061da9a: ret 8 */ FN_RET(0x0061d948); r_esp += 12; return;
}

void f_0061daa0(void) /* sub_61DAA0 */
{
    FN_ENTER(0x0061daa0);
    /* 0061daa0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0061daa4: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0061daa7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061daaa: jne 0x61dabd */ if (!fZ) goto L_0061dabd;
L_0061daac:; BB(0x0061daac);
    /* 0061daac: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 0061dab2: or eax, 0xf0001 */ {  u32 a = r_eax; u32 b = 0xf0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061dab7: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
L_0061dabd:; BB(0x0061dabd);
    /* 0061dabd: ret 8 */ FN_RET(0x0061daa0); r_esp += 12; return;
}

void f_0061dac0(void) /* sub_61DAC0 */
{
    FN_ENTER(0x0061dac0);
    /* 0061dac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061dac1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061dac3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dac5: push 0x8e1e56 */ { u32 v = 0x8e1e56u; r_esp -= 4; W32(r_esp, v); }
    /* 0061daca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061dad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dad1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061dad8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061dadb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061dade: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061dae1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061dae4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061dae7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dae9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61daeeu); f_008581c5();
    /* 0061daee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061daef: mov dword ptr [0xa8ec14], eax */ W32((u32)(0xa8ec14u), r_eax);
    /* 0061daf4: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0061daf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061dafb: je 0x61db70 */ if (fZ) goto L_0061db70;
L_0061dafd:; BB(0x0061dafd);
    /* 0061dafd: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x61db02u); f_0078b220();
    /* 0061db02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061db04: je 0x61db70 */ if (fZ) goto L_0061db70;
L_0061db06:; BB(0x0061db06);
    /* 0061db06: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061db0d: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061db12: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61db17u); f_008581c5();
    /* 0061db17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061db18: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061db1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061db1d: je 0x61dbfc */ if (fZ) goto L_0061dbfc;
L_0061db23:; BB(0x0061db23);
    /* 0061db23: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061db2a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0061db31: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061db34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061db36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061db37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061db38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061db39: push 0x9c5210 */ { u32 v = 0x9c5210u; r_esp -= 4; W32(r_esp, v); }
    /* 0061db3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061db40: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61db45u); f_005b7a84();
    /* 0061db45: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061db48: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061db4f:; BB(0x0061db4f);
    /* 0061db4f: mov dword ptr [0xa8ec18], eax */ W32((u32)(0xa8ec18u), r_eax);
    /* 0061db54: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061db5b: push 0x930e4c */ { u32 v = 0x930e4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061db60: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61db65u); f_008009dc();
    /* 0061db65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061db66: mov edx, dword ptr [0xa8ec14] */ r_edx = R32((u32)(0xa8ec14u));
    /* 0061db6c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0061db6e: jmp 0x61dbd4 */ goto L_0061dbd4;
L_0061db70:; BB(0x0061db70);
    /* 0061db70: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061db77: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061db7c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61db81u); f_008581c5();
    /* 0061db81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061db82: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061db85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061db87: je 0x61dc03 */ if (fZ) goto L_0061dc03;
L_0061db89:; BB(0x0061db89);
    /* 0061db89: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0061db90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061db97: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061db9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061db9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061db9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061db9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061db9f: push 0x9c51f0 */ { u32 v = 0x9c51f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dba4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dba6: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61dbabu); f_005b7a84();
    /* 0061dbab: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061dbae: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0061dbb5:; BB(0x0061dbb5);
    /* 0061dbb5: mov dword ptr [0xa8ec18], eax */ W32((u32)(0xa8ec18u), r_eax);
    /* 0061dbba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061dbc1: push 0x930e64 */ { u32 v = 0x930e64u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dbc6: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61dbcbu); f_008009dc();
    /* 0061dbcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061dbcc: mov edx, dword ptr [0xa8ec14] */ r_edx = R32((u32)(0xa8ec14u));
    /* 0061dbd2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0061dbd4:; BB(0x0061dbd4);
    /* 0061dbd4: mov eax, dword ptr [0xa8ec18] */ r_eax = R32((u32)(0xa8ec18u));
    /* 0061dbd9: mov edi, dword ptr [0xa8ec14] */ r_edi = R32((u32)(0xa8ec14u));
    /* 0061dbdf: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0061dbe5: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0061dbe8: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0061dbeb: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061dbee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061dbf1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061dbf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061dbfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061dbfb: ret  */ FN_RET(0x0061dac0); r_esp += 4; return;
L_0061dbfc:; BB(0x0061dbfc);
    /* 0061dbfc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061dbfe: jmp 0x61db4f */ goto L_0061db4f;
L_0061dc03:; BB(0x0061dc03);
    /* 0061dc03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061dc05: jmp 0x61dbb5 */ goto L_0061dbb5;
}

void f_0061dc08(void) /* sub_61DC08 */
{
    FN_ENTER(0x0061dc08);
    /* 0061dc08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc09: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061dc0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061dc0d: call 0x61dc2c */ r_esp -= 4; W32(r_esp, 0x61dc12u); f_0061dc2c();
    /* 0061dc12: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061dc16: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061dc18: jne 0x61dc1e */ if (!fZ) goto L_0061dc1e;
L_0061dc1a:; BB(0x0061dc1a);
    /* 0061dc1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061dc1b: ret 4 */ FN_RET(0x0061dc08); r_esp += 8; return;
L_0061dc1e:; BB(0x0061dc1e);
    /* 0061dc1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc1f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61dc24u); f_005c2f74();
    /* 0061dc24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061dc25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061dc26: ret 4 */ FN_RET(0x0061dc08); r_esp += 8; return;
}

void f_0061dc2c(void) /* sub_61DC2C */
{
    FN_ENTER(0x0061dc2c);
    /* 0061dc2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc2d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061dc2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc31: push 0x8e1e70 */ { u32 v = 0x8e1e70u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061dc3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061dc44: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061dc47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061dc4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061dc4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061dc50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061dc53: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061dc56: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061dc5d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061dc60: mov dword ptr [eax], 0xb27580 */ W32((u32)(r_eax), 0xb27580u);
    /* 0061dc66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc67: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61dc6cu); f_007b4e84();
    /* 0061dc6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061dc6d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061dc70: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61dc75u); f_007b9c8c();
    /* 0061dc75: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061dc7c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061dc7f: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61dc84u); f_00619b10();
    /* 0061dc84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061dc87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061dc8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061dc90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061dc91: ret  */ FN_RET(0x0061dc2c); r_esp += 4; return;
}

void f_0061dc94(void) /* sub_61DC94 */
{
    FN_ENTER(0x0061dc94);
    /* 0061dc94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061dc97: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061dc9d: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061dca3: je 0x61dcd0 */ if (fZ) goto L_0061dcd0;
L_0061dca5:; BB(0x0061dca5);
    /* 0061dca5: fld dword ptr [0x930e9c] */ FPUSH(R_F32((u32)(0x930e9cu)));
    /* 0061dcab: fadd dword ptr [ebx + 0xd8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd8u));
    /* 0061dcb1: fcom dword ptr [0x930ea4] */ fx_compare(ST(0), R_F32((u32)(0x930ea4u))); 
    /* 0061dcb7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061dcb9: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0061dcbf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061dcc0: jb 0x61dcf9 */ if (fC) goto L_0061dcf9;
L_0061dcc2:; BB(0x0061dcc2);
    /* 0061dcc2: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061dcc8: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 0061dcce: jmp 0x61dcf9 */ goto L_0061dcf9;
L_0061dcd0:; BB(0x0061dcd0);
    /* 0061dcd0: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 0061dcd6: fsub dword ptr [0x930e9c] */ ST(0) = ST(0) - R_F32((u32)(0x930e9cu));
    /* 0061dcdc: fcom dword ptr [0x930ea8] */ fx_compare(ST(0), R_F32((u32)(0x930ea8u))); 
    /* 0061dce2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061dce4: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0061dcea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061dceb: ja 0x61dcf9 */ if ((!fC&&!fZ)) goto L_0061dcf9;
L_0061dced:; BB(0x0061dced);
    /* 0061dced: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0061dcf3: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
L_0061dcf9:; BB(0x0061dcf9);
    /* 0061dcf9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061dcfc: jne 0x61dd00 */ if (!fZ) goto L_0061dd00;
L_0061dcfe:; BB(0x0061dcfe);
    /* 0061dcfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061dcff: ret  */ FN_RET(0x0061dc94); r_esp += 4; return;
L_0061dd00:; BB(0x0061dd00);
    /* 0061dd00: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061dd07: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61dd0cu); f_006134c8();
    /* 0061dd0c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061dd0f: jne 0x61dcfe */ if (!fZ) goto L_0061dcfe;
L_0061dd11:; BB(0x0061dd11);
    /* 0061dd11: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 0061dd1b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd1d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061dd1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd21: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61dd26u); f_007b52c4();
    /* 0061dd26: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061dd29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061dd2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd2e: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd33: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61dd38u); f_00814298();
    /* 0061dd38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061dd3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061dd3c: ret  */ FN_RET(0x0061dc94); r_esp += 4; return;
}

void f_0061dd40(void) /* sub_61DD40 */
{
    FN_ENTER(0x0061dd40);
    /* 0061dd40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd41: mov edi, ecx */ r_edi = r_ecx;
    /* 0061dd43: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061dd49: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061dd4b: jne 0x61dd83 */ if (!fZ) goto L_0061dd83;
L_0061dd4d:; BB(0x0061dd4d);
    /* 0061dd4d: mov eax, dword ptr [0xa8ec20] */ r_eax = R32((u32)(0xa8ec20u));
    /* 0061dd52: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061dd5c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061dd5e: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061dd61: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd65: mov ecx, edi */ r_ecx = r_edi;
    /* 0061dd67: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61dd6cu); f_007b52ec();
    /* 0061dd6c: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061dd6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061dd71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd73: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd74: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd79: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61dd7eu); f_00814298();
    /* 0061dd7e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0061dd81:; BB(0x0061dd81);
    /* 0061dd81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061dd82: ret  */ FN_RET(0x0061dd40); r_esp += 4; return;
L_0061dd83:; BB(0x0061dd83);
    /* 0061dd83: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd88: mov eax, dword ptr [0xa8ec20] */ r_eax = R32((u32)(0xa8ec20u));
    /* 0061dd8d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061dd90: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061dd93: mov ecx, edi */ r_ecx = r_edi;
    /* 0061dd95: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61dd9au); f_006134c8();
    /* 0061dd9a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061dd9d: je 0x61dd81 */ if (fZ) goto L_0061dd81;
L_0061dd9f:; BB(0x0061dd9f);
    /* 0061dd9f: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061dda9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddab: mov ecx, edi */ r_ecx = r_edi;
    /* 0061ddad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddaf: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61ddb4u); f_007b52ec();
    /* 0061ddb4: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061ddb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ddb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddbb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddbc: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddc1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61ddc6u); f_00814298();
    /* 0061ddc6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061ddc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061ddca: ret  */ FN_RET(0x0061dd40); r_esp += 4; return;
}

void f_0061ddcc(void) /* sub_61DDCC */
{
    FN_ENTER(0x0061ddcc);
    /* 0061ddcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddcd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061ddcf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0061ddd1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061ddd3: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ddd9: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061dddf: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61dde2u); call_ind(t); }
    /* 0061dde2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061dde4: je 0x61de84 */ if (fZ) goto L_0061de84;
L_0061ddea:; BB(0x0061ddea);
    /* 0061ddea: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061ddf1: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61ddf6u); f_00613244();
    /* 0061ddf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ddf8: je 0x61de84 */ if (fZ) goto L_0061de84;
L_0061ddfe:; BB(0x0061ddfe);
    /* 0061ddfe: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61de03u); f_0082d7b0();
    /* 0061de03: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0061de06: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61de0bu); f_0082d838();
    /* 0061de0b: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0061de0e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061de10: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61de15u); f_0082d8bc();
    /* 0061de15: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 0061de1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061de1d: jne 0x61de5e */ if (!fZ) goto L_0061de5e;
L_0061de1f:; BB(0x0061de1f);
    /* 0061de1f: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061de25: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061de27: je 0x61de30 */ if (fZ) goto L_0061de30;
L_0061de29:; BB(0x0061de29);
    /* 0061de29: mov edx, 1 */ r_edx = 0x1u;
    /* 0061de2e: jmp 0x61de32 */ goto L_0061de32;
L_0061de30:; BB(0x0061de30);
    /* 0061de30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0061de32:; BB(0x0061de32);
    /* 0061de32: mov eax, dword ptr [0xa8ec20] */ r_eax = R32((u32)(0xa8ec20u));
    /* 0061de37: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061de3a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61de3fu); f_00829cc8();
    /* 0061de3f: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0061de42: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061de45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061de47: call 0x61de88 */ r_esp -= 4; W32(r_esp, 0x61de4cu); f_0061de88();
    /* 0061de4c: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0061de4f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0061de52: push dword ptr [edx + 0x30] */ { u32 v = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061de55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061de57: call 0x61de88 */ r_esp -= 4; W32(r_esp, 0x61de5cu); f_0061de88();
    /* 0061de5c: jmp 0x61de7f */ goto L_0061de7f;
L_0061de5e:; BB(0x0061de5e);
    /* 0061de5e: mov eax, dword ptr [0xa8ec20] */ r_eax = R32((u32)(0xa8ec20u));
    /* 0061de63: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061de66: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61de6bu); f_00829cc8();
    /* 0061de6b: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061de71: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0061de74: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 0061de7a: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61de7fu); f_0083bd00();
L_0061de7f:; BB(0x0061de7f);
    /* 0061de7f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61de84u); f_0082da80();
L_0061de84:; BB(0x0061de84);
    /* 0061de84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061de85: ret  */ FN_RET(0x0061ddcc); r_esp += 4; return;
}

void f_0061de88(void) /* sub_61DE88 */
{
    FN_ENTER(0x0061de88);
    /* 0061de88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061de89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061de8a: mov esi, ecx */ r_esi = r_ecx;
    /* 0061de8c: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0061de90: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61de95u); f_0082d7b0();
    /* 0061de95: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0061de98: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61de9du); f_0082d838();
    /* 0061de9d: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061dea0: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61dea5u); f_008321d8();
    /* 0061dea5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061dea6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61deabu); f_0082dbac();
    /* 0061deab: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0061deb0: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0061deb5: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061deb8: add esi, 0xd4 */ {  u32 a = r_esi; u32 b = 0xd4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061debe: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0061dec3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061dec4: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61dec9u); f_0082d710();
    /* 0061dec9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061deca: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61decfu); f_0082d7b0();
    /* 0061decf: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 0061ded2: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0061ded5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61dedau); f_0082d838();
    /* 0061deda: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061dedd: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61dee2u); f_008321d8();
    /* 0061dee2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061dee3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61dee8u); f_0082da80();
    /* 0061dee8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61deedu); f_0082d7b0();
    /* 0061deed: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0061def0: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0061def3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61def8u); f_0082d838();
    /* 0061def8: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061defb: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61df00u); f_008321d8();
    /* 0061df00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061df01: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61df06u); f_0082da80();
    /* 0061df06: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061df0b: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61df10u); f_0082d710();
    /* 0061df10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061df11: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0061df16: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0061df1b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61df20u); f_0082dab0();
    /* 0061df20: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61df25u); f_0082da80();
    /* 0061df25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061df26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061df27: ret 4 */ FN_RET(0x0061de88); r_esp += 8; return;
}

void f_0061df2c(void) /* sub_61DF2C */
{
    FN_ENTER(0x0061df2c);
    /* 0061df2c: mov eax, dword ptr [0xa8ec20] */ r_eax = R32((u32)(0xa8ec20u));
    /* 0061df31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061df33: je 0x61df57 */ if (fZ) goto L_0061df57;
L_0061df35:; BB(0x0061df35);
    /* 0061df35: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0061df37: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61df3cu); f_00800b5c();
    /* 0061df3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061df3d: mov eax, dword ptr [0xa8ec20] */ r_eax = R32((u32)(0xa8ec20u));
    /* 0061df42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061df44: je 0x61df57 */ if (fZ) goto L_0061df57;
L_0061df46:; BB(0x0061df46);
    /* 0061df46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061df47: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61df4cu); f_00857e98();
    /* 0061df4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061df4d: mov dword ptr [0xa8ec20], 0 */ W32((u32)(0xa8ec20u), 0x0u);
L_0061df57:; BB(0x0061df57);
    /* 0061df57: mov ecx, dword ptr [0xa8ec24] */ r_ecx = R32((u32)(0xa8ec24u));
    /* 0061df5d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061df5f: je 0x61df74 */ if (fZ) goto L_0061df74;
L_0061df61:; BB(0x0061df61);
    /* 0061df61: je 0x61df6a */ if (fZ) goto L_0061df6a;
L_0061df63:; BB(0x0061df63);
    /* 0061df63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061df65: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61df6au); f_004066a8();
L_0061df6a:; BB(0x0061df6a);
    /* 0061df6a: mov dword ptr [0xa8ec24], 0 */ W32((u32)(0xa8ec24u), 0x0u);
L_0061df74:; BB(0x0061df74);
    /* 0061df74: ret  */ FN_RET(0x0061df2c); r_esp += 4; return;
}

void f_0061df78(void)
{
    FN_ENTER(0x0061df78);
    /* 0061df78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061df79: mov ebp, esp */ r_ebp = r_esp;
    /* 0061df7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061df7d: push 0x8e1e98 */ { u32 v = 0x8e1e98u; r_esp -= 4; W32(r_esp, v); }
    /* 0061df82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061df88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061df89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061df90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061df93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061df96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061df99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061df9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061df9f: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfa4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061dfab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61dfb0u); f_005caba4();
    /* 0061dfb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061dfb1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061dfb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061dfb6: je 0x61dfef */ if (fZ) goto L_0061dfef;
L_0061dfb8:; BB(0x0061dfb8);
    /* 0061dfb8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061dfbf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061dfc6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061dfc9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061dfcf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061dfd2: call 0x61dff4 */ r_esp -= 4; W32(r_esp, 0x61dfd7u); f_0061dff4();
    /* 0061dfd7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061dfda: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061dfe1:; BB(0x0061dfe1);
    /* 0061dfe1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061dfe4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061dfeb: mov esp, ebp */ r_esp = r_ebp;
    /* 0061dfed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061dfee: ret  */ FN_RET(0x0061df78); r_esp += 4; return;
L_0061dfef:; BB(0x0061dfef);
    /* 0061dfef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061dff1: jmp 0x61dfe1 */ goto L_0061dfe1;
}

void f_0061dff4(void) /* sub_61DFF4 */
{
    FN_ENTER(0x0061dff4);
    /* 0061dff4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061dff5: mov ebp, esp */ r_ebp = r_esp;
    /* 0061dff7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dff9: push 0x8e1eb4 */ { u32 v = 0x8e1eb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dffe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061e004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e005: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061e00c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e00f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061e012: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061e015: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061e018: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061e01b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061e01e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e021: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061e024: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061e027: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61e02cu); f_00619df0();
    /* 0061e02c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061e033: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e036: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e039: mov dword ptr [ecx], 0xb27580 */ W32((u32)(r_ecx), 0xb27580u);
    /* 0061e03f: mov eax, dword ptr [0x9c5290] */ r_eax = R32((u32)(0x9c5290u));
    /* 0061e044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e045: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061e048: call dword ptr [0xb27594] */ { u32 t = R32((u32)(0xb27594u)); r_esp -= 4; W32(r_esp, 0x61e04eu); call_ind(t); }
    /* 0061e04e: mov ecx, dword ptr [0xa8ec24] */ r_ecx = R32((u32)(0xa8ec24u));
    /* 0061e054: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e056: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x61e05bu); f_005b8610();
    /* 0061e05b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e05e: mov ecx, dword ptr [0xa8ec24] */ r_ecx = R32((u32)(0xa8ec24u));
    /* 0061e064: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e066: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0061e069: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x61e06eu); f_005b8624();
    /* 0061e06e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e071: mov ecx, dword ptr [0xa8ec24] */ r_ecx = R32((u32)(0xa8ec24u));
    /* 0061e077: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e079: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0061e07c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x61e081u); f_005b8638();
    /* 0061e081: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e084: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e086: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061e08c: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061e08f: push 0x9c5294 */ { u32 v = 0x9c5294u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e094: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061e097: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061e09a: fadd dword ptr [edx*4 + 0x930e80] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930e80u));
    /* 0061e0a1: fadd dword ptr [0x930e90] */ ST(0) = ST(0) + R_F32((u32)(0x930e90u));
    /* 0061e0a7: mov dword ptr [ecx + 0xb8], 0x3f000000 */ W32((u32)(r_ecx+0xb8u), 0x3f000000u);
    /* 0061e0b1: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0061e0b7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61e0bcu); f_007b9a88();
    /* 0061e0bc: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e0bf: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61e0c4u); f_007b999c();
    /* 0061e0c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e0c5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e0c8: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61e0cdu); f_007b4f54();
    /* 0061e0cd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e0d0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061e0d2: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61e0d5u); call_ind(t); }
    /* 0061e0d5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e0d8: mov dword ptr [eax + 0xd4], 0x3f800000 */ W32((u32)(r_eax+0xd4u), 0x3f800000u);
    /* 0061e0e2: mov dword ptr [eax + 0xd8], 0x3f800000 */ W32((u32)(r_eax+0xd8u), 0x3f800000u);
    /* 0061e0ec: mov dword ptr [eax + 0xdc], 0x3f800000 */ W32((u32)(r_eax+0xdcu), 0x3f800000u);
    /* 0061e0f6: mov dword ptr [eax + 0xe0], 0x3f800000 */ W32((u32)(r_eax+0xe0u), 0x3f800000u);
    /* 0061e100: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e103: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061e10a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e10c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e10d: ret 8 */ FN_RET(0x0061dff4); r_esp += 12; return;
}

