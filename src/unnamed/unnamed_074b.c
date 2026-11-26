#include "protos.h"

void f_0074b07c(void) /* sub_74B07C */
{
    FN_ENTER(0x0074b07c);
    /* 0074b07c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b07d: mov ebp, esp */ r_ebp = r_esp;
    /* 0074b07f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b081: push 0x8f27c8 */ { u32 v = 0x8f27c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b086: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074b08c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b08d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074b094: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b097: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074b09a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074b09d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074b0a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074b0a3: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0074b0a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074b0aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b0ab: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b0ad: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b0b0: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x74b0b5u); f_00736988();
    /* 0074b0b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074b0bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074b0bf: mov dword ptr [ecx], 0xb41c88 */ W32((u32)(r_ecx), 0xb41c88u);
    /* 0074b0c5: mov eax, dword ptr [0x9f4064] */ r_eax = R32((u32)(0x9f4064u));
    /* 0074b0ca: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0074b0cd: call 0x737b8c */ r_esp -= 4; W32(r_esp, 0x74b0d2u); f_00737b8c();
    /* 0074b0d2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074b0d5: mov eax, 4 */ r_eax = 0x4u;
    /* 0074b0da: mov word ptr [edx + 0x94], ax */ W16((u32)(r_edx+0x94u), (u16)r_eax);
    /* 0074b0e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0074b0e3: mov word ptr [edx + 0x96], cx */ W16((u32)(r_edx+0x96u), (u16)r_ecx);
    /* 0074b0ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b0eb: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x74b0f0u); f_00791748();
    /* 0074b0f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b0f1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074b0f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074b0f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074b0fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0074b100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074b101: ret 8 */ FN_RET(0x0074b07c); r_esp += 12; return;
}

void f_0074b104(void) /* sub_74B104 */
{
    FN_ENTER(0x0074b104);
    /* 0074b104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b105: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074b107: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b109: call 0x7369bc */ r_esp -= 4; W32(r_esp, 0x74b10eu); f_007369bc();
    /* 0074b10e: movsx eax, word ptr [ebx + 0x96] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x96u));
    /* 0074b115: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074b117: je 0x74b123 */ if (fZ) goto L_0074b123;
L_0074b119:; BB(0x0074b119);
    /* 0074b119: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b11c: mov word ptr [ebx + 0x96], ax */ W16((u32)(r_ebx+0x96u), (u16)r_eax);
L_0074b123:; BB(0x0074b123);
    /* 0074b123: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b124: ret  */ FN_RET(0x0074b104); r_esp += 4; return;
}

void f_0074b128(void) /* sub_74B128 */
{
    FN_ENTER(0x0074b128);
    /* 0074b128: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b129: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b12a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074b12c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b12e: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x74b133u); f_007108f4();
    /* 0074b133: mov ebp, eax */ r_ebp = r_eax;
    /* 0074b135: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b138: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x74b13du); f_00710f80();
    /* 0074b13d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b13e: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0074b141: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b142: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b144: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x74b149u); f_0072a648();
    /* 0074b149: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b14a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b14c: call 0x73746c */ r_esp -= 4; W32(r_esp, 0x74b151u); f_0073746c();
    /* 0074b151: movsx edx, word ptr [ebx + 0x94] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x94u));
    /* 0074b158: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b15b: je 0x74b165 */ if (fZ) goto L_0074b165;
L_0074b15d:; BB(0x0074b15d);
    /* 0074b15d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b15e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b160: call 0x74b188 */ r_esp -= 4; W32(r_esp, 0x74b165u); f_0074b188();
L_0074b165:; BB(0x0074b165);
    /* 0074b165: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0074b168: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b16a: je 0x74b172 */ if (fZ) goto L_0074b172;
L_0074b16c:; BB(0x0074b16c);
    /* 0074b16c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b16d: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74b172u); f_00761390();
L_0074b172:; BB(0x0074b172);
    /* 0074b172: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074b175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074b177: je 0x74b185 */ if (fZ) goto L_0074b185;
L_0074b179:; BB(0x0074b179);
    /* 0074b179: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074b17c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b17d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b17e: mov ecx, eax */ r_ecx = r_eax;
    /* 0074b180: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74b185u); f_0073f694();
L_0074b185:; BB(0x0074b185);
    /* 0074b185: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b186: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074b187: ret  */ FN_RET(0x0074b128); r_esp += 4; return;
}

