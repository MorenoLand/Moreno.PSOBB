#include "protos.h"

void f_004a606c(void) /* sub_4A606C */
{
    FN_ENTER(0x004a606c);
    /* 004a606c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a606d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a606f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a6073: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6076: je 0x4a60e2 */ if (fZ) goto L_004a60e2;
L_004a6078:; BB(0x004a6078);
    /* 004a6078: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a607a: jne 0x4a60c7 */ if (!fZ) goto L_004a60c7;
L_004a607c:; BB(0x004a607c);
    /* 004a607c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a607e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a6083u); f_007aa094();
    /* 004a6083: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6088: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a608a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a608fu); f_007aaa30();
    /* 004a608f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004a6091: je 0x4a60ab */ if (fZ) goto L_004a60ab;
L_004a6093:; BB(0x004a6093);
    /* 004a6093: lea edx, [ebp + 0x568] */ r_edx = (u32)(r_ebp+0x568u);
    /* 004a6099: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a609b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a609c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a609d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a609e: push 0x3b1 */ { u32 v = 0x3b1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a60a3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a60a8u); f_00814298();
    /* 004a60a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_004a60ab:; BB(0x004a60ab);
    /* 004a60ab: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004a60b1: fcomp dword ptr [0x903c54] */ fx_compare(ST(0), R_F32((u32)(0x903c54u))); FPOP();
    /* 004a60b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a60b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a60ba: ja 0x4a611a */ if ((!fC&&!fZ)) goto L_004a611a;
L_004a60bc:; BB(0x004a60bc);
    /* 004a60bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a60be: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a60c3u); f_004a7e20();
    /* 004a60c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a60c4: ret 4 */ FN_RET(0x004a606c); r_esp += 8; return;
L_004a60c7:; BB(0x004a60c7);
    /* 004a60c7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a60ca: jne 0x4a611a */ if (!fZ) goto L_004a611a;
L_004a60cc:; BB(0x004a60cc);
    /* 004a60cc: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a60d1: mov dword ptr [ebp + 0x4ec], 0 */ W32((u32)(r_ebp+0x4ecu), 0x0u);
    /* 004a60db: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a60de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a60df: ret 4 */ FN_RET(0x004a606c); r_esp += 8; return;
L_004a60e2:; BB(0x004a60e2);
    /* 004a60e2: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a60e5: mov eax, 0x17 */ r_eax = 0x17u;
    /* 004a60ea: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a60f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a60f3: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a60f9u); call_ind(t); }
    /* 004a60f9: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a60fe: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 004a6104: mov dword ptr [ebp + 0x4ec], 0 */ W32((u32)(r_ebp+0x4ecu), 0x0u);
    /* 004a610e: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a6111: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a6114: mov dword ptr [ebp + 0x4c8], edx */ W32((u32)(r_ebp+0x4c8u), r_edx);
L_004a611a:; BB(0x004a611a);
    /* 004a611a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a611b: ret 4 */ FN_RET(0x004a606c); r_esp += 8; return;
}

void f_004a6120(void) /* sub_4A6120 */
{
    FN_ENTER(0x004a6120);
    /* 004a6120: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6121: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a6123: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a6127: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a612a: je 0x4a6178 */ if (fZ) goto L_004a6178;
L_004a612c:; BB(0x004a612c);
    /* 004a612c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a612f: je 0x4a6174 */ if (fZ) goto L_004a6174;
L_004a6131:; BB(0x004a6131);
    /* 004a6131: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a6134: je 0x4a6174 */ if (fZ) goto L_004a6174;
L_004a6136:; BB(0x004a6136);
    /* 004a6136: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a6139: je 0x4a6174 */ if (fZ) goto L_004a6174;
L_004a613b:; BB(0x004a613b);
    /* 004a613b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a613d: jne 0x4a6174 */ if (!fZ) goto L_004a6174;
L_004a613f:; BB(0x004a613f);
    /* 004a613f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a6141: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a6146u); f_007aa094();
    /* 004a6146: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 004a614c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a614e: je 0x4a6174 */ if (fZ) goto L_004a6174;
L_004a6150:; BB(0x004a6150);
    /* 004a6150: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6153: jne 0x4a6160 */ if (!fZ) goto L_004a6160;
L_004a6155:; BB(0x004a6155);
    /* 004a6155: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a6157: call 0x4a1a48 */ r_esp -= 4; W32(r_esp, 0x4a615cu); f_004a1a48();
    /* 004a615c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a615d: ret 4 */ FN_RET(0x004a6120); r_esp += 8; return;
L_004a6160:; BB(0x004a6160);
    /* 004a6160: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a6163: jne 0x4a6174 */ if (!fZ) goto L_004a6174;
L_004a6165:; BB(0x004a6165);
    /* 004a6165: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a6168: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a616d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a616f: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a6174u); f_004a15ac();
L_004a6174:; BB(0x004a6174);
    /* 004a6174: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a6175: ret 4 */ FN_RET(0x004a6120); r_esp += 8; return;
L_004a6178:; BB(0x004a6178);
    /* 004a6178: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 004a617e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6180: je 0x4a61ac */ if (fZ) goto L_004a61ac;
L_004a6182:; BB(0x004a6182);
    /* 004a6182: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a6185: jne 0x4a6197 */ if (!fZ) goto L_004a6197;
L_004a6187:; BB(0x004a6187);
    /* 004a6187: mov eax, 4 */ r_eax = 0x4u;
    /* 004a618c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a6193: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a6194: ret 4 */ FN_RET(0x004a6120); r_esp += 8; return;
L_004a6197:; BB(0x004a6197);
    /* 004a6197: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a619a: jne 0x4a6174 */ if (!fZ) goto L_004a6174;
L_004a619c:; BB(0x004a619c);
    /* 004a619c: mov eax, 7 */ r_eax = 0x7u;
    /* 004a61a1: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a61a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a61a9: ret 4 */ FN_RET(0x004a6120); r_esp += 8; return;
L_004a61ac:; BB(0x004a61ac);
    /* 004a61ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a61ae: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a61b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a61b6: ret 4 */ FN_RET(0x004a6120); r_esp += 8; return;
}

void f_004a61bc(void) /* sub_4A61BC */
{
    FN_ENTER(0x004a61bc);
    /* 004a61bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a61c0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a61c3: jne 0x4a61e4 */ if (!fZ) goto L_004a61e4;
L_004a61c5:; BB(0x004a61c5);
    /* 004a61c5: mov eax, dword ptr [ecx + 0x4c8] */ r_eax = R32((u32)(r_ecx+0x4c8u));
    /* 004a61cb: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 004a61cf: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a61d4: mov dword ptr [ecx + 0x4c8], eax */ W32((u32)(r_ecx+0x4c8u), r_eax);
    /* 004a61da: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a61e0: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_004a61e4:; BB(0x004a61e4);
    /* 004a61e4: ret 4 */ FN_RET(0x004a61bc); r_esp += 8; return;
}

void f_004a61e8(void) /* sub_4A61E8 */
{
    FN_ENTER(0x004a61e8);
    /* 004a61e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a61e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a61ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a61eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a61ec: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a61ef: mov edi, ecx */ r_edi = r_ecx;
    /* 004a61f1: mov ecx, edi */ r_ecx = r_edi;
    /* 004a61f3: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 004a61f7: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 004a61fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a61fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a61fe: call 0x4a6250 */ r_esp -= 4; W32(r_esp, 0x4a6203u); f_004a6250();
    /* 004a6203: mov ebx, eax */ r_ebx = r_eax;
    /* 004a6205: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6207: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a6208: mov ecx, edi */ r_ecx = r_edi;
    /* 004a620a: call 0x4a62b4 */ r_esp -= 4; W32(r_esp, 0x4a620fu); f_004a62b4();
    /* 004a620f: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a6212: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004a6215: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 004a6218: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 004a621b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a621d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004a6221: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004a6225: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a622au); f_008587a5();
    /* 004a622a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004a622e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004a6232: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a6235: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a6238: fdiv dword ptr [0x903c44] */ ST(0) = ST(0) / R_F32((u32)(0x903c44u));
    /* 004a623e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a6240: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a6242: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 004a6245: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a6248: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a6249: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a624a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a624b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a624c: ret 8 */ FN_RET(0x004a61e8); r_esp += 12; return;
}

