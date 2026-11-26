#include "protos.h"

void f_0082c07c(void) /* sub_82C07C */
{
    FN_ENTER(0x0082c07c);
    /* 0082c07c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082c07f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0082c083: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0082c087: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0082c089: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c08f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0082c092: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0082c095: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0082c099: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0082c09c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0082c0a0: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0082c0a3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0082c0a7: jne 0x82c0b1 */ if (!fZ) goto L_0082c0b1;
L_0082c0a9:; BB(0x0082c0a9);
    /* 0082c0a9: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
L_0082c0b1:; BB(0x0082c0b1);
    /* 0082c0b1: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082c0b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c0b8: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c0bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082c0bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c0c0: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82c0c6u); call_ind(t); }
    /* 0082c0c6: call 0x835ca0 */ r_esp -= 4; W32(r_esp, 0x82c0cbu); f_00835ca0();
    /* 0082c0cb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0082c0ce: call 0x836e80 */ r_esp -= 4; W32(r_esp, 0x82c0d3u); f_00836e80();
    /* 0082c0d3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c0d6: ret  */ FN_RET(0x0082c07c); r_esp += 4; return;
}

void f_0082c0d8(void) /* sub_82C0D8 */
{
    FN_ENTER(0x0082c0d8);
    /* 0082c0d8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082c0db: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0082c0df: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0082c0e3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0082c0e5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082c0e8: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0082c0eb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0082c0ee: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0082c0f2: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0082c0f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082c0f9: jle 0x82c13a */ if ((fZ||fS!=fO)) goto L_0082c13a;
L_0082c0fb:; BB(0x0082c0fb);
    /* 0082c0fb: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082c0ff: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0082c103: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c108: jne 0x82c112 */ if (!fZ) goto L_0082c112;
L_0082c10a:; BB(0x0082c10a);
    /* 0082c10a: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
L_0082c112:; BB(0x0082c112);
    /* 0082c112: call 0x835ca0 */ r_esp -= 4; W32(r_esp, 0x82c117u); f_00835ca0();
    /* 0082c117: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082c11b: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082c11d: je 0x82c12b */ if (fZ) goto L_0082c12b;
L_0082c11f:; BB(0x0082c11f);
    /* 0082c11f: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082c124: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82c129u); f_008363ec();
    /* 0082c129: jmp 0x82c132 */ goto L_0082c132;
L_0082c12b:; BB(0x0082c12b);
    /* 0082c12b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082c12d: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x82c132u); f_008363ec();
L_0082c132:; BB(0x0082c132);
    /* 0082c132: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0082c135: call 0x836f08 */ r_esp -= 4; W32(r_esp, 0x82c13au); f_00836f08();
L_0082c13a:; BB(0x0082c13a);
    /* 0082c13a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c13d: ret  */ FN_RET(0x0082c0d8); r_esp += 4; return;
}

void f_0082c140(void) /* sub_82C140 */
{
    FN_ENTER(0x0082c140);
    /* 0082c140: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0082c144: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c146: je 0x82c14d */ if (fZ) goto L_0082c14d;
L_0082c148:; BB(0x0082c148);
    /* 0082c148: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082c14a: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_0082c14d:; BB(0x0082c14d);
    /* 0082c14d: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c157: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c159: ret  */ FN_RET(0x0082c140); r_esp += 4; return;
}

void f_0082c15c(void) /* sub_82C15C */
{
    FN_ENTER(0x0082c15c);
    /* 0082c15c: mov dword ptr [0xacba30], 0xffffff05 */ W32((u32)(0xacba30u), 0xffffff05u);
    /* 0082c166: mov eax, 0xffffff05 */ r_eax = 0xffffff05u;
    /* 0082c16b: ret  */ FN_RET(0x0082c15c); r_esp += 4; return;
}

void f_0082c16c(void) /* sub_82C16C */
{
    FN_ENTER(0x0082c16c);
    /* 0082c16c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082c170: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082c174: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c175: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082c178: mov ebx, edx */ r_ebx = r_edx;
    /* 0082c17a: mov edx, ebx */ r_edx = r_ebx;
    /* 0082c17c: call 0x82c1a0 */ r_esp -= 4; W32(r_esp, 0x82c181u); f_0082c1a0();
    /* 0082c181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c183: je 0x82c18a */ if (fZ) goto L_0082c18a;
L_0082c185:; BB(0x0082c185);
    /* 0082c185: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c188: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082c189: ret  */ FN_RET(0x0082c16c); r_esp += 4; return;
L_0082c18a:; BB(0x0082c18a);
    /* 0082c18a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0082c18c: call 0x844bb8 */ r_esp -= 4; W32(r_esp, 0x82c191u); f_00844bb8();
    /* 0082c191: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c194: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082c195: ret  */ FN_RET(0x0082c16c); r_esp += 4; return;
}

void f_0082c198(void) /* sub_82C198 */
{
    FN_ENTER(0x0082c198);
    /* 0082c198: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082c19c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082c1a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c1a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c1a2: mov edi, edx */ r_edi = r_edx;
    /* 0082c1a4: call 0x82c1e4 */ r_esp -= 4; W32(r_esp, 0x82c1a9u); f_0082c1e4();
    /* 0082c1a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c1ab: je 0x82c1b0 */ if (fZ) goto L_0082c1b0;
L_0082c1ad:; BB(0x0082c1ad);
    /* 0082c1ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c1ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c1af: ret  */ FN_RET(0x0082c198); r_esp += 4; return;
L_0082c1b0:; BB(0x0082c1b0);
    /* 0082c1b0: mov ecx, edi */ r_ecx = r_edi;
    /* 0082c1b2: call 0x844d40 */ r_esp -= 4; W32(r_esp, 0x82c1b7u); f_00844d40();
    /* 0082c1b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082c1ba: je 0x82c1ce */ if (fZ) goto L_0082c1ce;
L_0082c1bc:; BB(0x0082c1bc);
    /* 0082c1bc: mov dword ptr [0xacba30], 0xffffff05 */ W32((u32)(0xacba30u), 0xffffff05u);
    /* 0082c1c6: mov eax, 0xffffff05 */ r_eax = 0xffffff05u;
    /* 0082c1cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c1cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c1cd: ret  */ FN_RET(0x0082c198); r_esp += 4; return;
L_0082c1ce:; BB(0x0082c1ce);
    /* 0082c1ce: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c1d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c1da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c1db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c1dc: ret  */ FN_RET(0x0082c198); r_esp += 4; return;
}

void f_0082c1a0(void)
{
    FN_ENTER(0x0082c1a0);
    /* 0082c1a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c1a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c1a2: mov edi, edx */ r_edi = r_edx;
    /* 0082c1a4: call 0x82c1e4 */ r_esp -= 4; W32(r_esp, 0x82c1a9u); f_0082c1e4();
    /* 0082c1a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c1ab: je 0x82c1b0 */ if (fZ) goto L_0082c1b0;
L_0082c1ad:; BB(0x0082c1ad);
    /* 0082c1ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c1ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c1af: ret  */ FN_RET(0x0082c1a0); r_esp += 4; return;
L_0082c1b0:; BB(0x0082c1b0);
    /* 0082c1b0: mov ecx, edi */ r_ecx = r_edi;
    /* 0082c1b2: call 0x844d40 */ r_esp -= 4; W32(r_esp, 0x82c1b7u); f_00844d40();
    /* 0082c1b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082c1ba: je 0x82c1ce */ if (fZ) goto L_0082c1ce;
L_0082c1bc:; BB(0x0082c1bc);
    /* 0082c1bc: mov dword ptr [0xacba30], 0xffffff05 */ W32((u32)(0xacba30u), 0xffffff05u);
    /* 0082c1c6: mov eax, 0xffffff05 */ r_eax = 0xffffff05u;
    /* 0082c1cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c1cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c1cd: ret  */ FN_RET(0x0082c1a0); r_esp += 4; return;
L_0082c1ce:; BB(0x0082c1ce);
    /* 0082c1ce: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c1d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c1da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c1db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c1dc: ret  */ FN_RET(0x0082c1a0); r_esp += 4; return;
}

void f_0082c1e0(void) /* sub_82C1E0 */
{
    FN_ENTER(0x0082c1e0);
    /* 0082c1e0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082c1e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c1e5: call 0x82c208 */ r_esp -= 4; W32(r_esp, 0x82c1eau); f_0082c208();
    /* 0082c1ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c1ec: jne 0x82c1f5 */ if (!fZ) goto L_0082c1f5;
L_0082c1ee:; BB(0x0082c1ee);
    /* 0082c1ee: mov eax, 0xffffff01 */ r_eax = 0xffffff01u;
    /* 0082c1f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c1f4: ret  */ FN_RET(0x0082c1e0); r_esp += 4; return;
L_0082c1f5:; BB(0x0082c1f5);
    /* 0082c1f5: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c1ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c201: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c202: ret  */ FN_RET(0x0082c1e0); r_esp += 4; return;
}

void f_0082c1e4(void) /* sub_82C1E4 */
{
    FN_ENTER(0x0082c1e4);
    /* 0082c1e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c1e5: call 0x82c208 */ r_esp -= 4; W32(r_esp, 0x82c1eau); f_0082c208();
    /* 0082c1ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c1ec: jne 0x82c1f5 */ if (!fZ) goto L_0082c1f5;
L_0082c1ee:; BB(0x0082c1ee);
    /* 0082c1ee: mov eax, 0xffffff01 */ r_eax = 0xffffff01u;
    /* 0082c1f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c1f4: ret  */ FN_RET(0x0082c1e4); r_esp += 4; return;
L_0082c1f5:; BB(0x0082c1f5);
    /* 0082c1f5: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c1ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c201: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c202: ret  */ FN_RET(0x0082c1e4); r_esp += 4; return;
}

void f_0082c204(void) /* sub_82C204 */
{
    FN_ENTER(0x0082c204);
    /* 0082c204: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082c208: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c20a: je 0x82c214 */ if (fZ) goto L_0082c214;
L_0082c20c:; BB(0x0082c20c);
    /* 0082c20c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082c20f: je 0x82c214 */ if (fZ) goto L_0082c214;
L_0082c211:; BB(0x0082c211);
    /* 0082c211: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c213: ret  */ FN_RET(0x0082c204); r_esp += 4; return;
L_0082c214:; BB(0x0082c214);
    /* 0082c214: mov eax, 1 */ r_eax = 0x1u;
    /* 0082c219: ret  */ FN_RET(0x0082c204); r_esp += 4; return;
}