void f_0074b188(void) /* sub_74B188 */
{
    FN_ENTER(0x0074b188);
    /* 0074b188: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b189: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b18a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b18d: mov edi, ecx */ r_edi = r_ecx;
    /* 0074b18f: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0074b193: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0074b196: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b198: jl 0x74b29b */ if ((fS!=fO)) goto L_0074b29b;
L_0074b19e:; BB(0x0074b19e);
    /* 0074b19e: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0074b1a1: call 0x760e4c */ r_esp -= 4; W32(r_esp, 0x74b1a6u); f_00760e4c();
    /* 0074b1a6: fld dword ptr [0x973978] */ FPUSH(R_F32((u32)(0x973978u)));
    /* 0074b1ac: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0074b1ae: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0074b1b0: movzx eax, word ptr [edi + 0x94] */ r_eax = (u32)R16((u32)(r_edi+0x94u));
    /* 0074b1b7: movzx edx, byte ptr [eax + 0x973940] */ r_edx = (u32)R8((u32)(r_eax+0x973940u));
    /* 0074b1be: movsx eax, word ptr [edi + 0x96] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x96u));
    /* 0074b1c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074b1c7: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0074b1cb: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 0074b1ce: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0074b1d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b1d4: je 0x74b1e6 */ if (fZ) goto L_0074b1e6;
L_0074b1d6:; BB(0x0074b1d6);
    /* 0074b1d6: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074b1d8: je 0x74b1e1 */ if (fZ) goto L_0074b1e1;
L_0074b1da:; BB(0x0074b1da);
    /* 0074b1da: mov edx, 1 */ r_edx = 0x1u;
    /* 0074b1df: jmp 0x74b1e6 */ goto L_0074b1e6;
L_0074b1e1:; BB(0x0074b1e1);
    /* 0074b1e1: mov edx, 2 */ r_edx = 0x2u;
L_0074b1e6:; BB(0x0074b1e6);
    /* 0074b1e6: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0074b1ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b1eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b1ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b1ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b1ef: call 0x760b74 */ r_esp -= 4; W32(r_esp, 0x74b1f4u); f_00760b74();
    /* 0074b1f4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074b1f7: fld dword ptr [0x973970] */ FPUSH(R_F32((u32)(0x973970u)));
    /* 0074b1fd: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0074b201: fld dword ptr [0x97396c] */ FPUSH(R_F32((u32)(0x97396cu)));
    /* 0074b207: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0074b20b: fld dword ptr [0x973964] */ FPUSH(R_F32((u32)(0x973964u)));
    /* 0074b211: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0074b214: fdivr dword ptr [0x973968] */ ST(0) = R_F32((u32)(0x973968u)) / ST(0);
    /* 0074b21a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0074b21e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074b220: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0074b224: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0074b228: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 0074b230: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0074b233: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b235: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0074b239: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0074b23d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0074b241: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x74b246u); f_0071d484();
    /* 0074b246: movzx eax, word ptr [edi + 0x94] */ r_eax = (u32)R16((u32)(r_edi+0x94u));
    /* 0074b24d: push dword ptr [eax*4 + 0x973930] */ { u32 v = R32((u32)(r_eax*4+0x973930u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b254: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74b259u); f_0079317c();
    /* 0074b259: mov ebx, eax */ r_ebx = r_eax;
    /* 0074b25b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b25c: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x74b261u); f_007ac344();
    /* 0074b261: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0074b265: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0074b269: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0074b26c: fadd dword ptr [eax*4 + 0x973948] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x973948u));
    /* 0074b273: fmul dword ptr [0x97395c] */ ST(0) = ST(0) * R_F32((u32)(0x97395cu));
    /* 0074b279: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 0074b27d: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0074b281: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0074b285: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b287: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b28c: push 0xff000000 */ { u32 v = 0xff000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b291: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b292: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b293: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x74b298u); f_0071d58c();
    /* 0074b298: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0074b29b:; BB(0x0074b29b);
    /* 0074b29b: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b29e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b29f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074b2a0: ret 4 */ FN_RET(0x0074b188); r_esp += 8; return;
}

void f_0074b2a4(void) /* sub_74B2A4 */
{
    FN_ENTER(0x0074b2a4);
    /* 0074b2a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b2a5: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b2ab: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074b2ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b2af: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74b2b4u); f_00737d70();
    /* 0074b2b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b2b6: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74b2bbu); f_00737d1c();
    /* 0074b2bb: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074b2bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b2c0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74b2c5u); f_0068d5a8();
    /* 0074b2c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b2c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b2c8: je 0x74b326 */ if (fZ) goto L_0074b326;
L_0074b2ca:; BB(0x0074b2ca);
    /* 0074b2ca: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074b2cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b2ce: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 0074b2d4: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x74b2d9u); f_006a54d4();
    /* 0074b2d9: mov edx, eax */ r_edx = r_eax;
    /* 0074b2db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b2dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074b2df: jbe 0x74b314 */ if ((fC||fZ)) goto L_0074b314;
L_0074b2e1:; BB(0x0074b2e1);
    /* 0074b2e1: mov dword ptr [esp + 0x7c], esi */ W32((u32)(r_esp+0x7cu), r_esi);
    /* 0074b2e5: mov esi, eax */ r_esi = r_eax;
    /* 0074b2e7: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 0074b2eb: mov edi, edx */ r_edi = r_edx;
L_0074b2ed:; BB(0x0074b2ed);
    /* 0074b2ed: push dword ptr [esp + esi*4] */ { u32 v = R32((u32)(r_esp+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b2f0: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b2f5u); f_005c5528();
    /* 0074b2f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b2f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b2f8: je 0x74b305 */ if (fZ) goto L_0074b305;
L_0074b2fa:; BB(0x0074b2fa);
    /* 0074b2fa: push dword ptr [esp + esi*4] */ { u32 v = R32((u32)(r_esp+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b2fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b2fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b300: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x74b305u); f_00737620();
L_0074b305:; BB(0x0074b305);
    /* 0074b305: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074b308: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b30a: jb 0x74b2ed */ if (fC) goto L_0074b2ed;
L_0074b30c:; BB(0x0074b30c);
    /* 0074b30c: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 0074b310: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
L_0074b314:; BB(0x0074b314);
    /* 0074b314: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 0074b31b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b31d: jle 0x74b335 */ if ((fZ||fS!=fO)) goto L_0074b335;
L_0074b31f:; BB(0x0074b31f);
    /* 0074b31f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b321: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74b326u); f_00737cdc();
L_0074b326:; BB(0x0074b326);
    /* 0074b326: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b328: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b32du); f_00737da4();
    /* 0074b32d: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b333: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b334: ret  */ FN_RET(0x0074b2a4); r_esp += 4; return;
L_0074b335:; BB(0x0074b335);
    /* 0074b335: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b337: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b339: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x74b33eu); f_0073780c();
    /* 0074b33e: jmp 0x74b31f */ goto L_0074b31f;
}

void f_0074b2cc(void)
{
    FN_ENTER(0x0074b2cc);
    /* 0074b2cc: and al, 0x52 */ {  u32 a = (u8)r_eax; u32 b = 0x52u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0074b2ce: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 0074b2d4: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x74b2d9u); f_006a54d4();
    /* 0074b2d9: mov edx, eax */ r_edx = r_eax;
    /* 0074b2db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b2dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074b2df: jbe 0x74b314 */ if ((fC||fZ)) goto L_0074b314;
L_0074b2e1:; BB(0x0074b2e1);
    /* 0074b2e1: mov dword ptr [esp + 0x7c], esi */ W32((u32)(r_esp+0x7cu), r_esi);
    /* 0074b2e5: mov esi, eax */ r_esi = r_eax;
    /* 0074b2e7: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 0074b2eb: mov edi, edx */ r_edi = r_edx;
L_0074b2ed:; BB(0x0074b2ed);
    /* 0074b2ed: push dword ptr [esp + esi*4] */ { u32 v = R32((u32)(r_esp+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b2f0: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b2f5u); f_005c5528();
    /* 0074b2f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b2f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b2f8: je 0x74b305 */ if (fZ) goto L_0074b305;
L_0074b2fa:; BB(0x0074b2fa);
    /* 0074b2fa: push dword ptr [esp + esi*4] */ { u32 v = R32((u32)(r_esp+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b2fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b2fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b300: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x74b305u); f_00737620();
L_0074b305:; BB(0x0074b305);
    /* 0074b305: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074b308: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b30a: jb 0x74b2ed */ if (fC) goto L_0074b2ed;
L_0074b30c:; BB(0x0074b30c);
    /* 0074b30c: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 0074b310: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
L_0074b314:; BB(0x0074b314);
    /* 0074b314: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 0074b31b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b31d: jle 0x74b335 */ if ((fZ||fS!=fO)) goto L_0074b335;
L_0074b31f:; BB(0x0074b31f);
    /* 0074b31f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b321: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74b326u); f_00737cdc();
    /* 0074b326: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b328: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b32du); f_00737da4();
    /* 0074b32d: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b333: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b334: ret  */ FN_RET(0x0074b2cc); r_esp += 4; return;
L_0074b335:; BB(0x0074b335);
    /* 0074b335: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b337: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b339: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x74b33eu); f_0073780c();
    /* 0074b33e: jmp 0x74b31f */ goto L_0074b31f;
}

void f_0074b2e0(void)
{
    FN_ENTER(0x0074b2e0);
    /* 0074b2e0: xor ecx, dword ptr [ecx - 0x7483db8c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ecx+0x8b7c2474u)); u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    UNSUP(0x0074b2e6, "falls out of decoded code");
}

void f_0074b2f4(void)
{
    FN_ENTER(0x0074b2f4);
    goto L_0074b2f4;
L_0074b2ed:; BB(0x0074b2ed);
    /* 0074b2ed: push dword ptr [esp + esi*4] */ { u32 v = R32((u32)(r_esp+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b2f0: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b2f5u); f_005c5528();
L_0074b2f4:; BB(0x0074b2f4);
    /* 0074b2f4: call ptr [ecx - 0x7b] */ { u32 t = R32((u32)(r_ecx+0xffffff85u)); r_esp -= 4; W32(r_esp, 0x74b2f7u); call_ind(t); }
    /* 0074b2f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b2f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b2f7: sal byte ptr [ebx + ecx - 1], 0x34 */ { u32 ad = (u32)(r_ebx+r_ecx+0xffffffffu); u32 c = (20u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0074b2f8: je 0x74b305 */ if (fZ) goto L_0074b305;
L_0074b2fa:; BB(0x0074b2fa);
    /* 0074b2fa: push dword ptr [esp + esi*4] */ { u32 v = R32((u32)(r_esp+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b2fc: mov ah, 0x50 */ r_eax = (r_eax & 0xffff00ffu) | (((0x50u) & 0xffu) << 8);
    /* 0074b2fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b2fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b300: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x74b305u); f_00737620();
L_0074b305:; BB(0x0074b305);
    /* 0074b305: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074b308: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b30a: jb 0x74b2ed */ if (fC) goto L_0074b2ed;
L_0074b30c:; BB(0x0074b30c);
    /* 0074b30c: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 0074b310: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 0074b314: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 0074b31b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b31d: jle 0x74b335 */ if ((fZ||fS!=fO)) goto L_0074b335;
L_0074b31f:; BB(0x0074b31f);
    /* 0074b31f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b321: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74b326u); f_00737cdc();
    /* 0074b326: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b328: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b32du); f_00737da4();
    /* 0074b32d: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b333: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b334: ret  */ FN_RET(0x0074b2f4); r_esp += 4; return;
L_0074b335:; BB(0x0074b335);
    /* 0074b335: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b337: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b339: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x74b33eu); f_0073780c();
    /* 0074b33e: jmp 0x74b31f */ goto L_0074b31f;
}

void f_0074b340(void) /* sub_74B340 */
{
    FN_ENTER(0x0074b340);
    /* 0074b340: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b341: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b347: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074b349: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b34b: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74b350u); f_00737d70();
    /* 0074b350: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b352: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74b357u); f_00737d1c();
    /* 0074b357: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074b35b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b35c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74b361u); f_0068d5a8();
    /* 0074b361: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b362: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b364: je 0x74b3ff */ if (fZ) goto L_0074b3ff;
L_0074b36a:; BB(0x0074b36a);
    /* 0074b36a: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0074b36e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b36f: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 0074b375: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x74b37au); f_006a54d4();
    /* 0074b37a: mov edx, eax */ r_edx = r_eax;
    /* 0074b37c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b37e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074b380: jbe 0x74b3ed */ if ((fC||fZ)) goto L_0074b3ed;
L_0074b382:; BB(0x0074b382);
    /* 0074b382: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0074b386: mov ebx, eax */ r_ebx = r_eax;
    /* 0074b388: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0074b38c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0074b390: movzx edi, word ptr [esp + 0x90] */ r_edi = (u32)R16((u32)(r_esp+0x90u));
    /* 0074b398: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074b39b: mov ebp, edx */ r_ebp = r_edx;
L_0074b39d:; BB(0x0074b39d);
    /* 0074b39d: push dword ptr [esp + ebx*4 + 0x10] */ { u32 v = R32((u32)(r_esp+r_ebx*4+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b3a1: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b3a6u); f_005c5528();
    /* 0074b3a6: mov esi, eax */ r_esi = r_eax;
    /* 0074b3a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074b3ab: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b3ad: je 0x74b3d7 */ if (fZ) goto L_0074b3d7;
L_0074b3af:; BB(0x0074b3af);
    /* 0074b3af: movzx eax, byte ptr [esi + 0xf2] */ r_eax = (u32)R8((u32)(r_esi+0xf2u));
    /* 0074b3b6: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b3b8: jne 0x74b3d7 */ if (!fZ) goto L_0074b3d7;
L_0074b3ba:; BB(0x0074b3ba);
    /* 0074b3ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b3bc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b3be: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b3c0: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x74b3c5u); f_005c50b4();
    /* 0074b3c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b3c7: je 0x74b3d7 */ if (fZ) goto L_0074b3d7;
L_0074b3c9:; BB(0x0074b3c9);
    /* 0074b3c9: push dword ptr [esp + ebx*4 + 0x10] */ { u32 v = R32((u32)(r_esp+r_ebx*4+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b3cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b3ce: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0074b3d2: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x74b3d7u); f_00737620();
L_0074b3d7:; BB(0x0074b3d7);
    /* 0074b3d7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074b3da: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b3dc: jb 0x74b39d */ if (fC) goto L_0074b39d;
L_0074b3de:; BB(0x0074b3de);
    /* 0074b3de: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0074b3e2: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0074b3e6: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074b3ea: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0074b3ed:; BB(0x0074b3ed);
    /* 0074b3ed: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 0074b3f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b3f6: jle 0x74b410 */ if ((fZ||fS!=fO)) goto L_0074b410;
L_0074b3f8:; BB(0x0074b3f8);
    /* 0074b3f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b3fa: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74b3ffu); f_00737cdc();
L_0074b3ff:; BB(0x0074b3ff);
    /* 0074b3ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b401: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b406u); f_00737da4();
    /* 0074b406: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b40c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b40d: ret 4 */ FN_RET(0x0074b340); r_esp += 8; return;
L_0074b410:; BB(0x0074b410);
    /* 0074b410: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b412: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b414: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x74b419u); f_0073780c();
    /* 0074b419: jmp 0x74b3f8 */ goto L_0074b3f8;
}

void f_0074b41c(void) /* sub_74B41C */
{
    FN_ENTER(0x0074b41c);
    /* 0074b41c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b41d: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b423: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074b425: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b427: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74b42cu); f_00737d70();
    /* 0074b42c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b42e: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74b433u); f_00737d1c();
    /* 0074b433: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074b437: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b438: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74b43du); f_0068d5a8();
    /* 0074b43d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b43e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b440: je 0x74b4f2 */ if (fZ) goto L_0074b4f2;
L_0074b446:; BB(0x0074b446);
    /* 0074b446: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0074b44a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b44b: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 0074b451: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x74b456u); f_006a54d4();
    /* 0074b456: mov edx, eax */ r_edx = r_eax;
    /* 0074b458: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b45a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074b45c: jbe 0x74b4e0 */ if ((fC||fZ)) goto L_0074b4e0;
L_0074b462:; BB(0x0074b462);
    /* 0074b462: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0074b466: mov ebx, eax */ r_ebx = r_eax;
    /* 0074b468: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0074b46c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0074b470: movzx edi, word ptr [esp + 0x90] */ r_edi = (u32)R16((u32)(r_esp+0x90u));
    /* 0074b478: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074b47b: mov ebp, edx */ r_ebp = r_edx;
L_0074b47d:; BB(0x0074b47d);
    /* 0074b47d: push dword ptr [esp + ebx*4 + 0x10] */ { u32 v = R32((u32)(r_esp+r_ebx*4+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b481: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b486u); f_005c5528();
    /* 0074b486: mov esi, eax */ r_esi = r_eax;
    /* 0074b488: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074b48b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b48d: je 0x74b4ca */ if (fZ) goto L_0074b4ca;
L_0074b48f:; BB(0x0074b48f);
    /* 0074b48f: movzx eax, byte ptr [esi + 0xf2] */ r_eax = (u32)R8((u32)(r_esi+0xf2u));
    /* 0074b496: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b498: jne 0x74b4ca */ if (!fZ) goto L_0074b4ca;
L_0074b49a:; BB(0x0074b49a);
    /* 0074b49a: movzx edx, word ptr [esp + 0x94] */ r_edx = (u32)R16((u32)(r_esp+0x94u));
    /* 0074b4a2: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 0074b4a9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b4ab: jne 0x74b4ca */ if (!fZ) goto L_0074b4ca;
L_0074b4ad:; BB(0x0074b4ad);
    /* 0074b4ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b4af: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b4b1: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b4b3: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x74b4b8u); f_005c50b4();
    /* 0074b4b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b4ba: je 0x74b4ca */ if (fZ) goto L_0074b4ca;
L_0074b4bc:; BB(0x0074b4bc);
    /* 0074b4bc: push dword ptr [esp + ebx*4 + 0x10] */ { u32 v = R32((u32)(r_esp+r_ebx*4+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b4c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b4c1: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0074b4c5: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x74b4cau); f_00737620();
L_0074b4ca:; BB(0x0074b4ca);
    /* 0074b4ca: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074b4cd: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b4cf: jb 0x74b47d */ if (fC) goto L_0074b47d;
L_0074b4d1:; BB(0x0074b4d1);
    /* 0074b4d1: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0074b4d5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0074b4d9: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074b4dd: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0074b4e0:; BB(0x0074b4e0);
    /* 0074b4e0: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 0074b4e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b4e9: jle 0x74b503 */ if ((fZ||fS!=fO)) goto L_0074b503;
L_0074b4eb:; BB(0x0074b4eb);
    /* 0074b4eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b4ed: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74b4f2u); f_00737cdc();
L_0074b4f2:; BB(0x0074b4f2);
    /* 0074b4f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b4f4: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b4f9u); f_00737da4();
    /* 0074b4f9: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b4ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b500: ret 8 */ FN_RET(0x0074b41c); r_esp += 12; return;
L_0074b503:; BB(0x0074b503);
    /* 0074b503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b505: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b507: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x74b50cu); f_0073780c();
    /* 0074b50c: jmp 0x74b4eb */ goto L_0074b4eb;
}

void f_0074b510(void) /* sub_74B510 */
{
    FN_ENTER(0x0074b510);
    /* 0074b510: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b511: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b512: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b518: mov esi, ecx */ r_esi = r_ecx;
    /* 0074b51a: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b51c: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74b521u); f_00737d70();
    /* 0074b521: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b523: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74b528u); f_00737d1c();
    /* 0074b528: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0074b52c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b52d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74b532u); f_0068d5a8();
    /* 0074b532: mov ebx, eax */ r_ebx = r_eax;
    /* 0074b534: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074b537: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b539: je 0x74b603 */ if (fZ) goto L_0074b603;
L_0074b53f:; BB(0x0074b53f);
    /* 0074b53f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0074b543: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b544: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 0074b54a: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x74b54fu); f_006a54d4();
    /* 0074b54f: mov edx, eax */ r_edx = r_eax;
    /* 0074b551: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b553: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074b555: jbe 0x74b5d0 */ if ((fC||fZ)) goto L_0074b5d0;
L_0074b557:; BB(0x0074b557);
    /* 0074b557: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0074b55b: mov esi, eax */ r_esi = r_eax;
    /* 0074b55d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0074b561: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074b564: mov ebp, edx */ r_ebp = r_edx;
L_0074b566:; BB(0x0074b566);
    /* 0074b566: push dword ptr [esp + esi*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_esi*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b56a: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b56fu); f_005c5528();
    /* 0074b56f: mov edi, eax */ r_edi = r_eax;
    /* 0074b571: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074b574: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b576: je 0x74b5be */ if (fZ) goto L_0074b5be;
L_0074b578:; BB(0x0074b578);
    /* 0074b578: movzx eax, byte ptr [edi + 0xf2] */ r_eax = (u32)R8((u32)(r_edi+0xf2u));
    /* 0074b57f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b581: jne 0x74b5be */ if (!fZ) goto L_0074b5be;
L_0074b583:; BB(0x0074b583);
    /* 0074b583: lea eax, [esp + 0x84] */ r_eax = (u32)(r_esp+0x84u);
    /* 0074b58a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b58b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b58c: mov ecx, edi */ r_ecx = r_edi;
    /* 0074b58e: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x74b593u); f_005c4214();
    /* 0074b593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b595: je 0x74b5be */ if (fZ) goto L_0074b5be;
L_0074b597:; BB(0x0074b597);
    /* 0074b597: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 0074b59d: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074b59f: jne 0x74b5be */ if (!fZ) goto L_0074b5be;
L_0074b5a1:; BB(0x0074b5a1);
    /* 0074b5a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b5a3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b5a5: mov ecx, edi */ r_ecx = r_edi;
    /* 0074b5a7: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x74b5acu); f_005c50b4();
    /* 0074b5ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b5ae: je 0x74b5be */ if (fZ) goto L_0074b5be;
L_0074b5b0:; BB(0x0074b5b0);
    /* 0074b5b0: push dword ptr [esp + esi*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_esi*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b5b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b5b5: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0074b5b9: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x74b5beu); f_00737620();
L_0074b5be:; BB(0x0074b5be);
    /* 0074b5be: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074b5c1: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b5c3: jb 0x74b566 */ if (fC) goto L_0074b566;
L_0074b5c5:; BB(0x0074b5c5);
    /* 0074b5c5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0074b5c9: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074b5cd: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0074b5d0:; BB(0x0074b5d0);
    /* 0074b5d0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b5d2: add ebx, 0xdf8 */ {  u32 a = r_ebx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074b5d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b5da: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x74b5dfu); f_0069792c();
    /* 0074b5df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b5e1: je 0x74b5f1 */ if (fZ) goto L_0074b5f1;
L_0074b5e3:; BB(0x0074b5e3);
    /* 0074b5e3: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b5e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b5ea: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b5ec: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x74b5f1u); f_00737620();
L_0074b5f1:; BB(0x0074b5f1);
    /* 0074b5f1: movsx eax, word ptr [esi + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0074b5f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b5fa: jle 0x74b613 */ if ((fZ||fS!=fO)) goto L_0074b613;
L_0074b5fc:; BB(0x0074b5fc);
    /* 0074b5fc: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b5fe: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74b603u); f_00737cdc();
L_0074b603:; BB(0x0074b603);
    /* 0074b603: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b605: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b60au); f_00737da4();
    /* 0074b60a: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b610: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b611: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074b612: ret  */ FN_RET(0x0074b510); r_esp += 4; return;
L_0074b613:; BB(0x0074b613);
    /* 0074b613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b615: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b617: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x74b61cu); f_0073780c();
    /* 0074b61c: jmp 0x74b5fc */ goto L_0074b5fc;
}

void f_0074b620(void) /* sub_74B620 */
{
    FN_ENTER(0x0074b620);
    /* 0074b620: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b621: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b627: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074b629: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b62b: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74b630u); f_00737d70();
    /* 0074b630: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b632: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74b637u); f_00737d1c();
    /* 0074b637: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074b63b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b63c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74b641u); f_0068d5a8();
    /* 0074b641: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b642: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b644: je 0x74b6c1 */ if (fZ) goto L_0074b6c1;
L_0074b646:; BB(0x0074b646);
    /* 0074b646: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0074b64a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b64b: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 0074b651: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x74b656u); f_006a54d4();
    /* 0074b656: mov edx, eax */ r_edx = r_eax;
    /* 0074b658: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b65a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074b65c: jbe 0x74b6af */ if ((fC||fZ)) goto L_0074b6af;
L_0074b65e:; BB(0x0074b65e);
    /* 0074b65e: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0074b662: mov esi, edx */ r_esi = r_edx;
    /* 0074b664: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0074b668: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074b66b: mov ebp, eax */ r_ebp = r_eax;
L_0074b66d:; BB(0x0074b66d);
    /* 0074b66d: push dword ptr [esp + ebp*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b671: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b676u); f_005c5528();
    /* 0074b676: mov edi, eax */ r_edi = r_eax;
    /* 0074b678: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074b67b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b67d: je 0x74b69d */ if (fZ) goto L_0074b69d;
L_0074b67f:; BB(0x0074b67f);
    /* 0074b67f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b681: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b683: mov ecx, edi */ r_ecx = r_edi;
    /* 0074b685: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x74b68au); f_005c50b4();
    /* 0074b68a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b68c: je 0x74b69d */ if (fZ) goto L_0074b69d;
L_0074b68e:; BB(0x0074b68e);
    /* 0074b68e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b690: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b692: mov ecx, edi */ r_ecx = r_edi;
    /* 0074b694: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x74b699u); f_005c50b4();
    /* 0074b699: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b69b: je 0x74b6db */ if (fZ) goto L_0074b6db;
L_0074b69d:; BB(0x0074b69d);
    /* 0074b69d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074b6a0: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b6a2: jb 0x74b66d */ if (fC) goto L_0074b66d;
L_0074b6a4:; BB(0x0074b6a4);
    /* 0074b6a4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0074b6a8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074b6ac: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0074b6af:; BB(0x0074b6af);
    /* 0074b6af: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 0074b6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b6b8: jle 0x74b6d0 */ if ((fZ||fS!=fO)) goto L_0074b6d0;
L_0074b6ba:; BB(0x0074b6ba);
    /* 0074b6ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b6bc: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74b6c1u); f_00737cdc();
L_0074b6c1:; BB(0x0074b6c1);
    /* 0074b6c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b6c3: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b6c8u); f_00737da4();
    /* 0074b6c8: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b6ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b6cf: ret  */ FN_RET(0x0074b620); r_esp += 4; return;
L_0074b6d0:; BB(0x0074b6d0);
    /* 0074b6d0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b6d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b6d4: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x74b6d9u); f_0073780c();
    /* 0074b6d9: jmp 0x74b6ba */ goto L_0074b6ba;
L_0074b6db:; BB(0x0074b6db);
    /* 0074b6db: mov ecx, edi */ r_ecx = r_edi;
    /* 0074b6dd: call 0x5c587c */ r_esp -= 4; W32(r_esp, 0x74b6e2u); f_005c587c();
    /* 0074b6e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b6e4: jne 0x74b69d */ if (!fZ) goto L_0074b69d;
L_0074b6e6:; BB(0x0074b6e6);
    /* 0074b6e6: push dword ptr [esp + ebp*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b6ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b6eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b6ed: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x74b6f2u); f_00737620();
    /* 0074b6f2: jmp 0x74b69d */ goto L_0074b69d;
}

void f_0074b6f4(void) /* sub_74B6F4 */
{
    FN_ENTER(0x0074b6f4);
    /* 0074b6f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b6f5: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b6fb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074b6fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b6ff: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74b704u); f_00737d70();
    /* 0074b704: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b706: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74b70bu); f_00737d1c();
    /* 0074b70b: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074b70f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b710: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74b715u); f_0068d5a8();
    /* 0074b715: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b716: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b718: je 0x74b792 */ if (fZ) goto L_0074b792;
L_0074b71a:; BB(0x0074b71a);
    /* 0074b71a: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0074b71e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b71f: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 0074b725: call 0x6a54d4 */ r_esp -= 4; W32(r_esp, 0x74b72au); f_006a54d4();
    /* 0074b72a: mov edx, eax */ r_edx = r_eax;
    /* 0074b72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b72e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074b730: jbe 0x74b780 */ if ((fC||fZ)) goto L_0074b780;
L_0074b732:; BB(0x0074b732);
    /* 0074b732: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0074b736: mov esi, edx */ r_esi = r_edx;
    /* 0074b738: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0074b73c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074b73f: mov ebp, eax */ r_ebp = r_eax;
L_0074b741:; BB(0x0074b741);
    /* 0074b741: push dword ptr [esp + ebp*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b745: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b74au); f_005c5528();
    /* 0074b74a: mov edi, eax */ r_edi = r_eax;
    /* 0074b74c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074b74f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b751: je 0x74b76e */ if (fZ) goto L_0074b76e;
L_0074b753:; BB(0x0074b753);
    /* 0074b753: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b755: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b757: mov ecx, edi */ r_ecx = r_edi;
    /* 0074b759: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x74b75eu); f_005c50b4();
    /* 0074b75e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b760: je 0x74b76e */ if (fZ) goto L_0074b76e;
L_0074b762:; BB(0x0074b762);
    /* 0074b762: push dword ptr [esp + ebp*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b766: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b767: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b769: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x74b76eu); f_00737620();
L_0074b76e:; BB(0x0074b76e);
    /* 0074b76e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074b771: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b773: jb 0x74b741 */ if (fC) goto L_0074b741;
L_0074b775:; BB(0x0074b775);
    /* 0074b775: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0074b779: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074b77d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0074b780:; BB(0x0074b780);
    /* 0074b780: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 0074b787: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b789: jle 0x74b7a1 */ if ((fZ||fS!=fO)) goto L_0074b7a1;
L_0074b78b:; BB(0x0074b78b);
    /* 0074b78b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b78d: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74b792u); f_00737cdc();
L_0074b792:; BB(0x0074b792);
    /* 0074b792: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b794: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b799u); f_00737da4();
    /* 0074b799: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b79f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b7a0: ret  */ FN_RET(0x0074b6f4); r_esp += 4; return;
L_0074b7a1:; BB(0x0074b7a1);
    /* 0074b7a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b7a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b7a5: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x74b7aau); f_0073780c();
    /* 0074b7aa: jmp 0x74b78b */ goto L_0074b78b;
}

void f_0074b7ac(void) /* sub_74B7AC */
{
    FN_ENTER(0x0074b7ac);
    /* 0074b7ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b7ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b7ae: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b7b1: mov esi, ecx */ r_esi = r_ecx;
    /* 0074b7b3: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0074b7b7: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b7b9: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74b7beu); f_00737d70();
    /* 0074b7be: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b7c0: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74b7c5u); f_00737d1c();
    /* 0074b7c5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b7c7: je 0x74b837 */ if (fZ) goto L_0074b837;
L_0074b7c9:; BB(0x0074b7c9);
    /* 0074b7c9: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0074b7cd: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0074b7d1: mov edi, ebx */ r_edi = r_ebx;
    /* 0074b7d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b7d5: mov esi, eax */ r_esi = r_eax;
    /* 0074b7d7: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_0074b7da:; BB(0x0074b7da);
    /* 0074b7da: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0074b7dc: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0074b7df: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b7e1: jle 0x74b80f */ if ((fZ||fS!=fO)) goto L_0074b80f;
L_0074b7e3:; BB(0x0074b7e3);
    /* 0074b7e3: cmp ebp, 0xffffff01 */ {  u32 a = r_ebp; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b7e9: jne 0x74b7f8 */ if (!fZ) goto L_0074b7f8;
L_0074b7eb:; BB(0x0074b7eb);
    /* 0074b7eb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b7ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b7ed: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0074b7f1: call 0x73771c */ r_esp -= 4; W32(r_esp, 0x74b7f6u); f_0073771c();
    /* 0074b7f6: jmp 0x74b80f */ goto L_0074b80f;
L_0074b7f8:; BB(0x0074b7f8);
    /* 0074b7f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b7f9: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b7feu); f_005c5528();
    /* 0074b7fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b7ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b801: je 0x74b80f */ if (fZ) goto L_0074b80f;
L_0074b803:; BB(0x0074b803);
    /* 0074b803: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074b804: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b805: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b806: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0074b80a: call 0x7376dc */ r_esp -= 4; W32(r_esp, 0x74b80fu); f_007376dc();
L_0074b80f:; BB(0x0074b80f);
    /* 0074b80f: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074b812: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074b815: cmp esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b818: jb 0x74b7da */ if (fC) goto L_0074b7da;
L_0074b81a:; BB(0x0074b81a);
    /* 0074b81a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0074b81e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074b822: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0074b825: movsx eax, word ptr [esi + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0074b82c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b82e: jle 0x74b846 */ if ((fZ||fS!=fO)) goto L_0074b846;
L_0074b830:; BB(0x0074b830);
    /* 0074b830: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b832: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74b837u); f_00737cdc();
L_0074b837:; BB(0x0074b837);
    /* 0074b837: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b839: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b83eu); f_00737da4();
    /* 0074b83e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b841: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b842: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074b843: ret 4 */ FN_RET(0x0074b7ac); r_esp += 8; return;
L_0074b846:; BB(0x0074b846);
    /* 0074b846: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b848: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b84a: call 0x73780c */ r_esp -= 4; W32(r_esp, 0x74b84fu); f_0073780c();
    /* 0074b84f: jmp 0x74b830 */ goto L_0074b830;
}

void f_0074b854(void) /* sub_74B854 */
{
    FN_ENTER(0x0074b854);
    /* 0074b854: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b857: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 0074b85e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0074b860: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b862: jle 0x74b8bc */ if ((fZ||fS!=fO)) goto L_0074b8bc;
L_0074b864:; BB(0x0074b864);
    /* 0074b864: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0074b868: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0074b86c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0074b86f:; BB(0x0074b86f);
    /* 0074b86f: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 0074b872: mov esi, dword ptr [ebx + edx*4] */ r_esi = R32((u32)(r_ebx+r_edx*4));
    /* 0074b875: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 0074b879: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074b87c: je 0x74b8aa */ if (fZ) goto L_0074b8aa;
L_0074b87e:; BB(0x0074b87e);
    /* 0074b87e: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 0074b881: cmp edi, dword ptr [esp + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b885: jne 0x74b8aa */ if (!fZ) goto L_0074b8aa;
L_0074b887:; BB(0x0074b887);
    /* 0074b887: mov dword ptr [esi + 0x2c], 0xffaaaaaa */ W32((u32)(r_esi+0x2cu), 0xffaaaaaau);
    /* 0074b88e: mov eax, 0xff909090 */ r_eax = 0xff909090u;
    /* 0074b893: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0074b896: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0074b899: or ebx, 0xffff0080 */ {  u32 a = r_ebx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0074b89f: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 0074b8a3: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
L_0074b8aa:; BB(0x0074b8aa);
    /* 0074b8aa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074b8ad: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074b8af: jl 0x74b86f */ if ((fS!=fO)) goto L_0074b86f;
L_0074b8b1:; BB(0x0074b8b1);
    /* 0074b8b1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0074b8b5: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0074b8b9: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0074b8bc:; BB(0x0074b8bc);
    /* 0074b8bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b8bf: ret 4 */ FN_RET(0x0074b854); r_esp += 8; return;
}

void f_0074b8c4(void) /* sub_74B8C4 */
{
    FN_ENTER(0x0074b8c4);
    /* 0074b8c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b8c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b8c6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b8c9: mov esi, ecx */ r_esi = r_ecx;
    /* 0074b8cb: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0074b8cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b8d0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74b8d5u); f_0068d5a8();
    /* 0074b8d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b8d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b8d8: je 0x74b96e */ if (fZ) goto L_0074b96e;
L_0074b8de:; BB(0x0074b8de);
    /* 0074b8de: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 0074b8e5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0074b8e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074b8e9: jle 0x74b96e */ if ((fZ||fS!=fO)) goto L_0074b96e;
L_0074b8ef:; BB(0x0074b8ef);
    /* 0074b8ef: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0074b8f3: mov edi, esi */ r_edi = r_esi;
    /* 0074b8f5: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074b8f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0074b8fa: mov esi, eax */ r_esi = r_eax;
L_0074b8fc:; BB(0x0074b8fc);
    /* 0074b8fc: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 0074b8ff: mov ebp, dword ptr [ebp + ecx*4] */ r_ebp = R32((u32)(r_ebp+r_ecx*4));
    /* 0074b903: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b905: je 0x74b95d */ if (fZ) goto L_0074b95d;
L_0074b907:; BB(0x0074b907);
    /* 0074b907: movzx ecx, word ptr [ebp + 4] */ r_ecx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0074b90b: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074b90e: je 0x74b95d */ if (fZ) goto L_0074b95d;
L_0074b910:; BB(0x0074b910);
    /* 0074b910: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b916: jne 0x74b95d */ if (!fZ) goto L_0074b95d;
L_0074b918:; BB(0x0074b918);
    /* 0074b918: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b91b: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74b920u); f_005c5528();
    /* 0074b920: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b921: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b923: jne 0x74b92e */ if (!fZ) goto L_0074b92e;
L_0074b925:; BB(0x0074b925);
    /* 0074b925: movsx edx, word ptr [edi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
    /* 0074b92c: jmp 0x74b95d */ goto L_0074b95d;
L_0074b92e:; BB(0x0074b92e);
    /* 0074b92e: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0074b932: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b933: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b934: mov ecx, eax */ r_ecx = r_eax;
    /* 0074b936: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x74b93bu); f_005c4214();
    /* 0074b93b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b93d: je 0x74b948 */ if (fZ) goto L_0074b948;
L_0074b93f:; BB(0x0074b93f);
    /* 0074b93f: movsx edx, word ptr [edi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
    /* 0074b946: jmp 0x74b95d */ goto L_0074b95d;
L_0074b948:; BB(0x0074b948);
    /* 0074b948: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0074b94c: or edx, 0xffff0080 */ {  u32 a = r_edx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074b952: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0074b956: movsx edx, word ptr [edi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
L_0074b95d:; BB(0x0074b95d);
    /* 0074b95d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074b960: movsx ecx, bx */ r_ecx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0074b963: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074b965: jl 0x74b8fc */ if ((fS!=fO)) goto L_0074b8fc;
L_0074b967:; BB(0x0074b967);
    /* 0074b967: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074b96b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0074b96e:; BB(0x0074b96e);
    /* 0074b96e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074b971: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074b972: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074b973: ret  */ FN_RET(0x0074b8c4); r_esp += 4; return;
}

void f_0074b974(void) /* sub_74B974 */
{
    FN_ENTER(0x0074b974);
    /* 0074b974: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0074b979: mov word ptr [ecx + 0x94], ax */ W16((u32)(r_ecx+0x94u), (u16)r_eax);
    /* 0074b980: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074b983: jne 0x74b991 */ if (!fZ) goto L_0074b991;
L_0074b985:; BB(0x0074b985);
    /* 0074b985: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 0074b98a: mov word ptr [ecx + 0x96], ax */ W16((u32)(r_ecx+0x96u), (u16)r_eax);
L_0074b991:; BB(0x0074b991);
    /* 0074b991: ret 4 */ FN_RET(0x0074b974); r_esp += 8; return;
}

void f_0074b994(void) /* sub_74B994 */
{
    FN_ENTER(0x0074b994);
    /* 0074b994: mov dword ptr [0xa9ab0c], 0x3f800000 */ W32((u32)(0xa9ab0cu), 0x3f800000u);
    /* 0074b99e: mov dword ptr [0xa9ab10], 0x41000000 */ W32((u32)(0xa9ab10u), 0x41000000u);
    /* 0074b9a8: mov dword ptr [0xa9ab14], 0x3fc00000 */ W32((u32)(0xa9ab14u), 0x3fc00000u);
    /* 0074b9b2: ret  */ FN_RET(0x0074b994); r_esp += 4; return;
}

void f_0074b9b4(void) /* sub_74B9B4 */
{
    FN_ENTER(0x0074b9b4);
    /* 0074b9b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b9b5: mov esi, ecx */ r_esi = r_ecx;
    /* 0074b9b7: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b9b9: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74b9beu); f_00737d70();
    /* 0074b9be: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b9c0: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74b9c5u); f_00737d1c();
    /* 0074b9c5: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b9c7: call 0x74b9d8 */ r_esp -= 4; W32(r_esp, 0x74b9ccu); f_0074b9d8();
    /* 0074b9cc: mov ecx, esi */ r_ecx = r_esi;
    /* 0074b9ce: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74b9d3u); f_00737da4();
    /* 0074b9d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074b9d4: ret  */ FN_RET(0x0074b9b4); r_esp += 4; return;
}

void f_0074b9d8(void) /* sub_74B9D8 */
{
    FN_ENTER(0x0074b9d8);
    /* 0074b9d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b9d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074b9da: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074b9dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074b9de: mov esi, eax */ r_esi = r_eax;
L_0074b9e0:; BB(0x0074b9e0);
    /* 0074b9e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b9e1: call 0x751c78 */ r_esp -= 4; W32(r_esp, 0x74b9e6u); f_00751c78();
    /* 0074b9e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074b9e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b9e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b9ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074b9ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074b9ed: call 0x737ec4 */ r_esp -= 4; W32(r_esp, 0x74b9f2u); f_00737ec4();
    /* 0074b9f2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074b9f5: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074b9f8: jb 0x74b9e0 */ if (fC) goto L_0074b9e0;
L_0074b9fa:; BB(0x0074b9fa);
    /* 0074b9fa: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 0074ba01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074ba03: jle 0x74ba22 */ if ((fZ||fS!=fO)) goto L_0074ba22;
L_0074ba05:; BB(0x0074ba05);
    /* 0074ba05: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 0074ba0c: or eax, 0xffff0100 */ {  u32 a = r_eax; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074ba11: mov word ptr [ebx + 0x84], ax */ W16((u32)(r_ebx+0x84u), (u16)r_eax);
    /* 0074ba18: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ba1a: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74ba1fu); f_00737cdc();
    /* 0074ba1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ba20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074ba21: ret  */ FN_RET(0x0074b9d8); r_esp += 4; return;
L_0074ba22:; BB(0x0074ba22);
    /* 0074ba22: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ba24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ba26: call 0x737e90 */ r_esp -= 4; W32(r_esp, 0x74ba2bu); f_00737e90();
    /* 0074ba2b: jmp 0x74ba05 */ goto L_0074ba05;
}

void f_0074ba30(void) /* sub_74BA30 */
{
    FN_ENTER(0x0074ba30);
    /* 0074ba30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ba31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074ba33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ba35: call 0x74ba54 */ r_esp -= 4; W32(r_esp, 0x74ba3au); f_0074ba54();
    /* 0074ba3a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074ba3e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ba40: jne 0x74ba46 */ if (!fZ) goto L_0074ba46;
L_0074ba42:; BB(0x0074ba42);
    /* 0074ba42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ba43: ret 4 */ FN_RET(0x0074ba30); r_esp += 8; return;
L_0074ba46:; BB(0x0074ba46);
    /* 0074ba46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ba47: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74ba4cu); f_005c2f74();
    /* 0074ba4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ba4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ba4e: ret 4 */ FN_RET(0x0074ba30); r_esp += 8; return;
}

void f_0074ba54(void) /* sub_74BA54 */
{
    FN_ENTER(0x0074ba54);
    /* 0074ba54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ba55: mov ebp, esp */ r_ebp = r_esp;
    /* 0074ba57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ba59: push 0x8f27e4 */ { u32 v = 0x8f27e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ba5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074ba64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ba65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074ba6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074ba6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074ba72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074ba75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074ba78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074ba7b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074ba7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074ba81: mov dword ptr [ecx], 0xb41d18 */ W32((u32)(r_ecx), 0xb41d18u);
    /* 0074ba87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074ba8e: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x74ba93u); f_007366bc();
    /* 0074ba93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074ba96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074ba9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0074ba9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074baa0: ret  */ FN_RET(0x0074ba54); r_esp += 4; return;
}

void f_0074baa4(void) /* sub_74BAA4 */
{
    FN_ENTER(0x0074baa4);
    /* 0074baa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074baa5: mov ebp, esp */ r_ebp = r_esp;
    /* 0074baa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074baa9: push 0x8f280c */ { u32 v = 0x8f280cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074baae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074bab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bab5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074babc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074babf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074bac2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074bac5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074bac8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074bacb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bacd: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074bad0: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x74bad5u); f_00737f80();
    /* 0074bad5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0074badc: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bae1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74bae6u); f_005caba4();
    /* 0074bae6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074bae9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0074baec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074baee: je 0x74bb24 */ if (fZ) goto L_0074bb24;
L_0074baf0:; BB(0x0074baf0);
    /* 0074baf0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0074baf7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074bafe: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074bb01: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074bb04: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074bb07: call 0x74bb28 */ r_esp -= 4; W32(r_esp, 0x74bb0cu); f_0074bb28();
    /* 0074bb0c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074bb0f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0074bb16:; BB(0x0074bb16);
    /* 0074bb16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074bb19: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074bb20: mov esp, ebp */ r_esp = r_ebp;
    /* 0074bb22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074bb23: ret  */ FN_RET(0x0074baa4); r_esp += 4; return;
L_0074bb24:; BB(0x0074bb24);
    /* 0074bb24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074bb26: jmp 0x74bb16 */ goto L_0074bb16;
}

void f_0074bb28(void) /* sub_74BB28 */
{
    FN_ENTER(0x0074bb28);
    /* 0074bb28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074bb29: mov ebp, esp */ r_ebp = r_esp;
    /* 0074bb2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074bb2d: push 0x8f2828 */ { u32 v = 0x8f2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bb32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074bb38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bb39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074bb40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074bb43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074bb46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074bb49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074bb4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074bb4f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0074bb53: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074bb56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bb57: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bb59: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074bb5c: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x74bb61u); f_00736988();
    /* 0074bb61: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074bb68: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074bb6b: mov dword ptr [edx], 0xb41d18 */ W32((u32)(r_edx), 0xb41d18u);
    /* 0074bb71: mov eax, dword ptr [0x9f4068] */ r_eax = R32((u32)(0x9f4068u));
    /* 0074bb76: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bb78: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0074bb7b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74bb80u); f_0079317c();
    /* 0074bb80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074bb81: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074bb84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bb85: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x74bb8au); f_00737ae4();
    /* 0074bb8a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074bb8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074bb90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074bb97: mov esp, ebp */ r_esp = r_ebp;
    /* 0074bb99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074bb9a: ret 8 */ FN_RET(0x0074bb28); r_esp += 12; return;
}

void f_0074bba0(void) /* sub_74BBA0 */
{
    FN_ENTER(0x0074bba0);
    /* 0074bba0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074bba1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074bba2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0074bba4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074bba6: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x74bbabu); f_007108f4();
    /* 0074bbab: mov esi, eax */ r_esi = r_eax;
    /* 0074bbad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074bbae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074bbb0: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x74bbb5u); f_00710f80();
    /* 0074bbb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074bbb6: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 0074bbb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bbba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074bbbc: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x74bbc1u); f_0072a648();
    /* 0074bbc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074bbc2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074bbc4: call 0x73746c */ r_esp -= 4; W32(r_esp, 0x74bbc9u); f_0073746c();
    /* 0074bbc9: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0074bbcc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074bbce: je 0x74bbd6 */ if (fZ) goto L_0074bbd6;
L_0074bbd0:; BB(0x0074bbd0);
    /* 0074bbd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074bbd1: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74bbd6u); f_00761390();
L_0074bbd6:; BB(0x0074bbd6);
    /* 0074bbd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074bbd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074bbd8: ret  */ FN_RET(0x0074bba0); r_esp += 4; return;
}

void f_0074bbdc(void) /* sub_74BBDC */
{
    FN_ENTER(0x0074bbdc);
    /* 0074bbdc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074bbdd: mov esi, ecx */ r_esi = r_ecx;
    /* 0074bbdf: mov ecx, esi */ r_ecx = r_esi;
    /* 0074bbe1: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74bbe6u); f_00737d70();
    /* 0074bbe6: mov ecx, esi */ r_ecx = r_esi;
    /* 0074bbe8: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74bbedu); f_00737d1c();
    /* 0074bbed: mov ecx, esi */ r_ecx = r_esi;
    /* 0074bbef: call 0x74bc00 */ r_esp -= 4; W32(r_esp, 0x74bbf4u); f_0074bc00();
    /* 0074bbf4: mov ecx, esi */ r_ecx = r_esi;
    /* 0074bbf6: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x74bbfbu); f_00737da4();
    /* 0074bbfb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074bbfc: ret  */ FN_RET(0x0074bbdc); r_esp += 4; return;
}

void f_0074bc00(void) /* sub_74BC00 */
{
    FN_ENTER(0x0074bc00);
    /* 0074bc00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc04: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074bc07: mov esi, ecx */ r_esi = r_ecx;
    /* 0074bc09: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0074bc0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc0e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74bc13u); f_0068d5a8();
    /* 0074bc13: mov edi, eax */ r_edi = r_eax;
    /* 0074bc15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074bc18: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bc1a: je 0x74be34 */ if (fZ) goto L_0074be34;
L_0074bc20:; BB(0x0074bc20);
    /* 0074bc20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc21: mov ecx, esi */ r_ecx = r_esi;
    /* 0074bc23: call 0x74be3c */ r_esp -= 4; W32(r_esp, 0x74bc28u); f_0074be3c();
    /* 0074bc28: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc2a: mov ebp, eax */ r_ebp = r_eax;
    /* 0074bc2c: add edi, 0xdf8 */ {  u32 a = r_edi; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074bc32: mov ecx, edi */ r_ecx = r_edi;
    /* 0074bc34: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x74bc39u); f_0069792c();
    /* 0074bc39: movsx ebx, word ptr [esi + 0x86] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0074bc40: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0074bc43: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 0074bc46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bc48: je 0x74be10 */ if (fZ) goto L_0074be10;
L_0074bc4e:; BB(0x0074bc4e);
    /* 0074bc4e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074bc53: call 0x72bdd4 */ r_esp -= 4; W32(r_esp, 0x74bc58u); f_0072bdd4();
L_0074bc58:; BB(0x0074bc58);
    /* 0074bc58: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0074bc5e: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bc61: jne 0x74bc6f */ if (!fZ) goto L_0074bc6f;
L_0074bc63:; BB(0x0074bc63);
    /* 0074bc63: fld dword ptr [0x97398c] */ FPUSH(R_F32((u32)(0x97398cu)));
    /* 0074bc69: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 0074bc6c: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
L_0074bc6f:; BB(0x0074bc6f);
    /* 0074bc6f: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0074bc77: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc79: mov ecx, edi */ r_ecx = r_edi;
    /* 0074bc7b: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x74bc80u); f_0069792c();
    /* 0074bc80: mov ebx, eax */ r_ebx = r_eax;
    /* 0074bc82: movsx ebp, word ptr [esi + 0x86] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0074bc89: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0074bc8c: mov ebp, dword ptr [edx + ebp*4] */ r_ebp = R32((u32)(r_edx+r_ebp*4));
    /* 0074bc8f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bc91: je 0x74bdeb */ if (fZ) goto L_0074bdeb;
L_0074bc97:; BB(0x0074bc97);
    /* 0074bc97: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bc9a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074bc9c: call 0x72bdd4 */ r_esp -= 4; W32(r_esp, 0x74bca1u); f_0072bdd4();
L_0074bca1:; BB(0x0074bca1);
    /* 0074bca1: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0074bca9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bcab: je 0x74bd1d */ if (fZ) goto L_0074bd1d;
L_0074bcad:; BB(0x0074bcad);
    /* 0074bcad: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0074bcb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bcb2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074bcb4: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x74bcb9u); f_005c425c();
    /* 0074bcb9: movsx edx, byte ptr [esp + 0xd] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0xdu));
    /* 0074bcbe: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0074bcc0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074bcc2: jle 0x74bd1d */ if ((fZ||fS!=fO)) goto L_0074bd1d;
L_0074bcc4:; BB(0x0074bcc4);
    /* 0074bcc4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0074bcc8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0074bccb: lea ebx, [ebp + 9] */ r_ebx = (u32)(r_ebp+0x9u);
L_0074bcce:; BB(0x0074bcce);
    /* 0074bcce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bccf: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0074bcd3: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x74bcd8u); f_0069792c();
    /* 0074bcd8: movsx edi, word ptr [esi + 0x86] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0074bcdf: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0074bce2: mov edi, dword ptr [edx + edi*4] */ r_edi = R32((u32)(r_edx+r_edi*4));
    /* 0074bce5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bce7: je 0x74bd81 */ if (fZ) goto L_0074bd81;
L_0074bced:; BB(0x0074bced);
    /* 0074bced: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bcee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bcef: mov ecx, edi */ r_ecx = r_edi;
    /* 0074bcf1: call 0x72bdd4 */ r_esp -= 4; W32(r_esp, 0x74bcf6u); f_0072bdd4();
    /* 0074bcf6: fld dword ptr [0x97398c] */ FPUSH(R_F32((u32)(0x97398cu)));
    /* 0074bcfc: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
L_0074bcff:; BB(0x0074bcff);
    /* 0074bcff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0074bd01: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0074bd05: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0074bd08: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074bd0b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074bd0e: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0074bd16: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074bd18: jl 0x74bcce */ if ((fS!=fO)) goto L_0074bcce;
L_0074bd1a:; BB(0x0074bd1a);
    /* 0074bd1a: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0074bd1d:; BB(0x0074bd1d);
    /* 0074bd1d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bd1f: mov ecx, edi */ r_ecx = r_edi;
    /* 0074bd21: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x74bd26u); f_0069792c();
    /* 0074bd26: movsx ebx, word ptr [esi + 0x86] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0074bd2d: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0074bd30: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 0074bd33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bd35: je 0x74bdc6 */ if (fZ) goto L_0074bdc6;
L_0074bd3b:; BB(0x0074bd3b);
    /* 0074bd3b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bd3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bd3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074bd40: call 0x72bdd4 */ r_esp -= 4; W32(r_esp, 0x74bd45u); f_0072bdd4();
L_0074bd45:; BB(0x0074bd45);
    /* 0074bd45: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0074bd4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bd4f: mov ecx, edi */ r_ecx = r_edi;
    /* 0074bd51: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x74bd56u); f_0069792c();
    /* 0074bd56: movsx ebx, word ptr [esi + 0x86] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0074bd5d: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0074bd60: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 0074bd63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bd65: je 0x74bda4 */ if (fZ) goto L_0074bda4;
L_0074bd67:; BB(0x0074bd67);
    /* 0074bd67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bd69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bd6a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074bd6c: call 0x72bdd4 */ r_esp -= 4; W32(r_esp, 0x74bd71u); f_0072bdd4();
L_0074bd71:; BB(0x0074bd71);
    /* 0074bd71: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0074bd79: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074bd7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074bd7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074bd7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074bd7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074bd80: ret  */ FN_RET(0x0074bc00); r_esp += 4; return;
L_0074bd81:; BB(0x0074bd81);
    /* 0074bd81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bd82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bd84: mov ecx, edi */ r_ecx = r_edi;
    /* 0074bd86: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bd88: call 0x72c57c */ r_esp -= 4; W32(r_esp, 0x74bd8du); f_0072c57c();
    /* 0074bd8d: fld dword ptr [0x97398c] */ FPUSH(R_F32((u32)(0x97398cu)));
    /* 0074bd93: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0074bd96: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0074bd98: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 0074bd9f: jmp 0x74bcff */ goto L_0074bcff;
L_0074bda4:; BB(0x0074bda4);
    /* 0074bda4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bda6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bda8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074bdaa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bdac: call 0x72c57c */ r_esp -= 4; W32(r_esp, 0x74bdb1u); f_0072c57c();
    /* 0074bdb1: fld dword ptr [0x97398c] */ FPUSH(R_F32((u32)(0x97398cu)));
    /* 0074bdb7: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 0074bdba: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0074bdbd: mov dword ptr [ebx + 0x2c], 0xffaaaaaa */ W32((u32)(r_ebx+0x2cu), 0xffaaaaaau);
    /* 0074bdc4: jmp 0x74bd71 */ goto L_0074bd71;
L_0074bdc6:; BB(0x0074bdc6);
    /* 0074bdc6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bdc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bdca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074bdcc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0074bdce: call 0x72c57c */ r_esp -= 4; W32(r_esp, 0x74bdd3u); f_0072c57c();
    /* 0074bdd3: fld dword ptr [0x97398c] */ FPUSH(R_F32((u32)(0x97398cu)));
    /* 0074bdd9: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 0074bddc: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0074bddf: mov dword ptr [ebx + 0x2c], 0xffaaaaaa */ W32((u32)(r_ebx+0x2cu), 0xffaaaaaau);
    /* 0074bde6: jmp 0x74bd45 */ goto L_0074bd45;
L_0074bdeb:; BB(0x0074bdeb);
    /* 0074bdeb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bded: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bdef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074bdf1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0074bdf3: call 0x72c57c */ r_esp -= 4; W32(r_esp, 0x74bdf8u); f_0072c57c();
    /* 0074bdf8: fld dword ptr [0x97398c] */ FPUSH(R_F32((u32)(0x97398cu)));
    /* 0074bdfe: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 0074be01: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0074be04: mov dword ptr [ebp + 0x2c], 0xffaaaaaa */ W32((u32)(r_ebp+0x2cu), 0xffaaaaaau);
    /* 0074be0b: jmp 0x74bca1 */ goto L_0074bca1;
L_0074be10:; BB(0x0074be10);
    /* 0074be10: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074be12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074be14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074be16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074be17: call 0x72c57c */ r_esp -= 4; W32(r_esp, 0x74be1cu); f_0072c57c();
    /* 0074be1c: fld dword ptr [0x97398c] */ FPUSH(R_F32((u32)(0x97398cu)));
    /* 0074be22: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 0074be25: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0074be28: mov dword ptr [ebx + 0x2c], 0xffaaaaaa */ W32((u32)(r_ebx+0x2cu), 0xffaaaaaau);
    /* 0074be2f: jmp 0x74bc58 */ goto L_0074bc58;
L_0074be34:; BB(0x0074be34);
    /* 0074be34: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074be37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074be38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074be39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074be3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074be3b: ret  */ FN_RET(0x0074bc00); r_esp += 4; return;
}

void f_0074be3c(void) /* sub_74BE3C */
{
    FN_ENTER(0x0074be3c);
    /* 0074be3c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0074be40: mov eax, edx */ r_eax = r_edx;
    /* 0074be42: add eax, 0x930 */ {  u32 a = r_eax; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074be47: je 0x74be67 */ if (fZ) goto L_0074be67;
L_0074be49:; BB(0x0074be49);
    /* 0074be49: mov eax, dword ptr [edx + 0x964] */ r_eax = R32((u32)(r_edx+0x964u));
    /* 0074be4f: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074be51: jne 0x74be6f */ if (!fZ) goto L_0074be6f;
L_0074be53:; BB(0x0074be53);
    /* 0074be53: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074be55: je 0x74be5f */ if (fZ) goto L_0074be5f;
L_0074be57:; BB(0x0074be57);
    /* 0074be57: mov eax, 1 */ r_eax = 0x1u;
    /* 0074be5c: ret 4 */ FN_RET(0x0074be3c); r_esp += 8; return;
L_0074be5f:; BB(0x0074be5f);
    /* 0074be5f: mov eax, 2 */ r_eax = 0x2u;
    /* 0074be64: ret 4 */ FN_RET(0x0074be3c); r_esp += 8; return;
L_0074be67:; BB(0x0074be67);
    /* 0074be67: mov eax, 0x36 */ r_eax = 0x36u;
    /* 0074be6c: ret 4 */ FN_RET(0x0074be3c); r_esp += 8; return;
L_0074be6f:; BB(0x0074be6f);
    /* 0074be6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074be71: ret 4 */ FN_RET(0x0074be3c); r_esp += 8; return;
}

void f_0074be74(void) /* sub_74BE74 */
{
    FN_ENTER(0x0074be74);
    /* 0074be74: mov dword ptr [0xa9ab1c], 0x3f800000 */ W32((u32)(0xa9ab1cu), 0x3f800000u);
    /* 0074be7e: mov dword ptr [0xa9ab20], 0x41000000 */ W32((u32)(0xa9ab20u), 0x41000000u);
    /* 0074be88: mov dword ptr [0xa9ab24], 0x3fc00000 */ W32((u32)(0xa9ab24u), 0x3fc00000u);
    /* 0074be92: ret  */ FN_RET(0x0074be74); r_esp += 4; return;
}

void f_0074be94(void) /* sub_74BE94 */
{
    FN_ENTER(0x0074be94);
    /* 0074be94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074be95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074be97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074be99: call 0x74beb8 */ r_esp -= 4; W32(r_esp, 0x74be9eu); f_0074beb8();
    /* 0074be9e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074bea2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074bea4: jne 0x74beaa */ if (!fZ) goto L_0074beaa;
L_0074bea6:; BB(0x0074bea6);
    /* 0074bea6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074bea7: ret 4 */ FN_RET(0x0074be94); r_esp += 8; return;
L_0074beaa:; BB(0x0074beaa);
    /* 0074beaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074beab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74beb0u); f_005c2f74();
    /* 0074beb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074beb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074beb2: ret 4 */ FN_RET(0x0074be94); r_esp += 8; return;
}

void f_0074beb8(void) /* sub_74BEB8 */
{
    FN_ENTER(0x0074beb8);
    /* 0074beb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074beb9: mov ebp, esp */ r_ebp = r_esp;
    /* 0074bebb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074bebd: push 0x8f2844 */ { u32 v = 0x8f2844u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bec2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074bec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bec9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074bed0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074bed3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074bed6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074bed9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074bedc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074bedf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074bee2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074bee9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074beec: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0074beef: mov dword ptr [eax], 0xb41da8 */ W32((u32)(r_eax), 0xb41da8u);
    /* 0074bef5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bef7: je 0x74bf08 */ if (fZ) goto L_0074bf08;
L_0074bef9:; BB(0x0074bef9);
    /* 0074bef9: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74befeu); f_0073d160();
    /* 0074befe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074bf01: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0074bf08:; BB(0x0074bf08);
    /* 0074bf08: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074bf0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0074bf11: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x74bf16u); f_008171e8();
    /* 0074bf16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074bf19: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074bf20: mov esp, ebp */ r_esp = r_ebp;
    /* 0074bf22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074bf23: ret  */ FN_RET(0x0074beb8); r_esp += 4; return;
}

void f_0074bf24(void) /* sub_74BF24 */
{
    FN_ENTER(0x0074bf24);
    /* 0074bf24: mov dword ptr [0xa9ab38], 0 */ W32((u32)(0xa9ab38u), 0x0u);
    /* 0074bf2e: ret  */ FN_RET(0x0074bf24); r_esp += 4; return;
}

void f_0074bf30(void) /* sub_74BF30 */
{
    FN_ENTER(0x0074bf30);
    /* 0074bf30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074bf31: mov ebp, esp */ r_ebp = r_esp;
    /* 0074bf33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074bf35: push 0x8f2860 */ { u32 v = 0x8f2860u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bf3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074bf40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bf41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074bf48: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074bf4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074bf4e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0074bf51: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0074bf54: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0074bf57: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0074bf5a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0074bf5d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0074bf60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bf61: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0074bf64: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074bf67: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x74bf6cu); f_008193cc();
    /* 0074bf6c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074bf73: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074bf76: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074bf79: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074bf7c: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0074bf7f: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 0074bf82: mov dword ptr [ebx], 0xb41da8 */ W32((u32)(r_ebx), 0xb41da8u);
    /* 0074bf88: mov eax, dword ptr [0x9f406c] */ r_eax = R32((u32)(0x9f406cu));
    /* 0074bf8d: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0074bf90: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x74bf95u); f_007a61a4();
    /* 0074bf95: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074bf98: je 0x74c009 */ if (fZ) goto L_0074c009;
L_0074bf9a:; BB(0x0074bf9a);
    /* 0074bf9a: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0074bf9c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74bfa1u); f_0079317c();
    /* 0074bfa1: mov ebx, eax */ r_ebx = r_eax;
    /* 0074bfa3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0074bfa6:; BB(0x0074bfa6);
    /* 0074bfa6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074bfa9: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074bfac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bfad: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x74bfb2u); f_0073cd8c();
    /* 0074bfb2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074bfb5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bfb7: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0074bfba: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74bfbfu); f_0073ec50();
    /* 0074bfbf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074bfc2: push 0x43ea8000 */ { u32 v = 0x43ea8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bfc7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074bfca: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0074bfcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074bfce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074bfcf: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x74bfd4u); f_0073ce70();
    /* 0074bfd4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074bfd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074bfd9: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0074bfdc: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x74bfe1u); f_0073d148();
    /* 0074bfe1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074bfe4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0074bfe7: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x74bfecu); f_0073d170();
    /* 0074bfec: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074bfef: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074bff2: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 0074bff9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074bffc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074c003: mov esp, ebp */ r_esp = r_ebp;
    /* 0074c005: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074c006: ret 8 */ FN_RET(0x0074bf30); r_esp += 12; return;
L_0074c009:; BB(0x0074c009);
    /* 0074c009: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0074c00b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74c010u); f_0079317c();
    /* 0074c010: mov ebx, eax */ r_ebx = r_eax;
    /* 0074c012: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074c015: jmp 0x74bfa6 */ goto L_0074bfa6;
}