void f_004a6250(void) /* sub_4A6250 */
{
    FN_ENTER(0x004a6250);
    /* 004a6250: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a6253: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004a6257: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004a625b: fild dword ptr [eax + edx*8 + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*8+0x8u)));
    /* 004a625f: fild dword ptr [eax + edx*8 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*8+0xcu)));
    /* 004a6263: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a6265: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a6269: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a626d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a6272u); f_008587a5();
    /* 004a6272: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a6276: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004a627a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a627d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a6280: fdiv dword ptr [0x903c40] */ ST(0) = ST(0) / R_F32((u32)(0x903c40u));
    /* 004a6286: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a6288: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a628a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a628e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a6293: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a6298: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a629c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a62a0: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a62a4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a62a8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004a62ac: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a62af: ret 8 */ FN_RET(0x004a6250); r_esp += 12; return;
}

void f_004a62b4(void) /* sub_4A62B4 */
{
    FN_ENTER(0x004a62b4);
    /* 004a62b4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a62b7: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004a62bb: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004a62bf: mov eax, dword ptr [eax + edx*8 + 8] */ r_eax = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 004a62c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a62c5: jle 0x4a62d2 */ if ((fZ||fS!=fO)) goto L_004a62d2;
L_004a62c7:; BB(0x004a62c7);
    /* 004a62c7: mov eax, 1 */ r_eax = 0x1u;
    /* 004a62cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a62cf: ret 8 */ FN_RET(0x004a62b4); r_esp += 12; return;
L_004a62d2:; BB(0x004a62d2);
    /* 004a62d2: jl 0x4a62fb */ if ((fS!=fO)) goto L_004a62fb;
L_004a62d4:; BB(0x004a62d4);
    /* 004a62d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a62d9u); f_008587a5();
    /* 004a62d9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a62dc: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a62df: fdiv dword ptr [0x903c3c] */ ST(0) = ST(0) / R_F32((u32)(0x903c3cu));
    /* 004a62e5: fcomp dword ptr [0x903c38] */ fx_compare(ST(0), R_F32((u32)(0x903c38u))); FPOP();
    /* 004a62eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a62ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a62ee: jb 0x4a62fb */ if (fC) goto L_004a62fb;
L_004a62f0:; BB(0x004a62f0);
    /* 004a62f0: mov eax, 1 */ r_eax = 0x1u;
    /* 004a62f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a62f8: ret 8 */ FN_RET(0x004a62b4); r_esp += 12; return;
L_004a62fb:; BB(0x004a62fb);
    /* 004a62fb: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004a6300: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a6303: ret 8 */ FN_RET(0x004a62b4); r_esp += 12; return;
}