void f_0082c208(void) /* sub_82C208 */
{
    FN_ENTER(0x0082c208);
    /* 0082c208: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c20a: je 0x82c214 */ if (fZ) goto L_0082c214;
L_0082c20c:; BB(0x0082c20c);
    /* 0082c20c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082c20f: je 0x82c214 */ if (fZ) goto L_0082c214;
L_0082c211:; BB(0x0082c211);
    /* 0082c211: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c213: ret  */ FN_RET(0x0082c208); r_esp += 4; return;
L_0082c214:; BB(0x0082c214);
    /* 0082c214: mov eax, 1 */ r_eax = 0x1u;
    /* 0082c219: ret  */ FN_RET(0x0082c208); r_esp += 4; return;
}

void f_0082c21c(void) /* sub_82C21C */
{
    FN_ENTER(0x0082c21c);
    /* 0082c21c: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c226: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c228: ret  */ FN_RET(0x0082c21c); r_esp += 4; return;
}

void f_0082c22c(void) /* sub_82C22C */
{
    FN_ENTER(0x0082c22c);
    /* 0082c22c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c22d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082c231: call 0x82c1e4 */ r_esp -= 4; W32(r_esp, 0x82c236u); f_0082c1e4();
    /* 0082c236: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c238: jne 0x82c25c */ if (!fZ) goto L_0082c25c;
L_0082c23a:; BB(0x0082c23a);
    /* 0082c23a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0082c23e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c240: jne 0x82c258 */ if (!fZ) goto L_0082c258;
L_0082c242:; BB(0x0082c242);
    /* 0082c242: call 0x844d38 */ r_esp -= 4; W32(r_esp, 0x82c247u); f_00844d38();
    /* 0082c247: mov edx, eax */ r_edx = r_eax;
    /* 0082c249: sar edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0082c24c: shr edx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0082c24f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0082c251: sar edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0082c254: mov eax, edx */ r_eax = r_edx;
    /* 0082c256: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c257: ret  */ FN_RET(0x0082c22c); r_esp += 4; return;
L_0082c258:; BB(0x0082c258);
    /* 0082c258: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c25a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c25b: ret  */ FN_RET(0x0082c22c); r_esp += 4; return;
L_0082c25c:; BB(0x0082c25c);
    /* 0082c25c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c25d: ret  */ FN_RET(0x0082c22c); r_esp += 4; return;
}

void f_0082c260(void) /* sub_82C260 */
{
    FN_ENTER(0x0082c260);
    /* 0082c260: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082c264: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c266: je 0x82c26d */ if (fZ) goto L_0082c26d;
L_0082c268:; BB(0x0082c268);
    /* 0082c268: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c26b: jne 0x82c282 */ if (!fZ) goto L_0082c282;
L_0082c26d:; BB(0x0082c26d);
    /* 0082c26d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0082c271: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0082c274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c275: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0082c279: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0082c27d: call 0x844c24 */ r_esp -= 4; W32(r_esp, 0x82c282u); f_00844c24();
L_0082c282:; BB(0x0082c282);
    /* 0082c282: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c28c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c28e: ret  */ FN_RET(0x0082c260); r_esp += 4; return;
}

void f_0082c290(void) /* sub_82C290 */
{
    FN_ENTER(0x0082c290);
    /* 0082c290: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0082c294: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0082c297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c298: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0082c29c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0082c2a0: call 0x844cb8 */ r_esp -= 4; W32(r_esp, 0x82c2a5u); f_00844cb8();
    /* 0082c2a5: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c2af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c2b1: ret  */ FN_RET(0x0082c290); r_esp += 4; return;
}

void f_0082c2b4(void) /* sub_82C2B4 */
{
    FN_ENTER(0x0082c2b4);
    /* 0082c2b4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0082c2b8: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0082c2bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c2bc: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0082c2c0: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0082c2c4: call 0x844c24 */ r_esp -= 4; W32(r_esp, 0x82c2c9u); f_00844c24();
    /* 0082c2c9: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c2d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c2d5: ret  */ FN_RET(0x0082c2b4); r_esp += 4; return;
}

void f_0082c2d8(void) /* sub_82C2D8 */
{
    FN_ENTER(0x0082c2d8);
    /* 0082c2d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c2d9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082c2dc: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0082c2e0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c2e2: je 0x82c337 */ if (fZ) goto L_0082c337;
L_0082c2e4:; BB(0x0082c2e4);
    /* 0082c2e4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0082c2e8: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0082c2ec: call 0x82c1a0 */ r_esp -= 4; W32(r_esp, 0x82c2f1u); f_0082c1a0();
    /* 0082c2f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c2f3: je 0x82c337 */ if (fZ) goto L_0082c337;
L_0082c2f5:; BB(0x0082c2f5);
    /* 0082c2f5: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0082c2f9: call 0x844bb8 */ r_esp -= 4; W32(r_esp, 0x82c2feu); f_00844bb8();
    /* 0082c2fe: mov byte ptr [edi + 7], 0xff */ W8((u32)(r_edi+0x7u), 0xffu);
    /* 0082c302: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0082c304: shr eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082c307: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0082c30b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082c30d: mov dword ptr [0xacba30], edx */ W32((u32)(0xacba30u), r_edx);
    /* 0082c313: mov byte ptr [edi + 6], dl */ W8((u32)(r_edi+0x6u), (u8)r_edx);
    /* 0082c316: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 0082c31a: mov word ptr [edi + 0xa], dx */ W16((u32)(r_edi+0xau), (u16)r_edx);
    /* 0082c31e: mov byte ptr [edi + 0xc], dl */ W8((u32)(r_edi+0xcu), (u8)r_edx);
    /* 0082c321: mov byte ptr [edi + 0xd], dl */ W8((u32)(r_edi+0xdu), (u8)r_edx);
    /* 0082c324: mov byte ptr [edi + 0xe], dl */ W8((u32)(r_edi+0xeu), (u8)r_edx);
    /* 0082c327: mov byte ptr [edi + 0xf], dl */ W8((u32)(r_edi+0xfu), (u8)r_edx);
    /* 0082c32a: mov byte ptr [edi + 0x10], dl */ W8((u32)(r_edi+0x10u), (u8)r_edx);
    /* 0082c32d: mov byte ptr [edi + 0x11], dl */ W8((u32)(r_edi+0x11u), (u8)r_edx);
    /* 0082c330: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082c332: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c335: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c336: ret  */ FN_RET(0x0082c2d8); r_esp += 4; return;
L_0082c337:; BB(0x0082c337);
    /* 0082c337: mov dword ptr [0xacba30], 0xffffff05 */ W32((u32)(0xacba30u), 0xffffff05u);
    /* 0082c341: mov eax, 0xffffff05 */ r_eax = 0xffffff05u;
    /* 0082c346: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c349: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c34a: ret  */ FN_RET(0x0082c2d8); r_esp += 4; return;
}

