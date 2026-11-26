#include "protos.h"

void f_0054b144(void) /* sub_54B144 */
{
    FN_ENTER(0x0054b144);
    /* 0054b144: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054b145: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b146: mov esi, ecx */ r_esi = r_ecx;
    /* 0054b148: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0054b14c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b14f: je 0x54b22a */ if (fZ) goto L_0054b22a;
L_0054b155:; BB(0x0054b155);
    /* 0054b155: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b158: je 0x54b20d */ if (fZ) goto L_0054b20d;
L_0054b15e:; BB(0x0054b15e);
    /* 0054b15e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b160: jne 0x54b1f6 */ if (!fZ) goto L_0054b1f6;
L_0054b166:; BB(0x0054b166);
    /* 0054b166: mov ecx, esi */ r_ecx = r_esi;
    /* 0054b168: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54b16du); f_007aa094();
    /* 0054b16d: mov eax, dword ptr [esi + 0x4d4] */ r_eax = R32((u32)(r_esi+0x4d4u));
    /* 0054b173: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b175: jne 0x54b1b2 */ if (!fZ) goto L_0054b1b2;
L_0054b177:; BB(0x0054b177);
    /* 0054b177: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0054b17d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054b17f: je 0x54b225 */ if (fZ) goto L_0054b225;
L_0054b185:; BB(0x0054b185);
    /* 0054b185: lea ebx, [esi + 0x300] */ r_ebx = (u32)(r_esi+0x300u);
    /* 0054b18b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b18c: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x54b191u); f_005787fc();
    /* 0054b191: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054b193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b195: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b196: push 0x285 */ { u32 v = 0x285u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b19b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54b1a0u); f_00814298();
    /* 0054b1a0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b1a3: mov dword ptr [esi + 0x4d4], 1 */ W32((u32)(r_esi+0x4d4u), 0x1u);
    /* 0054b1ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054b1ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054b1af: ret 4 */ FN_RET(0x0054b144); r_esp += 8; return;
L_0054b1b2:; BB(0x0054b1b2);
    /* 0054b1b2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054b1b5: jne 0x54b1e7 */ if (!fZ) goto L_0054b1e7;
L_0054b1b7:; BB(0x0054b1b7);
    /* 0054b1b7: mov eax, dword ptr [esi + 0x3dc] */ r_eax = R32((u32)(r_esi+0x3dcu));
    /* 0054b1bd: lea ecx, [esi + 0x3dc] */ r_ecx = (u32)(r_esi+0x3dcu);
    /* 0054b1c3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x54b1c6u); call_ind(t); }
    /* 0054b1c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054b1c8: je 0x54b225 */ if (fZ) goto L_0054b225;
L_0054b1ca:; BB(0x0054b1ca);
    /* 0054b1ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b1cc: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0054b1cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b1d0: call 0x578658 */ r_esp -= 4; W32(r_esp, 0x54b1d5u); f_00578658();
    /* 0054b1d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b1d8: mov dword ptr [esi + 0x4d4], 2 */ W32((u32)(r_esi+0x4d4u), 0x2u);
    /* 0054b1e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054b1e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054b1e4: ret 4 */ FN_RET(0x0054b144); r_esp += 8; return;
L_0054b1e7:; BB(0x0054b1e7);
    /* 0054b1e7: mov dword ptr [esi + 0x4d4], 2 */ W32((u32)(r_esi+0x4d4u), 0x2u);
    /* 0054b1f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054b1f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054b1f3: ret 4 */ FN_RET(0x0054b144); r_esp += 8; return;
L_0054b1f6:; BB(0x0054b1f6);
    /* 0054b1f6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054b1f9: jne 0x54b225 */ if (!fZ) goto L_0054b225;
L_0054b1fb:; BB(0x0054b1fb);
    /* 0054b1fb: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0054b1ff: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054b204: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0054b208: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054b209: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054b20a: ret 4 */ FN_RET(0x0054b144); r_esp += 8; return;
L_0054b20d:; BB(0x0054b20d);
    /* 0054b20d: mov eax, dword ptr [esi + 0x4d4] */ r_eax = R32((u32)(r_esi+0x4d4u));
    /* 0054b213: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054b216: jne 0x54b225 */ if (!fZ) goto L_0054b225;
L_0054b218:; BB(0x0054b218);
    /* 0054b218: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0054b21c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054b221: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_0054b225:; BB(0x0054b225);
    /* 0054b225: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054b226: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054b227: ret 4 */ FN_RET(0x0054b144); r_esp += 8; return;
L_0054b22a:; BB(0x0054b22a);
    /* 0054b22a: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 0054b230: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 0054b232: mov eax, 9 */ r_eax = 0x9u;
    /* 0054b237: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0054b23e: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054b241: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054b244: mov dword ptr [esi + 0x3c8], edx */ W32((u32)(r_esi+0x3c8u), r_edx);
    /* 0054b24a: mov ecx, esi */ r_ecx = r_esi;
    /* 0054b24c: call dword ptr [ebx + 0x180] */ { u32 t = R32((u32)(r_ebx+0x180u)); r_esp -= 4; W32(r_esp, 0x54b252u); call_ind(t); }
    /* 0054b252: mov ecx, esi */ r_ecx = r_esi;
    /* 0054b254: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x54b259u); f_0051f894();
    /* 0054b259: lea ecx, [esi + 0x3dc] */ r_ecx = (u32)(r_esi+0x3dcu);
    /* 0054b25f: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x54b264u); f_00512458();
    /* 0054b264: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x54b269u); f_00807ac0();
    /* 0054b269: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b26c: je 0x54b29a */ if (fZ) goto L_0054b29a;
L_0054b26e:; BB(0x0054b26e);
    /* 0054b26e: push 0x26f */ { u32 v = 0x26fu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b273: mov ecx, esi */ r_ecx = r_esi;
    /* 0054b275: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54b27au); f_007879b8();
    /* 0054b27a: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0054b27d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054b27f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b280: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b281: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b282: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b283: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54b288u); f_00814298();
    /* 0054b288: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0054b28b:; BB(0x0054b28b);
    /* 0054b28b: mov dword ptr [esi + 0x4d4], 0 */ W32((u32)(r_esi+0x4d4u), 0x0u);
    /* 0054b295: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054b296: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054b297: ret 4 */ FN_RET(0x0054b144); r_esp += 8; return;
L_0054b29a:; BB(0x0054b29a);
    /* 0054b29a: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0054b29d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054b29f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2a2: push 0x2e3 */ { u32 v = 0x2e3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2a7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54b2acu); f_00814298();
    /* 0054b2ac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b2af: jmp 0x54b28b */ goto L_0054b28b;
}

void f_0054b2b4(void) /* sub_54B2B4 */
{
    FN_ENTER(0x0054b2b4);
    /* 0054b2b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2b5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054b2b8: mov edi, ecx */ r_edi = r_ecx;
    /* 0054b2ba: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0054b2be: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b2c1: je 0x54b3af */ if (fZ) goto L_0054b3af;
L_0054b2c7:; BB(0x0054b2c7);
    /* 0054b2c7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b2ca: je 0x54b370 */ if (fZ) goto L_0054b370;
L_0054b2d0:; BB(0x0054b2d0);
    /* 0054b2d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b2d2: jne 0x54b356 */ if (!fZ) goto L_0054b356;
L_0054b2d8:; BB(0x0054b2d8);
    /* 0054b2d8: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b2da: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54b2dfu); f_007aa094();
    /* 0054b2df: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 0054b2e5: mov edx, dword ptr [edi + 0x310] */ r_edx = R32((u32)(r_edi+0x310u));
    /* 0054b2eb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054b2ee: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 0054b2f4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054b2f8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054b2fc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054b2ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b300: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x54b305u); f_007828e4();
    /* 0054b305: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054b306: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b309: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0054b30d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0054b311: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0054b315: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b317: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054b31a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054b31e: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x54b323u); f_005209d4();
    /* 0054b323: fld dword ptr [0x924238] */ FPUSH(R_F32((u32)(0x924238u)));
    /* 0054b329: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0054b32f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0054b331: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0054b337: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0054b339: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0054b33b: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0054b341: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0054b347: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b349: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54b34fu); call_ind(t); }
    /* 0054b34f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b352: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054b353: ret 4 */ FN_RET(0x0054b2b4); r_esp += 8; return;
L_0054b356:; BB(0x0054b356);
    /* 0054b356: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b359: jne 0x54b3a8 */ if (!fZ) goto L_0054b3a8;
L_0054b35b:; BB(0x0054b35b);
    /* 0054b35b: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b35d: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x54b362u); f_0051f81c();
    /* 0054b362: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b364: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x54b369u); f_00520be8();
    /* 0054b369: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b36c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054b36d: ret 4 */ FN_RET(0x0054b2b4); r_esp += 8; return;
L_0054b370:; BB(0x0054b370);
    /* 0054b370: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0054b376: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054b378: je 0x54b3a8 */ if (fZ) goto L_0054b3a8;
L_0054b37a:; BB(0x0054b37a);
    /* 0054b37a: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b37c: call 0x54b3d0 */ r_esp -= 4; W32(r_esp, 0x54b381u); f_0054b3d0();
    /* 0054b381: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b383: jne 0x54b3a8 */ if (!fZ) goto L_0054b3a8;
L_0054b385:; BB(0x0054b385);
    /* 0054b385: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b387: call 0x54b420 */ r_esp -= 4; W32(r_esp, 0x54b38cu); f_0054b420();
    /* 0054b38c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b38e: jne 0x54b3a8 */ if (!fZ) goto L_0054b3a8;
L_0054b390:; BB(0x0054b390);
    /* 0054b390: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b392: call 0x54b44c */ r_esp -= 4; W32(r_esp, 0x54b397u); f_0054b44c();
    /* 0054b397: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b399: jne 0x54b3a8 */ if (!fZ) goto L_0054b3a8;
L_0054b39b:; BB(0x0054b39b);
    /* 0054b39b: push dword ptr [edi + 0x380] */ { u32 v = R32((u32)(r_edi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054b3a1: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b3a3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54b3a8u); f_0051f62c();
L_0054b3a8:; BB(0x0054b3a8);
    /* 0054b3a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b3ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054b3ac: ret 4 */ FN_RET(0x0054b2b4); r_esp += 8; return;
L_0054b3af:; BB(0x0054b3af);
    /* 0054b3af: mov eax, 6 */ r_eax = 0x6u;
    /* 0054b3b4: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0054b3bb: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b3bd: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54b3c2u); f_007aa094();
    /* 0054b3c2: mov ecx, edi */ r_ecx = r_edi;
    /* 0054b3c4: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x54b3c9u); f_00520bdc();
    /* 0054b3c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b3cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054b3cd: ret 4 */ FN_RET(0x0054b2b4); r_esp += 8; return;
}

void f_0054b3d0(void) /* sub_54B3D0 */
{
    FN_ENTER(0x0054b3d0);
    /* 0054b3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054b3d1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054b3d3: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0054b3d9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054b3db: jne 0x54b41a */ if (!fZ) goto L_0054b41a;
L_0054b3dd:; BB(0x0054b3dd);
    /* 0054b3dd: movsx ecx, word ptr [ebp + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2bcu));
    /* 0054b3e4: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0054b3eb: lea eax, [ecx] */ r_eax = (u32)(r_ecx);
    /* 0054b3ed: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0054b3f0: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b3f2: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0054b3f4: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b3f6: jg 0x54b41a */ if ((!fZ&&fS==fO)) goto L_0054b41a;
L_0054b3f8:; BB(0x0054b3f8);
    /* 0054b3f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b3fa: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x54b3ffu); f_007751b0();
    /* 0054b3ff: fcomp dword ptr [ebp + 0x4c0] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4c0u))); FPOP();
    /* 0054b405: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054b407: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054b408: ja 0x54b41a */ if ((!fC&&!fZ)) goto L_0054b41a;
L_0054b40a:; BB(0x0054b40a);
    /* 0054b40a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b40c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b40e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54b413u); f_0051f62c();
    /* 0054b413: mov eax, 1 */ r_eax = 0x1u;
    /* 0054b418: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b419: ret  */ FN_RET(0x0054b3d0); r_esp += 4; return;
L_0054b41a:; BB(0x0054b41a);
    /* 0054b41a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054b41c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b41d: ret  */ FN_RET(0x0054b3d0); r_esp += 4; return;
}

void f_0054b420(void) /* sub_54B420 */
{
    FN_ENTER(0x0054b420);
    /* 0054b420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054b421: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054b423: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b425: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x54b42au); f_007751b0();
    /* 0054b42a: fcomp dword ptr [ebp + 0x4b0] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4b0u))); FPOP();
    /* 0054b430: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054b432: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054b433: ja 0x54b445 */ if ((!fC&&!fZ)) goto L_0054b445;
L_0054b435:; BB(0x0054b435);
    /* 0054b435: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b437: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b439: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54b43eu); f_0051f62c();
    /* 0054b43e: mov eax, 1 */ r_eax = 0x1u;
    /* 0054b443: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b444: ret  */ FN_RET(0x0054b420); r_esp += 4; return;
L_0054b445:; BB(0x0054b445);
    /* 0054b445: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054b447: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b448: ret  */ FN_RET(0x0054b420); r_esp += 4; return;
}

void f_0054b44c(void) /* sub_54B44C */
{
    FN_ENTER(0x0054b44c);
    /* 0054b44c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054b44d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054b44f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b451: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x54b456u); f_007751b0();
    /* 0054b456: fcomp dword ptr [ebp + 0x4bc] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4bcu))); FPOP();
    /* 0054b45c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054b45e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054b45f: ja 0x54b471 */ if ((!fC&&!fZ)) goto L_0054b471;
L_0054b461:; BB(0x0054b461);
    /* 0054b461: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b463: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b465: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54b46au); f_0051f62c();
    /* 0054b46a: mov eax, 1 */ r_eax = 0x1u;
    /* 0054b46f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b470: ret  */ FN_RET(0x0054b44c); r_esp += 4; return;
L_0054b471:; BB(0x0054b471);
    /* 0054b471: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054b473: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b474: ret  */ FN_RET(0x0054b44c); r_esp += 4; return;
}

void f_0054b478(void) /* sub_54B478 */
{
    FN_ENTER(0x0054b478);
    /* 0054b478: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b479: mov ebx, esp */ r_ebx = r_esp;
    /* 0054b47b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0054b47e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054b47f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054b480: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0054b483: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0054b487: mov ebp, esp */ r_ebp = r_esp;
    /* 0054b489: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b48b: push 0x8d5c2a */ { u32 v = 0x8d5c2au; r_esp -= 4; W32(r_esp, v); }
    /* 0054b490: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054b496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b497: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054b49e: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054b4a1: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054b4a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0054b4a7: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 0054b4aa: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0054b4ad: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0054b4b0: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0054b4b3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b4b6: je 0x54b9aa */ if (fZ) goto L_0054b9aa;
L_0054b4bc:; BB(0x0054b4bc);
    /* 0054b4bc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b4bf: je 0x54b793 */ if (fZ) goto L_0054b793;
L_0054b4c5:; BB(0x0054b4c5);
    /* 0054b4c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b4c7: jne 0x54b77b */ if (!fZ) goto L_0054b77b;
L_0054b4cd:; BB(0x0054b4cd);
    /* 0054b4cd: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54b4d2u); f_007aa094();
    /* 0054b4d2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b4d5: mov eax, dword ptr [eax + 0x4d4] */ r_eax = R32((u32)(r_eax+0x4d4u));
    /* 0054b4db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b4dd: je 0x54b6e4 */ if (fZ) goto L_0054b6e4;
L_0054b4e3:; BB(0x0054b4e3);
    /* 0054b4e3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b4e6: jne 0x54b531 */ if (!fZ) goto L_0054b531;
L_0054b4e8:; BB(0x0054b4e8);
    /* 0054b4e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b4eb: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b4f0: push dword ptr [eax + 0x4e0] */ { u32 v = R32((u32)(r_eax+0x4e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054b4f6: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054b4f9: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x54b4feu); f_007a8c74();
    /* 0054b4fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b501: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b504: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0054b507: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0054b50a: cmp eax, dword ptr [edx + 0x4e0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b510: jne 0x54b6c9 */ if (!fZ) goto L_0054b6c9;
L_0054b516:; BB(0x0054b516);
    /* 0054b516: mov dword ptr [edx + 0x4d4], 2 */ W32((u32)(r_edx+0x4d4u), 0x2u);
    /* 0054b520: mov eax, 5 */ r_eax = 0x5u;
    /* 0054b525: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0054b52c: jmp 0x54b6c9 */ goto L_0054b6c9;
L_0054b531:; BB(0x0054b531);
    /* 0054b531: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b534: jne 0x54b6c9 */ if (!fZ) goto L_0054b6c9;
L_0054b53a:; BB(0x0054b53a);
    /* 0054b53a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b53d: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0054b543: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054b546: je 0x54b54f */ if (fZ) goto L_0054b54f;
L_0054b548:; BB(0x0054b548);
    /* 0054b548: mov eax, 1 */ r_eax = 0x1u;
    /* 0054b54d: jmp 0x54b551 */ goto L_0054b551;
L_0054b54f:; BB(0x0054b54f);
    /* 0054b54f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0054b551:; BB(0x0054b551);
    /* 0054b551: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b553: je 0x54b630 */ if (fZ) goto L_0054b630;
L_0054b559:; BB(0x0054b559);
    /* 0054b559: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x54b55eu); f_00520e6c();
    /* 0054b55e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b560: je 0x54b623 */ if (fZ) goto L_0054b623;
L_0054b566:; BB(0x0054b566);
    /* 0054b566: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b569: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 0054b56f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054b572: mov dword ptr [eax + 0x4d8], edx */ W32((u32)(r_eax+0x4d8u), r_edx);
    /* 0054b578: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b57b: jl 0x54b58c */ if ((fS!=fO)) goto L_0054b58c;
L_0054b57d:; BB(0x0054b57d);
    /* 0054b57d: mov dword ptr [eax + 0x4d4], 4 */ W32((u32)(r_eax+0x4d4u), 0x4u);
    /* 0054b587: jmp 0x54b630 */ goto L_0054b630;
L_0054b58c:; BB(0x0054b58c);
    /* 0054b58c: fld dword ptr [0x924234] */ FPUSH(R_F32((u32)(0x924234u)));
    /* 0054b592: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0054b597: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0054b59a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054b59c: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0054b5a1: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0054b5a4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054b5a7: mov edi, 0 */ r_edi = 0x0u;
    /* 0054b5ac: jle 0x54b7cf */ if ((fZ||fS!=fO)) goto L_0054b7cf;
L_0054b5b2:; BB(0x0054b5b2);
    /* 0054b5b2: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0054b5b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5ba: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x54b5bfu); f_00520f3c();
    /* 0054b5bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054b5c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b5c2: je 0x54b614 */ if (fZ) goto L_0054b614;
L_0054b5c4:; BB(0x0054b5c4);
    /* 0054b5c4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b5c7: lea ecx, [eax + 0x300] */ r_ecx = (u32)(r_eax+0x300u);
    /* 0054b5cd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0054b5d0: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0054b5d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5d5: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x54b5dau); f_007a9180();
    /* 0054b5da: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0054b5dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b5e0: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0054b5e3: fcomp dword ptr [0xa738f8] */ fx_compare(ST(0), R_F32((u32)(0xa738f8u))); FPOP();
    /* 0054b5e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054b5eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054b5ec: jae 0x54b614 */ if (!fC) goto L_0054b614;
L_0054b5ee:; BB(0x0054b5ee);
    /* 0054b5ee: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0054b5f1: fcomp dword ptr [ebp - 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffd4u))); FPOP();
    /* 0054b5f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054b5f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054b5f7: jbe 0x54b614 */ if ((fC||fZ)) goto L_0054b614;
L_0054b5f9:; BB(0x0054b5f9);
    /* 0054b5f9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054b5fc: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0054b602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b603: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b604: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x54b609u); f_00780d3c();
    /* 0054b609: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b60c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b60e: je 0x54b7bd */ if (fZ) goto L_0054b7bd;
L_0054b614:; BB(0x0054b614);
    /* 0054b614: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054b617: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054b61a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b61c: jl 0x54b5b2 */ if ((fS!=fO)) goto L_0054b5b2;
L_0054b61e:; BB(0x0054b61e);
    /* 0054b61e: jmp 0x54b7cf */ goto L_0054b7cf;
L_0054b623:; BB(0x0054b623);
    /* 0054b623: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b626: mov dword ptr [eax + 0x4d4], 4 */ W32((u32)(r_eax+0x4d4u), 0x4u);
L_0054b630:; BB(0x0054b630);
    /* 0054b630: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b635: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b638: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54b63du); f_007aaa30();
    /* 0054b63d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b63f: je 0x54b6a1 */ if (fZ) goto L_0054b6a1;
L_0054b641:; BB(0x0054b641);
    /* 0054b641: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054b646: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 0054b649: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b64c: mov eax, dword ptr [edx + 0x4dc] */ r_eax = R32((u32)(r_edx+0x4dcu));
    /* 0054b652: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0054b655: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b65a: jle 0x54b666 */ if ((fZ||fS!=fO)) goto L_0054b666;
L_0054b65c:; BB(0x0054b65c);
    /* 0054b65c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0054b65f: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0054b661: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0054b664: jmp 0x54b677 */ goto L_0054b677;
L_0054b666:; BB(0x0054b666);
    /* 0054b666: cmp eax, 0x46 */ {  u32 a = r_eax; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b669: jle 0x54b677 */ if ((fZ||fS!=fO)) goto L_0054b677;
L_0054b66b:; BB(0x0054b66b);
    /* 0054b66b: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0054b66e: fmul dword ptr [0x92422c] */ ST(0) = ST(0) * R_F32((u32)(0x92422cu));
    /* 0054b674: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
L_0054b677:; BB(0x0054b677);
    /* 0054b677: mov eax, edx */ r_eax = r_edx;
    /* 0054b679: mov eax, dword ptr [eax + 0x4a8] */ r_eax = R32((u32)(r_eax+0x4a8u));
    /* 0054b67f: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0054b682: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0054b684: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054b686: jle 0x54b869 */ if ((fZ||fS!=fO)) goto L_0054b869;
L_0054b68c:; BB(0x0054b68c);
    /* 0054b68c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054b68e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054b691: mov dword ptr [ecx + esi*4], edx */ W32((u32)(r_ecx+r_esi*4), r_edx);
    /* 0054b694: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0054b697: cmp esi, dword ptr [eax + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b69a: jl 0x54b68c */ if ((fS!=fO)) goto L_0054b68c;
L_0054b69c:; BB(0x0054b69c);
    /* 0054b69c: jmp 0x54b869 */ goto L_0054b869;
L_0054b6a1:; BB(0x0054b6a1);
    /* 0054b6a1: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b6a6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b6a9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54b6aeu); f_007aaa30();
    /* 0054b6ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b6b0: je 0x54b6c9 */ if (fZ) goto L_0054b6c9;
L_0054b6b2:; BB(0x0054b6b2);
    /* 0054b6b2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b6b5: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b6ba: lea edx, [eax + 0x468] */ r_edx = (u32)(r_eax+0x468u);
    /* 0054b6c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b6c1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54b6c6u); f_0050b510();
    /* 0054b6c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b6c9:; BB(0x0054b6c9);
    /* 0054b6c9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b6cc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054b6ce: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x54b6d4u); call_ind(t); }
    /* 0054b6d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b6d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054b6d9: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54b6dfu); call_ind(t); }
    /* 0054b6df: jmp 0x54b7a4 */ goto L_0054b7a4;
L_0054b6e4:; BB(0x0054b6e4);
    /* 0054b6e4: fld dword ptr [0x924234] */ FPUSH(R_F32((u32)(0x924234u)));
    /* 0054b6ea: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0054b6ef: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0054b6f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054b6f4: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0054b6f9: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0054b6fc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0054b6ff: mov edi, 0 */ r_edi = 0x0u;
    /* 0054b704: jle 0x54b910 */ if ((fZ||fS!=fO)) goto L_0054b910;
L_0054b70a:; BB(0x0054b70a);
    /* 0054b70a: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0054b711: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054b712: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x54b717u); f_00520f3c();
    /* 0054b717: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054b718: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b71a: je 0x54b76c */ if (fZ) goto L_0054b76c;
L_0054b71c:; BB(0x0054b71c);
    /* 0054b71c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b71f: lea ecx, [eax + 0x300] */ r_ecx = (u32)(r_eax+0x300u);
    /* 0054b725: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0054b728: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0054b72b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b72c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b72d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x54b732u); f_007a9180();
    /* 0054b732: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0054b735: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b738: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0054b73b: fcomp dword ptr [0xa738f8] */ fx_compare(ST(0), R_F32((u32)(0xa738f8u))); FPOP();
    /* 0054b741: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054b743: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054b744: jae 0x54b76c */ if (!fC) goto L_0054b76c;
L_0054b746:; BB(0x0054b746);
    /* 0054b746: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0054b749: fcomp dword ptr [ebp - 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffdcu))); FPOP();
    /* 0054b74c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054b74e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054b74f: jbe 0x54b76c */ if ((fC||fZ)) goto L_0054b76c;
L_0054b751:; BB(0x0054b751);
    /* 0054b751: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054b754: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0054b75a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b75b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b75c: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x54b761u); f_00780d3c();
    /* 0054b761: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b766: je 0x54b8fe */ if (fZ) goto L_0054b8fe;
L_0054b76c:; BB(0x0054b76c);
    /* 0054b76c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054b76f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054b772: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b774: jl 0x54b70a */ if ((fS!=fO)) goto L_0054b70a;
L_0054b776:; BB(0x0054b776);
    /* 0054b776: jmp 0x54b910 */ goto L_0054b910;
L_0054b77b:; BB(0x0054b77b);
    /* 0054b77b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054b77e: jne 0x54b7a4 */ if (!fZ) goto L_0054b7a4;
L_0054b780:; BB(0x0054b780);
    /* 0054b780: mov edx, ecx */ r_edx = r_ecx;
    /* 0054b782: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 0054b788: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054b78b: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 0054b791: jmp 0x54b7a4 */ goto L_0054b7a4;
L_0054b793:; BB(0x0054b793);
    /* 0054b793: mov eax, ecx */ r_eax = r_ecx;
    /* 0054b795: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 0054b79b: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054b79e: je 0x54b99e */ if (fZ) goto L_0054b99e;
L_0054b7a4:; BB(0x0054b7a4);
    /* 0054b7a4: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0054b7a7: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0054b7aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054b7ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054b7b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0054b7b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b7b7: mov esp, ebx */ r_esp = r_ebx;
    /* 0054b7b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054b7ba: ret 4 */ FN_RET(0x0054b478); r_esp += 8; return;
L_0054b7bd:; BB(0x0054b7bd);
    /* 0054b7bd: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0054b7c0: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0054b7c4: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0054b7c7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0054b7ca: jmp 0x54b614 */ goto L_0054b614;
L_0054b7cf:; BB(0x0054b7cf);
    /* 0054b7cf: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054b7d2: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b7d7: je 0x54b84f */ if (fZ) goto L_0054b84f;
L_0054b7d9:; BB(0x0054b7d9);
    /* 0054b7d9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b7dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b7dd: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x54b7e2u); f_00520fcc();
    /* 0054b7e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b7e5: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x54b7eau); f_005213d8();
    /* 0054b7ea: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b7ed: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x54b7f2u); f_00521410();
    /* 0054b7f2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b7f5: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0054b7fb: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0054b801: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054b803: fmul qword ptr [0x924160] */ ST(0) = ST(0) * R_F64((u32)(0x924160u));
    /* 0054b809: fdiv qword ptr [0x924158] */ ST(0) = ST(0) / R_F64((u32)(0x924158u));
    /* 0054b80f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b812: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 0054b815: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 0054b819: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054b81e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0054b821: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0054b824: fistp dword ptr [ebp - 0x40] */ W32((u32)(r_ebp+0xffffffc0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054b827: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 0054b82a: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0054b82e: mov dword ptr [ecx + 0x4e0], eax */ W32((u32)(r_ecx+0x4e0u), r_eax);
    /* 0054b834: mov edx, 1 */ r_edx = 0x1u;
    /* 0054b839: mov dword ptr [ecx + 0x4d4], 0 */ W32((u32)(r_ecx+0x4d4u), 0x0u);
    /* 0054b843: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0054b84a: jmp 0x54b630 */ goto L_0054b630;
L_0054b84f:; BB(0x0054b84f);
    /* 0054b84f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b852: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x54b857u); f_00520f68();
    /* 0054b857: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b85a: mov dword ptr [eax + 0x4d4], 4 */ W32((u32)(r_eax+0x4d4u), 0x4u);
    /* 0054b864: jmp 0x54b630 */ goto L_0054b630;
L_0054b869:; BB(0x0054b869);
    /* 0054b869: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b86e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054b870: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0054b873: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0054b876: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x54b87bu); f_005caba4();
    /* 0054b87b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054b87c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0054b87f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b881: je 0x54b8d1 */ if (fZ) goto L_0054b8d1;
L_0054b883:; BB(0x0054b883);
    /* 0054b883: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0054b88a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054b891: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b894: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0054b897: mov esi, dword ptr [edi + 0x4e0] */ r_esi = R32((u32)(r_edi+0x4e0u));
    /* 0054b89d: mov ecx, dword ptr [edi + 0x4a8] */ r_ecx = R32((u32)(r_edi+0x4a8u));
    /* 0054b8a3: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b8a6: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0054b8aa: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0054b8ad: lea edx, [edi + 0x468] */ r_edx = (u32)(r_edi+0x468u);
    /* 0054b8b3: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0054b8b7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0054b8bb: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0054b8bf: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0054b8c3: mov ecx, eax */ r_ecx = r_eax;
    /* 0054b8c5: call 0x54df68 */ r_esp -= 4; W32(r_esp, 0x54b8cau); f_0054df68();
    /* 0054b8ca: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0054b8d1:; BB(0x0054b8d1);
    /* 0054b8d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054b8d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b8db: push 0x26c */ { u32 v = 0x26cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8e0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54b8e5u); f_007879b8();
    /* 0054b8e5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b8e8: lea esi, [edx + 0x38] */ r_esi = (u32)(r_edx+0x38u);
    /* 0054b8eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b8ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8f1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54b8f6u); f_00814298();
    /* 0054b8f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b8f9: jmp 0x54b6a1 */ goto L_0054b6a1;
L_0054b8fe:; BB(0x0054b8fe);
    /* 0054b8fe: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0054b901: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0054b905: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0054b908: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054b90b: jmp 0x54b76c */ goto L_0054b76c;
L_0054b910:; BB(0x0054b910);
    /* 0054b910: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054b913: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b918: je 0x54b984 */ if (fZ) goto L_0054b984;
L_0054b91a:; BB(0x0054b91a);
    /* 0054b91a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b91d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b91e: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x54b923u); f_00520fcc();
    /* 0054b923: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b926: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x54b92bu); f_005213d8();
    /* 0054b92b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b92e: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x54b933u); f_00521410();
    /* 0054b933: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b936: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0054b93c: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0054b942: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054b944: fmul qword ptr [0x924160] */ ST(0) = ST(0) * R_F64((u32)(0x924160u));
    /* 0054b94a: fdiv qword ptr [0x924158] */ ST(0) = ST(0) / R_F64((u32)(0x924158u));
    /* 0054b950: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b953: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 0054b956: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 0054b95a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054b95f: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0054b962: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0054b965: fistp dword ptr [ebp - 0x40] */ W32((u32)(r_ebp+0xffffffc0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054b968: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 0054b96b: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0054b96f: mov dword ptr [edx + 0x4e0], eax */ W32((u32)(r_edx+0x4e0u), r_eax);
    /* 0054b975: mov dword ptr [edx + 0x4d4], 1 */ W32((u32)(r_edx+0x4d4u), 0x1u);
    /* 0054b97f: jmp 0x54b6c9 */ goto L_0054b6c9;
L_0054b984:; BB(0x0054b984);
    /* 0054b984: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b987: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x54b98cu); f_00520f68();
    /* 0054b98c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b98f: mov dword ptr [eax + 0x4d4], 4 */ W32((u32)(r_eax+0x4d4u), 0x4u);
    /* 0054b999: jmp 0x54b6c9 */ goto L_0054b6c9;
L_0054b99e:; BB(0x0054b99e);
    /* 0054b99e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9a0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54b9a5u); f_0051f62c();
    /* 0054b9a5: jmp 0x54b7a4 */ goto L_0054b7a4;
L_0054b9aa:; BB(0x0054b9aa);
    /* 0054b9aa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9ac: mov eax, 1 */ r_eax = 0x1u;
    /* 0054b9b1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0054b9b8: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54b9bdu); f_0051f664();
    /* 0054b9bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054b9c0: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0054b9c6: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054b9c9: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054b9cc: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0054b9d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054b9d4: mov dword ptr [ecx + 0x4d4], edx */ W32((u32)(r_ecx+0x4d4u), r_edx);
    /* 0054b9da: mov dword ptr [ecx + 0x4d8], edx */ W32((u32)(r_ecx+0x4d8u), r_edx);
    /* 0054b9e0: mov dword ptr [ecx + 0x4dc], edx */ W32((u32)(r_ecx+0x4dcu), r_edx);
    /* 0054b9e6: mov dword ptr [ecx + 0x4e0], edx */ W32((u32)(r_ecx+0x4e0u), r_edx);
    /* 0054b9ec: jmp 0x54b7a4 */ goto L_0054b7a4;
}

void f_0054b9f4(void) /* sub_54B9F4 */
{
    FN_ENTER(0x0054b9f4);
    /* 0054b9f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9f5: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054b9f8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054b9fa: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0054b9fe: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ba01: je 0x54bc61 */ if (fZ) goto L_0054bc61;
L_0054ba07:; BB(0x0054ba07);
    /* 0054ba07: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ba0a: je 0x54bbb2 */ if (fZ) goto L_0054bbb2;
L_0054ba10:; BB(0x0054ba10);
    /* 0054ba10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ba12: jne 0x54bb8a */ if (!fZ) goto L_0054bb8a;
L_0054ba18:; BB(0x0054ba18);
    /* 0054ba18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ba1a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54ba1fu); f_007aa094();
    /* 0054ba1f: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0054ba25: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054ba27: je 0x54ba38 */ if (fZ) goto L_0054ba38;
L_0054ba29:; BB(0x0054ba29);
    /* 0054ba29: mov dword ptr [ebp + 0x4d4], 1 */ W32((u32)(r_ebp+0x4d4u), 0x1u);
    /* 0054ba33: jmp 0x54bb72 */ goto L_0054bb72;
L_0054ba38:; BB(0x0054ba38);
    /* 0054ba38: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 0054ba3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ba40: je 0x54bc31 */ if (fZ) goto L_0054bc31;
L_0054ba46:; BB(0x0054ba46);
    /* 0054ba46: push 0x42340000 */ { u32 v = 0x42340000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ba4d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54ba52u); f_007aaa30();
    /* 0054ba52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ba54: jne 0x54baa5 */ if (!fZ) goto L_0054baa5;
L_0054ba56:; BB(0x0054ba56);
    /* 0054ba56: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0054ba5c: fcom dword ptr [0x924218] */ fx_compare(ST(0), R_F32((u32)(0x924218u))); 
    /* 0054ba62: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054ba64: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054ba65: jb 0x54bac4 */ if (fC) goto L_0054bac4;
L_0054ba67:; BB(0x0054ba67);
    /* 0054ba67: fcomp dword ptr [0x924214] */ fx_compare(ST(0), R_F32((u32)(0x924214u))); FPOP();
    /* 0054ba6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054ba6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054ba70: ja 0x54bac6 */ if ((!fC&&!fZ)) goto L_0054bac6;
L_0054ba72:; BB(0x0054ba72);
    /* 0054ba72: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0054ba75: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0054ba78: mov ecx, dword ptr [ebp + 0x4c8] */ r_ecx = R32((u32)(r_ebp+0x4c8u));
    /* 0054ba7e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054ba81: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0054ba84: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054ba88: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0054ba8c: fadd dword ptr [0x924268] */ ST(0) = ST(0) + R_F32((u32)(0x924268u));
    /* 0054ba92: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054ba96: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054ba9a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054ba9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba9e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x54baa3u); f_00508db8();
    /* 0054baa3: jmp 0x54bac6 */ goto L_0054bac6;
L_0054baa5:; BB(0x0054baa5);
    /* 0054baa5: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 0054baab: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054baaf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054bab4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054bab8: mov dword ptr [ebp + 0x4c8], 0 */ W32((u32)(r_ebp+0x4c8u), 0x0u);
    /* 0054bac2: jmp 0x54bac6 */ goto L_0054bac6;
L_0054bac4:; BB(0x0054bac4);
    /* 0054bac4: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0054bac6:; BB(0x0054bac6);
    /* 0054bac6: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bacb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bacd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54bad2u); f_007aaa30();
    /* 0054bad2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bad4: je 0x54bb72 */ if (fZ) goto L_0054bb72;
L_0054bada:; BB(0x0054bada);
    /* 0054bada: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0054bae0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054bae2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054bae4: jle 0x54bb53 */ if ((fZ||fS!=fO)) goto L_0054bb53;
L_0054bae6:; BB(0x0054bae6);
    /* 0054bae6: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0054baea: mov ebp, eax */ r_ebp = r_eax;
    /* 0054baec: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0054baf0: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0054baf4: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0054baf8: mov esi, edx */ r_esi = r_edx;
L_0054bafa:; BB(0x0054bafa);
    /* 0054bafa: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0054bb01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb02: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x54bb07u); f_00520f3c();
    /* 0054bb07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054bb08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bb0a: je 0x54bb3c */ if (fZ) goto L_0054bb3c;
L_0054bb0c:; BB(0x0054bb0c);
    /* 0054bb0c: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0054bb10: lea ebx, [ebx + 0x300] */ r_ebx = (u32)(r_ebx+0x300u);
    /* 0054bb16: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0054bb19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb1b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x54bb20u); f_007a9180();
    /* 0054bb20: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0054bb24: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0054bb2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb2c: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x54bb31u); f_00780d3c();
    /* 0054bb31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bb36: je 0x54bbcd */ if (fZ) goto L_0054bbcd;
L_0054bb3c:; BB(0x0054bb3c);
    /* 0054bb3c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0054bb3f: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bb41: jl 0x54bafa */ if ((fS!=fO)) goto L_0054bafa;
L_0054bb43:; BB(0x0054bb43);
    /* 0054bb43: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0054bb47: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0054bb4b: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0054bb4f: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_0054bb53:; BB(0x0054bb53);
    /* 0054bb53: push 0x26a */ { u32 v = 0x26au; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb58: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bb5a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54bb5fu); f_007879b8();
    /* 0054bb5f: mov ecx, eax */ r_ecx = r_eax;
    /* 0054bb61: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0054bb64: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054bb66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb6a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54bb6fu); f_00814298();
    /* 0054bb6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bb72:; BB(0x0054bb72);
    /* 0054bb72: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054bb75: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bb77: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x54bb7du); call_ind(t); }
    /* 0054bb7d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054bb80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bb82: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54bb88u); call_ind(t); }
    /* 0054bb88: jmp 0x54bbc6 */ goto L_0054bbc6;
L_0054bb8a:; BB(0x0054bb8a);
    /* 0054bb8a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bb8d: jne 0x54bbc6 */ if (!fZ) goto L_0054bbc6;
L_0054bb8f:; BB(0x0054bb8f);
    /* 0054bb8f: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 0054bb95: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bb97: je 0x54bbc6 */ if (fZ) goto L_0054bbc6;
L_0054bb99:; BB(0x0054bb99);
    /* 0054bb99: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054bb9d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054bba2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054bba6: mov dword ptr [ebp + 0x4c8], 0 */ W32((u32)(r_ebp+0x4c8u), 0x0u);
    /* 0054bbb0: jmp 0x54bbc6 */ goto L_0054bbc6;
L_0054bbb2:; BB(0x0054bbb2);
    /* 0054bbb2: mov eax, dword ptr [ebp + 0x4d4] */ r_eax = R32((u32)(r_ebp+0x4d4u));
    /* 0054bbb8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bbbb: jne 0x54bbc6 */ if (!fZ) goto L_0054bbc6;
L_0054bbbd:; BB(0x0054bbbd);
    /* 0054bbbd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bbbf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bbc1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54bbc6u); f_0051f62c();
L_0054bbc6:; BB(0x0054bbc6);
    /* 0054bbc6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054bbc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054bbca: ret 4 */ FN_RET(0x0054b9f4); r_esp += 8; return;
L_0054bbcd:; BB(0x0054bbcd);
    /* 0054bbcd: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0054bbd1: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0054bbd5: fld dword ptr [ebx + 0x4b8] */ FPUSH(R_F32((u32)(r_ebx+0x4b8u)));
    /* 0054bbdb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0054bbdd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0054bbdf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054bbe1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054bbe2: jb 0x54bb3c */ if (fC) goto L_0054bb3c;
L_0054bbe8:; BB(0x0054bbe8);
    /* 0054bbe8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054bbea: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x54bbefu); f_007751b0();
    /* 0054bbef: fcomp dword ptr [ebx + 0x4b4] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x4b4u))); FPOP();
    /* 0054bbf5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054bbf7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054bbf8: ja 0x54bb3c */ if ((!fC&&!fZ)) goto L_0054bb3c;
L_0054bbfe:; BB(0x0054bbfe);
    /* 0054bbfe: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0054bc00: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 0054bc08: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0054bc0d: mov ecx, edi */ r_ecx = r_edi;
    /* 0054bc0f: mov dword ptr [esp + 0xc], 0x12 */ W32((u32)(r_esp+0xcu), 0x12u);
    /* 0054bc17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc1b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc20: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc22: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0054bc26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc27: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x54bc2au); call_ind(t); }
    /* 0054bc2a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054bc2c: jmp 0x54bb3c */ goto L_0054bb3c;
L_0054bc31:; BB(0x0054bc31);
    /* 0054bc31: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bc38: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54bc3du); f_007aaa30();
    /* 0054bc3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bc3f: je 0x54bac6 */ if (fZ) goto L_0054bac6;
L_0054bc45:; BB(0x0054bc45);
    /* 0054bc45: push 0x211 */ { u32 v = 0x211u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc4a: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0054bc4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc4e: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x54bc53u); f_00509590();
    /* 0054bc53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bc56: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 0054bc5c: jmp 0x54bac6 */ goto L_0054bac6;
L_0054bc61:; BB(0x0054bc61);
    /* 0054bc61: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc63: mov eax, 8 */ r_eax = 0x8u;
    /* 0054bc68: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0054bc6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bc71: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54bc76u); f_0051f664();
    /* 0054bc76: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0054bc7c: mov dword ptr [ebp + 0x4d4], 0 */ W32((u32)(r_ebp+0x4d4u), 0x0u);
    /* 0054bc86: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054bc89: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054bc8c: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0054bc92: jmp 0x54bbc6 */ goto L_0054bbc6;
}

void f_0054bc98(void) /* sub_54BC98 */
{
    FN_ENTER(0x0054bc98);
    /* 0054bc98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc9a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054bc9c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0054bca0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bca3: je 0x54bdf6 */ if (fZ) goto L_0054bdf6;
L_0054bca9:; BB(0x0054bca9);
    /* 0054bca9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bcac: je 0x54bda1 */ if (fZ) goto L_0054bda1;
L_0054bcb2:; BB(0x0054bcb2);
    /* 0054bcb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054bcb4: jne 0x54bdac */ if (!fZ) goto L_0054bdac;
L_0054bcba:; BB(0x0054bcba);
    /* 0054bcba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bcbc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54bcc1u); f_007aa094();
    /* 0054bcc1: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bcc6: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bccb: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 0054bcce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bccf: push dword ptr [ebp + 0x48c] */ { u32 v = R32((u32)(r_ebp+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054bcd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bcd6: call 0x782ac0 */ r_esp -= 4; W32(r_esp, 0x54bcdbu); f_00782ac0();
    /* 0054bcdb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bcde: mov dword ptr [ebp + 0x48c], eax */ W32((u32)(r_ebp+0x48cu), r_eax);
    /* 0054bce4: mov eax, dword ptr [ebp + 0x4d8] */ r_eax = R32((u32)(r_ebp+0x4d8u));
    /* 0054bcea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bcec: jne 0x54bd60 */ if (!fZ) goto L_0054bd60;
L_0054bcee:; BB(0x0054bcee);
    /* 0054bcee: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bcf3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bcf5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54bcfau); f_007aaa30();
    /* 0054bcfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bcfc: je 0x54bd05 */ if (fZ) goto L_0054bd05;
L_0054bcfe:; BB(0x0054bcfe);
    /* 0054bcfe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bd00: call 0x54be70 */ r_esp -= 4; W32(r_esp, 0x54bd05u); f_0054be70();
L_0054bd05:; BB(0x0054bd05);
    /* 0054bd05: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bd07: call 0x54c0a4 */ r_esp -= 4; W32(r_esp, 0x54bd0cu); f_0054c0a4();
    /* 0054bd0c: push 0x412ccccd */ { u32 v = 0x412ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bd13: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54bd18u); f_007aaa30();
    /* 0054bd18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bd1a: je 0x54bd3b */ if (fZ) goto L_0054bd3b;
L_0054bd1c:; BB(0x0054bd1c);
    /* 0054bd1c: push 0x26b */ { u32 v = 0x26bu; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bd23: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54bd28u); f_007879b8();
    /* 0054bd28: mov ecx, eax */ r_ecx = r_eax;
    /* 0054bd2a: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0054bd2d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054bd2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd33: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54bd38u); f_00814298();
    /* 0054bd38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bd3b:; BB(0x0054bd3b);
    /* 0054bd3b: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0054bd41: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054bd43: je 0x54bd89 */ if (fZ) goto L_0054bd89;
L_0054bd45:; BB(0x0054bd45);
    /* 0054bd45: mov dword ptr [ebp + 0x4d8], 1 */ W32((u32)(r_ebp+0x4d8u), 0x1u);
    /* 0054bd4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054bd51: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0054bd58: mov dword ptr [ebp + 0x4d4], eax */ W32((u32)(r_ebp+0x4d4u), r_eax);
    /* 0054bd5e: jmp 0x54bd89 */ goto L_0054bd89;
L_0054bd60:; BB(0x0054bd60);
    /* 0054bd60: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bd63: jne 0x54bd89 */ if (!fZ) goto L_0054bd89;
L_0054bd65:; BB(0x0054bd65);
    /* 0054bd65: mov eax, dword ptr [ebp + 0x4d4] */ r_eax = R32((u32)(r_ebp+0x4d4u));
    /* 0054bd6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054bd6e: mov dword ptr [ebp + 0x4d4], eax */ W32((u32)(r_ebp+0x4d4u), r_eax);
    /* 0054bd74: mov edx, dword ptr [0xa73910] */ r_edx = R32((u32)(0xa73910u));
    /* 0054bd7a: cmp eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bd7d: jl 0x54bd89 */ if ((fS!=fO)) goto L_0054bd89;
L_0054bd7f:; BB(0x0054bd7f);
    /* 0054bd7f: mov dword ptr [ebp + 0x4d8], 2 */ W32((u32)(r_ebp+0x4d8u), 0x2u);
L_0054bd89:; BB(0x0054bd89);
    /* 0054bd89: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054bd8c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bd8e: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x54bd94u); call_ind(t); }
    /* 0054bd94: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054bd97: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bd99: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54bd9fu); call_ind(t); }
    /* 0054bd9f: jmp 0x54bdac */ goto L_0054bdac;
L_0054bda1:; BB(0x0054bda1);
    /* 0054bda1: mov eax, dword ptr [ebp + 0x4d8] */ r_eax = R32((u32)(r_ebp+0x4d8u));
    /* 0054bda7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054bdaa: je 0x54bdb1 */ if (fZ) goto L_0054bdb1;
L_0054bdac:; BB(0x0054bdac);
    /* 0054bdac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054bdad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054bdae: ret 4 */ FN_RET(0x0054bc98); r_esp += 8; return;
L_0054bdb1:; BB(0x0054bdb1);
    /* 0054bdb1: mov eax, dword ptr [ebp + 0x490] */ r_eax = R32((u32)(r_ebp+0x490u));
    /* 0054bdb7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054bdba: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bdbd: jl 0x54bdda */ if ((fS!=fO)) goto L_0054bdda;
L_0054bdbf:; BB(0x0054bdbf);
    /* 0054bdbf: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0054bdc5: mov dword ptr [ebp + 0x490], 0 */ W32((u32)(r_ebp+0x490u), 0x0u);
    /* 0054bdcf: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054bdd2: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0054bdd8: jmp 0x54bde0 */ goto L_0054bde0;
L_0054bdda:; BB(0x0054bdda);
    /* 0054bdda: mov dword ptr [ebp + 0x490], eax */ W32((u32)(r_ebp+0x490u), r_eax);
L_0054bde0:; BB(0x0054bde0);
    /* 0054bde0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bde2: call 0x54b44c */ r_esp -= 4; W32(r_esp, 0x54bde7u); f_0054b44c();
    /* 0054bde7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054bde9: jne 0x54bdac */ if (!fZ) goto L_0054bdac;
L_0054bdeb:; BB(0x0054bdeb);
    /* 0054bdeb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bded: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054bdef: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54bdf4u); f_0051f62c();
    /* 0054bdf4: jmp 0x54bdac */ goto L_0054bdac;
L_0054bdf6:; BB(0x0054bdf6);
    /* 0054bdf6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bdf8: mov eax, 4 */ r_eax = 0x4u;
    /* 0054bdfd: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0054be04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054be06: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54be0bu); f_0051f664();
    /* 0054be0b: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0054be11: mov edx, dword ptr [ebp + 0x4a8] */ r_edx = R32((u32)(r_ebp+0x4a8u));
    /* 0054be17: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054be1a: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054be1d: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0054be23: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0054be26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054be28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054be2a: jle 0x54be42 */ if ((fZ||fS!=fO)) goto L_0054be42;
L_0054be2c:; BB(0x0054be2c);
    /* 0054be2c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0054be2f:; BB(0x0054be2f);
    /* 0054be2f: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0054be31: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0054be34: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 0054be37: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054be3a: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054be3d: jl 0x54be2f */ if ((fS!=fO)) goto L_0054be2f;
L_0054be3f:; BB(0x0054be3f);
    /* 0054be3f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0054be42:; BB(0x0054be42);
    /* 0054be42: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0054be49: mov ecx, dword ptr [ebp + 0x4ac] */ r_ecx = R32((u32)(r_ebp+0x4acu));
    /* 0054be4f: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x54be54u); f_007a7d3c();
    /* 0054be54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054be56: mov dword ptr [ebp + 0x4d4], eax */ W32((u32)(r_ebp+0x4d4u), r_eax);
    /* 0054be5c: mov dword ptr [ebp + 0x4d8], eax */ W32((u32)(r_ebp+0x4d8u), r_eax);
    /* 0054be62: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 0054be68: jmp 0x54bdac */ goto L_0054bdac;
}

void f_0054be70(void) /* sub_54BE70 */
{
    FN_ENTER(0x0054be70);
    /* 0054be70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054be71: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054be74: mov edi, ecx */ r_edi = r_ecx;
    /* 0054be76: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0054be79: mov dword ptr [esp], 0xc0a00000 */ W32((u32)(r_esp), 0xc0a00000u);
    /* 0054be80: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0054be84: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0054be8c: mov dword ptr [esp + 8], 0x40e00000 */ W32((u32)(r_esp+0x8u), 0x40e00000u);
    /* 0054be94: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054be97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054be98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054be99: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x54be9eu); f_00782b64();
    /* 0054be9e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bea1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0054bea4: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0054bea7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x54beacu); f_0082ebac();
    /* 0054beac: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054beaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054beb0: mov ecx, edi */ r_ecx = r_edi;
    /* 0054beb2: call 0x54bed4 */ r_esp -= 4; W32(r_esp, 0x54beb7u); f_0054bed4();
    /* 0054beb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054beb9: jne 0x54becc */ if (!fZ) goto L_0054becc;
L_0054bebb:; BB(0x0054bebb);
    /* 0054bebb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054bebe: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bec4: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54bec9u); f_0050b510();
    /* 0054bec9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054becc:; BB(0x0054becc);
    /* 0054becc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054becf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054bed0: ret  */ FN_RET(0x0054be70); r_esp += 4; return;
}

void f_0054bed4(void) /* sub_54BED4 */
{
    FN_ENTER(0x0054bed4);
    /* 0054bed4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054bed5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054bed6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054bed7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054beda: mov esi, ecx */ r_esi = r_ecx;
    /* 0054bedc: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0054bee0: fld dword ptr [0x9241fc] */ FPUSH(R_F32((u32)(0x9241fcu)));
    /* 0054bee6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054bee9: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0054beec: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054beef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bef2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054bef6: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0054befa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054befe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054bf02: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0054bf05: push 0x4007 */ { u32 v = 0x4007u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf0a: lea eax, [esi + 0x128] */ r_eax = (u32)(r_esi+0x128u);
    /* 0054bf10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf12: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x54bf17u); f_007806dc();
    /* 0054bf17: mov ebp, eax */ r_ebp = r_eax;
    /* 0054bf19: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bf1c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bf1e: je 0x54bf7f */ if (fZ) goto L_0054bf7f;
L_0054bf20:; BB(0x0054bf20);
    /* 0054bf20: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0054bf23: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 0054bf26: mov dword ptr [esi + 0x3cc], edi */ W32((u32)(r_esi+0x3ccu), r_edi);
    /* 0054bf2c: test edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bf32: je 0x54bf53 */ if (fZ) goto L_0054bf53;
L_0054bf34:; BB(0x0054bf34);
    /* 0054bf34: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0054bf37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054bf39: mov dword ptr [esi + 0x3d0], edx */ W32((u32)(r_esi+0x3d0u), r_edx);
    /* 0054bf3f: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0054bf42: mov dword ptr [esi + 0x3d4], edi */ W32((u32)(r_esi+0x3d4u), r_edi);
    /* 0054bf48: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0054bf4b: mov dword ptr [esi + 0x3d8], edx */ W32((u32)(r_esi+0x3d8u), r_edx);
    /* 0054bf51: jmp 0x54bf6e */ goto L_0054bf6e;
L_0054bf53:; BB(0x0054bf53);
    /* 0054bf53: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0054bf56: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 0054bf59: mov dword ptr [esi + 0x3d0], edx */ W32((u32)(r_esi+0x3d0u), r_edx);
    /* 0054bf5f: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0054bf62: mov dword ptr [esi + 0x3d4], edi */ W32((u32)(r_esi+0x3d4u), r_edi);
    /* 0054bf68: mov dword ptr [esi + 0x3d8], edx */ W32((u32)(r_esi+0x3d8u), r_edx);
L_0054bf6e:; BB(0x0054bf6e);
    /* 0054bf6e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0054bf71: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054bf74: jne 0x54c016 */ if (!fZ) goto L_0054c016;
L_0054bf7a:; BB(0x0054bf7a);
    /* 0054bf7a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054bf7d: jne 0x54bf8a */ if (!fZ) goto L_0054bf8a;
L_0054bf7f:; BB(0x0054bf7f);
    /* 0054bf7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054bf81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054bf84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054bf85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054bf86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054bf87: ret 4 */ FN_RET(0x0054bed4); r_esp += 8; return;
L_0054bf8a:; BB(0x0054bf8a);
    /* 0054bf8a: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf8c: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0054bf8f: add edx, 0x54 */ {  u32 a = r_edx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054bf92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf93: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54bf98u); f_0050b510();
    /* 0054bf98: mov edi, eax */ r_edi = r_eax;
    /* 0054bf9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bf9d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bf9f: je 0x54bfe2 */ if (fZ) goto L_0054bfe2;
L_0054bfa1:; BB(0x0054bfa1);
    /* 0054bfa1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bfa3: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x54bfa8u); f_0050c094();
    /* 0054bfa8: mov esi, eax */ r_esi = r_eax;
    /* 0054bfaa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bfad: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x54bfb2u); f_0050c08c();
    /* 0054bfb2: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 0054bfb6: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 0054bfbd: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 0054bfc0: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 0054bfc3: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 0054bfca: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054bfd0: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
    /* 0054bfd4: mov dword ptr [edi + 0x44], 0x40400000 */ W32((u32)(r_edi+0x44u), 0x40400000u);
    /* 0054bfdb: mov dword ptr [edi + 0x48], 0x40400000 */ W32((u32)(r_edi+0x48u), 0x40400000u);
L_0054bfe2:; BB(0x0054bfe2);
    /* 0054bfe2: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bfe7: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0054bfea: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054bfed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bfee: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54bff3u); f_0050b510();
    /* 0054bff3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bff6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bff8: je 0x54c008 */ if (fZ) goto L_0054c008;
L_0054bffa:; BB(0x0054bffa);
    /* 0054bffa: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 0054c001: mov dword ptr [eax + 0x48], 0x40400000 */ W32((u32)(r_eax+0x48u), 0x40400000u);
L_0054c008:; BB(0x0054c008);
    /* 0054c008: mov eax, 1 */ r_eax = 0x1u;
    /* 0054c00d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054c010: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c011: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054c012: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054c013: ret 4 */ FN_RET(0x0054bed4); r_esp += 8; return;
L_0054c016:; BB(0x0054c016);
    /* 0054c016: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c018: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0054c01b: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054c01e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c01f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54c024u); f_0050b510();
    /* 0054c024: mov edi, eax */ r_edi = r_eax;
    /* 0054c026: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c029: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c02b: je 0x54c06e */ if (fZ) goto L_0054c06e;
L_0054c02d:; BB(0x0054c02d);
    /* 0054c02d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c02f: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x54c034u); f_0050c094();
    /* 0054c034: mov esi, eax */ r_esi = r_eax;
    /* 0054c036: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c039: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x54c03eu); f_0050c08c();
    /* 0054c03e: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 0054c042: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 0054c049: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 0054c04c: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 0054c04f: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 0054c056: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054c05c: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
    /* 0054c060: mov dword ptr [edi + 0x44], 0x40400000 */ W32((u32)(r_edi+0x44u), 0x40400000u);
    /* 0054c067: mov dword ptr [edi + 0x48], 0x40400000 */ W32((u32)(r_edi+0x48u), 0x40400000u);
L_0054c06e:; BB(0x0054c06e);
    /* 0054c06e: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c073: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0054c076: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c07a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54c07fu); f_0050b510();
    /* 0054c07f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c082: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c084: je 0x54c094 */ if (fZ) goto L_0054c094;
L_0054c086:; BB(0x0054c086);
    /* 0054c086: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 0054c08d: mov dword ptr [eax + 0x48], 0x40400000 */ W32((u32)(r_eax+0x48u), 0x40400000u);
L_0054c094:; BB(0x0054c094);
    /* 0054c094: mov eax, 1 */ r_eax = 0x1u;
    /* 0054c099: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054c09c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c09d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054c09e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054c09f: ret 4 */ FN_RET(0x0054bed4); r_esp += 8; return;
}