void f_004a6308(void) /* sub_4A6308 */
{
    FN_ENTER(0x004a6308);
    /* 004a6308: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a6309: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a630a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a630d: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004a6311: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 004a6315: fild dword ptr [ebx + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x10u)));
    /* 004a6318: fild dword ptr [ebx + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x14u)));
    /* 004a631b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a631d: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a6321: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a6325: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a632au); f_008587a5();
    /* 004a632a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004a632e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a6332: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a6335: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a6338: fdiv dword ptr [0x903c34] */ ST(0) = ST(0) / R_F32((u32)(0x903c34u));
    /* 004a633e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a6340: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a6342: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a6346: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a634b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a6350: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a6354: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a6358: fistp dword ptr [ebp + 4] */ W32((u32)(r_ebp+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a635b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a635f: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 004a6362: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 004a6365: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a6367: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a636b: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a636f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a6374u); f_008587a5();
    /* 004a6374: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a6378: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004a637c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a6380: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a6384: fdiv dword ptr [0x903c34] */ ST(0) = ST(0) / R_F32((u32)(0x903c34u));
    /* 004a638a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a638c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a638e: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 004a6391: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 004a6394: fld dword ptr [ebx + 0x34] */ FPUSH(R_F32((u32)(r_ebx+0x34u)));
    /* 004a6397: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a6399: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a639d: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a63a1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a63a6u); f_008587a5();
    /* 004a63a6: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004a63aa: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a63ae: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a63b2: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a63b6: fdiv dword ptr [0x903c34] */ ST(0) = ST(0) / R_F32((u32)(0x903c34u));
    /* 004a63bc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a63be: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a63c0: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 004a63c3: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 004a63c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a63c8: jle 0x4a63d1 */ if ((fZ||fS!=fO)) goto L_004a63d1;
L_004a63ca:; BB(0x004a63ca);
    /* 004a63ca: mov eax, 1 */ r_eax = 0x1u;
    /* 004a63cf: jmp 0x4a63fd */ goto L_004a63fd;
L_004a63d1:; BB(0x004a63d1);
    /* 004a63d1: jl 0x4a6408 */ if ((fS!=fO)) goto L_004a6408;
L_004a63d3:; BB(0x004a63d3);
    /* 004a63d3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a63d8u); f_008587a5();
    /* 004a63d8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a63dc: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a63e0: fdiv dword ptr [0x903c34] */ ST(0) = ST(0) / R_F32((u32)(0x903c34u));
    /* 004a63e6: fcomp dword ptr [0x903c30] */ fx_compare(ST(0), R_F32((u32)(0x903c30u))); FPOP();
    /* 004a63ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a63ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a63ef: jb 0x4a63f8 */ if (fC) goto L_004a63f8;
L_004a63f1:; BB(0x004a63f1);
    /* 004a63f1: mov eax, 1 */ r_eax = 0x1u;
    /* 004a63f6: jmp 0x4a63fd */ goto L_004a63fd;
L_004a63f8:; BB(0x004a63f8);
    /* 004a63f8: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
L_004a63fd:; BB(0x004a63fd);
    /* 004a63fd: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004a6400: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a6403: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a6404: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a6405: ret 8 */ FN_RET(0x004a6308); r_esp += 12; return;
L_004a6408:; BB(0x004a6408);
    /* 004a6408: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004a640d: jmp 0x4a63fd */ goto L_004a63fd;
}

void f_004a6410(void) /* sub_4A6410 */
{
    FN_ENTER(0x004a6410);
    /* 004a6410: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a6411: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a6412: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6413: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a6416: mov esi, ecx */ r_esi = r_ecx;
    /* 004a6418: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 004a641c: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 004a6420: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 004a6423: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 004a6426: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a6428: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a642c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a6430: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a6435u); f_008587a5();
    /* 004a6435: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a6439: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004a643d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a6440: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a6443: fdiv dword ptr [0x903c2c] */ ST(0) = ST(0) / R_F32((u32)(0x903c2cu));
    /* 004a6449: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a644b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a644d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a6451: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a6456: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a645b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a645f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a6463: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a6467: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a646b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004a646f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6471: jne 0x4a64fe */ if (!fZ) goto L_004a64fe;
L_004a6477:; BB(0x004a6477);
    /* 004a6477: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004a647a: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004a647d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a647f: fmul qword ptr [0x903a40] */ ST(0) = ST(0) * R_F64((u32)(0x903a40u));
    /* 004a6485: fdiv qword ptr [0x903a38] */ ST(0) = ST(0) / R_F64((u32)(0x903a38u));
    /* 004a648b: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 004a648e: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 004a6491: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a6493: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a6497: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a649c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a64a1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a64a5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a64a9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a64ad: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a64b1: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 004a64b5: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a64b9: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a64bd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a64c2u); f_008587a5();
    /* 004a64c2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a64c6: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004a64ca: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a64ce: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a64d2: fdiv dword ptr [0x903c2c] */ ST(0) = ST(0) / R_F32((u32)(0x903c2cu));
    /* 004a64d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a64da: mov ecx, esi */ r_ecx = r_esi;
    /* 004a64dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a64de: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a64e2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a64e7u); f_0082dcbc();
    /* 004a64e7: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 004a64eb: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 004a64ee: mov ecx, esi */ r_ecx = r_esi;
    /* 004a64f0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a64f5u); f_0082ddd8();
    /* 004a64f5: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 004a64f9: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 004a64fc: jmp 0x4a6567 */ goto L_004a6567;
L_004a64fe:; BB(0x004a64fe);
    /* 004a64fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6501: jne 0x4a6567 */ if (!fZ) goto L_004a6567;
L_004a6503:; BB(0x004a6503);
    /* 004a6503: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 004a6506: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 004a6509: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a650b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a650f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a6513: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a6518u); f_008587a5();
    /* 004a6518: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a651c: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004a6520: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a6524: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a6528: fdiv dword ptr [0x903c2c] */ ST(0) = ST(0) / R_F32((u32)(0x903c2cu));
    /* 004a652e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a6530: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a6532: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 004a6535: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004a6538: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004a653b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a653d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a6541: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a6545: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a654au); f_008587a5();
    /* 004a654a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a654e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004a6552: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a6556: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a655a: fdiv dword ptr [0x903c2c] */ ST(0) = ST(0) / R_F32((u32)(0x903c2cu));
    /* 004a6560: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a6562: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a6564: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
L_004a6567:; BB(0x004a6567);
    /* 004a6567: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 004a656a: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 004a656d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a656f: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a6573: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a6577: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a657cu); f_008587a5();
    /* 004a657c: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a6580: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004a6584: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a6588: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a658c: fdiv dword ptr [0x903c2c] */ ST(0) = ST(0) / R_F32((u32)(0x903c2cu));
    /* 004a6592: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a6594: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a6596: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 004a6599: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 004a659c: fild dword ptr [ebp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x14u)));
    /* 004a659f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a65a1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a65a5: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a65a9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a65aeu); f_008587a5();
    /* 004a65ae: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004a65b2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a65b6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a65ba: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a65be: fdiv dword ptr [0x903c2c] */ ST(0) = ST(0) / R_F32((u32)(0x903c2cu));
    /* 004a65c4: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a65c6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a65c8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a65cc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a65d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a65d6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a65da: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a65de: fistp dword ptr [ebx + 0x10] */ W32((u32)(r_ebx+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a65e1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a65e5: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a65e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a65e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a65ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a65eb: ret 8 */ FN_RET(0x004a6410); r_esp += 12; return;
}

void f_004a65f0(void) /* sub_4A65F0 */
{
    FN_ENTER(0x004a65f0);
    /* 004a65f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a65f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a65f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a65f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a65f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a65f7: mov edi, ecx */ r_edi = r_ecx;
    /* 004a65f9: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 004a65fd: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 004a6601: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 004a6604: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 004a6607: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a6609: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004a660d: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004a6611: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a6616u); f_008587a5();
    /* 004a6616: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004a661a: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004a661e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a6621: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a6624: fdiv dword ptr [0x903c28] */ ST(0) = ST(0) / R_F32((u32)(0x903c28u));
    /* 004a662a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a662c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a662e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a6630: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 004a6633: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 004a6636: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 004a6639: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a663b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004a663f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004a6643: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a6648u); f_008587a5();
    /* 004a6648: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004a664c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004a6650: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a6654: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a6658: fdiv dword ptr [0x903c28] */ ST(0) = ST(0) / R_F32((u32)(0x903c28u));
    /* 004a665e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a6660: mov ecx, edi */ r_ecx = r_edi;
    /* 004a6662: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a6664: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 004a6667: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6669: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a666a: call 0x4a6250 */ r_esp -= 4; W32(r_esp, 0x4a666fu); f_004a6250();
    /* 004a666f: mov ebx, eax */ r_ebx = r_eax;
    /* 004a6671: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6673: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a6674: mov ecx, edi */ r_ecx = r_edi;
    /* 004a6676: call 0x4a62b4 */ r_esp -= 4; W32(r_esp, 0x4a667bu); f_004a62b4();
    /* 004a667b: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a667e: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004a6681: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a6684: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a6685: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a6686: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a6687: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a6688: ret 8 */ FN_RET(0x004a65f0); r_esp += 12; return;
}

void f_004a668c(void) /* sub_4A668C */
{
    FN_ENTER(0x004a668c);
    /* 004a668c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a668f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a6694u); f_008587a5();
    /* 004a6694: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004a6698: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a669b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a669e: fdiv dword ptr [0x903c20] */ ST(0) = ST(0) / R_F32((u32)(0x903c20u));
    /* 004a66a4: fmul dword ptr [0x903c24] */ ST(0) = ST(0) * R_F32((u32)(0x903c24u));
    /* 004a66aa: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a66ae: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a66b3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a66b8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a66bc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a66c0: fistp dword ptr [edx + 4] */ W32((u32)(r_edx+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a66c3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a66c7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a66ca: ret 8 */ FN_RET(0x004a668c); r_esp += 12; return;
}

void f_004a66d0(void) /* sub_4A66D0 */
{
    FN_ENTER(0x004a66d0);
    /* 004a66d0: call 0x4a97e4 */ r_esp -= 4; W32(r_esp, 0x4a66d5u); f_004a97e4();
    /* 004a66d5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4a66dau); f_0061cdb0();
    /* 004a66da: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4a66dfu); f_0061cdb0();
    /* 004a66df: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4a66e4u); f_0061cdb0();
    /* 004a66e4: mov ecx, dword ptr [0xa4762c] */ r_ecx = R32((u32)(0xa4762cu));
    /* 004a66ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a66ec: je 0x4a6709 */ if (fZ) goto L_004a6709;
L_004a66ee:; BB(0x004a66ee);
    /* 004a66ee: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4a66f3u); f_00829de0();
    /* 004a66f3: push dword ptr [0xa4762c] */ { u32 v = R32((u32)(0xa4762cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a66f9: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4a66feu); f_0082e960();
    /* 004a66fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a66ff: mov dword ptr [0xa4762c], 0 */ W32((u32)(0xa4762cu), 0x0u);
L_004a6709:; BB(0x004a6709);
    /* 004a6709: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004a670f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6711: je 0x4a6726 */ if (fZ) goto L_004a6726;
L_004a6713:; BB(0x004a6713);
    /* 004a6713: je 0x4a671c */ if (fZ) goto L_004a671c;
L_004a6715:; BB(0x004a6715);
    /* 004a6715: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6717: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4a671cu); f_004066a8();
L_004a671c:; BB(0x004a671c);
    /* 004a671c: mov dword ptr [0xa47630], 0 */ W32((u32)(0xa47630u), 0x0u);
L_004a6726:; BB(0x004a6726);
    /* 004a6726: mov ecx, dword ptr [0xa47634] */ r_ecx = R32((u32)(0xa47634u));
    /* 004a672c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a672e: je 0x4a6743 */ if (fZ) goto L_004a6743;
L_004a6730:; BB(0x004a6730);
    /* 004a6730: je 0x4a6739 */ if (fZ) goto L_004a6739;
L_004a6732:; BB(0x004a6732);
    /* 004a6732: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6734: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4a6739u); f_004066a8();
L_004a6739:; BB(0x004a6739);
    /* 004a6739: mov dword ptr [0xa47634], 0 */ W32((u32)(0xa47634u), 0x0u);
L_004a6743:; BB(0x004a6743);
    /* 004a6743: ret  */ FN_RET(0x004a66d0); r_esp += 4; return;
}

void f_004a6744(void)
{
    FN_ENTER(0x004a6744);
    /* 004a6744: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a6745: mov ebp, esp */ r_ebp = r_esp;
    /* 004a6747: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a6749: push 0x8d04e4 */ { u32 v = 0x8d04e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a674e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a6754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6755: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a675c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a675f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a6762: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004a6765: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004a6768: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004a676b: push 0x784 */ { u32 v = 0x784u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6770: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004a6777: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a677cu); f_005caba4();
    /* 004a677c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a677d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004a6780: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6782: je 0x4a67bb */ if (fZ) goto L_004a67bb;
L_004a6784:; BB(0x004a6784);
    /* 004a6784: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004a678b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a6792: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a6795: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a679b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a679e: call 0x4a67c0 */ r_esp -= 4; W32(r_esp, 0x4a67a3u); f_004a67c0();
    /* 004a67a3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a67a6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004a67ad:; BB(0x004a67ad);
    /* 004a67ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a67b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a67b7: mov esp, ebp */ r_esp = r_ebp;
    /* 004a67b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a67ba: ret  */ FN_RET(0x004a6744); r_esp += 4; return;
L_004a67bb:; BB(0x004a67bb);
    /* 004a67bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a67bd: jmp 0x4a67ad */ goto L_004a67ad;
}

void f_004a67c0(void) /* sub_4A67C0 */
{
    FN_ENTER(0x004a67c0);
    /* 004a67c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a67c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a67c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a67c5: push 0x8d056a */ { u32 v = 0x8d056au; r_esp -= 4; W32(r_esp, v); }
    /* 004a67ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a67d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a67d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a67d8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a67db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a67de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004a67e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004a67e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004a67e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004a67ea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a67ed: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004a67f0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a67f3: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x4a67f8u); f_005216f4();
    /* 004a67f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a67ff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6802: mov dword ptr [ecx], 0xaf9d40 */ W32((u32)(r_ecx), 0xaf9d40u);
    /* 004a6808: add ecx, 0x4cc */ {  u32 a = r_ecx; u32 b = 0x4ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a680e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6810: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4a6815u); f_008193cc();
    /* 004a6815: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004a681c: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004a6821: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a6826: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6829: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a682b: add eax, 0x588 */ {  u32 a = r_eax; u32 b = 0x588u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a6830: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a6832: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6833: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x4a6838u); f_00858736();
    /* 004a6838: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004a683f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6842: add ecx, 0x5fc */ {  u32 a = r_ecx; u32 b = 0x5fcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6848: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x4a684du); f_00763030();
    /* 004a684d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6850: mov eax, dword ptr [0x9a80c4] */ r_eax = R32((u32)(0x9a80c4u));
    /* 004a6855: mov edx, dword ptr [0xa47660] */ r_edx = R32((u32)(0xa47660u));
    /* 004a685b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004a685e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6860: jne 0x4a6868 */ if (!fZ) goto L_004a6868;
L_004a6862:; BB(0x004a6862);
    /* 004a6862: mov dword ptr [0xa47660], ecx */ W32((u32)(0xa47660u), r_ecx);
L_004a6868:; BB(0x004a6868);
    /* 004a6868: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a686b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a686c: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x4a6871u); f_0051f750();
    /* 004a6871: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6874: movsx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 004a6878: mov dword ptr [ebx + 0x4c8], 0 */ W32((u32)(r_ebx+0x4c8u), 0x0u);
    /* 004a6882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004a6884: jl 0x4a68b6 */ if ((fS!=fO)) goto L_004a68b6;
L_004a6886:; BB(0x004a6886);
    /* 004a6886: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a688b: jg 0x4a68b6 */ if ((!fZ&&fS==fO)) goto L_004a68b6;
L_004a688d:; BB(0x004a688d);
    /* 004a688d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a688f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a6891: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004a6894: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a6896: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 004a689b: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 004a689e: and ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004a68a4: cmp ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a68aa: jne 0x4a68b6 */ if (!fZ) goto L_004a68b6;
L_004a68ac:; BB(0x004a68ac);
    /* 004a68ac: mov dword ptr [ebx + 0x4c8], 1 */ W32((u32)(r_ebx+0x4c8u), 0x1u);
L_004a68b6:; BB(0x004a68b6);
    /* 004a68b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a68b8: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x4a68bdu); f_00521840();
    /* 004a68bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a68c0: mov ebx, dword ptr [0xa47634] */ r_ebx = R32((u32)(0xa47634u));
    /* 004a68c6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004a68c8: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 004a68ce: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004a68d1: push 0x9a7ac0 */ { u32 v = 0x9a7ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a68d6: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 004a68d9: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 004a68df: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 004a68e2: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 004a68e5: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x4a68eau); f_0051ff3c();
    /* 004a68ea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a68ed: mov eax, dword ptr [0xa47634] */ r_eax = R32((u32)(0xa47634u));
    /* 004a68f2: mov dword ptr [ecx + 0xd8], 0x9a7c80 */ W32((u32)(r_ecx+0xd8u), 0x9a7c80u);
    /* 004a68fc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004a68fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a68ff: mov dword ptr [ecx + 0xb0], ebx */ W32((u32)(r_ecx+0xb0u), r_ebx);
    /* 004a6905: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 004a690b: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 004a6911: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 004a6918: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x4a691du); f_007aa4c8();
    /* 004a691d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6920: mov esi, dword ptr [0xa47584] */ r_esi = R32((u32)(0xa47584u));
    /* 004a6926: mov ebx, dword ptr [0x9a813c] */ r_ebx = R32((u32)(0x9a813cu));
    /* 004a692c: mov edx, dword ptr [0xa47578] */ r_edx = R32((u32)(0xa47578u));
    /* 004a6932: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 004a6939: push dword ptr [edx*4 + 0xa47644] */ { u32 v = R32((u32)(r_edx*4+0xa47644u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a6940: push dword ptr [ebx*4 + 0xa47648] */ { u32 v = R32((u32)(r_ebx*4+0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a6947: push dword ptr [esi*4 + 0xa4765c] */ { u32 v = R32((u32)(r_esi*4+0xa4765cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a694e: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004a6955: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a695au); f_00520c70();
    /* 004a695a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a695d: call 0x520360 */ r_esp -= 4; W32(r_esp, 0x4a6962u); f_00520360();
    /* 004a6962: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6965: mov dword ptr [ecx + 0x358], 0x9a80c8 */ W32((u32)(r_ecx+0x358u), 0x9a80c8u);
    /* 004a696f: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 004a6971: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x4a6976u); f_00520390();
    /* 004a6976: push 0x903f9c */ { u32 v = 0x903f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a697b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a697e: mov dword ptr [ecx + 0x384], 0x41a00000 */ W32((u32)(r_ecx+0x384u), 0x41a00000u);
    /* 004a6988: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x4a698du); f_005213ec();
    /* 004a698d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6990: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004a6992: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x4a6997u); f_00521820();
    /* 004a6997: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a699a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004a699c: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x4a69a1u); f_005217fc();
    /* 004a69a1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a69a4: mov dword ptr [edx + 0x47c], 0 */ W32((u32)(r_edx+0x47cu), 0x0u);
    /* 004a69ae: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004a69b0: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
    /* 004a69ba: mov dword ptr [edx + 0x484], 0 */ W32((u32)(r_edx+0x484u), 0x0u);
    /* 004a69c4: mov dword ptr [edx + 0x488], 0 */ W32((u32)(r_edx+0x488u), 0x0u);
    /* 004a69ce: mov dword ptr [edx + 0x48c], 0 */ W32((u32)(r_edx+0x48cu), 0x0u);
    /* 004a69d8: mov dword ptr [edx + 0x490], 0 */ W32((u32)(r_edx+0x490u), 0x0u);
    /* 004a69e2: mov dword ptr [edx + 0x494], 0 */ W32((u32)(r_edx+0x494u), 0x0u);
L_004a69ec:; BB(0x004a69ec);
    /* 004a69ec: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 004a69ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a69f1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a69f3: lea ecx, [edx + eax + 0x49c] */ r_ecx = (u32)(r_edx+r_eax+0x49cu);
    /* 004a69fa: call 0x4aa758 */ r_esp -= 4; W32(r_esp, 0x4a69ffu); f_004aa758();
    /* 004a69ff: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a6a02: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6a05: jge 0x4a6a0c */ if ((fS==fO)) goto L_004a6a0c;
L_004a6a07:; BB(0x004a6a07);
    /* 004a6a07: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6a0a: jmp 0x4a69ec */ goto L_004a69ec;
L_004a6a0c:; BB(0x004a6a0c);
    /* 004a6a0c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6a0f: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004a6a12: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 004a6a15: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 004a6a18: mov edi, dword ptr [esi + 0x2b4] */ r_edi = R32((u32)(r_esi+0x2b4u));
    /* 004a6a1e: lea eax, [esi + 0x49c] */ r_eax = (u32)(r_esi+0x49cu);
    /* 004a6a24: mov dword ptr [esi + 0x780], 0x9ab820 */ W32((u32)(r_esi+0x780u), 0x9ab820u);
    /* 004a6a2e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6a30: mov dword ptr [esi + 0x4c4], eax */ W32((u32)(r_esi+0x4c4u), r_eax);
    /* 004a6a36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a6a38: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004a6a3b: mov dword ptr [esi + 0x4ec], eax */ W32((u32)(r_esi+0x4ecu), r_eax);
    /* 004a6a41: mov dword ptr [esi + 0x3c8], edx */ W32((u32)(r_esi+0x3c8u), r_edx);
    /* 004a6a47: mov dword ptr [esi + 0x3cc], ecx */ W32((u32)(r_esi+0x3ccu), r_ecx);
    /* 004a6a4d: mov dword ptr [esi + 0x3d0], ebx */ W32((u32)(r_esi+0x3d0u), r_ebx);
    /* 004a6a53: mov dword ptr [esi + 0x3d4], edx */ W32((u32)(r_esi+0x3d4u), r_edx);
    /* 004a6a59: mov dword ptr [esi + 0x3d8], ecx */ W32((u32)(r_esi+0x3d8u), r_ecx);
    /* 004a6a5f: mov dword ptr [esi + 0x3dc], ebx */ W32((u32)(r_esi+0x3dcu), r_ebx);
    /* 004a6a65: mov dword ptr [esi + 0x3e0], edx */ W32((u32)(r_esi+0x3e0u), r_edx);
    /* 004a6a6b: mov dword ptr [esi + 0x3e4], ecx */ W32((u32)(r_esi+0x3e4u), r_ecx);
    /* 004a6a71: mov dword ptr [esi + 0x3e8], ebx */ W32((u32)(r_esi+0x3e8u), r_ebx);
    /* 004a6a77: mov dword ptr [esi + 0x3ec], edx */ W32((u32)(r_esi+0x3ecu), r_edx);
    /* 004a6a7d: mov dword ptr [esi + 0x3f0], ecx */ W32((u32)(r_esi+0x3f0u), r_ecx);
    /* 004a6a83: mov dword ptr [esi + 0x3f4], ebx */ W32((u32)(r_esi+0x3f4u), r_ebx);
    /* 004a6a89: mov dword ptr [esi + 0x3f8], edx */ W32((u32)(r_esi+0x3f8u), r_edx);
    /* 004a6a8f: mov dword ptr [esi + 0x3fc], ecx */ W32((u32)(r_esi+0x3fcu), r_ecx);
    /* 004a6a95: mov dword ptr [esi + 0x400], ebx */ W32((u32)(r_esi+0x400u), r_ebx);
    /* 004a6a9b: mov dword ptr [esi + 0x404], edx */ W32((u32)(r_esi+0x404u), r_edx);
    /* 004a6aa1: mov dword ptr [esi + 0x408], ecx */ W32((u32)(r_esi+0x408u), r_ecx);
    /* 004a6aa7: mov dword ptr [esi + 0x40c], ebx */ W32((u32)(r_esi+0x40cu), r_ebx);
    /* 004a6aad: mov dword ptr [esi + 0x410], edx */ W32((u32)(r_esi+0x410u), r_edx);
    /* 004a6ab3: mov dword ptr [esi + 0x414], ecx */ W32((u32)(r_esi+0x414u), r_ecx);
    /* 004a6ab9: mov dword ptr [esi + 0x418], ebx */ W32((u32)(r_esi+0x418u), r_ebx);
    /* 004a6abf: mov dword ptr [esi + 0x41c], edx */ W32((u32)(r_esi+0x41cu), r_edx);
    /* 004a6ac5: mov dword ptr [esi + 0x420], ecx */ W32((u32)(r_esi+0x420u), r_ecx);
    /* 004a6acb: mov dword ptr [esi + 0x424], ebx */ W32((u32)(r_esi+0x424u), r_ebx);
    /* 004a6ad1: mov dword ptr [esi + 0x428], edx */ W32((u32)(r_esi+0x428u), r_edx);
    /* 004a6ad7: mov dword ptr [esi + 0x42c], ecx */ W32((u32)(r_esi+0x42cu), r_ecx);
    /* 004a6add: mov dword ptr [esi + 0x430], ebx */ W32((u32)(r_esi+0x430u), r_ebx);
    /* 004a6ae3: mov dword ptr [esi + 0x434], edx */ W32((u32)(r_esi+0x434u), r_edx);
    /* 004a6ae9: mov dword ptr [esi + 0x438], ecx */ W32((u32)(r_esi+0x438u), r_ecx);
    /* 004a6aef: mov dword ptr [esi + 0x43c], ebx */ W32((u32)(r_esi+0x43cu), r_ebx);
    /* 004a6af5: mov dword ptr [esi + 0x440], edx */ W32((u32)(r_esi+0x440u), r_edx);
    /* 004a6afb: mov dword ptr [esi + 0x444], ecx */ W32((u32)(r_esi+0x444u), r_ecx);
    /* 004a6b01: mov dword ptr [esi + 0x448], ebx */ W32((u32)(r_esi+0x448u), r_ebx);
    /* 004a6b07: mov dword ptr [esi + 0x44c], edx */ W32((u32)(r_esi+0x44cu), r_edx);
    /* 004a6b0d: mov dword ptr [esi + 0x450], ecx */ W32((u32)(r_esi+0x450u), r_ecx);
    /* 004a6b13: mov dword ptr [esi + 0x454], ebx */ W32((u32)(r_esi+0x454u), r_ebx);
    /* 004a6b19: mov dword ptr [esi + 0x458], edx */ W32((u32)(r_esi+0x458u), r_edx);
    /* 004a6b1f: mov dword ptr [esi + 0x45c], ecx */ W32((u32)(r_esi+0x45cu), r_ecx);
    /* 004a6b25: mov dword ptr [esi + 0x460], ebx */ W32((u32)(r_esi+0x460u), r_ebx);
    /* 004a6b2b: mov dword ptr [esi + 0x464], edx */ W32((u32)(r_esi+0x464u), r_edx);
    /* 004a6b31: mov dword ptr [esi + 0x468], ecx */ W32((u32)(r_esi+0x468u), r_ecx);
    /* 004a6b37: mov dword ptr [esi + 0x46c], ebx */ W32((u32)(r_esi+0x46cu), r_ebx);
    /* 004a6b3d: mov dword ptr [esi + 0x470], edx */ W32((u32)(r_esi+0x470u), r_edx);
    /* 004a6b43: mov dword ptr [esi + 0x474], ecx */ W32((u32)(r_esi+0x474u), r_ecx);
    /* 004a6b49: mov dword ptr [esi + 0x478], ebx */ W32((u32)(r_esi+0x478u), r_ebx);
    /* 004a6b4f: mov dword ptr [esi + 0x4f0], edx */ W32((u32)(r_esi+0x4f0u), r_edx);
    /* 004a6b55: mov dword ptr [esi + 0x4f4], ecx */ W32((u32)(r_esi+0x4f4u), r_ecx);
    /* 004a6b5b: mov dword ptr [esi + 0x4f8], ebx */ W32((u32)(r_esi+0x4f8u), r_ebx);
    /* 004a6b61: mov dword ptr [esi + 0x4fc], edx */ W32((u32)(r_esi+0x4fcu), r_edx);
    /* 004a6b67: mov dword ptr [esi + 0x500], ecx */ W32((u32)(r_esi+0x500u), r_ecx);
    /* 004a6b6d: mov dword ptr [esi + 0x504], ebx */ W32((u32)(r_esi+0x504u), r_ebx);
    /* 004a6b73: mov dword ptr [esi + 0x508], edx */ W32((u32)(r_esi+0x508u), r_edx);
    /* 004a6b79: mov dword ptr [esi + 0x50c], ecx */ W32((u32)(r_esi+0x50cu), r_ecx);
    /* 004a6b7f: mov dword ptr [esi + 0x510], ebx */ W32((u32)(r_esi+0x510u), r_ebx);
    /* 004a6b85: mov dword ptr [esi + 0x514], edx */ W32((u32)(r_esi+0x514u), r_edx);
    /* 004a6b8b: mov dword ptr [esi + 0x518], ecx */ W32((u32)(r_esi+0x518u), r_ecx);
    /* 004a6b91: mov dword ptr [esi + 0x51c], ebx */ W32((u32)(r_esi+0x51cu), r_ebx);
    /* 004a6b97: mov dword ptr [esi + 0x520], edx */ W32((u32)(r_esi+0x520u), r_edx);
    /* 004a6b9d: mov dword ptr [esi + 0x524], ecx */ W32((u32)(r_esi+0x524u), r_ecx);
    /* 004a6ba3: mov dword ptr [esi + 0x528], ebx */ W32((u32)(r_esi+0x528u), r_ebx);
    /* 004a6ba9: mov dword ptr [esi + 0x52c], edx */ W32((u32)(r_esi+0x52cu), r_edx);
    /* 004a6baf: mov dword ptr [esi + 0x530], ecx */ W32((u32)(r_esi+0x530u), r_ecx);
    /* 004a6bb5: mov dword ptr [esi + 0x534], ebx */ W32((u32)(r_esi+0x534u), r_ebx);
    /* 004a6bbb: mov dword ptr [esi + 0x538], edx */ W32((u32)(r_esi+0x538u), r_edx);
    /* 004a6bc1: mov dword ptr [esi + 0x53c], ecx */ W32((u32)(r_esi+0x53cu), r_ecx);
    /* 004a6bc7: mov dword ptr [esi + 0x540], ebx */ W32((u32)(r_esi+0x540u), r_ebx);
    /* 004a6bcd: mov dword ptr [esi + 0x544], edx */ W32((u32)(r_esi+0x544u), r_edx);
    /* 004a6bd3: mov dword ptr [esi + 0x548], ecx */ W32((u32)(r_esi+0x548u), r_ecx);
    /* 004a6bd9: mov dword ptr [esi + 0x54c], ebx */ W32((u32)(r_esi+0x54cu), r_ebx);
    /* 004a6bdf: mov dword ptr [esi + 0x550], edx */ W32((u32)(r_esi+0x550u), r_edx);
    /* 004a6be5: mov dword ptr [esi + 0x554], ecx */ W32((u32)(r_esi+0x554u), r_ecx);
    /* 004a6beb: mov dword ptr [esi + 0x558], ebx */ W32((u32)(r_esi+0x558u), r_ebx);
    /* 004a6bf1: mov dword ptr [esi + 0x55c], edx */ W32((u32)(r_esi+0x55cu), r_edx);
    /* 004a6bf7: mov dword ptr [esi + 0x560], ecx */ W32((u32)(r_esi+0x560u), r_ecx);
    /* 004a6bfd: mov dword ptr [esi + 0x564], ebx */ W32((u32)(r_esi+0x564u), r_ebx);
    /* 004a6c03: mov dword ptr [esi + 0x73c], eax */ W32((u32)(r_esi+0x73cu), r_eax);
    /* 004a6c09: mov dword ptr [esi + 0x740], eax */ W32((u32)(r_esi+0x740u), r_eax);
    /* 004a6c0f: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 004a6c15: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 004a6c1b: mov dword ptr [esi + 0x74c], eax */ W32((u32)(r_esi+0x74cu), r_eax);
    /* 004a6c21: mov dword ptr [esi + 0x750], eax */ W32((u32)(r_esi+0x750u), r_eax);
    /* 004a6c27: mov dword ptr [esi + 0x754], eax */ W32((u32)(r_esi+0x754u), r_eax);
    /* 004a6c2d: mov dword ptr [esi + 0x758], eax */ W32((u32)(r_esi+0x758u), r_eax);
    /* 004a6c33: mov dword ptr [esi + 0x75c], eax */ W32((u32)(r_esi+0x75cu), r_eax);
    /* 004a6c39: mov dword ptr [esi + 0x760], eax */ W32((u32)(r_esi+0x760u), r_eax);
    /* 004a6c3f: mov dword ptr [esi + 0x764], eax */ W32((u32)(r_esi+0x764u), r_eax);
    /* 004a6c45: mov dword ptr [esi + 0x768], eax */ W32((u32)(r_esi+0x768u), r_eax);
    /* 004a6c4b: mov dword ptr [esi + 0x76c], eax */ W32((u32)(r_esi+0x76cu), r_eax);
    /* 004a6c51: mov dword ptr [esi + 0x770], eax */ W32((u32)(r_esi+0x770u), r_eax);
    /* 004a6c57: mov dword ptr [esi + 0x774], eax */ W32((u32)(r_esi+0x774u), r_eax);
    /* 004a6c5d: mov dword ptr [esi + 0x778], eax */ W32((u32)(r_esi+0x778u), r_eax);
    /* 004a6c63: mov dword ptr [esi + 0x77c], eax */ W32((u32)(r_esi+0x77cu), r_eax);
    /* 004a6c69: mov dword ptr [esi + 0x568], edx */ W32((u32)(r_esi+0x568u), r_edx);
    /* 004a6c6f: mov dword ptr [esi + 0x56c], ecx */ W32((u32)(r_esi+0x56cu), r_ecx);
    /* 004a6c75: mov dword ptr [esi + 0x570], ebx */ W32((u32)(r_esi+0x570u), r_ebx);
    /* 004a6c7b: mov dword ptr [esi + 0x574], edx */ W32((u32)(r_esi+0x574u), r_edx);
    /* 004a6c81: mov dword ptr [esi + 0x578], ecx */ W32((u32)(r_esi+0x578u), r_ecx);
    /* 004a6c87: mov dword ptr [esi + 0x57c], ebx */ W32((u32)(r_esi+0x57cu), r_ebx);
    /* 004a6c8d: mov dword ptr [edi + 0x10], 0x41200000 */ W32((u32)(r_edi+0x10u), 0x41200000u);
    /* 004a6c94: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4a6c99u); f_008581c5();
    /* 004a6c99: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a6c9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6c9f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004a6ca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6ca4: je 0x4a6ed0 */ if (fZ) goto L_004a6ed0;
L_004a6caa:; BB(0x004a6caa);
    /* 004a6caa: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004a6cb1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004a6cb8: mov ecx, eax */ r_ecx = r_eax;
    /* 004a6cba: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6cbc: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x4a6cc1u); f_00521a4c();
    /* 004a6cc1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004a6cc8:; BB(0x004a6cc8);
    /* 004a6cc8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6ccb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a6cce: mov dword ptr [edx + 0x580], eax */ W32((u32)(r_edx+0x580u), r_eax);
    /* 004a6cd4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004a6cdb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004a6ce2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6ce4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a6ce9u); f_005caba4();
    /* 004a6ce9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a6cec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6cef: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004a6cf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6cf4: je 0x4a6ec6 */ if (fZ) goto L_004a6ec6;
L_004a6cfa:; BB(0x004a6cfa);
    /* 004a6cfa: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004a6d01: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004a6d08: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6d0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a6d0e: add eax, 0x4cc */ {  u32 a = r_eax; u32 b = 0x4ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a6d13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6d14: call 0x4a8f5c */ r_esp -= 4; W32(r_esp, 0x4a6d19u); f_004a8f5c();
    /* 004a6d19: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004a6d20:; BB(0x004a6d20);
    /* 004a6d20: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6d23: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a6d26: mov dword ptr [ecx + 0x584], eax */ W32((u32)(r_ecx+0x584u), r_eax);
    /* 004a6d2c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004a6d33: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004a6d35:; BB(0x004a6d35);
    /* 004a6d35: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004a6d38: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a6d3a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004a6d3d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a6d3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a6d41: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a6d43: lea ecx, [ecx + edx + 0x588] */ r_ecx = (u32)(r_ecx+r_edx+0x588u);
    /* 004a6d4a: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x4a6d4fu); f_0057739c();
    /* 004a6d4f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a6d52: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6d55: jge 0x4a6d5c */ if ((fS==fO)) goto L_004a6d5c;
L_004a6d57:; BB(0x004a6d57);
    /* 004a6d57: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6d5a: jmp 0x4a6d35 */ goto L_004a6d35;
L_004a6d5c:; BB(0x004a6d5c);
    /* 004a6d5c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6d5f: mov dword ptr [edx + 0x5f8], 0x903bd4 */ W32((u32)(r_edx+0x5f8u), 0x903bd4u);
    /* 004a6d69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a6d6b: mov dword ptr [edx + 0x6e4], eax */ W32((u32)(r_edx+0x6e4u), r_eax);
    /* 004a6d71: mov dword ptr [edx + 0x6fc], 0 */ W32((u32)(r_edx+0x6fcu), 0x0u);
    /* 004a6d7b: mov dword ptr [edx + 0x6e8], eax */ W32((u32)(r_edx+0x6e8u), r_eax);
    /* 004a6d81: mov dword ptr [edx + 0x6ec], eax */ W32((u32)(r_edx+0x6ecu), r_eax);
    /* 004a6d87: mov dword ptr [edx + 0x6f0], eax */ W32((u32)(r_edx+0x6f0u), r_eax);
    /* 004a6d8d: mov dword ptr [edx + 0x700], 0 */ W32((u32)(r_edx+0x700u), 0x0u);
    /* 004a6d97: mov dword ptr [edx + 0x6f4], eax */ W32((u32)(r_edx+0x6f4u), r_eax);
    /* 004a6d9d: mov dword ptr [edx + 0x6f8], eax */ W32((u32)(r_edx+0x6f8u), r_eax);
    /* 004a6da3: mov dword ptr [edx + 0x728], eax */ W32((u32)(r_edx+0x728u), r_eax);
    /* 004a6da9: mov dword ptr [edx + 0x704], 0 */ W32((u32)(r_edx+0x704u), 0x0u);
    /* 004a6db3: mov dword ptr [edx + 0x72c], eax */ W32((u32)(r_edx+0x72cu), r_eax);
    /* 004a6db9: mov dword ptr [edx + 0x730], eax */ W32((u32)(r_edx+0x730u), r_eax);
    /* 004a6dbf: mov dword ptr [edx + 0x734], eax */ W32((u32)(r_edx+0x734u), r_eax);
    /* 004a6dc5: mov dword ptr [edx + 0x708], 0 */ W32((u32)(r_edx+0x708u), 0x0u);
    /* 004a6dcf: mov word ptr [edx + 0x32e], ax */ W16((u32)(r_edx+0x32eu), (u16)r_eax);
    /* 004a6dd6: mov dword ptr [edx + 0x70c], 0 */ W32((u32)(r_edx+0x70cu), 0x0u);
    /* 004a6de0: mov dword ptr [edx + 0x710], 0 */ W32((u32)(r_edx+0x710u), 0x0u);
    /* 004a6dea: mov dword ptr [edx + 0x714], 0 */ W32((u32)(r_edx+0x714u), 0x0u);
    /* 004a6df4: mov dword ptr [edx + 0x718], 0 */ W32((u32)(r_edx+0x718u), 0x0u);
    /* 004a6dfe: mov dword ptr [edx + 0x71c], 0 */ W32((u32)(r_edx+0x71cu), 0x0u);
    /* 004a6e08: mov dword ptr [edx + 0x720], 0 */ W32((u32)(r_edx+0x720u), 0x0u);
    /* 004a6e12: mov dword ptr [edx + 0x724], 0 */ W32((u32)(r_edx+0x724u), 0x0u);
    /* 004a6e1c: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4a6e21u); f_00694cc8();
    /* 004a6e21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6e23: jne 0x4a6e34 */ if (!fZ) goto L_004a6e34;
L_004a6e25:; BB(0x004a6e25);
    /* 004a6e25: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6e28: mov dword ptr [ecx + 0x4e8], 0 */ W32((u32)(r_ecx+0x4e8u), 0x0u);
    /* 004a6e32: jmp 0x4a6e59 */ goto L_004a6e59;
L_004a6e34:; BB(0x004a6e34);
    /* 004a6e34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6e37: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4a6e3cu); f_00520db0();
    /* 004a6e3c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a6e3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6e41: je 0x4a6e4f */ if (fZ) goto L_004a6e4f;
L_004a6e43:; BB(0x004a6e43);
    /* 004a6e43: mov dword ptr [ecx + 0x4e8], 0 */ W32((u32)(r_ecx+0x4e8u), 0x0u);
    /* 004a6e4d: jmp 0x4a6e59 */ goto L_004a6e59;
L_004a6e4f:; BB(0x004a6e4f);
    /* 004a6e4f: mov dword ptr [ecx + 0x4e8], 1 */ W32((u32)(r_ecx+0x4e8u), 0x1u);
L_004a6e59:; BB(0x004a6e59);
    /* 004a6e59: mov edx, dword ptr [ecx + 0x4c8] */ r_edx = R32((u32)(r_ecx+0x4c8u));
    /* 004a6e5f: mov eax, 4 */ r_eax = 0x4u;
    /* 004a6e64: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 004a6e6b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a6e6e: jne 0x4a6e8e */ if (!fZ) goto L_004a6e8e;
L_004a6e70:; BB(0x004a6e70);
    /* 004a6e70: mov edx, dword ptr [0x9a7e60] */ r_edx = R32((u32)(0x9a7e60u));
    /* 004a6e76: cmp edx, dword ptr [0x903bcc] */ {  u32 a = r_edx; u32 b = R32((u32)(0x903bccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6e7c: je 0x4a6eb3 */ if (fZ) goto L_004a6eb3;
L_004a6e7e:; BB(0x004a6e7e);
    /* 004a6e7e: mov eax, dword ptr [0x9a7e64] */ r_eax = R32((u32)(0x9a7e64u));
L_004a6e83:; BB(0x004a6e83);
    /* 004a6e83: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6e85: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a6e87: mov ecx, eax */ r_ecx = r_eax;
    /* 004a6e89: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4a6e8bu); call_ind(t); }
    /* 004a6e8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_004a6e8e:; BB(0x004a6e8e);
    /* 004a6e8e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a6e91: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a6e94: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a6e97: mov eax, ecx */ r_eax = r_ecx;
    /* 004a6e99: mov dword ptr [ecx + 0x738], 0 */ W32((u32)(r_ecx+0x738u), 0x0u);
    /* 004a6ea3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a6ea6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a6ead: mov esp, ebp */ r_esp = r_ebp;
    /* 004a6eaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a6eb0: ret 8 */ FN_RET(0x004a67c0); r_esp += 12; return;
L_004a6eb3:; BB(0x004a6eb3);
    /* 004a6eb3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a6eb5: je 0x4a6e8e */ if (fZ) goto L_004a6e8e;
L_004a6eb7:; BB(0x004a6eb7);
    /* 004a6eb7: mov eax, dword ptr [0x9a7e64] */ r_eax = R32((u32)(0x9a7e64u));
    /* 004a6ebc: cmp eax, dword ptr [0x903bd0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x903bd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a6ec2: je 0x4a6e8e */ if (fZ) goto L_004a6e8e;
L_004a6ec4:; BB(0x004a6ec4);
    /* 004a6ec4: jmp 0x4a6e83 */ goto L_004a6e83;
L_004a6ec6:; BB(0x004a6ec6);
    /* 004a6ec6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a6ec8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a6ecb: jmp 0x4a6d20 */ goto L_004a6d20;
L_004a6ed0:; BB(0x004a6ed0);
    /* 004a6ed0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a6ed2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a6ed5: jmp 0x4a6cc8 */ goto L_004a6cc8;
}

void f_004a6edc(void) /* sub_4A6EDC */
{
    FN_ENTER(0x004a6edc);
    /* 004a6edc: mov eax, dword ptr [0xa47660] */ r_eax = R32((u32)(0xa47660u));
    /* 004a6ee1: ret  */ FN_RET(0x004a6edc); r_esp += 4; return;
}

void f_004a6ee4(void) /* sub_4A6EE4 */
{
    FN_ENTER(0x004a6ee4);
    /* 004a6ee4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a6ee8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004a6eec: mov ecx, dword ptr [0xa47660] */ r_ecx = R32((u32)(0xa47660u));
    /* 004a6ef2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a6ef4: jne 0x4a6f28 */ if (!fZ) goto L_004a6f28;
L_004a6ef6:; BB(0x004a6ef6);
    /* 004a6ef6: mov ecx, dword ptr [0x9a7a30] */ r_ecx = R32((u32)(0x9a7a30u));
    /* 004a6efc: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004a6efe: mov ecx, dword ptr [0x9a7a34] */ r_ecx = R32((u32)(0x9a7a34u));
    /* 004a6f04: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004a6f07: mov ecx, dword ptr [0x9a7a38] */ r_ecx = R32((u32)(0x9a7a38u));
    /* 004a6f0d: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004a6f10: mov eax, dword ptr [0x9a7a24] */ r_eax = R32((u32)(0x9a7a24u));
    /* 004a6f15: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004a6f17: mov eax, dword ptr [0x9a7a28] */ r_eax = R32((u32)(0x9a7a28u));
    /* 004a6f1c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004a6f1f: mov eax, dword ptr [0x9a7a2c] */ r_eax = R32((u32)(0x9a7a2cu));
    /* 004a6f24: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a6f27: ret  */ FN_RET(0x004a6ee4); r_esp += 4; return;
L_004a6f28:; BB(0x004a6f28);
    /* 004a6f28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6f2a: call 0x4a6f30 */ r_esp -= 4; W32(r_esp, 0x4a6f2fu); f_004a6f30();
    /* 004a6f2f: ret  */ FN_RET(0x004a6ee4); r_esp += 4; return;
}

void f_004a6f30(void) /* sub_4A6F30 */
{
    FN_ENTER(0x004a6f30);
    /* 004a6f30: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a6f34: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004a6f38: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004a6f3e: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 004a6f44: mov ecx, dword ptr [ecx + 0x4ec] */ r_ecx = R32((u32)(r_ecx+0x4ecu));
    /* 004a6f4a: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a6f4d: jne 0x4a6f7f */ if (!fZ) goto L_004a6f7f;
L_004a6f4f:; BB(0x004a6f4f);
    /* 004a6f4f: mov ecx, dword ptr [0xa47638] */ r_ecx = R32((u32)(0xa47638u));
    /* 004a6f55: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 004a6f58: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004a6f5b: mov ecx, dword ptr [0xa47638] */ r_ecx = R32((u32)(0xa47638u));
    /* 004a6f61: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 004a6f64: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004a6f67: mov eax, dword ptr [0xa4763c] */ r_eax = R32((u32)(0xa4763cu));
    /* 004a6f6c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004a6f6e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004a6f71: mov eax, dword ptr [0xa4763c] */ r_eax = R32((u32)(0xa4763cu));
    /* 004a6f76: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004a6f79: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a6f7c: ret 8 */ FN_RET(0x004a6f30); r_esp += 12; return;
L_004a6f7f:; BB(0x004a6f7f);
    /* 004a6f7f: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a6f82: jne 0x4a6fb5 */ if (!fZ) goto L_004a6fb5;
L_004a6f84:; BB(0x004a6f84);
    /* 004a6f84: mov ecx, dword ptr [0xa4763c] */ r_ecx = R32((u32)(0xa4763cu));
    /* 004a6f8a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004a6f8d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004a6f90: mov ecx, dword ptr [0xa4763c] */ r_ecx = R32((u32)(0xa4763cu));
    /* 004a6f96: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004a6f99: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004a6f9c: mov eax, dword ptr [0xa4763c] */ r_eax = R32((u32)(0xa4763cu));
    /* 004a6fa1: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 004a6fa4: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004a6fa7: mov eax, dword ptr [0xa4763c] */ r_eax = R32((u32)(0xa4763cu));
    /* 004a6fac: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 004a6faf: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a6fb2: ret 8 */ FN_RET(0x004a6f30); r_esp += 12; return;
L_004a6fb5:; BB(0x004a6fb5);
    /* 004a6fb5: mov ecx, dword ptr [0xa47638] */ r_ecx = R32((u32)(0xa47638u));
    /* 004a6fbb: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 004a6fbd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004a6fc0: mov ecx, dword ptr [0xa47638] */ r_ecx = R32((u32)(0xa47638u));
    /* 004a6fc6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004a6fc9: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004a6fcc: mov eax, dword ptr [0xa47638] */ r_eax = R32((u32)(0xa47638u));
    /* 004a6fd1: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004a6fd4: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004a6fd7: mov eax, dword ptr [0xa47638] */ r_eax = R32((u32)(0xa47638u));
    /* 004a6fdc: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004a6fdf: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a6fe2: ret 8 */ FN_RET(0x004a6f30); r_esp += 12; return;
}

void f_004a6fe8(void) /* sub_4A6FE8 */
{
    FN_ENTER(0x004a6fe8);
    /* 004a6fe8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6fe9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004a6fed: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 004a6ff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6ff2: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4a6ff7u); f_00786b3c();
    /* 004a6ff7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a6ff8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a6ffa: je 0x4a7004 */ if (fZ) goto L_004a7004;
L_004a6ffc:; BB(0x004a6ffc);
    /* 004a6ffc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6ffd: mov ecx, eax */ r_ecx = r_eax;
    /* 004a6fff: call 0x4a7008 */ r_esp -= 4; W32(r_esp, 0x4a7004u); f_004a7008();
L_004a7004:; BB(0x004a7004);
    /* 004a7004: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a7005: ret  */ FN_RET(0x004a6fe8); r_esp += 4; return;
}