void f_0082c2ff(void)
{
    FN_ENTER(0x0082c2ff);
    /* 0082c2ff: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082c300: pop es */ UNSUP(0x0082c300, "pop es");
    /* 0082c301: dec dword ptr [ecx + 0xee8c107] */ { u32 ad = (u32)(r_ecx+0xee8c107u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0082c307: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0082c30b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082c30d: mov dword ptr [0xacba30], edx */ W32((u32)(0xacba30u), r_edx);
    /* 0082c313: mov byte ptr [edi + 6], dl */ W8((u32)(r_edi+0x6u), (u8)r_edx);
    /* 0082c316: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 0082c31a: mov word ptr [edi + 0xa], dx */ W16((u32)(r_edi+0xau), (u16)r_edx);
    /* 0082c31e: mov byte ptr [edi + 0xc], dl */ W8((u32)(r_edi+0xcu), (u8)r_edx);
    /* 0082c321: mov byte ptr [edi + 0xd], dl */ W8((u32)(r_edi+0xdu), (u8)r_edx);
    /* 0082c324: mov byte ptr [edi + 0xe], dl */ W8((u32)(r_edi+0xeu), (u8)r_edx);
    /* 0082c327: mov byte ptr [edi + 0xf], dl */ W8((u32)(r_edi+0xfu), (u8)r_edx);
    /* 0082c32a: mov byte ptr [edi + 0x10], dl */ W8((u32)(r_edi+0x10u), (u8)r_edx);
    /* 0082c32d: mov byte ptr [edi + 0x11], dl */ W8((u32)(r_edi+0x11u), (u8)r_edx);
    /* 0082c330: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082c332: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c335: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c336: ret  */ FN_RET(0x0082c2ff); r_esp += 4; return;
}

void f_0082c34c(void) /* sub_82C34C */
{
    FN_ENTER(0x0082c34c);
    /* 0082c34c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082c350: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082c354: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c356: je 0x82c36b */ if (fZ) goto L_0082c36b;
L_0082c358:; BB(0x0082c358);
    /* 0082c358: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c35a: je 0x82c36b */ if (fZ) goto L_0082c36b;
L_0082c35c:; BB(0x0082c35c);
    /* 0082c35c: push dword ptr [eax + 0x5c] */ { u32 v = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c35f: push dword ptr [eax + 0x58] */ { u32 v = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c362: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c363: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x82c368u); f_0086b6b8();
    /* 0082c368: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0082c36b:; BB(0x0082c36b);
    /* 0082c36b: mov dword ptr [0xacba30], 0 */ W32((u32)(0xacba30u), 0x0u);
    /* 0082c375: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082c377: ret  */ FN_RET(0x0082c34c); r_esp += 4; return;
}

void f_0082c378(void) /* sub_82C378 */
{
    FN_ENTER(0x0082c378);
    /* 0082c378: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0082c37c: ret  */ FN_RET(0x0082c378); r_esp += 4; return;
}

void f_0082c380(void) /* sub_82C380 */
{
    FN_ENTER(0x0082c380);
    /* 0082c380: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0082c384: add eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c388: ret  */ FN_RET(0x0082c380); r_esp += 4; return;
}

void f_0082c38c(void) /* sub_82C38C */
{
    FN_ENTER(0x0082c38c);
    /* 0082c38c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082c390: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082c393: jae 0x82c39d */ if (!fC) goto L_0082c39d;
L_0082c395:; BB(0x0082c395);
    /* 0082c395: movsx eax, byte ptr [eax + 0xa21680] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0xa21680u));
    /* 0082c39c: ret  */ FN_RET(0x0082c38c); r_esp += 4; return;
L_0082c39d:; BB(0x0082c39d);
    /* 0082c39d: movsx eax, byte ptr [0xa21680] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa21680u));
    /* 0082c3a4: ret  */ FN_RET(0x0082c38c); r_esp += 4; return;
}

void f_0082c3a8(void) /* sub_82C3A8 */
{
    FN_ENTER(0x0082c3a8);
    /* 0082c3a8: mov eax, dword ptr [0xacba30] */ r_eax = R32((u32)(0xacba30u));
    /* 0082c3ad: ret  */ FN_RET(0x0082c3a8); r_esp += 4; return;
}

void f_0082c3b0(void) /* sub_82C3B0 */
{
    FN_ENTER(0x0082c3b0);
    /* 0082c3b0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082c3b3: mov eax, dword ptr [0xacbe60] */ r_eax = R32((u32)(0xacbe60u));
    /* 0082c3b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c3ba: jne 0x82c407 */ if (!fZ) goto L_0082c407;
L_0082c3bc:; BB(0x0082c3bc);
    /* 0082c3bc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0082c3bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082c3c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3c7: call dword ptr [0x8f8354] */ { u32 t = R32((u32)(0x8f8354u)); r_esp -= 4; W32(r_esp, 0x82c3cdu); call_ind(t); }
    /* 0082c3cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c3cf: je 0x82c3fa */ if (fZ) goto L_0082c3fa;
L_0082c3d1:; BB(0x0082c3d1);
    /* 0082c3d1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082c3d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3d5: call dword ptr [0x8f835c] */ { u32 t = R32((u32)(0x8f835cu)); r_esp -= 4; W32(r_esp, 0x82c3dbu); call_ind(t); }
    /* 0082c3db: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082c3de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3df: call dword ptr [0x8f8358] */ { u32 t = R32((u32)(0x8f8358u)); r_esp -= 4; W32(r_esp, 0x82c3e5u); call_ind(t); }
    /* 0082c3e5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0082c3e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082c3ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c3f0: call dword ptr [0x8f8354] */ { u32 t = R32((u32)(0x8f8354u)); r_esp -= 4; W32(r_esp, 0x82c3f6u); call_ind(t); }
    /* 0082c3f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c3f8: jne 0x82c3d1 */ if (!fZ) goto L_0082c3d1;
L_0082c3fa:; BB(0x0082c3fa);
    /* 0082c3fa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082c3fe: mov dword ptr [0xacbe68], eax */ W32((u32)(0xacbe68u), r_eax);
    /* 0082c403: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c406: ret  */ FN_RET(0x0082c3b0); r_esp += 4; return;
L_0082c407:; BB(0x0082c407);
    /* 0082c407: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c40a: ret  */ FN_RET(0x0082c3b0); r_esp += 4; return;
}

void f_0082c40c(void) /* sub_82C40C */
{
    FN_ENTER(0x0082c40c);
    /* 0082c40c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082c410: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0082c411: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c413: push dword ptr [0xacbe44] */ { u32 v = R32((u32)(0xacbe44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c419: push dword ptr [0xacbe40] */ { u32 v = R32((u32)(0xacbe40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c41f: call 0x85ada0 */ r_esp -= 4; W32(r_esp, 0x82c424u); f_0085ada0();
    /* 0082c424: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c426: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082c428: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c42a: call 0x85ade0 */ r_esp -= 4; W32(r_esp, 0x82c42fu); f_0085ade0();
    /* 0082c42f: mov dword ptr [0xacbe54], edx */ W32((u32)(0xacbe54u), r_edx);
    /* 0082c435: mov dword ptr [0xacbe50], eax */ W32((u32)(0xacbe50u), r_eax);
    /* 0082c43a: ret  */ FN_RET(0x0082c40c); r_esp += 4; return;
}

void f_0082c43c(void) /* sub_82C43C */
{
    FN_ENTER(0x0082c43c);
    /* 0082c43c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c43d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c43e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c43f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
L_0082c442:; BB(0x0082c442);
    /* 0082c442: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082c445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c446: call dword ptr [0x8f8170] */ { u32 t = R32((u32)(0x8f8170u)); r_esp -= 4; W32(r_esp, 0x82c44cu); call_ind(t); }
    /* 0082c44c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0082c44f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082c453: mov esi, dword ptr [0xacbe48] */ r_esi = R32((u32)(0xacbe48u));
    /* 0082c459: mov edi, dword ptr [0xacbe4c] */ r_edi = R32((u32)(0xacbe4cu));
    /* 0082c45f: mov ebx, edx */ r_ebx = r_edx;
    /* 0082c461: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fC = (a < b); }
    /* 0082c463: mov ecx, eax */ r_ecx = r_eax;
    /* 0082c465: sbb ecx, edi */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0082c467: mov esi, dword ptr [0xacbe50] */ r_esi = R32((u32)(0xacbe50u));
    /* 0082c46d: mov edi, dword ptr [0xacbe54] */ r_edi = R32((u32)(0xacbe54u));
    /* 0082c473: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); }
    /* 0082c475: sbb edi, ecx */ { u32 c = fC; u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082c477: jl 0x82c488 */ if ((fS!=fO)) goto L_0082c488;
L_0082c479:; BB(0x0082c479);
    /* 0082c479: call 0x828964 */ r_esp -= 4; W32(r_esp, 0x82c47eu); f_00828964();
    /* 0082c47e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c480: call dword ptr [0x8f8174] */ { u32 t = R32((u32)(0x8f8174u)); r_esp -= 4; W32(r_esp, 0x82c486u); call_ind(t); }
    /* 0082c486: jmp 0x82c442 */ goto L_0082c442;
L_0082c488:; BB(0x0082c488);
    /* 0082c488: mov dword ptr [0xacbe48], edx */ W32((u32)(0xacbe48u), r_edx);
    /* 0082c48e: mov dword ptr [0xacbe4c], eax */ W32((u32)(0xacbe4cu), r_eax);
    /* 0082c493: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c496: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082c497: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082c498: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082c499: ret  */ FN_RET(0x0082c43c); r_esp += 4; return;
}

void f_0082c49c(void) /* sub_82C49C */
{
    FN_ENTER(0x0082c49c);
    /* 0082c49c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c49d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082c4a0: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0082c4a4: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c4a7: je 0x82c7f6 */ if (fZ) goto L_0082c7f6;
L_0082c4ad:; BB(0x0082c4ad);
    /* 0082c4ad: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c4b0: je 0x82c7b7 */ if (fZ) goto L_0082c7b7;
L_0082c4b6:; BB(0x0082c4b6);
    /* 0082c4b6: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c4b9: je 0x82c573 */ if (fZ) goto L_0082c573;
L_0082c4bf:; BB(0x0082c4bf);
    /* 0082c4bf: cmp ebp, 0x102 */ {  u32 a = r_ebp; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c4c5: je 0x82c7a4 */ if (fZ) goto L_0082c7a4;
L_0082c4cb:; BB(0x0082c4cb);
    /* 0082c4cb: cmp ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c4d1: je 0x82c774 */ if (fZ) goto L_0082c774;
L_0082c4d7:; BB(0x0082c4d7);
    /* 0082c4d7: cmp ebp, 0x104 */ {  u32 a = r_ebp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c4dd: je 0x82c798 */ if (fZ) goto L_0082c798;
L_0082c4e3:; BB(0x0082c4e3);
    /* 0082c4e3: cmp ebp, 0x232 */ {  u32 a = r_ebp; u32 b = 0x232u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c4e9: je 0x82c757 */ if (fZ) goto L_0082c757;
L_0082c4ef:; BB(0x0082c4ef);
    /* 0082c4ef: cmp ebp, 0x84 */ {  u32 a = r_ebp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c4f5: je 0x82c6cc */ if (fZ) goto L_0082c6cc;
L_0082c4fb:; BB(0x0082c4fb);
    /* 0082c4fb: cmp ebp, 0xa1 */ {  u32 a = r_ebp; u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c501: je 0x82c6a0 */ if (fZ) goto L_0082c6a0;
L_0082c507:; BB(0x0082c507);
    /* 0082c507: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c50a: je 0x82c649 */ if (fZ) goto L_0082c649;
L_0082c510:; BB(0x0082c510);
    /* 0082c510: cmp ebp, 0x86 */ {  u32 a = r_ebp; u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c516: je 0x82c5f8 */ if (fZ) goto L_0082c5f8;
L_0082c51c:; BB(0x0082c51c);
    /* 0082c51c: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c51f: je 0x82c57c */ if (fZ) goto L_0082c57c;
L_0082c521:; BB(0x0082c521);
    /* 0082c521: cmp ebp, 0x214 */ {  u32 a = r_ebp; u32 b = 0x214u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c527: jne 0x82c54b */ if (!fZ) goto L_0082c54b;
L_0082c529:; BB(0x0082c529);
    /* 0082c529: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 0082c52e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c530: je 0x82c53f */ if (fZ) goto L_0082c53f;
L_0082c532:; BB(0x0082c532);
    /* 0082c532: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082c536: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c53a: call 0x82c834 */ r_esp -= 4; W32(r_esp, 0x82c53fu); f_0082c834();
L_0082c53f:; BB(0x0082c53f);
    /* 0082c53f: mov eax, 1 */ r_eax = 0x1u;
    /* 0082c544: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c547: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c548: ret 0x10 */ FN_RET(0x0082c49c); r_esp += 20; return;
L_0082c54b:; BB(0x0082c54b);
    /* 0082c54b: cmp ebp, 0x24 */ {  u32 a = r_ebp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c54e: jne 0x82c5db */ if (!fZ) goto L_0082c5db;
L_0082c554:; BB(0x0082c554);
    /* 0082c554: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 0082c559: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c55b: je 0x82c573 */ if (fZ) goto L_0082c573;
L_0082c55d:; BB(0x0082c55d);
    /* 0082c55d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c561: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c565: mov dword ptr [eax + 0x18], 0x140 */ W32((u32)(r_eax+0x18u), 0x140u);
    /* 0082c56c: mov dword ptr [edx + 0x1c], 0xf0 */ W32((u32)(r_edx+0x1cu), 0xf0u);
L_0082c573:; BB(0x0082c573);
    /* 0082c573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082c575: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c578: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c579: ret 0x10 */ FN_RET(0x0082c49c); r_esp += 20; return;
L_0082c57c:; BB(0x0082c57c);
    /* 0082c57c: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 0082c581: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c583: jne 0x82c5db */ if (!fZ) goto L_0082c5db;
L_0082c585:; BB(0x0082c585);
    /* 0082c585: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082c589: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0082c58c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c58e: je 0x82c59b */ if (fZ) goto L_0082c59b;
L_0082c590:; BB(0x0082c590);
    /* 0082c590: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082c594: test eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c599: je 0x82c5db */ if (fZ) goto L_0082c5db;
L_0082c59b:; BB(0x0082c59b);
    /* 0082c59b: mov dword ptr [0xacbe74], 1 */ W32((u32)(0xacbe74u), 0x1u);
    /* 0082c5a5: call 0x7a62dc */ r_esp -= 4; W32(r_esp, 0x82c5aau); f_007a62dc();
    /* 0082c5aa: mov eax, dword ptr [0xacbe60] */ r_eax = R32((u32)(0xacbe60u));
    /* 0082c5af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c5b1: je 0x82c5db */ if (fZ) goto L_0082c5db;
L_0082c5b3:; BB(0x0082c5b3);
    /* 0082c5b3: mov eax, dword ptr [0xacbe84] */ r_eax = R32((u32)(0xacbe84u));
    /* 0082c5b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c5ba: je 0x82c5db */ if (fZ) goto L_0082c5db;
L_0082c5bc:; BB(0x0082c5bc);
    /* 0082c5bc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5bf: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x82c5c5u); call_ind(t); }
    /* 0082c5c5: push dword ptr [0xacbe84] */ { u32 v = R32((u32)(0xacbe84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c5cb: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x82c5d1u); call_ind(t); }
    /* 0082c5d1: mov dword ptr [0xacbe84], 0 */ W32((u32)(0xacbe84u), 0x0u);
L_0082c5db:; BB(0x0082c5db);
    /* 0082c5db: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082c5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5eb: call dword ptr [0x8f836c] */ { u32 t = R32((u32)(0x8f836cu)); r_esp -= 4; W32(r_esp, 0x82c5f1u); call_ind(t); }
    /* 0082c5f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c5f5: ret 0x10 */ FN_RET(0x0082c49c); r_esp += 20; return;
L_0082c5f8:; BB(0x0082c5f8);
    /* 0082c5f8: mov eax, dword ptr [0xacbec4] */ r_eax = R32((u32)(0xacbec4u));
    /* 0082c5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c5ff: jne 0x82c63d */ if (!fZ) goto L_0082c63d;
L_0082c601:; BB(0x0082c601);
    /* 0082c601: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c603: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c609: mov eax, 1 */ r_eax = 0x1u;
    /* 0082c60e: mov dword ptr [0xacbee8], eax */ W32((u32)(0xacbee8u), r_eax);
    /* 0082c613: mov dword ptr [0xacbec4], eax */ W32((u32)(0xacbec4u), r_eax);
    /* 0082c618: call dword ptr [0x8f8360] */ { u32 t = R32((u32)(0x8f8360u)); r_esp -= 4; W32(r_esp, 0x82c61eu); call_ind(t); }
    /* 0082c61e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c620: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c624: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c625: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c62a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c62b: call dword ptr [0x8f8370] */ { u32 t = R32((u32)(0x8f8370u)); r_esp -= 4; W32(r_esp, 0x82c631u); call_ind(t); }
    /* 0082c631: mov dword ptr [0xacbec4], 0 */ W32((u32)(0xacbec4u), 0x0u);
    /* 0082c63b: jmp 0x82c5db */ goto L_0082c5db;
L_0082c63d:; BB(0x0082c63d);
    /* 0082c63d: mov dword ptr [0xacbee8], 0 */ W32((u32)(0xacbee8u), 0x0u);
    /* 0082c647: jmp 0x82c5db */ goto L_0082c5db;
L_0082c649:; BB(0x0082c649);
    /* 0082c649: mov eax, dword ptr [0xacbee8] */ r_eax = R32((u32)(0xacbee8u));
    /* 0082c64e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c650: je 0x82c68b */ if (fZ) goto L_0082c68b;
L_0082c652:; BB(0x0082c652);
    /* 0082c652: mov eax, dword ptr [0xacbee4] */ r_eax = R32((u32)(0xacbee4u));
    /* 0082c657: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c65a: jne 0x82c66a */ if (!fZ) goto L_0082c66a;
L_0082c65c:; BB(0x0082c65c);
    /* 0082c65c: push dword ptr [0xacbecc] */ { u32 v = R32((u32)(0xacbeccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c662: call dword ptr [0x8f8364] */ { u32 t = R32((u32)(0x8f8364u)); r_esp -= 4; W32(r_esp, 0x82c668u); call_ind(t); }
    /* 0082c668: jmp 0x82c697 */ goto L_0082c697;
L_0082c66a:; BB(0x0082c66a);
    /* 0082c66a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c66d: jne 0x82c67d */ if (!fZ) goto L_0082c67d;
L_0082c66f:; BB(0x0082c66f);
    /* 0082c66f: push dword ptr [0xacbec8] */ { u32 v = R32((u32)(0xacbec8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c675: call dword ptr [0x8f8364] */ { u32 t = R32((u32)(0x8f8364u)); r_esp -= 4; W32(r_esp, 0x82c67bu); call_ind(t); }
    /* 0082c67b: jmp 0x82c697 */ goto L_0082c697;
L_0082c67d:; BB(0x0082c67d);
    /* 0082c67d: push dword ptr [0xacbed0] */ { u32 v = R32((u32)(0xacbed0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c683: call dword ptr [0x8f8364] */ { u32 t = R32((u32)(0x8f8364u)); r_esp -= 4; W32(r_esp, 0x82c689u); call_ind(t); }
    /* 0082c689: jmp 0x82c697 */ goto L_0082c697;
L_0082c68b:; BB(0x0082c68b);
    /* 0082c68b: push dword ptr [0xacbed4] */ { u32 v = R32((u32)(0xacbed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c691: call dword ptr [0x8f8364] */ { u32 t = R32((u32)(0x8f8364u)); r_esp -= 4; W32(r_esp, 0x82c697u); call_ind(t); }
L_0082c697:; BB(0x0082c697);
    /* 0082c697: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082c699: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c69c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c69d: ret 0x10 */ FN_RET(0x0082c49c); r_esp += 20; return;
L_0082c6a0:; BB(0x0082c6a0);
    /* 0082c6a0: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082c6a4: lea edx, [eax - 2] */ r_edx = (u32)(r_eax+0xfffffffeu);
    /* 0082c6a7: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0082c6aa: ja 0x82c5db */ if ((!fC&&!fZ)) goto L_0082c5db;
L_0082c6b0:; BB(0x0082c6b0);
    /* 0082c6b0: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082c6b4: mov edx, dword ptr [eax*4 + 0x98a2d8] */ r_edx = R32((u32)(r_eax*4+0x98a2d8u));
    /* 0082c6bb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0082c6cc:; BB(0x0082c6cc);
    /* 0082c6cc: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c6d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c6d1: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c6d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c6d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c6d7: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082c6db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c6dc: call dword ptr [0x8f836c] */ { u32 t = R32((u32)(0x8f836cu)); r_esp -= 4; W32(r_esp, 0x82c6e2u); call_ind(t); }
    /* 0082c6e2: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0082c6e5: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0082c6e8: ja 0x82c748 */ if ((!fC&&!fZ)) goto L_0082c748;
L_0082c6ea:; BB(0x0082c6ea);
    /* 0082c6ea: mov eax, dword ptr [eax*4 + 0x98a27c] */ r_eax = R32((u32)(r_eax*4+0x98a27cu));
    /* 0082c6f1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0082c748:; BB(0x0082c748);
    /* 0082c748: mov dword ptr [0xacbee8], 1 */ W32((u32)(0xacbee8u), 0x1u);
    /* 0082c752: jmp 0x82c5db */ goto L_0082c5db;
L_0082c757:; BB(0x0082c757);
    /* 0082c757: mov eax, dword ptr [0xacbeec] */ r_eax = R32((u32)(0xacbeecu));
    /* 0082c75c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c75f: jne 0x82c5db */ if (!fZ) goto L_0082c5db;
L_0082c765:; BB(0x0082c765);
    /* 0082c765: mov dword ptr [0xacbeec], 0 */ W32((u32)(0xacbeecu), 0x0u);
    /* 0082c76f: jmp 0x82c5db */ goto L_0082c5db;
L_0082c774:; BB(0x0082c774);
    /* 0082c774: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082c778: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c77b: jne 0x82c798 */ if (!fZ) goto L_0082c798;
L_0082c77d:; BB(0x0082c77d);
    /* 0082c77d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c77f: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c784: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082c786: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0082c78b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c78c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c78d: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0082c791: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c792: call dword ptr [0x8f8368] */ { u32 t = R32((u32)(0x8f8368u)); r_esp -= 4; W32(r_esp, 0x82c798u); call_ind(t); }
L_0082c798:; BB(0x0082c798);
    /* 0082c798: mov eax, 1 */ r_eax = 0x1u;
    /* 0082c79d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c7a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c7a1: ret 0x10 */ FN_RET(0x0082c49c); r_esp += 20; return;
L_0082c7a4:; BB(0x0082c7a4);
    /* 0082c7a4: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0082c7a8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0082c7ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c7ac: call 0x840e58 */ r_esp -= 4; W32(r_esp, 0x82c7b1u); f_00840e58();
    /* 0082c7b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082c7b2: jmp 0x82c5db */ goto L_0082c5db;
L_0082c7b7:; BB(0x0082c7b7);
    /* 0082c7b7: call 0x7a62dc */ r_esp -= 4; W32(r_esp, 0x82c7bcu); f_007a62dc();
    /* 0082c7bc: mov eax, dword ptr [0xacbe60] */ r_eax = R32((u32)(0xacbe60u));
    /* 0082c7c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c7c3: je 0x82c7ed */ if (fZ) goto L_0082c7ed;
L_0082c7c5:; BB(0x0082c7c5);
    /* 0082c7c5: mov eax, dword ptr [0xacbe84] */ r_eax = R32((u32)(0xacbe84u));
    /* 0082c7ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c7cc: je 0x82c7ed */ if (fZ) goto L_0082c7ed;
L_0082c7ce:; BB(0x0082c7ce);
    /* 0082c7ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082c7d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c7d1: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x82c7d7u); call_ind(t); }
    /* 0082c7d7: push dword ptr [0xacbe84] */ { u32 v = R32((u32)(0xacbe84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c7dd: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x82c7e3u); call_ind(t); }
    /* 0082c7e3: mov dword ptr [0xacbe84], 0 */ W32((u32)(0xacbe84u), 0x0u);
L_0082c7ed:; BB(0x0082c7ed);
    /* 0082c7ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082c7ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c7f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c7f3: ret 0x10 */ FN_RET(0x0082c49c); r_esp += 20; return;
L_0082c7f6:; BB(0x0082c7f6);
    /* 0082c7f6: mov eax, dword ptr [0xacbe60] */ r_eax = R32((u32)(0xacbe60u));
    /* 0082c7fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c7fd: je 0x82c5db */ if (fZ) goto L_0082c5db;
L_0082c803:; BB(0x0082c803);
    /* 0082c803: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0082c807: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082c809: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0082c80d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c80e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c80f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c810: push 0x82d2cc */ { u32 v = 0x82d2ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0082c815: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c816: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c817: call 0x85af50 */ r_esp -= 4; W32(r_esp, 0x82c81cu); f_0085af50();
    /* 0082c81c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082c81f: mov dword ptr [0xacbe84], eax */ W32((u32)(0xacbe84u), r_eax);
    /* 0082c824: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082c828: mov dword ptr [0xacbe88], eax */ W32((u32)(0xacbe88u), r_eax);
    /* 0082c82d: jmp 0x82c5db */ goto L_0082c5db;
}

void f_0082c5db(void)
{
    FN_ENTER(0x0082c5db);
    /* 0082c5db: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082c5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5eb: call dword ptr [0x8f836c] */ { u32 t = R32((u32)(0x8f836cu)); r_esp -= 4; W32(r_esp, 0x82c5f1u); call_ind(t); }
    /* 0082c5f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c5f5: ret 0x10 */ FN_RET(0x0082c5db); r_esp += 20; return;
}

void f_0082c6bd(void)
{
    FN_ENTER(0x0082c6bd);
    goto L_0082c6bd;
L_0082c5db:; BB(0x0082c5db);
    /* 0082c5db: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082c5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5eb: call dword ptr [0x8f836c] */ { u32 t = R32((u32)(0x8f836cu)); r_esp -= 4; W32(r_esp, 0x82c5f1u); call_ind(t); }
    /* 0082c5f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c5f5: ret 0x10 */ FN_RET(0x0082c6bd); r_esp += 20; return;
L_0082c6bd:; BB(0x0082c6bd);
    /* 0082c6bd: mov dword ptr [0xacbeec], 1 */ W32((u32)(0xacbeecu), 0x1u);
    /* 0082c6c7: jmp 0x82c5db */ goto L_0082c5db;
}

void f_0082c6f3(void)
{
    FN_ENTER(0x0082c6f3);
    goto L_0082c6f3;
L_0082c5db:; BB(0x0082c5db);
    /* 0082c5db: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082c5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5eb: call dword ptr [0x8f836c] */ { u32 t = R32((u32)(0x8f836cu)); r_esp -= 4; W32(r_esp, 0x82c5f1u); call_ind(t); }
    /* 0082c5f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c5f5: ret 0x10 */ FN_RET(0x0082c6f3); r_esp += 20; return;
L_0082c6f3:; BB(0x0082c6f3);
    /* 0082c6f3: mov dword ptr [0xacbee8], 1 */ W32((u32)(0xacbee8u), 0x1u);
    /* 0082c6fd: mov dword ptr [0xacbee4], 2 */ W32((u32)(0xacbee4u), 0x2u);
    /* 0082c707: jmp 0x82c5db */ goto L_0082c5db;
}

void f_0082c70c(void)
{
    FN_ENTER(0x0082c70c);
    goto L_0082c70c;
L_0082c5db:; BB(0x0082c5db);
    /* 0082c5db: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082c5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5eb: call dword ptr [0x8f836c] */ { u32 t = R32((u32)(0x8f836cu)); r_esp -= 4; W32(r_esp, 0x82c5f1u); call_ind(t); }
    /* 0082c5f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c5f5: ret 0x10 */ FN_RET(0x0082c70c); r_esp += 20; return;
L_0082c70c:; BB(0x0082c70c);
    /* 0082c70c: mov eax, 1 */ r_eax = 0x1u;
    /* 0082c711: mov dword ptr [0xacbee8], eax */ W32((u32)(0xacbee8u), r_eax);
    /* 0082c716: mov dword ptr [0xacbee4], eax */ W32((u32)(0xacbee4u), r_eax);
    /* 0082c71b: jmp 0x82c5db */ goto L_0082c5db;
}

void f_0082c720(void)
{
    FN_ENTER(0x0082c720);
    goto L_0082c720;
L_0082c5db:; BB(0x0082c5db);
    /* 0082c5db: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082c5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5eb: call dword ptr [0x8f836c] */ { u32 t = R32((u32)(0x8f836cu)); r_esp -= 4; W32(r_esp, 0x82c5f1u); call_ind(t); }
    /* 0082c5f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c5f5: ret 0x10 */ FN_RET(0x0082c720); r_esp += 20; return;
L_0082c720:; BB(0x0082c720);
    /* 0082c720: mov dword ptr [0xacbee8], 1 */ W32((u32)(0xacbee8u), 0x1u);
    /* 0082c72a: mov dword ptr [0xacbee4], 0 */ W32((u32)(0xacbee4u), 0x0u);
    /* 0082c734: jmp 0x82c5db */ goto L_0082c5db;
}

void f_0082c739(void)
{
    FN_ENTER(0x0082c739);
    goto L_0082c739;
L_0082c5db:; BB(0x0082c5db);
    /* 0082c5db: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082c5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5eb: call dword ptr [0x8f836c] */ { u32 t = R32((u32)(0x8f836cu)); r_esp -= 4; W32(r_esp, 0x82c5f1u); call_ind(t); }
    /* 0082c5f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c5f5: ret 0x10 */ FN_RET(0x0082c739); r_esp += 20; return;
L_0082c739:; BB(0x0082c739);
    /* 0082c739: mov dword ptr [0xacbee8], 0 */ W32((u32)(0xacbee8u), 0x0u);
    /* 0082c743: jmp 0x82c5db */ goto L_0082c5db;
}

void f_0082c748(void)
{
    FN_ENTER(0x0082c748);
    goto L_0082c748;
L_0082c5db:; BB(0x0082c5db);
    /* 0082c5db: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082c5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082c5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5e6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0082c5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c5eb: call dword ptr [0x8f836c] */ { u32 t = R32((u32)(0x8f836cu)); r_esp -= 4; W32(r_esp, 0x82c5f1u); call_ind(t); }
    /* 0082c5f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082c5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082c5f5: ret 0x10 */ FN_RET(0x0082c748); r_esp += 20; return;
L_0082c748:; BB(0x0082c748);
    /* 0082c748: mov dword ptr [0xacbee8], 1 */ W32((u32)(0xacbee8u), 0x1u);
    /* 0082c752: jmp 0x82c5db */ goto L_0082c5db;
}

void f_0082c834(void) /* sub_82C834 */
{
    FN_ENTER(0x0082c834);
    /* 0082c834: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c835: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082c836: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082c839: mov esi, edx */ r_esi = r_edx;
    /* 0082c83b: mov edi, eax */ r_edi = r_eax;
    /* 0082c83d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0082c841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082c842: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082c848: call dword ptr [0x8f8374] */ { u32 t = R32((u32)(0x8f8374u)); r_esp -= 4; W32(r_esp, 0x82c84eu); call_ind(t); }
    /* 0082c84e: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0082c852: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0082c856: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0082c85a: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0082c85e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0082c862: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0082c866: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0082c86a: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0082c86e: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0082c872: call 0x82ca5c */ r_esp -= 4; W32(r_esp, 0x82c877u); f_0082ca5c();
    /* 0082c877: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0082c87a: jb 0x82c899 */ if (fC) goto L_0082c899;
L_0082c87c:; BB(0x0082c87c);
    /* 0082c87c: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0082c87f: jbe 0x82c88b */ if ((fC||fZ)) goto L_0082c88b;
L_0082c881:; BB(0x0082c881);
    /* 0082c881: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0082c884: jb 0x82c899 */ if (fC) goto L_0082c899;
L_0082c886:; BB(0x0082c886);
    /* 0082c886: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0082c889: ja 0x82c899 */ if ((!fC&&!fZ)) goto L_0082c899;
L_0082c88b:; BB(0x0082c88b);
    /* 0082c88b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082c88f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0082c893: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0082c896: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
L_0082c899:; BB(0x0082c899);
    /* 0082c899: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0082c89b: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0082c89f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 0082c8a2: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0082c8a6: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0082c8a9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0082c8ad: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0082c8b0: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0082c8b4: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0082c8b8: call 0x82ca5c */ r_esp -= 4; W32(r_esp, 0x82c8bdu); f_0082ca5c();
    /* 0082c8bd: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0082c8c1: sub eax, dword ptr [esp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082c8c5: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0082c8c9: sub edx, dword ptr [esp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082c8cd: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0082c8cf: cmp ecx, dword ptr [esp + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c8d3: jne 0x82c9e6 */ if (!fZ) goto L_0082c9e6;
L_0082c8d9:; BB(0x0082c8d9);
    /* 0082c8d9: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0082c8dc: cmp ecx, dword ptr [esp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c8e0: jne 0x82c99a */ if (!fZ) goto L_0082c99a;
L_0082c8e6:; BB(0x0082c8e6);
    /* 0082c8e6: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0082c8e9: cmp eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c8ed: jne 0x82c94b */ if (!fZ) goto L_0082c94b;
L_0082c8ef:; BB(0x0082c8ef);
    /* 0082c8ef: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0082c8f2: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082c8f6: je 0x82ca30 */ if (fZ) goto L_0082ca30;
L_0082c8fc:; BB(0x0082c8fc);
    /* 0082c8fc: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0082c900: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0082c904: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0082c908: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 0082c90c: fdiv dword ptr [0x98a324] */ ST(0) = ST(0) / R_F32((u32)(0x98a324u));
    /* 0082c912: fmul dword ptr [0x98a320] */ ST(0) = ST(0) * R_F32((u32)(0x98a320u));
    /* 0082c918: fadd dword ptr [0x98a328] */ ST(0) = ST(0) + R_F32((u32)(0x98a328u));
    /* 0082c91e: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 0082c922: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 0082c927: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082c92c: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0082c930: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 0082c934: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0082c938: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0082c93c: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0082c940: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082c942: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0082c946: jmp 0x82ca30 */ goto L_0082ca30;
L_0082c94b:; BB(0x0082c94b);
    /* 0082c94b: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0082c94f: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0082c953: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0082c957: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 0082c95b: fdiv dword ptr [0x98a324] */ ST(0) = ST(0) / R_F32((u32)(0x98a324u));
    /* 0082c961: fmul dword ptr [0x98a320] */ ST(0) = ST(0) * R_F32((u32)(0x98a320u));
    /* 0082c967: fadd dword ptr [0x98a328] */ ST(0) = ST(0) + R_F32((u32)(0x98a328u));
    /* 0082c96d: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 0082c971: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 0082c976: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082c97b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0082c97f: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 0082c983: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0082c987: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0082c98b: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0082c98f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082c991: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0082c995: jmp 0x82ca30 */ goto L_0082ca30;
L_0082c99a:; BB(0x0082c99a);
    /* 0082c99a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0082c99e: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0082c9a2: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0082c9a6: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 0082c9aa: fdiv dword ptr [0x98a320] */ ST(0) = ST(0) / R_F32((u32)(0x98a320u));
    /* 0082c9b0: fmul dword ptr [0x98a324] */ ST(0) = ST(0) * R_F32((u32)(0x98a324u));
    /* 0082c9b6: fadd dword ptr [0x98a328] */ ST(0) = ST(0) + R_F32((u32)(0x98a328u));
    /* 0082c9bc: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 0082c9c0: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 0082c9c5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082c9ca: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0082c9ce: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 0082c9d2: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0082c9d6: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0082c9da: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0082c9de: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082c9e0: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0082c9e4: jmp 0x82ca30 */ goto L_0082ca30;
L_0082c9e6:; BB(0x0082c9e6);
    /* 0082c9e6: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0082c9ea: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0082c9ee: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0082c9f2: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 0082c9f6: fdiv dword ptr [0x98a320] */ ST(0) = ST(0) / R_F32((u32)(0x98a320u));
    /* 0082c9fc: fmul dword ptr [0x98a324] */ ST(0) = ST(0) * R_F32((u32)(0x98a324u));
    /* 0082ca02: fadd dword ptr [0x98a328] */ ST(0) = ST(0) + R_F32((u32)(0x98a328u));
    /* 0082ca08: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 0082ca0c: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 0082ca11: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082ca16: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0082ca1a: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 0082ca1e: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0082ca22: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0082ca26: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0082ca2a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ca2c: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
L_0082ca30:; BB(0x0082ca30);
    /* 0082ca30: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0082ca34: call 0x82caa0 */ r_esp -= 4; W32(r_esp, 0x82ca39u); f_0082caa0();
    /* 0082ca39: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0082ca3d: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0082ca3f: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0082ca43: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0082ca46: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0082ca4a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 0082ca4d: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0082ca51: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0082ca54: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082ca57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082ca58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082ca59: ret  */ FN_RET(0x0082c834); r_esp += 4; return;
}

void f_0082ca5c(void) /* sub_82CA5C */
{
    FN_ENTER(0x0082ca5c);
    /* 0082ca5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082ca5d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082ca5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ca5f: mov edi, eax */ r_edi = r_eax;
    /* 0082ca61: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ca63: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82ca69u); call_ind(t); }
    /* 0082ca69: mov ebx, eax */ r_ebx = r_eax;
    /* 0082ca6b: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ca6d: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82ca73u); call_ind(t); }
    /* 0082ca73: mov ebp, eax */ r_ebp = r_eax;
    /* 0082ca75: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ca77: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82ca7du); call_ind(t); }
    /* 0082ca7d: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0082ca80: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0082ca83: add dword ptr [edi], ebx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082ca85: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082ca87: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082ca8a: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 0082ca8d: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ca8f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ca91: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0082ca94: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082ca96: mov dword ptr [edi + 0xc], ebx */ W32((u32)(r_edi+0xcu), r_ebx);
    /* 0082ca99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082ca9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082ca9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082ca9c: ret  */ FN_RET(0x0082ca5c); r_esp += 4; return;
}

void f_0082caa0(void) /* sub_82CAA0 */
{
    FN_ENTER(0x0082caa0);
    /* 0082caa0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082caa1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082caa2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082caa3: mov esi, eax */ r_esi = r_eax;
    /* 0082caa5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0082caa7: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82caadu); call_ind(t); }
    /* 0082caad: mov ebx, eax */ r_ebx = r_eax;
    /* 0082caaf: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cab1: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82cab7u); call_ind(t); }
    /* 0082cab7: mov ebp, eax */ r_ebp = r_eax;
    /* 0082cab9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cabb: call dword ptr [0x8f8378] */ { u32 t = R32((u32)(0x8f8378u)); r_esp -= 4; W32(r_esp, 0x82cac1u); call_ind(t); }
    /* 0082cac1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0082cac3: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0082cac6: add dword ptr [esi + 8], ebx */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082cac9: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082cacb: add dword ptr [esi + 0xc], ebp */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082cace: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0082cad0: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082cad2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082cad4: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0082cad7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082cad8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082cad9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082cada: ret  */ FN_RET(0x0082caa0); r_esp += 4; return;
}

void f_0082cadc(void) /* sub_82CADC */
{
    FN_ENTER(0x0082cadc);
    /* 0082cadc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082cae0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082cae2: je 0x82cafc */ if (fZ) goto L_0082cafc;
L_0082cae4:; BB(0x0082cae4);
    /* 0082cae4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0082cae8: mov dword ptr [0xacbe78], eax */ W32((u32)(0xacbe78u), r_eax);
    /* 0082caed: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082caf1: mov dword ptr [0xacbe7c], eax */ W32((u32)(0xacbe7cu), r_eax);
    /* 0082caf6: mov dword ptr [0xacbe80], edx */ W32((u32)(0xacbe80u), r_edx);
L_0082cafc:; BB(0x0082cafc);
    /* 0082cafc: ret  */ FN_RET(0x0082cadc); r_esp += 4; return;
}

void f_0082cb00(void) /* sub_82CB00 */
{
    FN_ENTER(0x0082cb00);
    /* 0082cb00: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082cb04: mov eax, edx */ r_eax = r_edx;
    /* 0082cb06: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0082cb09: mov word ptr [0xacbeb0], ax */ W16((u32)(0xacbeb0u), (u16)r_eax);
    /* 0082cb0f: mov word ptr [0xacbeb8], dx */ W16((u32)(0xacbeb8u), (u16)r_edx);
    /* 0082cb16: ret  */ FN_RET(0x0082cb00); r_esp += 4; return;
}

void f_0082cb18(void) /* sub_82CB18 */
{
    FN_ENTER(0x0082cb18);
    /* 0082cb18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082cb19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082cb1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082cb1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cb1c: sub esp, 0x4e8 */ {  u32 a = r_esp; u32 b = 0x4e8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082cb22: mov esi, dword ptr [esp + 0x4fc] */ r_esi = R32((u32)(r_esp+0x4fcu));
    /* 0082cb29: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cb2b: mov edx, dword ptr [esp + 0x504] */ r_edx = R32((u32)(r_esp+0x504u));
    /* 0082cb32: mov ebp, dword ptr [esp + 0x508] */ r_ebp = R32((u32)(r_esp+0x508u));
    /* 0082cb39: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0082cb3d: mov dword ptr [0xacbe60], ecx */ W32((u32)(0xacbe60u), r_ecx);
    /* 0082cb43: mov dword ptr [0xacbe84], ecx */ W32((u32)(0xacbe84u), r_ecx);
    /* 0082cb49: mov dword ptr [0xacbe88], ecx */ W32((u32)(0xacbe88u), r_ecx);
    /* 0082cb4f: mov ebx, 0xacbe94 */ r_ebx = 0xacbe94u;
    /* 0082cb54: mov dword ptr [0xacbe8c], ecx */ W32((u32)(0xacbe8cu), r_ecx);
    /* 0082cb5a: mov dword ptr [0xacbe90], ecx */ W32((u32)(0xacbe90u), r_ecx);
    /* 0082cb60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cb62: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0082cb64: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0082cb67: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0082cb6a: mov byte ptr [ebx + 0xc], cl */ W8((u32)(r_ebx+0xcu), (u8)r_ecx);
    /* 0082cb6d: mov ebx, 0xacbea4 */ r_ebx = 0xacbea4u;
    /* 0082cb72: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cb74: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0082cb76: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0082cb79: mov byte ptr [ebx + 8], cl */ W8((u32)(r_ebx+0x8u), (u8)r_ecx);
    /* 0082cb7c: call 0x8c0bb0 */ r_esp -= 4; W32(r_esp, 0x82cb81u); f_008c0bb0();
    /* 0082cb81: mov ebx, eax */ r_ebx = r_eax;
    /* 0082cb83: cmp ebx, 0x755 */ {  u32 a = r_ebx; u32 b = 0x755u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cb89: je 0x82d02f */ if (fZ) goto L_0082d02f;
L_0082cb8f:; BB(0x0082cb8f);
    /* 0082cb8f: mov ebx, dword ptr [0xae7a24] */ r_ebx = R32((u32)(0xae7a24u));
    /* 0082cb95: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082cb98: jl 0x82ccaa */ if ((fS!=fO)) goto L_0082ccaa;
L_0082cb9e:; BB(0x0082cb9e);
    /* 0082cb9e: mov ecx, dword ptr [0xae7a28] */ r_ecx = R32((u32)(0xae7a28u));
    /* 0082cba4: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082cba7: call 0x85a072 */ r_esp -= 4; W32(r_esp, 0x82cbacu); f_0085a072();
    /* 0082cbac: mov edi, dword ptr [0x98a340] */ r_edi = R32((u32)(0x98a340u));
    /* 0082cbb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082cbb5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cbb7: je 0x82cca3 */ if (fZ) goto L_0082cca3;
L_0082cbbd:; BB(0x0082cbbd);
    /* 0082cbbd: mov ecx, edi */ r_ecx = r_edi;
    /* 0082cbbf: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cbc5: shr ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082cbc8: mov edx, edi */ r_edx = r_edi;
    /* 0082cbca: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082cbd0: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0082cbd3: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cbd5: mov edx, edi */ r_edx = r_edi;
    /* 0082cbd7: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0082cbda: and edx, 0xff00 */ {  u32 a = r_edx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082cbe0: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0082cbe3: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cbe5: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cbe7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cbe9: je 0x82cc92 */ if (fZ) goto L_0082cc92;
L_0082cbef:; BB(0x0082cbef);
    /* 0082cbef: cmp eax, dword ptr [0x98a348] */ {  u32 a = r_eax; u32 b = R32((u32)(0x98a348u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cbf5: jne 0x82cc8e */ if (!fZ) goto L_0082cc8e;
L_0082cbfb:; BB(0x0082cbfb);
    /* 0082cbfb: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082cbfe: jge 0x82cc1b */ if ((fS==fO)) goto L_0082cc1b;
L_0082cc00:; BB(0x0082cc00);
    /* 0082cc00: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0082cc05: mov dword ptr [0xacbec0], ecx */ W32((u32)(0xacbec0u), r_ecx);
    /* 0082cc0b: mov dword ptr [0xacbe90], ecx */ W32((u32)(0xacbe90u), r_ecx);
    /* 0082cc11: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0082cc16: jmp 0x82ccac */ goto L_0082ccac;
L_0082cc1b:; BB(0x0082cc1b);
    /* 0082cc1b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0082cc1f: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cc24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cc26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cc27: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x82cc2cu); f_0086b688();
    /* 0082cc2c: mov ebx, dword ptr [0xae7a28] */ r_ebx = R32((u32)(0xae7a28u));
    /* 0082cc32: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0082cc36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cc37: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082cc3a: call 0x88f4f0 */ r_esp -= 4; W32(r_esp, 0x82cc3fu); f_0088f4f0();
    /* 0082cc3f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082cc42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cc44: jne 0x82cc8a */ if (!fZ) goto L_0082cc8a;
L_0082cc46:; BB(0x0082cc46);
    /* 0082cc46: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 0082cc4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082cc4c: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0082cc4e: mov ecx, edi */ r_ecx = r_edi;
    /* 0082cc50: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082cc52: je 0x82cc60 */ if (fZ) goto L_0082cc60;
L_0082cc54:; BB(0x0082cc54);
    /* 0082cc54: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cc57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082cc5a: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0082cc5c: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082cc5e: jne 0x82cc54 */ if (!fZ) goto L_0082cc54;
L_0082cc60:; BB(0x0082cc60);
    /* 0082cc60: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0082cc63: jb 0x82cc6a */ if (fC) goto L_0082cc6a;
L_0082cc65:; BB(0x0082cc65);
    /* 0082cc65: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0082cc68: jbe 0x82cc6e */ if ((fC||fZ)) goto L_0082cc6e;
L_0082cc6a:; BB(0x0082cc6a);
    /* 0082cc6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cc6c: jmp 0x82ccac */ goto L_0082ccac;
L_0082cc6e:; BB(0x0082cc6e);
    /* 0082cc6e: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 0082cc72: jmp 0x82cc77 */ goto L_0082cc77;
L_0082cc74:; BB(0x0082cc74);
    /* 0082cc74: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0082cc77:; BB(0x0082cc77);
    /* 0082cc77: movsx ecx, byte ptr [ebx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 0082cc7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cc7b: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x82cc80u); f_00858286();
    /* 0082cc80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082cc81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cc83: jne 0x82cc74 */ if (!fZ) goto L_0082cc74;
L_0082cc85:; BB(0x0082cc85);
    /* 0082cc85: jmp 0x82cec7 */ goto L_0082cec7;
L_0082cc8a:; BB(0x0082cc8a);
    /* 0082cc8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cc8c: jmp 0x82ccac */ goto L_0082ccac;
L_0082cc8e:; BB(0x0082cc8e);
    /* 0082cc8e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cc90: jmp 0x82ccac */ goto L_0082ccac;
L_0082cc92:; BB(0x0082cc92);
    /* 0082cc92: mov dword ptr [0xacbec0], 1 */ W32((u32)(0xacbec0u), 0x1u);
    /* 0082cc9c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0082cca1: jmp 0x82ccac */ goto L_0082ccac;
L_0082cca3:; BB(0x0082cca3);
    /* 0082cca3: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0082cca8: jmp 0x82ccac */ goto L_0082ccac;
L_0082ccaa:; BB(0x0082ccaa);
    /* 0082ccaa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0082ccac:; BB(0x0082ccac);
    /* 0082ccac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;   }
    /* 0082ccae: jmp 0x82ccc2 */ goto L_0082ccc2;
L_0082ccc2:; BB(0x0082ccc2);
    /* 0082ccc2: push 0x98a354 */ { u32 v = 0x98a354u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ccc7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ccc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ccca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cccb: call dword ptr [0x8f8178] */ { u32 t = R32((u32)(0x8f8178u)); r_esp -= 4; W32(r_esp, 0x82ccd1u); call_ind(t); }
    /* 0082ccd1: mov ebx, eax */ r_ebx = r_eax;
    /* 0082ccd3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ccd5: je 0x82cceb */ if (fZ) goto L_0082cceb;
L_0082ccd7:; BB(0x0082ccd7);
    /* 0082ccd7: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x82ccddu); call_ind(t); }
    /* 0082ccdd: cmp eax, 0xb7 */ {  u32 a = r_eax; u32 b = 0xb7u; u32 r = (a - b) & 0xffffffffu;   }
    /* 0082cce2: jmp 0x82ccfd */ goto L_0082ccfd;
L_0082cceb:; BB(0x0082cceb);
    /* 0082cceb: mov eax, 1 */ r_eax = 0x1u;
    /* 0082ccf0: add esp, 0x4e8 */ {  u32 a = r_esp; u32 b = 0x4e8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082ccf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082ccf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082ccf8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082ccf9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082ccfa: ret 0x10 */ FN_RET(0x0082cb18); r_esp += 20; return;
L_0082ccfd:; BB(0x0082ccfd);
    /* 0082ccfd: mov ecx, dword ptr [0xae7a28] */ r_ecx = R32((u32)(0xae7a28u));
    /* 0082cd03: lea edi, [esp + 0xcc] */ r_edi = (u32)(r_esp+0xccu);
    /* 0082cd0a: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cd0f: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 0082cd11: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082cd12: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x82cd17u); f_00858900();
    /* 0082cd17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082cd1a: lea edi, [esp + 0xcc] */ r_edi = (u32)(r_esp+0xccu);
    /* 0082cd21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082cd23: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0082cd25: mov ecx, edi */ r_ecx = r_edi;
    /* 0082cd27: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082cd29: je 0x82cd37 */ if (fZ) goto L_0082cd37;
L_0082cd2b:; BB(0x0082cd2b);
    /* 0082cd2b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cd2e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082cd31: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0082cd33: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082cd35: jne 0x82cd2b */ if (!fZ) goto L_0082cd2b;
L_0082cd37:; BB(0x0082cd37);
    /* 0082cd37: lea edi, [esp + 0xcc] */ r_edi = (u32)(r_esp+0xccu);
    /* 0082cd3e: lea ecx, [esp + eax + 0xcb] */ r_ecx = (u32)(r_esp+r_eax+0xcbu);
    /* 0082cd45: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cd47: je 0x82cd5f */ if (fZ) goto L_0082cd5f;
L_0082cd49:; BB(0x0082cd49);
    /* 0082cd49: movsx edi, byte ptr [ecx] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0082cd4c: cmp edi, 0x5c */ {  u32 a = r_edi; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cd4f: je 0x82cd5f */ if (fZ) goto L_0082cd5f;
L_0082cd51:; BB(0x0082cd51);
    /* 0082cd51: lea edi, [esp + 0xcc] */ r_edi = (u32)(r_esp+0xccu);
    /* 0082cd58: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cd5b: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cd5d: jne 0x82cd49 */ if (!fZ) goto L_0082cd49;
L_0082cd5f:; BB(0x0082cd5f);
    /* 0082cd5f: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0082cd62: lea ecx, [esp + 0xcc] */ r_ecx = (u32)(r_esp+0xccu);
    /* 0082cd69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cd6a: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x82cd6fu); f_0085afdb();
    /* 0082cd6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082cd70: lea ecx, [esp + 0xcc] */ r_ecx = (u32)(r_esp+0xccu);
    /* 0082cd77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cd78: call dword ptr [0x8f8148] */ { u32 t = R32((u32)(0x8f8148u)); r_esp -= 4; W32(r_esp, 0x82cd7eu); call_ind(t); }
    /* 0082cd7e: lea ecx, [esp + 0xcc] */ r_ecx = (u32)(r_esp+0xccu);
    /* 0082cd85: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cd8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cd8b: push 0xacba40 */ { u32 v = 0xacba40u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cd90: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x82cd95u); f_00858900();
    /* 0082cd95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082cd98: mov dword ptr [0xacbed8], 0 */ W32((u32)(0xacbed8u), 0x0u);
    /* 0082cda2: mov dword ptr [0xacbedc], esi */ W32((u32)(0xacbedcu), r_esi);
    /* 0082cda8: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cdaa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082cdab: call dword ptr [0x8f837c] */ { u32 t = R32((u32)(0x8f837cu)); r_esp -= 4; W32(r_esp, 0x82cdb1u); call_ind(t); }
    /* 0082cdb1: mov dword ptr [0xacbed4], eax */ W32((u32)(0xacbed4u), r_eax);
    /* 0082cdb6: push 0x7f00 */ { u32 v = 0x7f00u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cdbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cdbd: call dword ptr [0x8f837c] */ { u32 t = R32((u32)(0x8f837cu)); r_esp -= 4; W32(r_esp, 0x82cdc3u); call_ind(t); }
    /* 0082cdc3: mov dword ptr [0xacbed0], eax */ W32((u32)(0xacbed0u), r_eax);
    /* 0082cdc8: push 0x7f84 */ { u32 v = 0x7f84u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cdcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cdcf: call dword ptr [0x8f837c] */ { u32 t = R32((u32)(0x8f837cu)); r_esp -= 4; W32(r_esp, 0x82cdd5u); call_ind(t); }
    /* 0082cdd5: mov dword ptr [0xacbecc], eax */ W32((u32)(0xacbeccu), r_eax);
    /* 0082cdda: push 0x7f85 */ { u32 v = 0x7f85u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cddf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cde1: call dword ptr [0x8f837c] */ { u32 t = R32((u32)(0x8f837cu)); r_esp -= 4; W32(r_esp, 0x82cde7u); call_ind(t); }
    /* 0082cde7: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0082cdeb: mov dword ptr [0xacbe68], 0xffffffff */ W32((u32)(0xacbe68u), 0xffffffffu);
    /* 0082cdf5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0082cdf7: mov dword ptr [0xacbec8], eax */ W32((u32)(0xacbec8u), r_eax);
    /* 0082cdfc: mov dword ptr [0xacbe70], 0x98a374 */ W32((u32)(0xacbe70u), 0x98a374u);
    /* 0082ce06: mov dword ptr [0xacbe64], ecx */ W32((u32)(0xacbe64u), r_ecx);
    /* 0082ce0c: mov ecx, dword ptr [0xacbe90] */ r_ecx = R32((u32)(0xacbe90u));
    /* 0082ce12: mov dword ptr [0xacbe6c], ebp */ W32((u32)(0xacbe6cu), r_ebp);
    /* 0082ce18: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ce1a: mov dword ptr [0xacbe74], edi */ W32((u32)(0xacbe74u), r_edi);
    /* 0082ce20: mov dword ptr [0xacbe7c], 0x280 */ W32((u32)(0xacbe7cu), 0x280u);
    /* 0082ce2a: mov dword ptr [0xacbe78], edi */ W32((u32)(0xacbe78u), r_edi);
    /* 0082ce30: mov dword ptr [0xacbe80], 0x1e0 */ W32((u32)(0xacbe80u), 0x1e0u);
    /* 0082ce3a: je 0x82ce49 */ if (fZ) goto L_0082ce49;
L_0082ce3c:; BB(0x0082ce3c);
    /* 0082ce3c: push 0x98a394 */ { u32 v = 0x98a394u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ce41: call 0x7a6080 */ r_esp -= 4; W32(r_esp, 0x82ce46u); f_007a6080();
    /* 0082ce46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082ce47: jmp 0x82ce51 */ goto L_0082ce51;
L_0082ce49:; BB(0x0082ce49);
    /* 0082ce49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ce4b: call 0x7a6080 */ r_esp -= 4; W32(r_esp, 0x82ce50u); f_007a6080();
    /* 0082ce50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082ce51:; BB(0x0082ce51);
    /* 0082ce51: mov ecx, dword ptr [0xacbe78] */ r_ecx = R32((u32)(0xacbe78u));
    /* 0082ce57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ce59: je 0x82ce65 */ if (fZ) goto L_0082ce65;
L_0082ce5b:; BB(0x0082ce5b);
    /* 0082ce5b: mov dword ptr [0xacbef0], 1 */ W32((u32)(0xacbef0u), 0x1u);
L_0082ce65:; BB(0x0082ce65);
    /* 0082ce65: mov dword ptr [0xacbe60], 1 */ W32((u32)(0xacbe60u), 0x1u);
    /* 0082ce6f: mov eax, esi */ r_eax = r_esi;
    /* 0082ce71: mov edx, ebp */ r_edx = r_ebp;
    /* 0082ce73: call 0x82d050 */ r_esp -= 4; W32(r_esp, 0x82ce78u); f_0082d050();
    /* 0082ce78: mov edx, dword ptr [0xacbed8] */ r_edx = R32((u32)(0xacbed8u));
    /* 0082ce7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ce80: je 0x82cea6 */ if (fZ) goto L_0082cea6;
L_0082ce82:; BB(0x0082ce82);
    /* 0082ce82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ce83: call 0x8c0bd0 */ r_esp -= 4; W32(r_esp, 0x82ce88u); f_008c0bd0();
    /* 0082ce88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082ce89: mov edx, dword ptr [0xacbe60] */ r_edx = R32((u32)(0xacbe60u));
    /* 0082ce8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ce91: jne 0x82cf6d */ if (!fZ) goto L_0082cf6d;
L_0082ce97:; BB(0x0082ce97);
    /* 0082ce97: call 0x82d384 */ r_esp -= 4; W32(r_esp, 0x82ce9cu); f_0082d384();
    /* 0082ce9c: call 0x7a5e84 */ r_esp -= 4; W32(r_esp, 0x82cea1u); f_007a5e84();
    /* 0082cea1: call 0x82d20c */ r_esp -= 4; W32(r_esp, 0x82cea6u); f_0082d20c();
L_0082cea6:; BB(0x0082cea6);
    /* 0082cea6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cea7: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x82ceadu); call_ind(t); }
    /* 0082cead: mov eax, dword ptr [0xacbebc] */ r_eax = R32((u32)(0xacbebcu));
    /* 0082ceb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ceb4: je 0x82ceb8 */ if (fZ) goto L_0082ceb8;
L_0082ceb6:; BB(0x0082ceb6);
    /* 0082ceb6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x82ceb8u); call_ind(t); }
L_0082ceb8:; BB(0x0082ceb8);
    /* 0082ceb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082ceba: add esp, 0x4e8 */ {  u32 a = r_esp; u32 b = 0x4e8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082cec0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082cec1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082cec2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082cec3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082cec4: ret 0x10 */ FN_RET(0x0082cb18); r_esp += 20; return;
L_0082cec7:; BB(0x0082cec7);
    /* 0082cec7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cec9: push 0x98a350 */ { u32 v = 0x98a350u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cecf: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x82ced4u); f_008598c0();
    /* 0082ced4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082ced7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ced9: jne 0x82cf1f */ if (!fZ) goto L_0082cf1f;
L_0082cedb:; BB(0x0082cedb);
    /* 0082cedb: lea edi, [esp + 0x4c] */ r_edi = (u32)(r_esp+0x4cu);
    /* 0082cedf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082cee1: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0082cee3: mov ecx, edi */ r_ecx = r_edi;
    /* 0082cee5: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082cee7: je 0x82cef5 */ if (fZ) goto L_0082cef5;
L_0082cee9:; BB(0x0082cee9);
    /* 0082cee9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ceec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082ceef: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0082cef1: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082cef3: jne 0x82cee9 */ if (!fZ) goto L_0082cee9;
L_0082cef5:; BB(0x0082cef5);
    /* 0082cef5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0082cef8: jb 0x82ceff */ if (fC) goto L_0082ceff;
L_0082cefa:; BB(0x0082cefa);
    /* 0082cefa: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0082cefd: jbe 0x82cf06 */ if ((fC||fZ)) goto L_0082cf06;
L_0082ceff:; BB(0x0082ceff);
    /* 0082ceff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cf01: jmp 0x82ccac */ goto L_0082ccac;
L_0082cf06:; BB(0x0082cf06);
    /* 0082cf06: lea ebx, [esp + 0x4c] */ r_ebx = (u32)(r_esp+0x4cu);
    /* 0082cf0a: jmp 0x82cf0f */ goto L_0082cf0f;
L_0082cf0c:; BB(0x0082cf0c);
    /* 0082cf0c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0082cf0f:; BB(0x0082cf0f);
    /* 0082cf0f: movsx ecx, byte ptr [ebx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 0082cf12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf13: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x82cf18u); f_00858286();
    /* 0082cf18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082cf19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cf1b: jne 0x82cf0c */ if (!fZ) goto L_0082cf0c;
L_0082cf1d:; BB(0x0082cf1d);
    /* 0082cf1d: jmp 0x82cf26 */ goto L_0082cf26;
L_0082cf1f:; BB(0x0082cf1f);
    /* 0082cf1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cf21: jmp 0x82ccac */ goto L_0082ccac;
L_0082cf26:; BB(0x0082cf26);
    /* 0082cf26: movsx ecx, byte ptr [ebx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 0082cf29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cf2b: jne 0x82cf66 */ if (!fZ) goto L_0082cf66;
L_0082cf2d:; BB(0x0082cf2d);
    /* 0082cf2d: mov dword ptr [0xacbe90], 1 */ W32((u32)(0xacbe90u), 0x1u);
    /* 0082cf37: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0082cf3b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf3e: push 0xacbe94 */ { u32 v = 0xacbe94u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf43: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x82cf48u); f_00858900();
    /* 0082cf48: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0082cf4c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf4f: push 0xacbea4 */ { u32 v = 0xacbea4u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf54: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x82cf59u); f_00858900();
    /* 0082cf59: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082cf5c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0082cf61: jmp 0x82ccac */ goto L_0082ccac;
L_0082cf66:; BB(0x0082cf66);
    /* 0082cf66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082cf68: jmp 0x82ccac */ goto L_0082ccac;
L_0082cf6d:; BB(0x0082cf6d);
    /* 0082cf6d: mov dword ptr [0xacbe8c], 1 */ W32((u32)(0xacbe8cu), 0x1u);
    /* 0082cf77: call 0x8418c8 */ r_esp -= 4; W32(r_esp, 0x82cf7cu); f_008418c8();
L_0082cf7c:; BB(0x0082cf7c);
    /* 0082cf7c: lea ecx, [esp + 0x4cc] */ r_ecx = (u32)(r_esp+0x4ccu);
    /* 0082cf83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf85: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082cf87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cf8b: call dword ptr [0x8f8354] */ { u32 t = R32((u32)(0x8f8354u)); r_esp -= 4; W32(r_esp, 0x82cf91u); call_ind(t); }
    /* 0082cf91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cf93: je 0x82cfd6 */ if (fZ) goto L_0082cfd6;
L_0082cf95:; BB(0x0082cf95);
    /* 0082cf95: mov edx, dword ptr [esp + 0x4d0] */ r_edx = R32((u32)(r_esp+0x4d0u));
    /* 0082cf9c: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cf9f: je 0x82cfef */ if (fZ) goto L_0082cfef;
L_0082cfa1:; BB(0x0082cfa1);
    /* 0082cfa1: lea edx, [esp + 0x4cc] */ r_edx = (u32)(r_esp+0x4ccu);
    /* 0082cfa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cfa9: call dword ptr [0x8f835c] */ { u32 t = R32((u32)(0x8f835cu)); r_esp -= 4; W32(r_esp, 0x82cfafu); call_ind(t); }
    /* 0082cfaf: lea edx, [esp + 0x4cc] */ r_edx = (u32)(r_esp+0x4ccu);
    /* 0082cfb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cfb7: call dword ptr [0x8f8358] */ { u32 t = R32((u32)(0x8f8358u)); r_esp -= 4; W32(r_esp, 0x82cfbdu); call_ind(t); }
    /* 0082cfbd: lea ecx, [esp + 0x4cc] */ r_ecx = (u32)(r_esp+0x4ccu);
    /* 0082cfc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cfc6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082cfc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cfc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cfca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cfcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082cfcc: call dword ptr [0x8f8354] */ { u32 t = R32((u32)(0x8f8354u)); r_esp -= 4; W32(r_esp, 0x82cfd2u); call_ind(t); }
    /* 0082cfd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cfd4: jne 0x82cf95 */ if (!fZ) goto L_0082cf95;
L_0082cfd6:; BB(0x0082cfd6);
    /* 0082cfd6: call 0x8412dc */ r_esp -= 4; W32(r_esp, 0x82cfdbu); f_008412dc();
    /* 0082cfdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082cfdd: call dword ptr [0x8f8174] */ { u32 t = R32((u32)(0x8f8174u)); r_esp -= 4; W32(r_esp, 0x82cfe3u); call_ind(t); }
    /* 0082cfe3: mov edx, dword ptr [0xacbe8c] */ r_edx = R32((u32)(0xacbe8cu));
    /* 0082cfe9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082cfeb: jne 0x82cf7c */ if (!fZ) goto L_0082cf7c;
L_0082cfed:; BB(0x0082cfed);
    /* 0082cfed: jmp 0x82cffc */ goto L_0082cffc;
L_0082cfef:; BB(0x0082cfef);
    /* 0082cfef: mov edx, dword ptr [esp + 0x4d4] */ r_edx = R32((u32)(r_esp+0x4d4u));
    /* 0082cff6: mov dword ptr [0xacbe68], edx */ W32((u32)(0xacbe68u), r_edx);
L_0082cffc:; BB(0x0082cffc);
    /* 0082cffc: mov edx, dword ptr [0xacbe84] */ r_edx = R32((u32)(0xacbe84u));
    /* 0082d002: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082d004: je 0x82d025 */ if (fZ) goto L_0082d025;
L_0082d006:; BB(0x0082d006);
    /* 0082d006: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082d008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d009: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x82d00fu); call_ind(t); }
    /* 0082d00f: push dword ptr [0xacbe84] */ { u32 v = R32((u32)(0xacbe84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082d015: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x82d01bu); call_ind(t); }
    /* 0082d01b: mov dword ptr [0xacbe84], 0 */ W32((u32)(0xacbe84u), 0x0u);
L_0082d025:; BB(0x0082d025);
    /* 0082d025: call 0x83fea8 */ r_esp -= 4; W32(r_esp, 0x82d02au); f_0083fea8();
    /* 0082d02a: jmp 0x82cea6 */ goto L_0082cea6;
L_0082d02f:; BB(0x0082d02f);
    /* 0082d02f: call 0x845060 */ r_esp -= 4; W32(r_esp, 0x82d034u); f_00845060();
    /* 0082d034: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082d036: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082d037: mov ecx, eax */ r_ecx = r_eax;
    /* 0082d039: call 0x844ff4 */ r_esp -= 4; W32(r_esp, 0x82d03eu); f_00844ff4();
    /* 0082d03e: mov eax, 1 */ r_eax = 0x1u;
    /* 0082d043: add esp, 0x4e8 */ {  u32 a = r_esp; u32 b = 0x4e8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082d049: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082d04a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082d04b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082d04c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082d04d: ret 0x10 */ FN_RET(0x0082cb18); r_esp += 20; return;
}

