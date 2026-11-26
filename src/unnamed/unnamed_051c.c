#include "protos.h"

void f_0051c0ac(void) /* sub_51C0AC */
{
    FN_ENTER(0x0051c0ac);
    /* 0051c0ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c0ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051c0ae: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051c0b0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0051c0b4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c0b7: je 0x51c163 */ if (fZ) goto L_0051c163;
L_0051c0bd:; BB(0x0051c0bd);
    /* 0051c0bd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c0c0: je 0x51c139 */ if (fZ) goto L_0051c139;
L_0051c0c2:; BB(0x0051c0c2);
    /* 0051c0c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051c0c4: jne 0x51c14c */ if (!fZ) goto L_0051c14c;
L_0051c0ca:; BB(0x0051c0ca);
    /* 0051c0ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c0cc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51c0d1u); f_007aa094();
    /* 0051c0d1: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c0d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c0d6: call 0x51cc28 */ r_esp -= 4; W32(r_esp, 0x51c0dbu); f_0051cc28();
    /* 0051c0db: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c0e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c0e2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51c0e7u); f_007aaa30();
    /* 0051c0e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c0e9: je 0x51c114 */ if (fZ) goto L_0051c114;
L_0051c0eb:; BB(0x0051c0eb);
    /* 0051c0eb: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c0f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c0f2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51c0f7u); f_007879b8();
    /* 0051c0f7: mov ecx, eax */ r_ecx = r_eax;
    /* 0051c0f9: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0051c0fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051c0fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c0ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c101: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c102: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51c107u); f_00814298();
    /* 0051c107: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c10c: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51c111u); f_00814680();
    /* 0051c111: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051c114:; BB(0x0051c114);
    /* 0051c114: mov eax, dword ptr [ebx + 0x424] */ r_eax = R32((u32)(r_ebx+0x424u));
    /* 0051c11a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c11d: mov dword ptr [ebx + 0x424], eax */ W32((u32)(r_ebx+0x424u), r_eax);
    /* 0051c123: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c126: je 0x51c15a */ if (fZ) goto L_0051c15a;
L_0051c128:; BB(0x0051c128);
    /* 0051c128: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c12b: je 0x51c151 */ if (fZ) goto L_0051c151;
L_0051c12d:; BB(0x0051c12d);
    /* 0051c12d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051c12f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c131: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51c137u); call_ind(t); }
    /* 0051c137: jmp 0x51c14c */ goto L_0051c14c;
L_0051c139:; BB(0x0051c139);
    /* 0051c139: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0051c13f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051c141: je 0x51c14c */ if (fZ) goto L_0051c14c;
L_0051c143:; BB(0x0051c143);
    /* 0051c143: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c145: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c147: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51c14cu); f_0051f62c();
L_0051c14c:; BB(0x0051c14c);
    /* 0051c14c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051c14d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051c14e: ret 4 */ FN_RET(0x0051c0ac); r_esp += 8; return;
L_0051c151:; BB(0x0051c151);
    /* 0051c151: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c153: call 0x51c1cc */ r_esp -= 4; W32(r_esp, 0x51c158u); f_0051c1cc();
    /* 0051c158: jmp 0x51c12d */ goto L_0051c12d;
L_0051c15a:; BB(0x0051c15a);
    /* 0051c15a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c15c: call 0x51c218 */ r_esp -= 4; W32(r_esp, 0x51c161u); f_0051c218();
    /* 0051c161: jmp 0x51c12d */ goto L_0051c12d;
L_0051c163:; BB(0x0051c163);
    /* 0051c163: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051c165: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c167: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51c16du); call_ind(t); }
    /* 0051c16d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c16f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c171: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51c176u); f_0051f664();
    /* 0051c176: mov dword ptr [ebx + 0x424], 0 */ W32((u32)(r_ebx+0x424u), 0x0u);
    /* 0051c180: mov eax, 0xb */ r_eax = 0xbu;
    /* 0051c185: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0051c18c: mov eax, dword ptr [ebx + 0x3e4] */ r_eax = R32((u32)(r_ebx+0x3e4u));
    /* 0051c192: mov ebx, dword ptr [0xa72e58] */ r_ebx = R32((u32)(0xa72e58u));
    /* 0051c198: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051c19a: je 0x51c14c */ if (fZ) goto L_0051c14c;
L_0051c19c:; BB(0x0051c19c);
    /* 0051c19c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0051c19f: mov esi, eax */ r_esi = r_eax;
L_0051c1a1:; BB(0x0051c1a1);
    /* 0051c1a1: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0051c1a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1a6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51c1abu); f_007b4d18();
    /* 0051c1ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051c1ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c1ae: je 0x51c1b8 */ if (fZ) goto L_0051c1b8;
L_0051c1b0:; BB(0x0051c1b0);
    /* 0051c1b0: cmp esi, dword ptr [eax + 0x3e4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x3e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051c1b6: je 0x51c1c1 */ if (fZ) goto L_0051c1c1;
L_0051c1b8:; BB(0x0051c1b8);
    /* 0051c1b8: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0051c1bb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051c1bd: jne 0x51c1a1 */ if (!fZ) goto L_0051c1a1;
L_0051c1bf:; BB(0x0051c1bf);
    /* 0051c1bf: jmp 0x51c1c6 */ goto L_0051c1c6;
L_0051c1c1:; BB(0x0051c1c1);
    /* 0051c1c1: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0051c1c4: jmp 0x51c14c */ goto L_0051c14c;
L_0051c1c6:; BB(0x0051c1c6);
    /* 0051c1c6: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0051c1c9: jmp 0x51c14c */ goto L_0051c14c;
}

void f_0051c1cc(void) /* sub_51C1CC */
{
    FN_ENTER(0x0051c1cc);
    /* 0051c1cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1cd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c1d0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051c1d2: movzx eax, word ptr [ebx + 0x3e8] */ r_eax = (u32)R16((u32)(r_ebx+0x3e8u));
    /* 0051c1d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1da: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51c1dfu); f_007b4d18();
    /* 0051c1df: mov ecx, eax */ r_ecx = r_eax;
    /* 0051c1e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c1e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c1e6: je 0x51c211 */ if (fZ) goto L_0051c211;
L_0051c1e8:; BB(0x0051c1e8);
    /* 0051c1e8: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0051c1ea: mov dword ptr [esp], 0xb */ W32((u32)(r_esp), 0xbu);
    /* 0051c1f1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0051c1f6: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0051c1fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c200: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c202: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c207: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c209: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c20a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c20c: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x51c20fu); call_ind(t); }
    /* 0051c20f: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051c211:; BB(0x0051c211);
    /* 0051c211: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c214: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051c215: ret  */ FN_RET(0x0051c1cc); r_esp += 4; return;
}

void f_0051c218(void) /* sub_51C218 */
{
    FN_ENTER(0x0051c218);
    /* 0051c218: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c219: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c21c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051c21e: movzx eax, word ptr [ebx + 0x3e8] */ r_eax = (u32)R16((u32)(r_ebx+0x3e8u));
    /* 0051c225: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c226: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51c22bu); f_007b4d18();
    /* 0051c22b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051c22d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c230: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c232: je 0x51c25d */ if (fZ) goto L_0051c25d;
L_0051c234:; BB(0x0051c234);
    /* 0051c234: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0051c236: mov dword ptr [esp], 0xc */ W32((u32)(r_esp), 0xcu);
    /* 0051c23d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0051c242: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0051c24a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c24b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c24c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c24e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c253: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c255: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c256: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051c258: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x51c25bu); call_ind(t); }
    /* 0051c25b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051c25d:; BB(0x0051c25d);
    /* 0051c25d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c260: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051c261: ret  */ FN_RET(0x0051c218); r_esp += 4; return;
}

