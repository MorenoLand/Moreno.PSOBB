#include "protos.h"

void f_00452050(void) /* sub_452050 */
{
    FN_ENTER(0x00452050);
    /* 00452050: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00452052: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x452057u); f_0082fac4();
    /* 00452057: ret  */ FN_RET(0x00452050); r_esp += 4; return;
}

void f_00452058(void) /* sub_452058 */
{
    FN_ENTER(0x00452058);
    /* 00452058: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00452059: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045205b: movzx eax, byte ptr [0xa450a0] */ r_eax = (u32)R8((u32)(0xa450a0u));
    /* 00452062: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00452064: jne 0x45207a */ if (!fZ) goto L_0045207a;
L_00452066:; BB(0x00452066);
    /* 00452066: mov dword ptr [0xa450a4], 0xc2700000 */ W32((u32)(0xa450a4u), 0xc2700000u);
    /* 00452070: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00452075: mov byte ptr [0xa450a0], al */ W8((u32)(0xa450a0u), (u8)r_eax);
L_0045207a:; BB(0x0045207a);
    /* 0045207a: fld dword ptr [0xa450a4] */ FPUSH(R_F32((u32)(0xa450a4u)));
    /* 00452080: fadd dword ptr [ebx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x20u));
    /* 00452083: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00452086: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 00452089: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045208b: je 0x452096 */ if (fZ) goto L_00452096;
L_0045208d:; BB(0x0045208d);
    /* 0045208d: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 00452090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452091: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x452096u); f_00508db8();
L_00452096:; BB(0x00452096);
    /* 00452096: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00452099: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045209c: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 0045209f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004520a1: jl 0x4520b7 */ if ((fS!=fO)) goto L_004520b7;
L_004520a3:; BB(0x004520a3);
    /* 004520a3: call 0x44d00c */ r_esp -= 4; W32(r_esp, 0x4520a8u); f_0044d00c();
    /* 004520a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004520aa: jne 0x4520b5 */ if (!fZ) goto L_004520b5;
L_004520ac:; BB(0x004520ac);
    /* 004520ac: call 0x44d034 */ r_esp -= 4; W32(r_esp, 0x4520b1u); f_0044d034();
    /* 004520b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004520b3: je 0x4520b7 */ if (fZ) goto L_004520b7;
L_004520b5:; BB(0x004520b5);
    /* 004520b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004520b6: ret  */ FN_RET(0x00452058); r_esp += 4; return;
L_004520b7:; BB(0x004520b7);
    /* 004520b7: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004520bb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004520c0: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004520c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004520c5: ret  */ FN_RET(0x00452058); r_esp += 4; return;
}

void f_004520c8(void) /* sub_4520C8 */
{
    FN_ENTER(0x004520c8);
    /* 004520c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004520c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004520cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004520cd: push 0x8cf0c4 */ { u32 v = 0x8cf0c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004520d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004520d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004520d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004520e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004520e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004520e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004520e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004520ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004520ef: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004520f1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004520f8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4520fdu); f_005caba4();
    /* 004520fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004520fe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00452101: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452103: je 0x452139 */ if (fZ) goto L_00452139;
L_00452105:; BB(0x00452105);
    /* 00452105: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0045210c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00452113: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00452116: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452119: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045211c: call 0x452140 */ r_esp -= 4; W32(r_esp, 0x452121u); f_00452140();
    /* 00452121: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452124: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0045212b:; BB(0x0045212b);
    /* 0045212b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045212e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00452135: mov esp, ebp */ r_esp = r_ebp;
    /* 00452137: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452138: ret  */ FN_RET(0x004520c8); r_esp += 4; return;
L_00452139:; BB(0x00452139);
    /* 00452139: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045213b: jmp 0x45212b */ goto L_0045212b;
}

void f_00452140(void) /* sub_452140 */
{
    FN_ENTER(0x00452140);
    /* 00452140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452141: mov ebp, esp */ r_ebp = r_esp;
    /* 00452143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00452145: push 0x8cf0e0 */ { u32 v = 0x8cf0e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045214a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00452150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452151: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00452158: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045215b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045215e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00452161: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00452164: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00452167: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045216a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045216d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00452170: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00452173: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x452178u); f_008193cc();
    /* 00452178: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045217f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00452182: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452185: mov dword ptr [edi], 0xaf7264 */ W32((u32)(r_edi), 0xaf7264u);
    /* 0045218b: mov eax, dword ptr [0x9a5cfc] */ r_eax = R32((u32)(0x9a5cfcu));
    /* 00452190: mov dword ptr [edi + 0x28], 5 */ W32((u32)(r_edi+0x28u), 0x5u);
    /* 00452197: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0045219a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045219c: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 004521a1: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004521a4: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 004521a7: fadd dword ptr [0x8ffb44] */ ST(0) = ST(0) + R_F32((u32)(0x8ffb44u));
    /* 004521ad: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 004521b0: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 004521b3: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 004521b6: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 004521b9: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004521bc: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004521bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004521c0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4521c5u); f_00509590();
    /* 004521c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004521c8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004521cb: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004521ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004521d0: je 0x4521de */ if (fZ) goto L_004521de;
L_004521d2:; BB(0x004521d2);
    /* 004521d2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004521d4: mov ecx, eax */ r_ecx = r_eax;
    /* 004521d6: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4521dbu); f_00508efc();
    /* 004521db: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_004521de:; BB(0x004521de);
    /* 004521de: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004521e1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004521e4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004521e7: mov eax, edx */ r_eax = r_edx;
    /* 004521e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004521ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004521f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004521f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004521f6: ret 8 */ FN_RET(0x00452140); r_esp += 12; return;
}