void f_0051c264(void) /* sub_51C264 */
{
    FN_ENTER(0x0051c264);
    /* 0051c264: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051c265: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c268: mov edi, ecx */ r_edi = r_ecx;
    /* 0051c26a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0051c26e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c271: je 0x51c516 */ if (fZ) goto L_0051c516;
L_0051c277:; BB(0x0051c277);
    /* 0051c277: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c27a: je 0x51c43e */ if (fZ) goto L_0051c43e;
L_0051c280:; BB(0x0051c280);
    /* 0051c280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c282: jne 0x51c44d */ if (!fZ) goto L_0051c44d;
L_0051c288:; BB(0x0051c288);
    /* 0051c288: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c28a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51c28fu); f_007aa094();
    /* 0051c28f: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 0051c295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c297: jne 0x51c3c4 */ if (!fZ) goto L_0051c3c4;
L_0051c29d:; BB(0x0051c29d);
    /* 0051c29d: mov edx, dword ptr [edi + 0x428] */ r_edx = R32((u32)(r_edi+0x428u));
    /* 0051c2a3: mov eax, dword ptr [edi + 0x428] */ r_eax = R32((u32)(r_edi+0x428u));
    /* 0051c2a9: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0051c2ab: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0051c2ae: add edx, 0x1800 */ {  u32 a = r_edx; u32 b = 0x1800u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051c2b4: mov dword ptr [edi + 0x434], edx */ W32((u32)(r_edi+0x434u), r_edx);
    /* 0051c2ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051c2bc: je 0x51c2c6 */ if (fZ) goto L_0051c2c6;
L_0051c2be:; BB(0x0051c2be);
    /* 0051c2be: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051c2c0: mov dword ptr [edi + 0x434], edx */ W32((u32)(r_edi+0x434u), r_edx);
L_0051c2c6:; BB(0x0051c2c6);
    /* 0051c2c6: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0051c2ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051c2cc: jne 0x51c2d6 */ if (!fZ) goto L_0051c2d6;
L_0051c2ce:; BB(0x0051c2ce);
    /* 0051c2ce: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051c2d0: mov dword ptr [edi + 0x434], edx */ W32((u32)(r_edi+0x434u), r_edx);
L_0051c2d6:; BB(0x0051c2d6);
    /* 0051c2d6: add edx, dword ptr [edi + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051c2d9: mov eax, dword ptr [edi + 0x428] */ r_eax = R32((u32)(r_edi+0x428u));
    /* 0051c2df: mov dword ptr [edi + 0x434], edx */ W32((u32)(r_edi+0x434u), r_edx);
    /* 0051c2e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c2e8: mov dword ptr [edi + 0x428], eax */ W32((u32)(r_edi+0x428u), r_eax);
    /* 0051c2ee: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c2f1: jle 0x51c2fd */ if ((fZ||fS!=fO)) goto L_0051c2fd;
L_0051c2f3:; BB(0x0051c2f3);
    /* 0051c2f3: mov dword ptr [edi + 0x424], 2 */ W32((u32)(r_edi+0x424u), 0x2u);
L_0051c2fd:; BB(0x0051c2fd);
    /* 0051c2fd: mov ecx, dword ptr [edi + 0x434] */ r_ecx = R32((u32)(r_edi+0x434u));
    /* 0051c303: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51c308u); f_0082dcbc();
    /* 0051c308: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051c30b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0051c30e: fmul dword ptr [0xa72df8] */ ST(0) = ST(0) * R_F32((u32)(0xa72df8u));
    /* 0051c314: mov ecx, dword ptr [edi + 0x434] */ r_ecx = R32((u32)(r_edi+0x434u));
    /* 0051c31a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051c31d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51c322u); f_0082ddd8();
    /* 0051c322: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051c326: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0051c32a: fmul dword ptr [0xa72df8] */ ST(0) = ST(0) * R_F32((u32)(0xa72df8u));
    /* 0051c330: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0051c333: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0051c336: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 0051c33c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051c33e: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0051c342: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051c344: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0051c347: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 0051c34d: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0051c350: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0051c353: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0051c356: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051c358: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 0051c35e: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 0051c361: mov ecx, dword ptr [edi + 0x418] */ r_ecx = R32((u32)(r_edi+0x418u));
    /* 0051c367: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x51c36cu); f_007b6880();
    /* 0051c36c: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 0051c372: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0051c378: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0051c37b: test eax, 0x380000 */ {  u32 a = r_eax; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c380: jne 0x51c44d */ if (!fZ) goto L_0051c44d;
L_0051c386:; BB(0x0051c386);
    /* 0051c386: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0051c389: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0051c38b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0051c38f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051c391: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0051c394: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051c396: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0051c398: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0051c39c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c39f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051c3a1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051c3a4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051c3a8: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c3aa: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0051c3b2: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x51c3b7u); f_00520940();
    /* 0051c3b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c3b9: jne 0x51c44d */ if (!fZ) goto L_0051c44d;
L_0051c3bf:; BB(0x0051c3bf);
    /* 0051c3bf: jmp 0x51c454 */ goto L_0051c454;
L_0051c3c4:; BB(0x0051c3c4);
    /* 0051c3c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c3c7: jne 0x51c44d */ if (!fZ) goto L_0051c44d;
L_0051c3cd:; BB(0x0051c3cd);
    /* 0051c3cd: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0051c3d3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051c3d5: je 0x51c3e8 */ if (fZ) goto L_0051c3e8;
L_0051c3d7:; BB(0x0051c3d7);
    /* 0051c3d7: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c3d9: call 0x51c550 */ r_esp -= 4; W32(r_esp, 0x51c3deu); f_0051c550();
    /* 0051c3de: mov dword ptr [edi + 0x424], 2 */ W32((u32)(r_edi+0x424u), 0x2u);
L_0051c3e8:; BB(0x0051c3e8);
    /* 0051c3e8: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c3ea: call 0x51c570 */ r_esp -= 4; W32(r_esp, 0x51c3efu); f_0051c570();
    /* 0051c3ef: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c3f4: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c3fa: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c3fc: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c402: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x51c407u); f_005207c4();
    /* 0051c407: push 0xf00 */ { u32 v = 0xf00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c40c: push dword ptr [edi + 0x434] */ { u32 v = R32((u32)(r_edi+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c412: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c415: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x51c41au); f_007a8c74();
    /* 0051c41a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c41d: push dword ptr [edi + 0x434] */ { u32 v = R32((u32)(r_edi+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c423: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0051c426: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c428: call 0x51cc28 */ r_esp -= 4; W32(r_esp, 0x51c42du); f_0051cc28();
    /* 0051c42d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051c42f: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c431: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51c437u); call_ind(t); }
    /* 0051c437: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c43a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c43b: ret 4 */ FN_RET(0x0051c264); r_esp += 8; return;
L_0051c43e:; BB(0x0051c43e);
    /* 0051c43e: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 0051c444: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c447: je 0x51c4ec */ if (fZ) goto L_0051c4ec;
L_0051c44d:; BB(0x0051c44d);
    /* 0051c44d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c450: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c451: ret 4 */ FN_RET(0x0051c264); r_esp += 8; return;
L_0051c454:; BB(0x0051c454);
    /* 0051c454: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0051c45a: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0051c460: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051c464: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0051c468: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0051c46b: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0051c471: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051c475: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0051c479: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051c47d: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 0051c483: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0051c487: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0051c48b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0051c48f: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0051c493: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c496: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c497: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x51c49cu); f_007806dc();
    /* 0051c49c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c49f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c4a1: je 0x51c44d */ if (fZ) goto L_0051c44d;
L_0051c4a3:; BB(0x0051c4a3);
    /* 0051c4a3: mov ecx, dword ptr [edi + 0x434] */ r_ecx = R32((u32)(r_edi+0x434u));
    /* 0051c4a9: mov dword ptr [edi + 0x424], 1 */ W32((u32)(r_edi+0x424u), 0x1u);
    /* 0051c4b3: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0051c4b8: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0051c4bf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51c4c4u); f_0082dcbc();
    /* 0051c4c4: mov ecx, dword ptr [edi + 0x434] */ r_ecx = R32((u32)(r_edi+0x434u));
    /* 0051c4ca: fstp dword ptr [edi + 0x3a8] */ W_F32((u32)(r_edi+0x3a8u), ST(0)); FPOP();
    /* 0051c4d0: mov dword ptr [edi + 0x3ac], 0 */ W32((u32)(r_edi+0x3acu), 0x0u);
    /* 0051c4da: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51c4dfu); f_0082ddd8();
    /* 0051c4df: fstp dword ptr [edi + 0x3b0] */ W_F32((u32)(r_edi+0x3b0u), ST(0)); FPOP();
    /* 0051c4e5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c4e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c4e9: ret 4 */ FN_RET(0x0051c264); r_esp += 8; return;
L_0051c4ec:; BB(0x0051c4ec);
    /* 0051c4ec: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0051c4f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c4f4: je 0x51c506 */ if (fZ) goto L_0051c506;
L_0051c4f6:; BB(0x0051c4f6);
    /* 0051c4f6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051c4f8: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c4fa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51c4ffu); f_0051f62c();
    /* 0051c4ff: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c502: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c503: ret 4 */ FN_RET(0x0051c264); r_esp += 8; return;
L_0051c506:; BB(0x0051c506);
    /* 0051c506: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c508: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c50a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51c50fu); f_0051f62c();
    /* 0051c50f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c512: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c513: ret 4 */ FN_RET(0x0051c264); r_esp += 8; return;
L_0051c516:; BB(0x0051c516);
    /* 0051c516: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c518: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051c51a: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0051c521: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c523: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51c528u); f_0051f664();
    /* 0051c528: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051c52a: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c52c: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51c532u); call_ind(t); }
    /* 0051c532: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051c534: mov dword ptr [edi + 0x424], eax */ W32((u32)(r_edi+0x424u), r_eax);
    /* 0051c53a: mov dword ptr [edi + 0x434], eax */ W32((u32)(r_edi+0x434u), r_eax);
    /* 0051c540: mov dword ptr [edi + 0x428], eax */ W32((u32)(r_edi+0x428u), r_eax);
    /* 0051c546: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c549: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c54a: ret 4 */ FN_RET(0x0051c264); r_esp += 8; return;
}

void f_0051c550(void) /* sub_51C550 */
{
    FN_ENTER(0x0051c550);
    /* 0051c550: mov eax, dword ptr [ecx + 0x3e0] */ r_eax = R32((u32)(r_ecx+0x3e0u));
    /* 0051c556: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c558: je 0x51c565 */ if (fZ) goto L_0051c565;
L_0051c55a:; BB(0x0051c55a);
    /* 0051c55a: push 0x43af0000 */ { u32 v = 0x43af0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c55f: call 0x521010 */ r_esp -= 4; W32(r_esp, 0x51c564u); f_00521010();
    /* 0051c564: ret  */ FN_RET(0x0051c550); r_esp += 4; return;
L_0051c565:; BB(0x0051c565);
    /* 0051c565: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c56a: call 0x521010 */ r_esp -= 4; W32(r_esp, 0x51c56fu); f_00521010();
    /* 0051c56f: ret  */ FN_RET(0x0051c550); r_esp += 4; return;
}

void f_0051c570(void) /* sub_51C570 */
{
    FN_ENTER(0x0051c570);
    /* 0051c570: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051c571: mov esi, ecx */ r_esi = r_ecx;
    /* 0051c573: mov ecx, esi */ r_ecx = r_esi;
    /* 0051c575: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c57a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51c57fu); f_007aaa30();
    /* 0051c57f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051c581: je 0x51c5aa */ if (fZ) goto L_0051c5aa;
L_0051c583:; BB(0x0051c583);
    /* 0051c583: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c588: mov ecx, esi */ r_ecx = r_esi;
    /* 0051c58a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51c58fu); f_007879b8();
    /* 0051c58f: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051c592: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051c594: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c595: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c596: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051c597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c598: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51c59du); f_00814298();
    /* 0051c59d: push 0xfffff000 */ { u32 v = 0xfffff000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c5a2: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51c5a7u); f_00814680();
    /* 0051c5a7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0051c5aa:; BB(0x0051c5aa);
    /* 0051c5aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051c5ab: ret  */ FN_RET(0x0051c570); r_esp += 4; return;
}

void f_0051c5ac(void) /* sub_51C5AC */
{
    FN_ENTER(0x0051c5ac);
    /* 0051c5ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051c5ad: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c5b0: mov edi, ecx */ r_edi = r_ecx;
    /* 0051c5b2: fld dword ptr [edi + 0x43c] */ FPUSH(R_F32((u32)(r_edi+0x43cu)));
    /* 0051c5b8: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0051c5bc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c5bf: je 0x51c6e8 */ if (fZ) goto L_0051c6e8;
L_0051c5c5:; BB(0x0051c5c5);
    /* 0051c5c5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c5c8: je 0x51c6a4 */ if (fZ) goto L_0051c6a4;
L_0051c5ce:; BB(0x0051c5ce);
    /* 0051c5ce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051c5d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c5d2: jne 0x51c6e1 */ if (!fZ) goto L_0051c6e1;
L_0051c5d8:; BB(0x0051c5d8);
    /* 0051c5d8: add dword ptr [edi + 0x424], 1 */ { u32 ad = (u32)(r_edi+0x424u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0051c5df: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c5e1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51c5e6u); f_007aa094();
    /* 0051c5e6: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c5e8: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x51c5edu); f_00521238();
    /* 0051c5ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c5ef: je 0x51c6e1 */ if (fZ) goto L_0051c6e1;
L_0051c5f5:; BB(0x0051c5f5);
    /* 0051c5f5: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c5f7: call 0x51ddf4 */ r_esp -= 4; W32(r_esp, 0x51c5fcu); f_0051ddf4();
    /* 0051c5fc: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c601: push dword ptr [edi + 0x438] */ { u32 v = R32((u32)(r_edi+0x438u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c607: push dword ptr [edi + 0x434] */ { u32 v = R32((u32)(r_edi+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c60d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x51c612u); f_007a8c74();
    /* 0051c612: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c615: mov dword ptr [edi + 0x434], eax */ W32((u32)(r_edi+0x434u), r_eax);
    /* 0051c61b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051c61d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51c622u); f_0082dcbc();
    /* 0051c622: fld dword ptr [0x92132c] */ FPUSH(R_F32((u32)(0x92132cu)));
    /* 0051c628: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051c62a: fadd dword ptr [edi + 0x458] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x458u));
    /* 0051c630: mov ecx, dword ptr [edi + 0x434] */ r_ecx = R32((u32)(r_edi+0x434u));
    /* 0051c636: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 0051c63c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51c641u); f_0082ddd8();
    /* 0051c641: fld dword ptr [0x92132c] */ FPUSH(R_F32((u32)(0x92132cu)));
    /* 0051c647: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051c649: fadd dword ptr [edi + 0x460] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x460u));
    /* 0051c64f: fstp dword ptr [edi + 0x3a4] */ W_F32((u32)(r_edi+0x3a4u), ST(0)); FPOP();
    /* 0051c655: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c657: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51c65cu); f_00521410();
    /* 0051c65c: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c661: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c663: call 0x51d3c4 */ r_esp -= 4; W32(r_esp, 0x51c668u); f_0051d3c4();
    /* 0051c668: push dword ptr [edi + 0x40c] */ { u32 v = R32((u32)(r_edi+0x40cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c66e: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c673: fld dword ptr [edi + 0x40c] */ FPUSH(R_F32((u32)(r_edi+0x40cu)));
    /* 0051c679: fmul dword ptr [0x921328] */ ST(0) = ST(0) * R_F32((u32)(0x921328u));
    /* 0051c67f: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 0051c685: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c687: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x51c68cu); f_00521528();
    /* 0051c68c: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c68e: call 0x51b1cc */ r_esp -= 4; W32(r_esp, 0x51c693u); f_0051b1cc();
    /* 0051c693: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051c695: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c697: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51c69du); call_ind(t); }
    /* 0051c69d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c6a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c6a1: ret 4 */ FN_RET(0x0051c5ac); r_esp += 8; return;
L_0051c6a4:; BB(0x0051c6a4);
    /* 0051c6a4: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0051c6aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c6ac: je 0x51c6d6 */ if (fZ) goto L_0051c6d6;
L_0051c6ae:; BB(0x0051c6ae);
    /* 0051c6ae: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 0051c6b4: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c6b9: jg 0x51c6d6 */ if ((!fZ&&fS==fO)) goto L_0051c6d6;
L_0051c6bb:; BB(0x0051c6bb);
    /* 0051c6bb: fcomp dword ptr [edi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3b4u))); FPOP();
    /* 0051c6c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051c6c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051c6c4: jbe 0x51c6e1 */ if ((fC||fZ)) goto L_0051c6e1;
L_0051c6c6:; BB(0x0051c6c6);
    /* 0051c6c6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051c6c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c6ca: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51c6cfu); f_0051f62c();
    /* 0051c6cf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c6d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c6d3: ret 4 */ FN_RET(0x0051c5ac); r_esp += 8; return;
L_0051c6d6:; BB(0x0051c6d6);
    /* 0051c6d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051c6d8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c6da: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c6dc: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51c6e1u); f_0051f62c();
L_0051c6e1:; BB(0x0051c6e1);
    /* 0051c6e1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c6e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c6e5: ret 4 */ FN_RET(0x0051c5ac); r_esp += 8; return;
L_0051c6e8:; BB(0x0051c6e8);
    /* 0051c6e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051c6ea: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c6ec: mov eax, 1 */ r_eax = 0x1u;
    /* 0051c6f1: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0051c6f8: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c6fa: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51c6ffu); f_0051f664();
    /* 0051c6ff: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051c701: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c703: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51c709u); call_ind(t); }
    /* 0051c709: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0051c70c: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0051c70f: mov dword ptr [edi + 0x408], 0x3fcccccd */ W32((u32)(r_edi+0x408u), 0x3fcccccdu);
    /* 0051c719: mov dword ptr [edi + 0x458], edx */ W32((u32)(r_edi+0x458u), r_edx);
    /* 0051c71f: mov dword ptr [edi + 0x424], 0 */ W32((u32)(r_edi+0x424u), 0x0u);
    /* 0051c729: mov dword ptr [edi + 0x45c], eax */ W32((u32)(r_edi+0x45cu), r_eax);
    /* 0051c72f: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0051c732: mov dword ptr [edi + 0x460], eax */ W32((u32)(r_edi+0x460u), r_eax);
    /* 0051c738: push 0x3fcccccd */ { u32 v = 0x3fcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c73d: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c742: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x51c747u); f_00782a34();
    /* 0051c747: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051c749: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c74c: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0051c74f: mov dword ptr [edi + 0x438], eax */ W32((u32)(r_edi+0x438u), r_eax);
    /* 0051c755: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c757: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x51c75cu); f_00520f04();
    /* 0051c75c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c75e: je 0x51c7ca */ if (fZ) goto L_0051c7ca;
L_0051c760:; BB(0x0051c760);
    /* 0051c760: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0051c763: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51c768u); f_0082dcbc();
    /* 0051c768: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0051c76b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051c76e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51c773u); f_0082ddd8();
    /* 0051c773: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0051c779: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0051c77c: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 0051c77f: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0051c782: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 0051c785: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051c787: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051c78b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0051c78f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0051c793: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051c796: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0051c79a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c79b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c79c: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x51c7a1u); f_007829cc();
    /* 0051c7a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c7a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c7a6: je 0x51c7b9 */ if (fZ) goto L_0051c7b9;
L_0051c7a8:; BB(0x0051c7a8);
    /* 0051c7a8: mov dword ptr [edi + 0x434], 0x5000 */ W32((u32)(r_edi+0x434u), 0x5000u);
    /* 0051c7b2: mov eax, 0x5000 */ r_eax = 0x5000u;
    /* 0051c7b7: jmp 0x51c7fc */ goto L_0051c7fc;
L_0051c7b9:; BB(0x0051c7b9);
    /* 0051c7b9: mov dword ptr [edi + 0x434], 0xffffb000 */ W32((u32)(r_edi+0x434u), 0xffffb000u);
    /* 0051c7c3: mov eax, 0xffffb000 */ r_eax = 0xffffb000u;
    /* 0051c7c8: jmp 0x51c7fc */ goto L_0051c7fc;
L_0051c7ca:; BB(0x0051c7ca);
    /* 0051c7ca: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c7cc: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51c7d1u); f_007751b0();
    /* 0051c7d1: fcomp dword ptr [0x921330] */ fx_compare(ST(0), R_F32((u32)(0x921330u))); FPOP();
    /* 0051c7d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051c7d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051c7da: jae 0x51c7ed */ if (!fC) goto L_0051c7ed;
L_0051c7dc:; BB(0x0051c7dc);
    /* 0051c7dc: mov dword ptr [edi + 0x434], 0x5000 */ W32((u32)(r_edi+0x434u), 0x5000u);
    /* 0051c7e6: mov eax, 0x5000 */ r_eax = 0x5000u;
    /* 0051c7eb: jmp 0x51c7fc */ goto L_0051c7fc;
L_0051c7ed:; BB(0x0051c7ed);
    /* 0051c7ed: mov dword ptr [edi + 0x434], 0xffffb000 */ W32((u32)(r_edi+0x434u), 0xffffb000u);
    /* 0051c7f7: mov eax, 0xffffb000 */ r_eax = 0xffffb000u;
L_0051c7fc:; BB(0x0051c7fc);
    /* 0051c7fc: add eax, dword ptr [edi + 0x438] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x438u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c802: mov dword ptr [edi + 0x434], eax */ W32((u32)(r_edi+0x434u), r_eax);
    /* 0051c808: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c80b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c80c: ret 4 */ FN_RET(0x0051c5ac); r_esp += 8; return;
}

void f_0051c810(void) /* sub_51C810 */
{
    FN_ENTER(0x0051c810);
    /* 0051c810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c811: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051c813: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051c817: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c81a: je 0x51cb62 */ if (fZ) goto L_0051cb62;
L_0051c820:; BB(0x0051c820);
    /* 0051c820: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c823: je 0x51cb4a */ if (fZ) goto L_0051cb4a;
L_0051c829:; BB(0x0051c829);
    /* 0051c829: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c82b: jne 0x51cb37 */ if (!fZ) goto L_0051cb37;
L_0051c831:; BB(0x0051c831);
    /* 0051c831: mov eax, dword ptr [ebp + 0x424] */ r_eax = R32((u32)(r_ebp+0x424u));
    /* 0051c837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c839: jne 0x51cab7 */ if (!fZ) goto L_0051cab7;
L_0051c83f:; BB(0x0051c83f);
    /* 0051c83f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c841: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51c846u); f_007aa094();
    /* 0051c846: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0051c84c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051c84e: je 0x51c87a */ if (fZ) goto L_0051c87a;
L_0051c850:; BB(0x0051c850);
    /* 0051c850: mov eax, dword ptr [ebp + 0x470] */ r_eax = R32((u32)(r_ebp+0x470u));
    /* 0051c856: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c858: je 0x51c866 */ if (fZ) goto L_0051c866;
L_0051c85a:; BB(0x0051c85a);
    /* 0051c85a: mov dword ptr [ebp + 0x424], 2 */ W32((u32)(r_ebp+0x424u), 0x2u);
    /* 0051c864: jmp 0x51c87a */ goto L_0051c87a;
L_0051c866:; BB(0x0051c866);
    /* 0051c866: mov dword ptr [ebp + 0x424], 1 */ W32((u32)(r_ebp+0x424u), 0x1u);
    /* 0051c870: mov dword ptr [ebp + 0x428], 0 */ W32((u32)(r_ebp+0x428u), 0x0u);
L_0051c87a:; BB(0x0051c87a);
    /* 0051c87a: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c87f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c881: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51c886u); f_007aaa30();
    /* 0051c886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c888: je 0x51c89b */ if (fZ) goto L_0051c89b;
L_0051c88a:; BB(0x0051c88a);
    /* 0051c88a: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c88f: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0051c892: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c893: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x51c898u); f_0050b510();
    /* 0051c898: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051c89b:; BB(0x0051c89b);
    /* 0051c89b: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c8a2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51c8a7u); f_007aaa30();
    /* 0051c8a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c8a9: je 0x51c8ca */ if (fZ) goto L_0051c8ca;
L_0051c8ab:; BB(0x0051c8ab);
    /* 0051c8ab: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c8b2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51c8b7u); f_007879b8();
    /* 0051c8b7: mov ecx, eax */ r_ecx = r_eax;
    /* 0051c8b9: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0051c8bc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051c8be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8c2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51c8c7u); f_00814298();
    /* 0051c8c7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051c8ca:; BB(0x0051c8ca);
    /* 0051c8ca: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8cf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c8d1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51c8d6u); f_007aaa30();
    /* 0051c8d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c8d8: je 0x51c903 */ if (fZ) goto L_0051c903;
L_0051c8da:; BB(0x0051c8da);
    /* 0051c8da: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c8e1: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51c8e6u); f_007879b8();
    /* 0051c8e6: mov ecx, eax */ r_ecx = r_eax;
    /* 0051c8e8: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0051c8eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051c8ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8f1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51c8f6u); f_00814298();
    /* 0051c8f6: push 0xfffffb00 */ { u32 v = 0xfffffb00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8fb: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51c900u); f_00814680();
    /* 0051c900: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051c903:; BB(0x0051c903);
    /* 0051c903: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c908: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c90a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51c90fu); f_007aaa30();
    /* 0051c90f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c911: jne 0x51c91e */ if (!fZ) goto L_0051c91e;
L_0051c913:; BB(0x0051c913);
    /* 0051c913: fld dword ptr [0x921304] */ FPUSH(R_F32((u32)(0x921304u)));
    /* 0051c919: jmp 0x51c9e7 */ goto L_0051c9e7;
L_0051c91e:; BB(0x0051c91e);
    /* 0051c91e: mov dword ptr [ebp + 0x470], 0 */ W32((u32)(r_ebp+0x470u), 0x0u);
    /* 0051c928: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c92a: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x51c92fu); f_0052126c();
    /* 0051c92f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c931: jne 0x51c93e */ if (!fZ) goto L_0051c93e;
L_0051c933:; BB(0x0051c933);
    /* 0051c933: fld dword ptr [0x921304] */ FPUSH(R_F32((u32)(0x921304u)));
    /* 0051c939: jmp 0x51c9e7 */ goto L_0051c9e7;
L_0051c93e:; BB(0x0051c93e);
    /* 0051c93e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c943: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c944: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0051c94a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051c94c: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x51c94fu); call_ind(t); }
    /* 0051c94f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c951: jne 0x51c95e */ if (!fZ) goto L_0051c95e;
L_0051c953:; BB(0x0051c953);
    /* 0051c953: fld dword ptr [0x921304] */ FPUSH(R_F32((u32)(0x921304u)));
    /* 0051c959: jmp 0x51c9e7 */ goto L_0051c9e7;
L_0051c95e:; BB(0x0051c95e);
    /* 0051c95e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c963: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c964: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0051c96a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051c96c: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x51c96fu); call_ind(t); }
    /* 0051c96f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051c971: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c976: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c977: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0051c97d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051c97f: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x51c982u); call_ind(t); }
    /* 0051c982: mov dword ptr [ebp + 0x470], 1 */ W32((u32)(r_ebp+0x470u), 0x1u);
    /* 0051c98c: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x51c991u); f_00520e6c();
    /* 0051c991: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c993: jne 0x51c99d */ if (!fZ) goto L_0051c99d;
L_0051c995:; BB(0x0051c995);
    /* 0051c995: fld dword ptr [0x921304] */ FPUSH(R_F32((u32)(0x921304u)));
    /* 0051c99b: jmp 0x51c9e7 */ goto L_0051c9e7;
L_0051c99d:; BB(0x0051c99d);
    /* 0051c99d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c99f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51c9a4u); f_007751b0();
    /* 0051c9a4: fld dword ptr [0x921304] */ FPUSH(R_F32((u32)(0x921304u)));
    /* 0051c9aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051c9ac: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0051c9ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051c9b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051c9b1: ja 0x51c9e7 */ if ((!fC&&!fZ)) goto L_0051c9e7;
L_0051c9b3:; BB(0x0051c9b3);
    /* 0051c9b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051c9b5: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 0051c9bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c9bd: je 0x51c9d4 */ if (fZ) goto L_0051c9d4;
L_0051c9bf:; BB(0x0051c9bf);
    /* 0051c9bf: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c9c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c9c7: call 0x51fec4 */ r_esp -= 4; W32(r_esp, 0x51c9ccu); f_0051fec4();
    /* 0051c9cc: fld dword ptr [0x921304] */ FPUSH(R_F32((u32)(0x921304u)));
    /* 0051c9d2: jmp 0x51c9e7 */ goto L_0051c9e7;
L_0051c9d4:; BB(0x0051c9d4);
    /* 0051c9d4: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c9da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c9dc: call 0x51ff00 */ r_esp -= 4; W32(r_esp, 0x51c9e1u); f_0051ff00();
    /* 0051c9e1: fld dword ptr [0x921304] */ FPUSH(R_F32((u32)(0x921304u)));
L_0051c9e7:; BB(0x0051c9e7);
    /* 0051c9e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051c9e8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051c9eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051c9ed: call 0x51d3c4 */ r_esp -= 4; W32(r_esp, 0x51c9f2u); f_0051d3c4();
    /* 0051c9f2: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c9f7: push dword ptr [ebp + 0x434] */ { u32 v = R32((u32)(r_ebp+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051c9fd: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ca00: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x51ca05u); f_007a8c74();
    /* 0051ca05: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ca08: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0051ca0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ca0c: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0051ca0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ca11: call 0x51cc28 */ r_esp -= 4; W32(r_esp, 0x51ca16u); f_0051cc28();
    /* 0051ca16: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0051ca1c: fcomp dword ptr [0x9212f4] */ fx_compare(ST(0), R_F32((u32)(0x9212f4u))); FPOP();
    /* 0051ca22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051ca24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051ca25: jbe 0x51ca73 */ if ((fC||fZ)) goto L_0051ca73;
L_0051ca27:; BB(0x0051ca27);
    /* 0051ca27: mov eax, dword ptr [ebp + 0x470] */ r_eax = R32((u32)(r_ebp+0x470u));
    /* 0051ca2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ca2f: jne 0x51ca64 */ if (!fZ) goto L_0051ca64;
L_0051ca31:; BB(0x0051ca31);
    /* 0051ca31: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 0051ca37: fmul dword ptr [0x9212f8] */ ST(0) = ST(0) * R_F32((u32)(0x9212f8u));
    /* 0051ca3d: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 0051ca43: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 0051ca49: fst dword ptr [ebp + 0x40c] */ W_F32((u32)(r_ebp+0x40cu), ST(0));
    /* 0051ca4f: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ca52: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051ca56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ca58: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051ca5b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0051ca5f: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x51ca64u); f_005207c4();
L_0051ca64:; BB(0x0051ca64);
    /* 0051ca64: mov dword ptr [ebp + 0x414], 0 */ W32((u32)(r_ebp+0x414u), 0x0u);
    /* 0051ca6e: jmp 0x51cb28 */ goto L_0051cb28;
L_0051ca73:; BB(0x0051ca73);
    /* 0051ca73: push dword ptr [ebp + 0x40c] */ { u32 v = R32((u32)(r_ebp+0x40cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ca79: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ca7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ca81: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ca87: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x51ca8cu); f_005207c4();
    /* 0051ca8c: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0051ca92: fsub dword ptr [0xa72dfc] */ ST(0) = ST(0) - R_F32((u32)(0xa72dfcu));
    /* 0051ca98: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051ca9a: fmul dword ptr [ebp + 0x440] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x440u));
    /* 0051caa0: fadd dword ptr [0x9212f0] */ ST(0) = ST(0) + R_F32((u32)(0x9212f0u));
    /* 0051caa6: fadd dword ptr [ebp + 0x43c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x43cu));
    /* 0051caac: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 0051caaf: fstp dword ptr [ebp + 0x414] */ W_F32((u32)(r_ebp+0x414u), ST(0)); FPOP();
    /* 0051cab5: jmp 0x51cb28 */ goto L_0051cb28;
L_0051cab7:; BB(0x0051cab7);
    /* 0051cab7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051caba: jne 0x51cb28 */ if (!fZ) goto L_0051cb28;
L_0051cabc:; BB(0x0051cabc);
    /* 0051cabc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cabe: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51cac3u); f_007aa094();
    /* 0051cac3: mov eax, dword ptr [ebp + 0x428] */ r_eax = R32((u32)(r_ebp+0x428u));
    /* 0051cac9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051cacc: mov dword ptr [ebp + 0x428], eax */ W32((u32)(r_ebp+0x428u), r_eax);
    /* 0051cad2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051cad5: jl 0x51cae1 */ if ((fS!=fO)) goto L_0051cae1;
L_0051cad7:; BB(0x0051cad7);
    /* 0051cad7: mov dword ptr [ebp + 0x424], 2 */ W32((u32)(r_ebp+0x424u), 0x2u);
L_0051cae1:; BB(0x0051cae1);
    /* 0051cae1: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051cae4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cae6: call 0x51cc28 */ r_esp -= 4; W32(r_esp, 0x51caebu); f_0051cc28();
    /* 0051caeb: mov eax, dword ptr [ebp + 0x470] */ r_eax = R32((u32)(r_ebp+0x470u));
    /* 0051caf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051caf3: jne 0x51cb28 */ if (!fZ) goto L_0051cb28;
L_0051caf5:; BB(0x0051caf5);
    /* 0051caf5: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 0051cafb: fmul dword ptr [0x9212f8] */ ST(0) = ST(0) * R_F32((u32)(0x9212f8u));
    /* 0051cb01: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 0051cb07: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 0051cb0d: fst dword ptr [ebp + 0x40c] */ W_F32((u32)(r_ebp+0x40cu), ST(0));
    /* 0051cb13: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cb16: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051cb1a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cb1c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051cb1f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0051cb23: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x51cb28u); f_005207c4();
L_0051cb28:; BB(0x0051cb28);
    /* 0051cb28: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051cb2b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cb2d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51cb33u); call_ind(t); }
    /* 0051cb33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cb34: ret 4 */ FN_RET(0x0051c810); r_esp += 8; return;
L_0051cb37:; BB(0x0051cb37);
    /* 0051cb37: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051cb3a: jne 0x51cb5e */ if (!fZ) goto L_0051cb5e;
L_0051cb3c:; BB(0x0051cb3c);
    /* 0051cb3c: mov dword ptr [ebp + 0x414], 0 */ W32((u32)(r_ebp+0x414u), 0x0u);
    /* 0051cb46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cb47: ret 4 */ FN_RET(0x0051c810); r_esp += 8; return;
L_0051cb4a:; BB(0x0051cb4a);
    /* 0051cb4a: mov eax, dword ptr [ebp + 0x424] */ r_eax = R32((u32)(r_ebp+0x424u));
    /* 0051cb50: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051cb53: jne 0x51cb5e */ if (!fZ) goto L_0051cb5e;
L_0051cb55:; BB(0x0051cb55);
    /* 0051cb55: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cb59: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51cb5eu); f_0051f62c();
L_0051cb5e:; BB(0x0051cb5e);
    /* 0051cb5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cb5f: ret 4 */ FN_RET(0x0051c810); r_esp += 8; return;
L_0051cb62:; BB(0x0051cb62);
    /* 0051cb62: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb64: mov eax, 0xc */ r_eax = 0xcu;
    /* 0051cb69: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0051cb70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cb72: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51cb77u); f_0051f664();
    /* 0051cb77: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051cb7a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cb7c: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51cb82u); call_ind(t); }
    /* 0051cb82: mov eax, dword ptr [ebp + 0x410] */ r_eax = R32((u32)(r_ebp+0x410u));
    /* 0051cb88: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0051cb8b: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051cb8e: mov dword ptr [ebp + 0x410], eax */ W32((u32)(r_ebp+0x410u), r_eax);
    /* 0051cb94: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051cb96: mov dword ptr [ebp + 0x424], edx */ W32((u32)(r_ebp+0x424u), r_edx);
    /* 0051cb9c: mov dword ptr [ebp + 0x428], edx */ W32((u32)(r_ebp+0x428u), r_edx);
    /* 0051cba2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cba4: call 0x51ccc8 */ r_esp -= 4; W32(r_esp, 0x51cba9u); f_0051ccc8();
    /* 0051cba9: fld dword ptr [0x9212ec] */ FPUSH(R_F32((u32)(0x9212ecu)));
    /* 0051cbaf: fld dword ptr [0x921300] */ FPUSH(R_F32((u32)(0x921300u)));
    /* 0051cbb5: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0051cbbb: mov dword ptr [ebp + 0x434], eax */ W32((u32)(r_ebp+0x434u), r_eax);
    /* 0051cbc1: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0051cbc3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051cbc5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 0051cbc7: mov dword ptr [ebp + 0x438], edx */ W32((u32)(r_ebp+0x438u), r_edx);
    /* 0051cbcd: mov dword ptr [ebp + 0x414], 0 */ W32((u32)(r_ebp+0x414u), 0x0u);
    /* 0051cbd7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051cbd8: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0051cbdb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051cbdd: jb 0x51cbe1 */ if (fC) goto L_0051cbe1;
L_0051cbdf:; BB(0x0051cbdf);
    /* 0051cbdf: fst st(2) */ ST(2) = ST(0);
L_0051cbe1:; BB(0x0051cbe1);
    /* 0051cbe1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051cbe3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051cbe5: fst dword ptr [ebp + 0x3b4] */ W_F32((u32)(r_ebp+0x3b4u), ST(0));
    /* 0051cbeb: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0051cbed: fst dword ptr [ebp + 0x408] */ W_F32((u32)(r_ebp+0x408u), ST(0));
    /* 0051cbf3: fstp dword ptr [ebp + 0x40c] */ W_F32((u32)(r_ebp+0x40cu), ST(0)); FPOP();
    /* 0051cbf9: mov dword ptr [ebp + 0x444], 0x41a00000 */ W32((u32)(r_ebp+0x444u), 0x41a00000u);
    /* 0051cc03: mov dword ptr [ebp + 0x470], edx */ W32((u32)(r_ebp+0x470u), r_edx);
    /* 0051cc09: mov dword ptr [ebp + 0x43c], eax */ W32((u32)(r_ebp+0x43cu), r_eax);
    /* 0051cc0f: fld dword ptr [0xa72dfc] */ FPUSH(R_F32((u32)(0xa72dfcu)));
    /* 0051cc15: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051cc17: fdivr dword ptr [0x9212fc] */ ST(0) = R_F32((u32)(0x9212fcu)) / ST(0);
    /* 0051cc1d: fstp dword ptr [ebp + 0x440] */ W_F32((u32)(r_ebp+0x440u), ST(0)); FPOP();
    /* 0051cc23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cc24: ret 4 */ FN_RET(0x0051c810); r_esp += 8; return;
}

void f_0051cc28(void) /* sub_51CC28 */
{
    FN_ENTER(0x0051cc28);
    /* 0051cc28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc29: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc2a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051cc2c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051cc30: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051cc33: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x51cc38u); f_007a900c();
    /* 0051cc38: mov ebx, eax */ r_ebx = r_eax;
    /* 0051cc3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cc3d: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 0051cc43: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 0051cc48: cmp ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051cc4e: jge 0x51cc52 */ if ((fS==fO)) goto L_0051cc52;
L_0051cc50:; BB(0x0051cc50);
    /* 0051cc50: mov ebx, edx */ r_ebx = r_edx;
L_0051cc52:; BB(0x0051cc52);
    /* 0051cc52: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 0051cc57: cmp ebx, 0x4000 */ {  u32 a = r_ebx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051cc5d: jl 0x51cc61 */ if ((fS!=fO)) goto L_0051cc61;
L_0051cc5f:; BB(0x0051cc5f);
    /* 0051cc5f: mov ebx, edx */ r_ebx = r_edx;
L_0051cc61:; BB(0x0051cc61);
    /* 0051cc61: mov edx, ebx */ r_edx = r_ebx;
    /* 0051cc63: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051cc66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0051cc68: jl 0x51cc89 */ if ((fS!=fO)) goto L_0051cc89;
L_0051cc6a:; BB(0x0051cc6a);
    /* 0051cc6a: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc71: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x51cc76u); f_007a8c74();
    /* 0051cc76: mov edx, eax */ r_edx = r_eax;
    /* 0051cc78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0051cc7b:; BB(0x0051cc7b);
    /* 0051cc7b: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0051cc7e: mov dword ptr [ebp + 0x3ec], eax */ W32((u32)(r_ebp+0x3ecu), r_eax);
    /* 0051cc84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051cc85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cc86: ret 4 */ FN_RET(0x0051cc28); r_esp += 8; return;
L_0051cc89:; BB(0x0051cc89);
    /* 0051cc89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc8b: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x51cc90u); f_007a900c();
    /* 0051cc90: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cc93: mov edx, dword ptr [ebp + 0x3ec] */ r_edx = R32((u32)(r_ebp+0x3ecu));
    /* 0051cc99: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051cc9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0051cc9e: jl 0x51ccb4 */ if ((fS!=fO)) goto L_0051ccb4;
L_0051cca0:; BB(0x0051cca0);
    /* 0051cca0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0051cca2: jl 0x51ccac */ if ((fS!=fO)) goto L_0051ccac;
L_0051cca4:; BB(0x0051cca4);
    /* 0051cca4: add edx, 0xfffff800 */ {  u32 a = r_edx; u32 b = 0xfffff800u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ccaa: jmp 0x51cc7b */ goto L_0051cc7b;
L_0051ccac:; BB(0x0051ccac);
    /* 0051ccac: add edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ccb2: jmp 0x51cc7b */ goto L_0051cc7b;
L_0051ccb4:; BB(0x0051ccb4);
    /* 0051ccb4: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ccb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ccba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ccbb: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x51ccc0u); f_007a8c74();
    /* 0051ccc0: mov edx, eax */ r_edx = r_eax;
    /* 0051ccc2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ccc5: jmp 0x51cc7b */ goto L_0051cc7b;
}

void f_0051ccc8(void) /* sub_51CCC8 */
{
    FN_ENTER(0x0051ccc8);
    /* 0051ccc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051ccc9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051cccc: mov esi, ecx */ r_esi = r_ecx;
    /* 0051ccce: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ccd4: mov ecx, esi */ r_ecx = r_esi;
    /* 0051ccd6: call 0x5212c8 */ r_esp -= 4; W32(r_esp, 0x51ccdbu); f_005212c8();
    /* 0051ccdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ccdd: je 0x51cd94 */ if (fZ) goto L_0051cd94;
L_0051cce3:; BB(0x0051cce3);
    /* 0051cce3: mov ecx, esi */ r_ecx = r_esi;
    /* 0051cce5: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x51cceau); f_005213d8();
    /* 0051ccea: mov ecx, esi */ r_ecx = r_esi;
    /* 0051ccec: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51ccf1u); f_00521410();
    /* 0051ccf1: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0051ccf5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051ccf7: je 0x51cd01 */ if (fZ) goto L_0051cd01;
L_0051ccf9:; BB(0x0051ccf9);
    /* 0051ccf9: fld dword ptr [0x9212e0] */ FPUSH(R_F32((u32)(0x9212e0u)));
    /* 0051ccff: jmp 0x51cd07 */ goto L_0051cd07;
L_0051cd01:; BB(0x0051cd01);
    /* 0051cd01: fld dword ptr [0x9212e4] */ FPUSH(R_F32((u32)(0x9212e4u)));
L_0051cd07:; BB(0x0051cd07);
    /* 0051cd07: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0051cd09: fld dword ptr [0x9212d8] */ FPUSH(R_F32((u32)(0x9212d8u)));
    /* 0051cd0f: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0051cd15: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0051cd1b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0051cd1d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051cd1f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051cd21: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0051cd23: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051cd25: fsubr dword ptr [esi + 0x3a4] */ ST(0) = R_F32((u32)(r_esi+0x3a4u)) - ST(0);
    /* 0051cd2b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0051cd2d: fadd dword ptr [esi + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x39cu));
    /* 0051cd33: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 0051cd39: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0051cd3b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0051cd3d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0051cd3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051cd41: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 0051cd47: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051cd49: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
    /* 0051cd4f: mov ecx, esi */ r_ecx = r_esi;
    /* 0051cd51: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51cd56u); f_00521410();
    /* 0051cd56: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0051cd5c: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 0051cd62: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0051cd64: fmul qword ptr [0x921128] */ ST(0) = ST(0) * R_F64((u32)(0x921128u));
    /* 0051cd6a: fdiv qword ptr [0x921120] */ ST(0) = ST(0) / R_F64((u32)(0x921120u));
    /* 0051cd70: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0051cd73: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051cd77: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051cd7c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051cd80: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051cd84: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051cd88: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051cd8b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051cd8f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051cd92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051cd93: ret  */ FN_RET(0x0051ccc8); r_esp += 4; return;
L_0051cd94:; BB(0x0051cd94);
    /* 0051cd94: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0051cd97: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51cd9cu); f_0082dcbc();
    /* 0051cd9c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0051cd9f: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 0051cda5: mov dword ptr [esi + 0x3ac], 0 */ W32((u32)(r_esi+0x3acu), 0x0u);
    /* 0051cdaf: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51cdb4u); f_0082ddd8();
    /* 0051cdb4: fld dword ptr [0x9212dc] */ FPUSH(R_F32((u32)(0x9212dcu)));
    /* 0051cdba: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0051cdbd: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0051cdc3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051cdc5: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0051cdc8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051cdca: fst dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0));
    /* 0051cdd0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051cdd2: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0051cdd5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051cdd7: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 0051cddd: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
    /* 0051cde3: mov dword ptr [esi + 0x3b4], 0x41f00000 */ W32((u32)(r_esi+0x3b4u), 0x41f00000u);
    /* 0051cded: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
    /* 0051cdf3: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0051cdf6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051cdf9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051cdfa: ret  */ FN_RET(0x0051ccc8); r_esp += 4; return;
}

void f_0051cdfc(void) /* sub_51CDFC */
{
    FN_ENTER(0x0051cdfc);
    /* 0051cdfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051cdfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051cdfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051cdff: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ce02: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051ce04: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0051ce08: lea edi, [ebp + 0x44c] */ r_edi = (u32)(r_ebp+0x44cu);
    /* 0051ce0e: lea esi, [ebp + 0x458] */ r_esi = (u32)(r_ebp+0x458u);
    /* 0051ce14: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ce17: je 0x51d318 */ if (fZ) goto L_0051d318;
L_0051ce1d:; BB(0x0051ce1d);
    /* 0051ce1d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ce20: je 0x51d190 */ if (fZ) goto L_0051d190;
L_0051ce26:; BB(0x0051ce26);
    /* 0051ce26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ce28: jne 0x51d177 */ if (!fZ) goto L_0051d177;
L_0051ce2e:; BB(0x0051ce2e);
    /* 0051ce2e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ce30: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51ce35u); f_007aa094();
    /* 0051ce35: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ce37: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x51ce3cu); f_00521238();
    /* 0051ce3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ce3e: je 0x51d280 */ if (fZ) goto L_0051d280;
L_0051ce44:; BB(0x0051ce44);
    /* 0051ce44: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0051ce4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ce4c: jne 0x51cf11 */ if (!fZ) goto L_0051cf11;
L_0051ce52:; BB(0x0051ce52);
    /* 0051ce52: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0051ce58: mov dword ptr [ebp + 0x42c], 1 */ W32((u32)(r_ebp+0x42cu), 0x1u);
    /* 0051ce62: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0051ce65: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 0051ce6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce6d: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0051ce70: mov dword ptr [ebp + 0x450], edx */ W32((u32)(r_ebp+0x450u), r_edx);
    /* 0051ce76: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0051ce79: mov dword ptr [ebp + 0x454], eax */ W32((u32)(r_ebp+0x454u), r_eax);
    /* 0051ce7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ce81: call 0x5b0844 */ r_esp -= 4; W32(r_esp, 0x51ce86u); f_005b0844();
    /* 0051ce86: fstp dword ptr [ebp + 0x43c] */ W_F32((u32)(r_ebp+0x43cu), ST(0)); FPOP();
    /* 0051ce8c: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce91: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ce93: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce98: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x51ce9du); f_00520c08();
    /* 0051ce9d: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0051cea0: fstp dword ptr [ebp + 0x440] */ W_F32((u32)(r_ebp+0x440u), ST(0)); FPOP();
    /* 0051cea6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51ceabu); f_0082dcbc();
    /* 0051ceab: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0051ceae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051ceb1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0051ceb9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51cebeu); f_0082ddd8();
    /* 0051cebe: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0051cec4: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0051cec7: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 0051ceca: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0051cecd: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 0051ced0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051ced2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051ced6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0051ceda: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0051cede: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051cee1: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0051cee9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0051ceed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ceee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ceef: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x51cef4u); f_007829cc();
    /* 0051cef4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cef7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cef9: je 0x51cf07 */ if (fZ) goto L_0051cf07;
L_0051cefb:; BB(0x0051cefb);
    /* 0051cefb: mov dword ptr [ebp + 0x434], 0xffffffff */ W32((u32)(r_ebp+0x434u), 0xffffffffu);
    /* 0051cf05: jmp 0x51cf11 */ goto L_0051cf11;
L_0051cf07:; BB(0x0051cf07);
    /* 0051cf07: mov dword ptr [ebp + 0x434], 1 */ W32((u32)(r_ebp+0x434u), 0x1u);
L_0051cf11:; BB(0x0051cf11);
    /* 0051cf11: add dword ptr [ebp + 0x424], 1 */ { u32 ad = (u32)(r_ebp+0x424u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0051cf18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cf1a: call 0x51ddf4 */ r_esp -= 4; W32(r_esp, 0x51cf1fu); f_0051ddf4();
    /* 0051cf1f: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 0051cf25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051cf27: jle 0x51d2af */ if ((fZ||fS!=fO)) goto L_0051d2af;
L_0051cf2d:; BB(0x0051cf2d);
    /* 0051cf2d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051cf30: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 0051cf36: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 0051cf3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051cf3e: jle 0x51d298 */ if ((fZ||fS!=fO)) goto L_0051d298;
L_0051cf44:; BB(0x0051cf44);
    /* 0051cf44: fld dword ptr [ebp + 0x43c] */ FPUSH(R_F32((u32)(r_ebp+0x43cu)));
    /* 0051cf4a: fsub dword ptr [0x9212b8] */ ST(0) = ST(0) - R_F32((u32)(0x9212b8u));
    /* 0051cf50: fstp dword ptr [ebp + 0x43c] */ W_F32((u32)(r_ebp+0x43cu), ST(0)); FPOP();
L_0051cf56:; BB(0x0051cf56);
    /* 0051cf56: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0051cf5c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cf5f: jne 0x51d020 */ if (!fZ) goto L_0051d020;
L_0051cf65:; BB(0x0051cf65);
    /* 0051cf65: push 0x3df5c28f */ { u32 v = 0x3df5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf6a: mov dword ptr [ebp + 0x408], 0x3f333333 */ W32((u32)(r_ebp+0x408u), 0x3f333333u);
    /* 0051cf74: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cf76: call 0x51d3c4 */ r_esp -= 4; W32(r_esp, 0x51cf7bu); f_0051d3c4();
    /* 0051cf7b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf7d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cf7f: call 0x5b0844 */ r_esp -= 4; W32(r_esp, 0x51cf84u); f_005b0844();
    /* 0051cf84: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051cf86: fld dword ptr [ebp + 0x460] */ FPUSH(R_F32((u32)(r_ebp+0x460u)));
    /* 0051cf8c: fld dword ptr [ebp + 0x458] */ FPUSH(R_F32((u32)(r_ebp+0x458u)));
    /* 0051cf92: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 0051cf98: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051cf9a: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0051cf9e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0051cfa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0051cfa4: jl 0x51d289 */ if ((fS!=fO)) goto L_0051d289;
L_0051cfaa:; BB(0x0051cfaa);
    /* 0051cfaa: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0051cfae: fchs  */ ST(0) = -ST(0);
    /* 0051cfb0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0051cfb4:; BB(0x0051cfb4);
    /* 0051cfb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cfb8: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x51cfbdu); f_00520bb8();
    /* 0051cfbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cfbf: je 0x51cfca */ if (fZ) goto L_0051cfca;
L_0051cfc1:; BB(0x0051cfc1);
    /* 0051cfc1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cfc3: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x51cfc8u); f_00520bdc();
    /* 0051cfc8: jmp 0x51cfd1 */ goto L_0051cfd1;
L_0051cfca:; BB(0x0051cfca);
    /* 0051cfca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cfcc: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x51cfd1u); f_00520be8();
L_0051cfd1:; BB(0x0051cfd1);
    /* 0051cfd1: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0051cfd7: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cfda: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0051cfde: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0051cfe2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051cfe4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051cfe7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051cfeb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051cfef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cff1: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x51cff6u); f_005207c4();
    /* 0051cff6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051cff8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051cffa: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x51cfffu); f_00520bb8();
    /* 0051cfff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d001: je 0x51d0d8 */ if (fZ) goto L_0051d0d8;
L_0051d007:; BB(0x0051d007);
    /* 0051d007: mov dword ptr [ebp + 0x428], 0 */ W32((u32)(r_ebp+0x428u), 0x0u);
    /* 0051d011: mov dword ptr [ebp + 0x42c], 2 */ W32((u32)(r_ebp+0x42cu), 0x2u);
    /* 0051d01b: jmp 0x51d0d8 */ goto L_0051d0d8;
L_0051d020:; BB(0x0051d020);
    /* 0051d020: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d023: jne 0x51d0d8 */ if (!fZ) goto L_0051d0d8;
L_0051d029:; BB(0x0051d029);
    /* 0051d029: push 0x3df5c28f */ { u32 v = 0x3df5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d02e: mov dword ptr [ebp + 0x408], 0x3f000000 */ W32((u32)(r_ebp+0x408u), 0x3f000000u);
    /* 0051d038: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d03a: call 0x51d3c4 */ r_esp -= 4; W32(r_esp, 0x51d03fu); f_0051d3c4();
    /* 0051d03f: mov eax, dword ptr [ebp + 0x428] */ r_eax = R32((u32)(r_ebp+0x428u));
    /* 0051d045: mov esi, dword ptr [ebp + 0x60] */ r_esi = R32((u32)(r_ebp+0x60u));
    /* 0051d048: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d04b: mov dword ptr [ebp + 0x428], eax */ W32((u32)(r_ebp+0x428u), r_eax);
    /* 0051d051: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051d054: jge 0x51d061 */ if ((fS==fO)) goto L_0051d061;
L_0051d056:; BB(0x0051d056);
    /* 0051d056: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 0051d05c: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0051d05f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0051d061:; BB(0x0051d061);
    /* 0051d061: mov ecx, esi */ r_ecx = r_esi;
    /* 0051d063: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51d068u); f_0082dcbc();
    /* 0051d068: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0051d06c: mov ecx, esi */ r_ecx = r_esi;
    /* 0051d06e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51d073u); f_0082ddd8();
    /* 0051d073: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0051d077: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d079: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d07b: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x51d080u); f_00520bb8();
    /* 0051d080: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d082: je 0x51d097 */ if (fZ) goto L_0051d097;
L_0051d084:; BB(0x0051d084);
    /* 0051d084: mov dword ptr [ebp + 0x428], 0 */ W32((u32)(r_ebp+0x428u), 0x0u);
    /* 0051d08e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d090: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x51d095u); f_00520bdc();
    /* 0051d095: jmp 0x51d09e */ goto L_0051d09e;
L_0051d097:; BB(0x0051d097);
    /* 0051d097: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d099: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x51d09eu); f_00520be8();
L_0051d09e:; BB(0x0051d09e);
    /* 0051d09e: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0051d0a4: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d0a7: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0051d0ab: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0051d0af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051d0b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051d0b4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051d0b8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051d0bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d0be: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x51d0c3u); f_005207c4();
    /* 0051d0c3: mov eax, dword ptr [ebp + 0x428] */ r_eax = R32((u32)(r_ebp+0x428u));
    /* 0051d0c9: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051d0cc: jl 0x51d0d8 */ if ((fS!=fO)) goto L_0051d0d8;
L_0051d0ce:; BB(0x0051d0ce);
    /* 0051d0ce: mov dword ptr [ebp + 0x42c], 0 */ W32((u32)(r_ebp+0x42cu), 0x0u);
L_0051d0d8:; BB(0x0051d0d8);
    /* 0051d0d8: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0051d0db: fsub dword ptr [ebp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x44u));
    /* 0051d0de: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0051d0e1: fsub dword ptr [ebp + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4cu));
    /* 0051d0e4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0051d0e6: fmul qword ptr [0x921118] */ ST(0) = ST(0) * R_F64((u32)(0x921118u));
    /* 0051d0ec: fdiv qword ptr [0x921110] */ ST(0) = ST(0) / R_F64((u32)(0x921110u));
    /* 0051d0f2: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0051d0f6: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0051d0fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051d100: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0051d104: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0051d108: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051d10c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0051d110: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0051d114: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d11a: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051d11d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x51d122u); f_007a8c74();
    /* 0051d122: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d125: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 0051d12b: fmul dword ptr [0x921328] */ ST(0) = ST(0) * R_F32((u32)(0x921328u));
    /* 0051d131: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 0051d137: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0051d13a: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0051d13d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d13f: call 0x51b1cc */ r_esp -= 4; W32(r_esp, 0x51d144u); f_0051b1cc();
    /* 0051d144: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051d147: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d149: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51d14fu); call_ind(t); }
    /* 0051d14f: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0051d155: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0051d158: test edx, 0x380000 */ {  u32 a = r_edx; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d15e: je 0x51d280 */ if (fZ) goto L_0051d280;
L_0051d164:; BB(0x0051d164);
    /* 0051d164: mov dword ptr [ebp + 0x430], 0x14 */ W32((u32)(r_ebp+0x430u), 0x14u);
    /* 0051d16e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d172: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d173: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d174: ret 4 */ FN_RET(0x0051cdfc); r_esp += 8; return;
L_0051d177:; BB(0x0051d177);
    /* 0051d177: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d17a: jne 0x51d280 */ if (!fZ) goto L_0051d280;
L_0051d180:; BB(0x0051d180);
    /* 0051d180: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d182: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x51d187u); f_00520be8();
    /* 0051d187: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d18a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d18b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d18c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d18d: ret 4 */ FN_RET(0x0051cdfc); r_esp += 8; return;
L_0051d190:; BB(0x0051d190);
    /* 0051d190: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 0051d196: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d198: je 0x51d306 */ if (fZ) goto L_0051d306;
L_0051d19e:; BB(0x0051d19e);
    /* 0051d19e: mov eax, dword ptr [ebp + 0x424] */ r_eax = R32((u32)(r_ebp+0x424u));
    /* 0051d1a4: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051d1a9: jg 0x51d25b */ if ((!fZ&&fS==fO)) goto L_0051d25b;
L_0051d1af:; BB(0x0051d1af);
    /* 0051d1af: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051d1b2: jle 0x51d280 */ if ((fZ||fS!=fO)) goto L_0051d280;
L_0051d1b8:; BB(0x0051d1b8);
    /* 0051d1b8: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0051d1bb: fsub dword ptr [edx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x38u));
    /* 0051d1be: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051d1c0: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0051d1c3: fsub dword ptr [edx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x40u));
    /* 0051d1c6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051d1c8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051d1ca: fcom dword ptr [0xa72e00] */ fx_compare(ST(0), R_F32((u32)(0xa72e00u))); 
    /* 0051d1d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d1d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d1d3: jae 0x51d249 */ if (!fC) goto L_0051d249;
L_0051d1d5:; BB(0x0051d1d5);
    /* 0051d1d5: fcomp dword ptr [0xa72e04] */ fx_compare(ST(0), R_F32((u32)(0xa72e04u))); FPOP();
    /* 0051d1db: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d1dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d1de: jae 0x51d1f2 */ if (!fC) goto L_0051d1f2;
L_0051d1e0:; BB(0x0051d1e0);
    /* 0051d1e0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d1e4: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d1e9u); f_0051f62c();
    /* 0051d1e9: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d1ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d1ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d1ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d1ef: ret 4 */ FN_RET(0x0051cdfc); r_esp += 8; return;
L_0051d1f2:; BB(0x0051d1f2);
    /* 0051d1f2: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0051d1f5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51d1fau); f_0082dcbc();
    /* 0051d1fa: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0051d1fe: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0051d204: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0051d207: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51d20cu); f_0082ddd8();
    /* 0051d20c: fmul dword ptr [ebp + 0x460] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x460u));
    /* 0051d212: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0051d216: fmul dword ptr [ebp + 0x458] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x458u));
    /* 0051d21c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051d21e: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0051d222: mov ecx, 0x6aaa */ r_ecx = 0x6aaau;
    /* 0051d227: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51d22cu); f_0082ddd8();
    /* 0051d22c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0051d230: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0051d232: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d234: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d235: jae 0x51d280 */ if (!fC) goto L_0051d280;
L_0051d237:; BB(0x0051d237);
    /* 0051d237: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d239: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d23b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d240u); f_0051f62c();
    /* 0051d240: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d243: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d244: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d245: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d246: ret 4 */ FN_RET(0x0051cdfc); r_esp += 8; return;
L_0051d249:; BB(0x0051d249);
    /* 0051d249: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051d24b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d24d: call 0x51d430 */ r_esp -= 4; W32(r_esp, 0x51d252u); f_0051d430();
    /* 0051d252: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d256: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d257: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d258: ret 4 */ FN_RET(0x0051cdfc); r_esp += 8; return;
L_0051d25b:; BB(0x0051d25b);
    /* 0051d25b: mov dword ptr [ebp + 0x424], 0 */ W32((u32)(r_ebp+0x424u), 0x0u);
    /* 0051d265: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d267: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51d26cu); f_007751b0();
    /* 0051d26c: fcomp dword ptr [0x9212c0] */ fx_compare(ST(0), R_F32((u32)(0x9212c0u))); FPOP();
    /* 0051d272: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d274: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d275: jae 0x51d280 */ if (!fC) goto L_0051d280;
L_0051d277:; BB(0x0051d277);
    /* 0051d277: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d279: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d27b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d280u); f_0051f62c();
L_0051d280:; BB(0x0051d280);
    /* 0051d280: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d283: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d284: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d285: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d286: ret 4 */ FN_RET(0x0051cdfc); r_esp += 8; return;
L_0051d289:; BB(0x0051d289);
    /* 0051d289: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0051d28d: fchs  */ ST(0) = -ST(0);
    /* 0051d28f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0051d293: jmp 0x51cfb4 */ goto L_0051cfb4;
L_0051d298:; BB(0x0051d298);
    /* 0051d298: fld dword ptr [0x9212b8] */ FPUSH(R_F32((u32)(0x9212b8u)));
    /* 0051d29e: fadd dword ptr [ebp + 0x43c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x43cu));
    /* 0051d2a4: fstp dword ptr [ebp + 0x43c] */ W_F32((u32)(r_ebp+0x43cu), ST(0)); FPOP();
    /* 0051d2aa: jmp 0x51cf56 */ goto L_0051cf56;
L_0051d2af:; BB(0x0051d2af);
    /* 0051d2af: fld dword ptr [0x9212bc] */ FPUSH(R_F32((u32)(0x9212bcu)));
    /* 0051d2b5: fld dword ptr [ebp + 0x43c] */ FPUSH(R_F32((u32)(r_ebp+0x43cu)));
    /* 0051d2bb: fld dword ptr [ebp + 0x440] */ FPUSH(R_F32((u32)(r_ebp+0x440u)));
    /* 0051d2c1: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 0051d2c3: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0051d2c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d2c7: mov edx, dword ptr [ebp + 0x440] */ r_edx = R32((u32)(r_ebp+0x440u));
    /* 0051d2cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d2ce: jbe 0x51d2df */ if ((fC||fZ)) goto L_0051d2df;
L_0051d2d0:; BB(0x0051d2d0);
    /* 0051d2d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051d2d2: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0051d2d4: fstp dword ptr [ebp + 0x43c] */ W_F32((u32)(r_ebp+0x43cu), ST(0)); FPOP();
    /* 0051d2da: jmp 0x51cf56 */ goto L_0051cf56;
L_0051d2df:; BB(0x0051d2df);
    /* 0051d2df: fcomp dword ptr [0x9212c8] */ fx_compare(ST(0), R_F32((u32)(0x9212c8u))); FPOP();
    /* 0051d2e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d2e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d2e8: jae 0x51d2f7 */ if (!fC) goto L_0051d2f7;
L_0051d2ea:; BB(0x0051d2ea);
    /* 0051d2ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051d2ec: fstp dword ptr [ebp + 0x43c] */ W_F32((u32)(r_ebp+0x43cu), ST(0)); FPOP();
    /* 0051d2f2: jmp 0x51cf56 */ goto L_0051cf56;
L_0051d2f7:; BB(0x0051d2f7);
    /* 0051d2f7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0051d2f9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051d2fb: mov dword ptr [ebp + 0x43c], edx */ W32((u32)(r_ebp+0x43cu), r_edx);
    /* 0051d301: jmp 0x51cf56 */ goto L_0051cf56;
L_0051d306:; BB(0x0051d306);
    /* 0051d306: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d308: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d30a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d30fu); f_0051f62c();
    /* 0051d30f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d312: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d313: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d314: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d315: ret 4 */ FN_RET(0x0051cdfc); r_esp += 8; return;
L_0051d318:; BB(0x0051d318);
    /* 0051d318: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051d31a: mov eax, 1 */ r_eax = 0x1u;
    /* 0051d31f: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0051d326: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d328: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51d32du); f_0051f664();
    /* 0051d32d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051d330: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d332: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51d338u); call_ind(t); }
    /* 0051d338: mov dword ptr [ebp + 0x408], 0x3f333333 */ W32((u32)(r_ebp+0x408u), 0x3f333333u);
    /* 0051d342: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051d344: mov dword ptr [ebp + 0x424], eax */ W32((u32)(r_ebp+0x424u), r_eax);
    /* 0051d34a: mov dword ptr [ebp + 0x428], eax */ W32((u32)(r_ebp+0x428u), r_eax);
    /* 0051d350: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 0051d35a: mov dword ptr [ebp + 0x42c], eax */ W32((u32)(r_ebp+0x42cu), r_eax);
    /* 0051d360: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 0051d366: mov dword ptr [ebp + 0x434], eax */ W32((u32)(r_ebp+0x434u), r_eax);
    /* 0051d36c: mov dword ptr [ebp + 0x440], 0 */ W32((u32)(r_ebp+0x440u), 0x0u);
    /* 0051d376: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d378: mov dword ptr [ebp + 0x44c], 0 */ W32((u32)(r_ebp+0x44cu), 0x0u);
    /* 0051d382: mov dword ptr [ebp + 0x450], 0 */ W32((u32)(r_ebp+0x450u), 0x0u);
    /* 0051d38c: mov dword ptr [ebp + 0x454], 0 */ W32((u32)(r_ebp+0x454u), 0x0u);
    /* 0051d396: mov dword ptr [ebp + 0x458], 0 */ W32((u32)(r_ebp+0x458u), 0x0u);
    /* 0051d3a0: mov dword ptr [ebp + 0x45c], 0 */ W32((u32)(r_ebp+0x45cu), 0x0u);
    /* 0051d3aa: mov dword ptr [ebp + 0x460], 0 */ W32((u32)(r_ebp+0x460u), 0x0u);
    /* 0051d3b4: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x51d3b9u); f_00520bdc();
    /* 0051d3b9: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d3bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d3bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d3be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d3bf: ret 4 */ FN_RET(0x0051cdfc); r_esp += 8; return;
}