void f_004521fc(void) /* sub_4521FC */
{
    FN_ENTER(0x004521fc);
    /* 004521fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004521fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004521fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004521ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00452200: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452203: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00452205: call 0x44d034 */ r_esp -= 4; W32(r_esp, 0x45220au); f_0044d034();
    /* 0045220a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045220c: je 0x4522ff */ if (fZ) goto L_004522ff;
L_00452212:; BB(0x00452212);
    /* 00452212: movzx eax, word ptr [ebx + 0x34] */ r_eax = (u32)R16((u32)(r_ebx+0x34u));
    /* 00452216: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045221b: je 0x4522ea */ if (fZ) goto L_004522ea;
L_00452221:; BB(0x00452221);
    /* 00452221: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452222: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x452227u); f_0068d5a8();
    /* 00452227: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00452228: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045222a: je 0x4522ea */ if (fZ) goto L_004522ea;
L_00452230:; BB(0x00452230);
    /* 00452230: mov edi, dword ptr [eax + 0x300] */ r_edi = R32((u32)(r_eax+0x300u));
    /* 00452236: mov esi, dword ptr [eax + 0x304] */ r_esi = R32((u32)(r_eax+0x304u));
    /* 0045223c: mov ebp, dword ptr [eax + 0x308] */ r_ebp = R32((u32)(r_eax+0x308u));
    /* 00452242: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00452245: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00452248: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045224b: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 0045224e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452250: je 0x4522de */ if (fZ) goto L_004522de;
L_00452256:; BB(0x00452256);
    /* 00452256: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452259: jne 0x45227f */ if (!fZ) goto L_0045227f;
L_0045225b:; BB(0x0045225b);
    /* 0045225b: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0045225e: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00452262: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00452266: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00452269: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045226c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045226d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x452272u); f_00508db8();
    /* 00452272: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00452275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00452277: jle 0x452314 */ if ((fZ||fS!=fO)) goto L_00452314;
L_0045227d:; BB(0x0045227d);
    /* 0045227d: jmp 0x4522e2 */ goto L_004522e2;
L_0045227f:; BB(0x0045227f);
    /* 0045227f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452282: jne 0x4522e2 */ if (!fZ) goto L_004522e2;
L_00452284:; BB(0x00452284);
    /* 00452284: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00452289: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045228b: mov eax, ecx */ r_eax = r_ecx;
    /* 0045228d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00452290: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00452292: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00452294: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00452297: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452299: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045229b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045229d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045229f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004522a1: jne 0x4522d4 */ if (!fZ) goto L_004522d4;
L_004522a3:; BB(0x004522a3);
    /* 004522a3: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004522a7: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 004522ab: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004522ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004522b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004522b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004522b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004522b3: push 0x376 */ { u32 v = 0x376u; r_esp -= 4; W32(r_esp, v); }
    /* 004522b8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4522bdu); f_00814298();
    /* 004522bd: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004522c1: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 004522c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004522c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004522c6: push dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004522c9: call 0x4523bc */ r_esp -= 4; W32(r_esp, 0x4522ceu); f_004523bc();
    /* 004522ce: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004522d1: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
L_004522d4:; BB(0x004522d4);
    /* 004522d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004522d6: jle 0x45238f */ if ((fZ||fS!=fO)) goto L_0045238f;
L_004522dc:; BB(0x004522dc);
    /* 004522dc: jmp 0x4522e2 */ goto L_004522e2;
L_004522de:; BB(0x004522de);
    /* 004522de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004522e0: jle 0x45234d */ if ((fZ||fS!=fO)) goto L_0045234d;
L_004522e2:; BB(0x004522e2);
    /* 004522e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004522e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004522e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004522e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004522e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004522e9: ret  */ FN_RET(0x004521fc); r_esp += 4; return;
L_004522ea:; BB(0x004522ea);
    /* 004522ea: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004522ee: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004522f3: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004522f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004522fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004522fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004522fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004522fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004522fe: ret  */ FN_RET(0x004521fc); r_esp += 4; return;
L_004522ff:; BB(0x004522ff);
    /* 004522ff: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00452303: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00452308: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0045230c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045230f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00452310: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452311: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00452312: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452313: ret  */ FN_RET(0x004521fc); r_esp += 4; return;
L_00452314:; BB(0x00452314);
    /* 00452314: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00452317: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45231cu); f_005cdcc0();
    /* 0045231c: movsx eax, word ptr [ebx + 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x34u));
    /* 00452320: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 00452327: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452328: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0045232a: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045232f: call 0x6ff4ac */ r_esp -= 4; W32(r_esp, 0x452334u); f_006ff4ac();
    /* 00452334: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452337: mov dword ptr [ebx + 0x28], 0xb */ W32((u32)(r_ebx+0x28u), 0xbu);
    /* 0045233e: mov dword ptr [ebx + 0x30], 2 */ W32((u32)(r_ebx+0x30u), 0x2u);
    /* 00452345: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452348: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00452349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045234a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045234b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045234c: ret  */ FN_RET(0x004521fc); r_esp += 4; return;
L_0045234d:; BB(0x0045234d);
    /* 0045234d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00452351: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00452355: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00452358: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045235b: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00452360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452361: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x452366u); f_00509590();
    /* 00452366: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452369: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 0045236c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045236e: je 0x4523a4 */ if (fZ) goto L_004523a4;
L_00452370:; BB(0x00452370);
    /* 00452370: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00452372: mov ecx, eax */ r_ecx = r_eax;
    /* 00452374: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x452379u); f_00508efc();
    /* 00452379: mov dword ptr [ebx + 0x28], 0xa */ W32((u32)(r_ebx+0x28u), 0xau);
    /* 00452380: mov dword ptr [ebx + 0x30], 1 */ W32((u32)(r_ebx+0x30u), 0x1u);
    /* 00452387: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045238a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045238b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045238c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045238d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045238e: ret  */ FN_RET(0x004521fc); r_esp += 4; return;
L_0045238f:; BB(0x0045238f);
    /* 0045238f: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00452393: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00452398: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0045239c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045239f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004523a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004523a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004523a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004523a3: ret  */ FN_RET(0x004521fc); r_esp += 4; return;
L_004523a4:; BB(0x004523a4);
    /* 004523a4: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004523a8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004523ad: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004523b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004523b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004523b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004523b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004523b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004523b8: ret  */ FN_RET(0x004521fc); r_esp += 4; return;
}

void f_00452340(void)
{
    FN_ENTER(0x00452340);
    /* 00452340: xor byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00452342: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00452344: add byte ptr [ebx + 0x5d5b0cc4], al */ { u32 ad = (u32)(r_ebx+0x5d5b0cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0045234a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045234b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045234c: ret  */ FN_RET(0x00452340); r_esp += 4; return;
}

void f_004523bc(void) /* sub_4523BC */
{
    FN_ENTER(0x004523bc);
    /* 004523bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004523bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004523bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004523c1: push 0x8cf108 */ { u32 v = 0x8cf108u; r_esp -= 4; W32(r_esp, v); }
    /* 004523c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004523cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004523cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004523d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004523d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004523da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004523dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004523e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004523e3: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004523e5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004523ec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4523f1u); f_005caba4();
    /* 004523f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004523f2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004523f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004523f7: je 0x452430 */ if (fZ) goto L_00452430;
L_004523f9:; BB(0x004523f9);
    /* 004523f9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00452400: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00452407: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045240a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045240d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452410: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452413: call 0x452434 */ r_esp -= 4; W32(r_esp, 0x452418u); f_00452434();
    /* 00452418: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045241b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00452422:; BB(0x00452422);
    /* 00452422: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452425: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045242c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045242e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045242f: ret  */ FN_RET(0x004523bc); r_esp += 4; return;
L_00452430:; BB(0x00452430);
    /* 00452430: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00452432: jmp 0x452422 */ goto L_00452422;
}

void f_00452434(void) /* sub_452434 */
{
    FN_ENTER(0x00452434);
    /* 00452434: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452435: mov ebp, esp */ r_ebp = r_esp;
    /* 00452437: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00452439: push 0x8cf124 */ { u32 v = 0x8cf124u; r_esp -= 4; W32(r_esp, v); }
    /* 0045243e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00452444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452445: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045244c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045244f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00452452: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00452455: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00452458: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0045245b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045245e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452461: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452464: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00452467: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045246a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0045246d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x452472u); f_008193cc();
    /* 00452472: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00452479: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045247c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045247f: mov dword ptr [eax], 0xaf7284 */ W32((u32)(r_eax), 0xaf7284u);
    /* 00452485: mov edx, dword ptr [0x9a5d04] */ r_edx = R32((u32)(0x9a5d04u));
    /* 0045248b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0045248e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00452490: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00452493: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00452496: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452499: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 0045249c: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0045249f: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 004524a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004524a4: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 004524a7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004524aa: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 004524ad: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004524b0: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 004524b3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4524b8u); f_008587a5();
    /* 004524b8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004524bb: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 004524be: fdiv dword ptr [0x8ffb3c] */ ST(0) = ST(0) / R_F32((u32)(0x8ffb3cu));
    /* 004524c4: fmul dword ptr [0x8ffb40] */ ST(0) = ST(0) * R_F32((u32)(0x8ffb40u));
    /* 004524ca: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 004524cd: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 004524d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004524d6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004524d9: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 004524dc: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004524df: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004524e2: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004524e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004524e7: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4524ecu); f_0082dcbc();
    /* 004524ec: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004524ef: fld dword ptr [0x8ffb34] */ FPUSH(R_F32((u32)(0x8ffb34u)));
    /* 004524f5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004524f7: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 004524fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004524fc: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 00452503: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x452508u); f_0082ddd8();
    /* 00452508: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045250b: fld dword ptr [0x8ffb34] */ FPUSH(R_F32((u32)(0x8ffb34u)));
    /* 00452511: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00452513: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00452516: mov dword ptr [eax + 0x40], 0x3f800000 */ W32((u32)(r_eax+0x40u), 0x3f800000u);
    /* 0045251d: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00452522: mov dword ptr [eax + 0x48], 0x96 */ W32((u32)(r_eax+0x48u), 0x96u);
    /* 00452529: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045252c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045252d: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x452532u); f_00509590();
    /* 00452532: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452535: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00452538: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0045253b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045253d: je 0x45254b */ if (fZ) goto L_0045254b;
L_0045253f:; BB(0x0045253f);
    /* 0045253f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00452541: mov ecx, eax */ r_ecx = r_eax;
    /* 00452543: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x452548u); f_00508efc();
    /* 00452548: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
L_0045254b:; BB(0x0045254b);
    /* 0045254b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045254e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452551: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00452554: mov eax, edx */ r_eax = r_edx;
    /* 00452556: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452559: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00452560: mov esp, ebp */ r_esp = r_ebp;
    /* 00452562: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452563: ret 0xc */ FN_RET(0x00452434); r_esp += 16; return;
}

void f_00452568(void) /* sub_452568 */
{
    FN_ENTER(0x00452568);
    /* 00452568: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452569: mov ebp, esp */ r_ebp = r_esp;
    /* 0045256b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045256d: push 0x8cf14c */ { u32 v = 0x8cf14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00452572: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00452578: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452579: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00452580: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452583: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00452586: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00452589: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045258c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045258f: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00452591: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00452598: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x45259du); f_005caba4();
    /* 0045259d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045259e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004525a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004525a3: je 0x4525de */ if (fZ) goto L_004525de;
L_004525a5:; BB(0x004525a5);
    /* 004525a5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004525ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004525b3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004525b6: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 004525ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004525bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004525be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004525c1: call 0x4525e4 */ r_esp -= 4; W32(r_esp, 0x4525c6u); f_004525e4();
    /* 004525c6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004525c9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004525d0:; BB(0x004525d0);
    /* 004525d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004525d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004525da: mov esp, ebp */ r_esp = r_ebp;
    /* 004525dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004525dd: ret  */ FN_RET(0x00452568); r_esp += 4; return;
L_004525de:; BB(0x004525de);
    /* 004525de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004525e0: jmp 0x4525d0 */ goto L_004525d0;
}

void f_004525e4(void) /* sub_4525E4 */
{
    FN_ENTER(0x004525e4);
    /* 004525e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004525e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004525e6: mov edi, ecx */ r_edi = r_ecx;
    /* 004525e8: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 004525ec: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004525f0: mov ecx, edi */ r_ecx = r_edi;
    /* 004525f2: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4525f7u); f_008193cc();
    /* 004525f7: mov dword ptr [edi], 0xaf7274 */ W32((u32)(r_edi), 0xaf7274u);
    /* 004525fd: mov eax, dword ptr [0x9a5d00] */ r_eax = R32((u32)(0x9a5d00u));
    /* 00452602: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00452605: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00452607: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0045260c: mov word ptr [edi + 0x34], ax */ W16((u32)(r_edi+0x34u), (u16)r_eax);
    /* 00452610: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 00452613: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00452616: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00452619: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0045261c: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 0045261f: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00452622: mov dword ptr [edi + 0x28], 5 */ W32((u32)(r_edi+0x28u), 0x5u);
    /* 00452629: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 0045262c: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0045262f: mov eax, edi */ r_eax = r_edi;
    /* 00452631: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452632: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452633: ret 0xc */ FN_RET(0x004525e4); r_esp += 16; return;
}

void f_00452638(void) /* sub_452638 */
{
    FN_ENTER(0x00452638);
    /* 00452638: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00452639: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045263a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045263b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045263e: mov esi, ecx */ r_esi = r_ecx;
    /* 00452640: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 00452643: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452646: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00452649: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045264b: jl 0x4527d0 */ if ((fS!=fO)) goto L_004527d0;
L_00452651:; BB(0x00452651);
    /* 00452651: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 00452654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452656: je 0x4527d0 */ if (fZ) goto L_004527d0;
L_0045265c:; BB(0x0045265c);
    /* 0045265c: movzx edx, byte ptr [0xa450a8] */ r_edx = (u32)R8((u32)(0xa450a8u));
    /* 00452663: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00452666: jne 0x45267b */ if (!fZ) goto L_0045267b;
L_00452668:; BB(0x00452668);
    /* 00452668: mov dword ptr [0xa450ac], 0x3e888889 */ W32((u32)(0xa450acu), 0x3e888889u);
    /* 00452672: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00452675: mov byte ptr [0xa450a8], dl */ W8((u32)(0xa450a8u), (u8)r_edx);
L_0045267b:; BB(0x0045267b);
    /* 0045267b: fld dword ptr [0xa450ac] */ FPUSH(R_F32((u32)(0xa450acu)));
    /* 00452681: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00452684: fcom dword ptr [0x8ffb1c] */ fx_compare(ST(0), R_F32((u32)(0x8ffb1cu))); 
    /* 0045268a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045268c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045268d: jbe 0x45269b */ if ((fC||fZ)) goto L_0045269b;
L_0045268f:; BB(0x0045268f);
    /* 0045268f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00452691: mov eax, 0x41100000 */ r_eax = 0x41100000u;
    /* 00452696: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00452699: jmp 0x45269e */ goto L_0045269e;
L_0045269b:; BB(0x0045269b);
    /* 0045269b: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
L_0045269e:; BB(0x0045269e);
    /* 0045269e: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004526a1: jne 0x4526b9 */ if (!fZ) goto L_004526b9;
L_004526a3:; BB(0x004526a3);
    /* 004526a3: mov dword ptr [0xa450b0], 0x3dccccd0 */ W32((u32)(0xa450b0u), 0x3dccccd0u);
    /* 004526ad: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004526b3: mov byte ptr [0xa450a8], dl */ W8((u32)(0xa450a8u), (u8)r_edx);
L_004526b9:; BB(0x004526b9);
    /* 004526b9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004526bc: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 004526bf: mov ebx, dword ptr [esi + 0x2c] */ r_ebx = R32((u32)(r_esi+0x2cu));
    /* 004526c2: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 004526c5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004526c8: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004526cc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004526d0: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
    /* 004526d3: mov edx, ebx */ r_edx = r_ebx;
    /* 004526d5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4526dau); f_0082f9c4();
    /* 004526da: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004526dd: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4526e2u); f_0083173c();
    /* 004526e2: fcomp dword ptr [0x8ffb28] */ fx_compare(ST(0), R_F32((u32)(0x8ffb28u))); FPOP();
    /* 004526e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004526ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004526eb: ja 0x452706 */ if ((!fC&&!fZ)) goto L_00452706;
L_004526ed:; BB(0x004526ed);
    /* 004526ed: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 004526f4: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004526fc: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00452704: jmp 0x452710 */ goto L_00452710;
L_00452706:; BB(0x00452706);
    /* 00452706: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00452709: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45270eu); f_0082df08();
    /* 0045270e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00452710:; BB(0x00452710);
    /* 00452710: lea edi, [esi + 0x34] */ r_edi = (u32)(r_esi+0x34u);
    /* 00452713: mov ecx, edi */ r_ecx = r_edi;
    /* 00452715: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x45271au); f_0083173c();
    /* 0045271a: fcomp dword ptr [0x8ffb28] */ fx_compare(ST(0), R_F32((u32)(0x8ffb28u))); FPOP();
    /* 00452720: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452722: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452723: ja 0x452739 */ if ((!fC&&!fZ)) goto L_00452739;
L_00452725:; BB(0x00452725);
    /* 00452725: fld dword ptr [0x8ffb24] */ FPUSH(R_F32((u32)(0x8ffb24u)));
    /* 0045272b: fld dword ptr [0x8ffb20] */ FPUSH(R_F32((u32)(0x8ffb20u)));
    /* 00452731: fld dword ptr [0x8ffb20] */ FPUSH(R_F32((u32)(0x8ffb20u)));
    /* 00452737: jmp 0x45274b */ goto L_0045274b;
L_00452739:; BB(0x00452739);
    /* 00452739: mov ecx, edi */ r_ecx = r_edi;
    /* 0045273b: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x452740u); f_0082df08();
    /* 00452740: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00452742: fld dword ptr [esi + 0x34] */ FPUSH(R_F32((u32)(r_esi+0x34u)));
    /* 00452745: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00452748: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
L_0045274b:; BB(0x0045274b);
    /* 0045274b: fld dword ptr [0xa450b0] */ FPUSH(R_F32((u32)(0xa450b0u)));
    /* 00452751: fld dword ptr [0x8ff9fc] */ FPUSH(R_F32((u32)(0x8ff9fcu)));
    /* 00452757: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00452759: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0045275b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0045275d: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00452760: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00452763: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00452765: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00452767: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00452769: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045276d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0045276f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00452771: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00452774: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00452776: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00452778: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045277a: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0045277c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00452780: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00452782: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00452784: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00452787: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00452789: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045278b: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0045278e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00452790: mov edx, edi */ r_edx = r_edi;
    /* 00452792: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x452797u); f_0082ebac();
    /* 00452797: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00452798: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0045279b: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4527a0u); f_00508db8();
    /* 004527a0: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 004527a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004527a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004527a5: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4527aau); f_00836208();
    /* 004527aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004527ad: fcomp dword ptr [esi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x40u))); FPOP();
    /* 004527b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004527b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004527b3: ja 0x4527c9 */ if ((!fC&&!fZ)) goto L_004527c9;
L_004527b5:; BB(0x004527b5);
    /* 004527b5: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004527b9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004527be: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004527c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004527c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004527c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004527c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004527c8: ret  */ FN_RET(0x00452638); r_esp += 4; return;
L_004527c9:; BB(0x004527c9);
    /* 004527c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004527cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004527cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004527ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004527cf: ret  */ FN_RET(0x00452638); r_esp += 4; return;
L_004527d0:; BB(0x004527d0);
    /* 004527d0: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004527d4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004527d9: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004527dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004527e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004527e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004527e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004527e3: ret  */ FN_RET(0x00452638); r_esp += 4; return;
}

void f_004527e4(void) /* sub_4527E4 */
{
    FN_ENTER(0x004527e4);
    /* 004527e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004527e5: mov edi, ecx */ r_edi = r_ecx;
    /* 004527e7: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004527ea: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004527ed: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004527f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004527f2: jle 0x4527f6 */ if ((fZ||fS!=fO)) goto L_004527f6;
L_004527f4:; BB(0x004527f4);
    /* 004527f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004527f5: ret  */ FN_RET(0x004527e4); r_esp += 4; return;
L_004527f6:; BB(0x004527f6);
    /* 004527f6: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004527f8: lea eax, [edi + 0x20] */ r_eax = (u32)(r_edi+0x20u);
    /* 004527fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004527fc: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x452801u); f_0050b510();
    /* 00452801: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00452805: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045280a: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0045280e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452811: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452812: ret  */ FN_RET(0x004527e4); r_esp += 4; return;
}

void f_00452814(void) /* sub_452814 */
{
    FN_ENTER(0x00452814);
    /* 00452814: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452815: mov ebp, esp */ r_ebp = r_esp;
    /* 00452817: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00452819: push 0x8cf174 */ { u32 v = 0x8cf174u; r_esp -= 4; W32(r_esp, v); }
    /* 0045281e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00452824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452825: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045282c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045282f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00452832: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00452835: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00452838: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045283b: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045283d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00452844: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x452849u); f_005caba4();
    /* 00452849: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045284a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045284d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045284f: je 0x452885 */ if (fZ) goto L_00452885;
L_00452851:; BB(0x00452851);
    /* 00452851: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00452858: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045285f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00452862: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452865: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452868: call 0x45288c */ r_esp -= 4; W32(r_esp, 0x45286du); f_0045288c();
    /* 0045286d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452870: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00452877:; BB(0x00452877);
    /* 00452877: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045287a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00452881: mov esp, ebp */ r_esp = r_ebp;
    /* 00452883: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452884: ret  */ FN_RET(0x00452814); r_esp += 4; return;
L_00452885:; BB(0x00452885);
    /* 00452885: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00452887: jmp 0x452877 */ goto L_00452877;
}

void f_0045288c(void) /* sub_45288C */
{
    FN_ENTER(0x0045288c);
    /* 0045288c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045288d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045288e: mov esi, ecx */ r_esi = r_ecx;
    /* 00452890: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00452894: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00452898: mov ecx, esi */ r_ecx = r_esi;
    /* 0045289a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x45289fu); f_008193cc();
    /* 0045289f: mov dword ptr [esi], 0xaf7294 */ W32((u32)(r_esi), 0xaf7294u);
    /* 004528a5: mov edx, dword ptr [0x9a5d08] */ r_edx = R32((u32)(0x9a5d08u));
    /* 004528ab: mov eax, dword ptr [0xa4514c] */ r_eax = R32((u32)(0xa4514cu));
    /* 004528b0: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 004528b3: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 004528b6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004528b9: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 004528bc: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004528bf: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 004528c2: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 004528c5: mov dword ptr [esi + 0x28], ebp */ W32((u32)(r_esi+0x28u), r_ebp);
    /* 004528c8: mov eax, esi */ r_eax = r_esi;
    /* 004528ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004528cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004528cc: ret 8 */ FN_RET(0x0045288c); r_esp += 12; return;
}

void f_004528d0(void) /* sub_4528D0 */
{
    FN_ENTER(0x004528d0);
    /* 004528d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004528d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004528d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004528d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004528d4: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004528d7: mov edx, ecx */ r_edx = r_ecx;
    /* 004528d9: fld dword ptr [0x8ffb18] */ FPUSH(R_F32((u32)(0x8ffb18u)));
    /* 004528df: fmul dword ptr [0xa45150] */ ST(0) = ST(0) * R_F32((u32)(0xa45150u));
    /* 004528e5: fld dword ptr [0x8ffb14] */ FPUSH(R_F32((u32)(0x8ffb14u)));
    /* 004528eb: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 004528ee: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004528f0: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 004528f4: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 004528f9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004528fe: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00452902: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00452906: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0045290a: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0045290e: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00452912: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00452914: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00452916: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0045291a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00452922: mov edi, edx */ r_edi = r_edx;
    /* 00452924: mov ebx, ecx */ r_ebx = r_ecx;
L_00452926:; BB(0x00452926);
    /* 00452926: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00452928: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45292du); f_0082dcbc();
    /* 0045292d: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 00452930: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00452932: fadd dword ptr [edi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x1cu));
    /* 00452935: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00452938: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045293a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45293fu); f_0082ddd8();
    /* 0045293f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00452942: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 00452945: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00452947: fadd dword ptr [edi + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x24u));
    /* 0045294a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045294e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x452953u); f_0083173c();
    /* 00452953: fld dword ptr [0xa45154] */ FPUSH(R_F32((u32)(0xa45154u)));
    /* 00452959: fadd dword ptr [0xa45150] */ ST(0) = ST(0) + R_F32((u32)(0xa45150u));
    /* 0045295f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00452961: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452963: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452964: jb 0x452aa8 */ if (fC) goto L_00452aa8;
L_0045296a:; BB(0x0045296a);
    /* 0045296a: movzx eax, byte ptr [0xa45158] */ r_eax = (u32)R8((u32)(0xa45158u));
    /* 00452971: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00452973: jne 0x452991 */ if (!fZ) goto L_00452991;
L_00452975:; BB(0x00452975);
    /* 00452975: fld dword ptr [0x8ffb0c] */ FPUSH(R_F32((u32)(0x8ffb0cu)));
    /* 0045297b: mov dword ptr [0xa4515c], 0x40000000 */ W32((u32)(0xa4515cu), 0x40000000u);
    /* 00452985: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045298a: mov byte ptr [0xa45158], al */ W8((u32)(0xa45158u), (u8)r_eax);
    /* 0045298f: jmp 0x452997 */ goto L_00452997;
L_00452991:; BB(0x00452991);
    /* 00452991: fld dword ptr [0xa4515c] */ FPUSH(R_F32((u32)(0xa4515cu)));
L_00452997:; BB(0x00452997);
    /* 00452997: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0045299b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0045299e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004529a2: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004529a6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004529aa: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 004529ae: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004529b2: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 004529b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004529b8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4529bdu); f_0050b510();
    /* 004529bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004529c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004529c2: je 0x4529cd */ if (fZ) goto L_004529cd;
L_004529c4:; BB(0x004529c4);
    /* 004529c4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004529c6: mov ecx, eax */ r_ecx = r_eax;
    /* 004529c8: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4529cdu); f_00508efc();
L_004529cd:; BB(0x004529cd);
    /* 004529cd: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004529d0: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 004529d4: fld dword ptr [0x8ffb08] */ FPUSH(R_F32((u32)(0x8ffb08u)));
    /* 004529da: fmul dword ptr [0xa45150] */ ST(0) = ST(0) * R_F32((u32)(0xa45150u));
    /* 004529e0: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004529e4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004529e8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004529ec: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 004529f0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004529f4: call 0x44d034 */ r_esp -= 4; W32(r_esp, 0x4529f9u); f_0044d034();
    /* 004529f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004529fb: je 0x452aa5 */ if (fZ) goto L_00452aa5;
L_00452a01:; BB(0x00452a01);
    /* 00452a01: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00452a06: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00452a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00452a0a: jle 0x452aa5 */ if ((fZ||fS!=fO)) goto L_00452aa5;
L_00452a10:; BB(0x00452a10);
    /* 00452a10: mov dword ptr [esp + 0x24], 0x11 */ W32((u32)(r_esp+0x24u), 0x11u);
    /* 00452a18: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 00452a1c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00452a1e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00452a22:; BB(0x00452a22);
    /* 00452a22: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 00452a29: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452a2b: je 0x452a9a */ if (fZ) goto L_00452a9a;
L_00452a2d:; BB(0x00452a2d);
    /* 00452a2d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00452a31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452a32: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x452a37u); f_00453ab8();
    /* 00452a37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00452a38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452a3a: jne 0x452a43 */ if (!fZ) goto L_00452a43;
L_00452a3c:; BB(0x00452a3c);
    /* 00452a3c: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00452a41: jmp 0x452a9a */ goto L_00452a9a;
L_00452a43:; BB(0x00452a43);
    /* 00452a43: mov eax, dword ptr [edi + 0x964] */ r_eax = R32((u32)(r_edi+0x964u));
    /* 00452a49: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00452a4b: je 0x452a54 */ if (fZ) goto L_00452a54;
L_00452a4d:; BB(0x00452a4d);
    /* 00452a4d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00452a52: jmp 0x452a9a */ goto L_00452a9a;
L_00452a54:; BB(0x00452a54);
    /* 00452a54: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00452a58: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00452a5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452a5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452a5d: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x452a62u); f_00836208();
    /* 00452a62: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452a65: fcomp dword ptr [esp + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4cu))); FPOP();
    /* 00452a69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452a6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452a6c: jbe 0x452a75 */ if ((fC||fZ)) goto L_00452a75;
L_00452a6e:; BB(0x00452a6e);
    /* 00452a6e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00452a73: jmp 0x452a9a */ goto L_00452a9a;
L_00452a75:; BB(0x00452a75);
    /* 00452a75: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00452a77: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00452a7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452a7d: mov ecx, edi */ r_ecx = r_edi;
    /* 00452a7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452a80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00452a82: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452a86: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452a8a: push dword ptr [0xa44d60] */ { u32 v = R32((u32)(0xa44d60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452a90: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x452a93u); call_ind(t); }
    /* 00452a93: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00452a95: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00452a9a:; BB(0x00452a9a);
    /* 00452a9a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00452a9d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452a9f: jl 0x452a22 */ if ((fS!=fO)) goto L_00452a22;
L_00452aa1:; BB(0x00452aa1);
    /* 00452aa1: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00452aa5:; BB(0x00452aa5);
    /* 00452aa5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00452aa8:; BB(0x00452aa8);
    /* 00452aa8: add ebx, dword ptr [esp + 0x48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00452aac: cmp ebx, 0x10000 */ {  u32 a = r_ebx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452ab2: jl 0x452926 */ if ((fS!=fO)) goto L_00452926;
L_00452ab8:; BB(0x00452ab8);
    /* 00452ab8: mov edx, edi */ r_edx = r_edi;
    /* 00452aba: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 00452abd: fcom dword ptr [0xa45160] */ fx_compare(ST(0), R_F32((u32)(0xa45160u))); 
    /* 00452ac3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452ac5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452ac6: jbe 0x452ae3 */ if ((fC||fZ)) goto L_00452ae3;
L_00452ac8:; BB(0x00452ac8);
    /* 00452ac8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452aca: jne 0x452ae3 */ if (!fZ) goto L_00452ae3;
L_00452acc:; BB(0x00452acc);
    /* 00452acc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00452ace: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00452ad2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00452ad7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00452adb: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452ade: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00452adf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452ae0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00452ae1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452ae2: ret  */ FN_RET(0x004528d0); r_esp += 4; return;
L_00452ae3:; BB(0x00452ae3);
    /* 00452ae3: fld dword ptr [0xa45150] */ FPUSH(R_F32((u32)(0xa45150u)));
    /* 00452ae9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00452aeb: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 00452aee: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452af1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00452af2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452af3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00452af4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452af5: ret  */ FN_RET(0x004528d0); r_esp += 4; return;
}

void f_00452af8(void) /* sub_452AF8 */
{
    FN_ENTER(0x00452af8);
    /* 00452af8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452af9: mov ebp, esp */ r_ebp = r_esp;
    /* 00452afb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00452afd: push 0x8cf19c */ { u32 v = 0x8cf19cu; r_esp -= 4; W32(r_esp, v); }
    /* 00452b02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00452b08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452b09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00452b10: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452b13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00452b16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00452b19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00452b1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00452b1f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00452b21: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00452b28: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x452b2du); f_005caba4();
    /* 00452b2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00452b2e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00452b31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452b33: je 0x452b69 */ if (fZ) goto L_00452b69;
L_00452b35:; BB(0x00452b35);
    /* 00452b35: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00452b3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00452b43: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00452b46: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452b49: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452b4c: call 0x452b70 */ r_esp -= 4; W32(r_esp, 0x452b51u); f_00452b70();
    /* 00452b51: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452b54: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00452b5b:; BB(0x00452b5b);
    /* 00452b5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452b5e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00452b65: mov esp, ebp */ r_esp = r_ebp;
    /* 00452b67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452b68: ret  */ FN_RET(0x00452af8); r_esp += 4; return;
L_00452b69:; BB(0x00452b69);
    /* 00452b69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00452b6b: jmp 0x452b5b */ goto L_00452b5b;
}

void f_00452b70(void) /* sub_452B70 */
{
    FN_ENTER(0x00452b70);
    /* 00452b70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00452b71: mov edi, ecx */ r_edi = r_ecx;
    /* 00452b73: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452b77: mov ecx, edi */ r_ecx = r_edi;
    /* 00452b79: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x452b7eu); f_008193cc();
    /* 00452b7e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00452b82: mov dword ptr [edi], 0xaf72a4 */ W32((u32)(r_edi), 0xaf72a4u);
    /* 00452b88: mov eax, dword ptr [0x9a5d0c] */ r_eax = R32((u32)(0x9a5d0cu));
    /* 00452b8d: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00452b90: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x452b95u); f_0082dcbc();
    /* 00452b95: fld dword ptr [0xa45160] */ FPUSH(R_F32((u32)(0xa45160u)));
    /* 00452b9b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00452b9f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00452ba1: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 00452ba4: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 00452bab: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x452bb0u); f_0082ddd8();
    /* 00452bb0: fld dword ptr [0xa45160] */ FPUSH(R_F32((u32)(0xa45160u)));
    /* 00452bb6: mov edx, dword ptr [0xa45150] */ r_edx = R32((u32)(0xa45150u));
    /* 00452bbc: fchs  */ ST(0) = -ST(0);
    /* 00452bbe: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00452bc0: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 00452bc3: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 00452bc6: mov eax, edi */ r_eax = r_edi;
    /* 00452bc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452bc9: ret 8 */ FN_RET(0x00452b70); r_esp += 12; return;
}

void f_00452bcc(void) /* sub_452BCC */
{
    FN_ENTER(0x00452bcc);
    /* 00452bcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00452bcd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452bce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00452bcf: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452bd2: mov edi, ecx */ r_edi = r_ecx;
    /* 00452bd4: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x452bd9u); f_00520db8();
    /* 00452bd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452bdb: jne 0x452d6c */ if (!fZ) goto L_00452d6c;
L_00452be1:; BB(0x00452be1);
    /* 00452be1: movzx eax, word ptr [edi + 0x33c] */ r_eax = (u32)R16((u32)(r_edi+0x33cu));
    /* 00452be8: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452bed: je 0x452db7 */ if (fZ) goto L_00452db7;
L_00452bf3:; BB(0x00452bf3);
    /* 00452bf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452bf4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x452bf9u); f_0068d5a8();
    /* 00452bf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00452bfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452bfc: je 0x452db7 */ if (fZ) goto L_00452db7;
L_00452c02:; BB(0x00452c02);
    /* 00452c02: mov ebp, dword ptr [eax + 0x300] */ r_ebp = R32((u32)(r_eax+0x300u));
    /* 00452c08: mov dword ptr [edi + 0x374], ebp */ W32((u32)(r_edi+0x374u), r_ebp);
    /* 00452c0e: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 00452c14: mov dword ptr [edi + 0x378], edx */ W32((u32)(r_edi+0x378u), r_edx);
    /* 00452c1a: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 00452c20: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00452c26: lea ebp, [edi + 0x300] */ r_ebp = (u32)(r_edi+0x300u);
    /* 00452c2c: lea ebx, [edi + 0x374] */ r_ebx = (u32)(r_edi+0x374u);
    /* 00452c32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452c34: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x452c39u); f_00836208();
    /* 00452c39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452c3c: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00452c42: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00452c48: mov ebx, dword ptr [edi + 0x308] */ r_ebx = R32((u32)(r_edi+0x308u));
    /* 00452c4e: fstp dword ptr [edi + 0x384] */ W_F32((u32)(r_edi+0x384u), ST(0)); FPOP();
    /* 00452c54: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 00452c57: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 00452c5d: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 00452c60: mov dword ptr [edi + 0x4c], ebx */ W32((u32)(r_edi+0x4cu), r_ebx);
    /* 00452c63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452c65: je 0x452c83 */ if (fZ) goto L_00452c83;
L_00452c67:; BB(0x00452c67);
    /* 00452c67: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452c6a: jne 0x452c75 */ if (!fZ) goto L_00452c75;
L_00452c6c:; BB(0x00452c6c);
    /* 00452c6c: mov ecx, edi */ r_ecx = r_edi;
    /* 00452c6e: call 0x452e88 */ r_esp -= 4; W32(r_esp, 0x452c73u); f_00452e88();
    /* 00452c73: jmp 0x452c8a */ goto L_00452c8a;
L_00452c75:; BB(0x00452c75);
    /* 00452c75: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452c78: jne 0x452c8a */ if (!fZ) goto L_00452c8a;
L_00452c7a:; BB(0x00452c7a);
    /* 00452c7a: mov ecx, edi */ r_ecx = r_edi;
    /* 00452c7c: call 0x452e50 */ r_esp -= 4; W32(r_esp, 0x452c81u); f_00452e50();
    /* 00452c81: jmp 0x452c8a */ goto L_00452c8a;
L_00452c83:; BB(0x00452c83);
    /* 00452c83: mov ecx, edi */ r_ecx = r_edi;
    /* 00452c85: call 0x452fd0 */ r_esp -= 4; W32(r_esp, 0x452c8au); f_00452fd0();
L_00452c8a:; BB(0x00452c8a);
    /* 00452c8a: lea ebx, [edi + 0x350] */ r_ebx = (u32)(r_edi+0x350u);
    /* 00452c90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00452c92: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x452c97u); f_0082df08();
    /* 00452c97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00452c99: fld dword ptr [edi + 0x35c] */ FPUSH(R_F32((u32)(r_edi+0x35cu)));
    /* 00452c9f: fld dword ptr [edi + 0x350] */ FPUSH(R_F32((u32)(r_edi+0x350u)));
    /* 00452ca5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00452ca7: fld dword ptr [edi + 0x354] */ FPUSH(R_F32((u32)(r_edi+0x354u)));
    /* 00452cad: fld dword ptr [edi + 0x358] */ FPUSH(R_F32((u32)(r_edi+0x358u)));
    /* 00452cb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00452cb5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00452cb7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00452cb9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00452cbb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00452cbd: fstp dword ptr [edi + 0x350] */ W_F32((u32)(r_edi+0x350u), ST(0)); FPOP();
    /* 00452cc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00452cc5: fstp dword ptr [edi + 0x354] */ W_F32((u32)(r_edi+0x354u), ST(0)); FPOP();
    /* 00452ccb: fstp dword ptr [edi + 0x358] */ W_F32((u32)(r_edi+0x358u), ST(0)); FPOP();
    /* 00452cd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00452cd3: mov edx, ebx */ r_edx = r_ebx;
    /* 00452cd5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x452cdau); f_0082ebac();
    /* 00452cda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00452cdc: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00452ce1: mov ecx, edi */ r_ecx = r_edi;
    /* 00452ce3: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x452ce8u); f_007714cc();
    /* 00452ce8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00452ceb: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452cf0: je 0x452d01 */ if (fZ) goto L_00452d01;
L_00452cf2:; BB(0x00452cf2);
    /* 00452cf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452cf3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x452cf8u); f_0068d5a8();
    /* 00452cf8: mov ebx, eax */ r_ebx = r_eax;
    /* 00452cfa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452cfd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452cff: jne 0x452d73 */ if (!fZ) goto L_00452d73;
L_00452d01:; BB(0x00452d01);
    /* 00452d01: mov eax, dword ptr [edi + 0x360] */ r_eax = R32((u32)(r_edi+0x360u));
    /* 00452d07: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00452d09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452d0b: je 0x452e31 */ if (fZ) goto L_00452e31;
L_00452d11:; BB(0x00452d11);
    /* 00452d11: mov ecx, dword ptr [edi + 0x360] */ r_ecx = R32((u32)(r_edi+0x360u));
    /* 00452d17: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_00452d1a:; BB(0x00452d1a);
    /* 00452d1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452d1b: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x452d20u); f_00508db8();
L_00452d20:; BB(0x00452d20);
    /* 00452d20: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00452d23: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452d26: jge 0x452d40 */ if ((fS==fO)) goto L_00452d40;
L_00452d28:; BB(0x00452d28);
    /* 00452d28: mov ecx, dword ptr [edi + ebx*4 + 0x360] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x360u));
    /* 00452d2f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00452d32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452d34: je 0x452d20 */ if (fZ) goto L_00452d20;
L_00452d36:; BB(0x00452d36);
    /* 00452d36: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452d39: jne 0x452d1a */ if (!fZ) goto L_00452d1a;
L_00452d3b:; BB(0x00452d3b);
    /* 00452d3b: jmp 0x452dcb */ goto L_00452dcb;
L_00452d40:; BB(0x00452d40);
    /* 00452d40: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00452d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00452d45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452d47: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00452d4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452d4d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x452d52u); f_00805608();
    /* 00452d52: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452d55: mov eax, dword ptr [edi + 0x340] */ r_eax = R32((u32)(r_edi+0x340u));
    /* 00452d5b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452d5e: mov dword ptr [edi + 0x340], eax */ W32((u32)(r_edi+0x340u), r_eax);
    /* 00452d64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00452d66: jl 0x452e39 */ if ((fS!=fO)) goto L_00452e39;
L_00452d6c:; BB(0x00452d6c);
    /* 00452d6c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452d6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00452d70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452d71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452d72: ret  */ FN_RET(0x00452bcc); r_esp += 4; return;
L_00452d73:; BB(0x00452d73);
    /* 00452d73: call 0x44d05c */ r_esp -= 4; W32(r_esp, 0x452d78u); f_0044d05c();
    /* 00452d78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452d7a: je 0x452da9 */ if (fZ) goto L_00452da9;
L_00452d7c:; BB(0x00452d7c);
    /* 00452d7c: fild dword ptr [edi + 0x368] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x368u)));
    /* 00452d82: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00452d84: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00452d88: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00452d8a: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00452d8e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00452d93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00452d95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452d96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452d97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452d98: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00452d9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00452d9e: push dword ptr [0xa44d5c] */ { u32 v = R32((u32)(0xa44d5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00452da4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x452da7u); call_ind(t); }
    /* 00452da7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00452da9:; BB(0x00452da9);
    /* 00452da9: mov ecx, edi */ r_ecx = r_edi;
    /* 00452dab: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x452db0u); f_0073d160();
    /* 00452db0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452db3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00452db4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452db5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452db6: ret  */ FN_RET(0x00452bcc); r_esp += 4; return;
L_00452db7:; BB(0x00452db7);
    /* 00452db7: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00452dbb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00452dc0: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00452dc4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452dc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00452dc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452dc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452dca: ret  */ FN_RET(0x00452bcc); r_esp += 4; return;
L_00452dcb:; BB(0x00452dcb);
    /* 00452dcb: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00452dcf: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00452dd5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00452dd9: mov eax, dword ptr [edi + 0x304] */ r_eax = R32((u32)(r_edi+0x304u));
    /* 00452ddf: lea edx, [edi + 0x44] */ r_edx = (u32)(r_edi+0x44u);
    /* 00452de2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00452de6: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00452dec: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00452df0: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x452df5u); f_0082f9c4();
    /* 00452df5: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00452df9: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00452dfd: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00452e01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452e02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452e04: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x452e09u); f_007a8d98();
    /* 00452e09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452e0c: mov ecx, dword ptr [edi + esi*2 + 0x360] */ r_ecx = R32((u32)(r_edi+r_esi*2+0x360u));
    /* 00452e13: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00452e1b: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00452e1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452e20: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x452e25u); f_00508dd0();
    /* 00452e25: mov ecx, dword ptr [edi + esi*2 + 0x360] */ r_ecx = R32((u32)(r_edi+r_esi*2+0x360u));
    /* 00452e2c: jmp 0x452d1a */ goto L_00452d1a;
L_00452e31:; BB(0x00452e31);
    /* 00452e31: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00452e34: jmp 0x452d20 */ goto L_00452d20;
L_00452e39:; BB(0x00452e39);
    /* 00452e39: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00452e3d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00452e42: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00452e46: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452e49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00452e4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452e4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452e4c: ret  */ FN_RET(0x00452bcc); r_esp += 4; return;
}

void f_00452e50(void) /* sub_452E50 */
{
    FN_ENTER(0x00452e50);
    /* 00452e50: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00452e55: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00452e58: je 0x452e5b */ if (fZ) goto L_00452e5b;
L_00452e5a:; BB(0x00452e5a);
    /* 00452e5a: ret  */ FN_RET(0x00452e50); r_esp += 4; return;
L_00452e5b:; BB(0x00452e5b);
    /* 00452e5b: mov eax, dword ptr [ecx + 0x340] */ r_eax = R32((u32)(r_ecx+0x340u));
    /* 00452e61: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00452e64: jl 0x452e5a */ if ((fS!=fO)) goto L_00452e5a;
L_00452e66:; BB(0x00452e66);
    /* 00452e66: fld dword ptr [0x8ffa00] */ FPUSH(R_F32((u32)(0x8ffa00u)));
    /* 00452e6c: fmul dword ptr [ecx + 0x380] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x380u));
    /* 00452e72: fcomp dword ptr [ecx + 0x384] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x384u))); FPOP();
    /* 00452e78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452e7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452e7b: jae 0x452e5a */ if (!fC) goto L_00452e5a;
L_00452e7d:; BB(0x00452e7d);
    /* 00452e7d: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 00452e87: ret  */ FN_RET(0x00452e50); r_esp += 4; return;
}

void f_00452e88(void) /* sub_452E88 */
{
    FN_ENTER(0x00452e88);
    /* 00452e88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00452e89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00452e8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452e8b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452e8e: mov esi, ecx */ r_esi = r_ecx;
    /* 00452e90: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00452e93: mov eax, dword ptr [esi + 0x374] */ r_eax = R32((u32)(r_esi+0x374u));
    /* 00452e99: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00452e9f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00452ea2: mov eax, dword ptr [esi + 0x378] */ r_eax = R32((u32)(r_esi+0x378u));
    /* 00452ea8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00452eac: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00452eb2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00452eb6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x452ebbu); f_0082f9c4();
    /* 00452ebb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00452ebe: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x452ec3u); f_0083173c();
    /* 00452ec3: fcomp dword ptr [0x8ffaf0] */ fx_compare(ST(0), R_F32((u32)(0x8ffaf0u))); FPOP();
    /* 00452ec9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452ecb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452ecc: jbe 0x452ee6 */ if ((fC||fZ)) goto L_00452ee6;
L_00452ece:; BB(0x00452ece);
    /* 00452ece: lea ebp, [esi + 0x350] */ r_ebp = (u32)(r_esi+0x350u);
    /* 00452ed4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00452ed6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x452edbu); f_0083173c();
    /* 00452edb: fcomp dword ptr [0x8ffaf0] */ fx_compare(ST(0), R_F32((u32)(0x8ffaf0u))); FPOP();
    /* 00452ee1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452ee3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452ee4: ja 0x452efa */ if ((!fC&&!fZ)) goto L_00452efa;
L_00452ee6:; BB(0x00452ee6);
    /* 00452ee6: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00452eea: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00452eef: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00452ef3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452ef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452ef7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00452ef8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452ef9: ret  */ FN_RET(0x00452e88); r_esp += 4; return;
L_00452efa:; BB(0x00452efa);
    /* 00452efa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00452efd: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x452f02u); f_0082df08();
    /* 00452f02: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00452f04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00452f06: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x452f0bu); f_0082df08();
    /* 00452f0b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00452f0d: fld dword ptr [0x8ffae8] */ FPUSH(R_F32((u32)(0x8ffae8u)));
    /* 00452f13: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00452f16: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00452f1a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00452f1e: fld dword ptr [esi + 0x36c] */ FPUSH(R_F32((u32)(r_esi+0x36cu)));
    /* 00452f24: fmul dword ptr [0x8ffaec] */ ST(0) = ST(0) * R_F32((u32)(0x8ffaecu));
    /* 00452f2a: fadd dword ptr [0x8ffa04] */ ST(0) = ST(0) + R_F32((u32)(0x8ffa04u));
    /* 00452f30: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00452f32: fld dword ptr [esi + 0x350] */ FPUSH(R_F32((u32)(r_esi+0x350u)));
    /* 00452f38: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00452f3a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00452f3c: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00452f3e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00452f40: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00452f42: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00452f44: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00452f46: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00452f48: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00452f4a: mov ecx, dword ptr [esi + 0x350] */ r_ecx = R32((u32)(r_esi+0x350u));
    /* 00452f50: fld dword ptr [esi + 0x354] */ FPUSH(R_F32((u32)(r_esi+0x354u)));
    /* 00452f56: mov edi, dword ptr [esi + 0x354] */ r_edi = R32((u32)(r_esi+0x354u));
    /* 00452f5c: fld dword ptr [esi + 0x358] */ FPUSH(R_F32((u32)(r_esi+0x358u)));
    /* 00452f62: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00452f68: fld dword ptr [esi + 0x384] */ FPUSH(R_F32((u32)(r_esi+0x384u)));
    /* 00452f6e: fcomp dword ptr [esi + 0x380] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x380u))); FPOP();
    /* 00452f74: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452f76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00452f78: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00452f7a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00452f7c: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00452f7e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00452f80: fstp dword ptr [esi + 0x350] */ W_F32((u32)(r_esi+0x350u), ST(0)); FPOP();
    /* 00452f86: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00452f88: fstp dword ptr [esi + 0x354] */ W_F32((u32)(r_esi+0x354u), ST(0)); FPOP();
    /* 00452f8e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00452f90: fstp dword ptr [esi + 0x358] */ W_F32((u32)(r_esi+0x358u), ST(0)); FPOP();
    /* 00452f96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452f97: ja 0x452fc8 */ if ((!fC&&!fZ)) goto L_00452fc8;
L_00452f99:; BB(0x00452f99);
    /* 00452f99: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00452f9d: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00452fa1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00452fa5: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00452fa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452faa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452fab: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x452fb0u); f_00836208();
    /* 00452fb0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452fb3: fcomp dword ptr [0x8ffae4] */ fx_compare(ST(0), R_F32((u32)(0x8ffae4u))); FPOP();
    /* 00452fb9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452fbb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452fbc: ja 0x452fc8 */ if ((!fC&&!fZ)) goto L_00452fc8;
L_00452fbe:; BB(0x00452fbe);
    /* 00452fbe: mov dword ptr [esi + 0x370], 2 */ W32((u32)(r_esi+0x370u), 0x2u);
L_00452fc8:; BB(0x00452fc8);
    /* 00452fc8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00452fcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452fcc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00452fcd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00452fce: ret  */ FN_RET(0x00452e88); r_esp += 4; return;
}

void f_00452fd0(void) /* sub_452FD0 */
{
    FN_ENTER(0x00452fd0);
    /* 00452fd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00452fd1: mov edi, ecx */ r_edi = r_ecx;
    /* 00452fd3: fld dword ptr [edi + 0x378] */ FPUSH(R_F32((u32)(r_edi+0x378u)));
    /* 00452fd9: fsub dword ptr [edi + 0x304] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x304u));
    /* 00452fdf: fcom dword ptr [0x8ffae0] */ fx_compare(ST(0), R_F32((u32)(0x8ffae0u))); 
    /* 00452fe5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452fe7: fld dword ptr [0x8ffa0c] */ FPUSH(R_F32((u32)(0x8ffa0cu)));
    /* 00452fed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452fee: jbe 0x453000 */ if ((fC||fZ)) goto L_00453000;
L_00452ff0:; BB(0x00452ff0);
    /* 00452ff0: fld dword ptr [edi + 0x354] */ FPUSH(R_F32((u32)(r_edi+0x354u)));
    /* 00452ff6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00452ff8: fstp dword ptr [edi + 0x354] */ W_F32((u32)(r_edi+0x354u), ST(0)); FPOP();
    /* 00452ffe: jmp 0x45300e */ goto L_0045300e;
L_00453000:; BB(0x00453000);
    /* 00453000: fld dword ptr [edi + 0x354] */ FPUSH(R_F32((u32)(r_edi+0x354u)));
    /* 00453006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00453008: fstp dword ptr [edi + 0x354] */ W_F32((u32)(r_edi+0x354u), ST(0)); FPOP();
L_0045300e:; BB(0x0045300e);
    /* 0045300e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045300f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00453012: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x453017u); f_0082e900();
    /* 00453017: fcomp dword ptr [0x8ffa08] */ fx_compare(ST(0), R_F32((u32)(0x8ffa08u))); FPOP();
    /* 0045301d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045301f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00453020: jae 0x45302c */ if (!fC) goto L_0045302c;
L_00453022:; BB(0x00453022);
    /* 00453022: mov dword ptr [edi + 0x370], 1 */ W32((u32)(r_edi+0x370u), 0x1u);
L_0045302c:; BB(0x0045302c);
    /* 0045302c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045302d: ret  */ FN_RET(0x00452fd0); r_esp += 4; return;
}

